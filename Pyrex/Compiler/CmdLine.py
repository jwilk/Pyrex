#
#   Pyrex - Command Line Parsing
#

import sys
from Filenames import pyx_suffixes
from Pyrex.Utils import has_suffix

usage = """\
Usage: pyrexc [options] sourcefile...
Options:
  -v, --version             Display version number of pyrex compiler
  -l, --create-listing      Write error messages to a listing file
  -I, --include-dir <dir>   Search for include files in named directory
  -+, --cplus               Use .cpp as extension of generated C files
  -o, --output-file <file>  Specify name of generated C file
  -r, --recursive           Recursively find and compile dependencies
  -t, --timestamps          Only compile newer source files (implied by -r)
  -f, --force               Compile all source files (overrides implied -t)
  -q, --quiet               Don't print module names in recursive mode
The following experimental options are supported only on MacOSX:
  -C, --compile    Compile generated .c file to .o file
  -X, --link       Link .o file to produce extension module (implies -C)
  -+, --cplus      Use C++ compiler for compiling and linking
  -N, --numpy      Include numpy header directory in search path
  Additional .o files to link may be supplied when using -X."""

def fail(mess):
	print >>sys.stderr, mess
	sys.exit(1)

def bad_usage():
	fail(usage)

def get_numpy_include_dir():
	try:
		import numpy
	except ImportError:
		fail("pyrexc: Unable to import numpy to find include directory")
	return numpy.get_include()

def parse_command_line(args):
	from Pyrex.Compiler.Main import \
		CompilationOptions, default_options

	def pop_arg():
		if args:
			return args.pop(0)
		else:
			bad_usage()
	
	def get_param(option):
		tail = option[2:]
		if tail:
			return tail
		else:
			return pop_arg()

	options = CompilationOptions(default_options)
	sources = []
	while args:
		if args[0].startswith("-"):
			option = pop_arg()
			if option in ("-v", "--version"):
				options.show_version = 1
			elif option in ("-l", "--create-listing"):
				options.use_listing_file = 1
			elif option in ("-C", "--compile"):
				options.c_only = 0
			elif option in ("-X", "--link"):
				options.c_only = 0
				options.obj_only = 0
			elif option in ("-+", "--cplus"):
				options.cplus = 1
			elif option.startswith("-I"):
				options.include_path.append(get_param(option))
			elif option == "--include-dir":
				options.include_path.append(pop_arg())
			elif option in ("-o", "--output-file"):
				options.output_file = pop_arg()
			elif option in ("-r", "--recursive"):
				options.recursive = 1
			elif option in ("-t", "--timestamps"):
				options.timestamps = 1
			elif option in ("-f", "--force"):
				options.timestamps = 0
			elif option in ("-N", "--numpy"):
				options.include_path.append(get_numpy_include_dir())
			else:
				bad_usage()
		else:
			arg = pop_arg()
			if has_suffix(arg, pyx_suffixes):
				sources.append(arg)
			elif arg.endswith(".o"):
				options.objects.append(arg)
			else:
				print >>sys.stderr, \
					"pyrexc: %s: Unknown filename suffix" % arg
	if options.objects and len(sources) > 1:
		print >>sys.stderr, \
			"pyrexc: Only one source file allowed together with .o files"
	if options.use_listing_file and len(sources) > 1:
		print >>sys.stderr, \
			"pyrexc: Only one source file allowed when using -o"
		sys.exit(1)
	return options, sources

