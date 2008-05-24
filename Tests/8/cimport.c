/* Generated by Pyrex */

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#if PY_VERSION_HEX < 0x02050000
  typedef int Py_ssize_t;
  #define PY_SSIZE_T_MAX INT_MAX
  #define PY_SSIZE_T_MIN INT_MIN
  #define PyInt_FromSsize_t(z) PyInt_FromLong(z)
  #define PyInt_AsSsize_t(o)	PyInt_AsLong(o)
#endif
#ifndef WIN32
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>


typedef struct {PyObject **p; int i; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/

static PyObject *__Pyx_ImportModule(char *name); /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from spam */

struct __pyx_t_4spam_Spam {
  int i;
  char *s;
};

__PYX_EXTERN_C float tons;
__PYX_EXTERN_C DL_EXPORT(void) (*eat)(struct __pyx_t_4spam_Spam); /*proto*/

/* Declarations from pkg.eggs */

struct __pyx_obj_3pkg_4eggs_Eggs {
  PyObject_HEAD
};


static PyTypeObject *__pyx_ptype_3pkg_4eggs_Eggs = 0;

/* Declarations from pkg */


/* Declarations from cimport */


/* Declarations from implementation of cimport */

static struct __pyx_t_4spam_Spam __pyx_v_7cimport_yummy;
static struct __pyx_obj_3pkg_4eggs_Eggs *__pyx_v_7cimport_fried;

static char __pyx_k1[] = "pkg";
static char __pyx_k2[] = "eggs";
static char __pyx_k3[] = "ova";

static PyObject *__pyx_n_eggs;
static PyObject *__pyx_n_ova;
static PyObject *__pyx_n_pkg;


static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_n_eggs, 1, __pyx_k2, sizeof(__pyx_k2)},
  {&__pyx_n_ova, 1, __pyx_k3, sizeof(__pyx_k3)},
  {&__pyx_n_pkg, 1, __pyx_k1, sizeof(__pyx_k1)},
  {0, 0, 0, 0}
};



/* Implementation of cimport */

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initcimport(void); /*proto*/
PyMODINIT_FUNC initcimport(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("cimport", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_v_7cimport_fried = ((struct __pyx_obj_3pkg_4eggs_Eggs *)Py_None); Py_INCREF(Py_None);
  __pyx_ptype_3pkg_4eggs_Eggs = __Pyx_ImportType("pkg.eggs", "Eggs", sizeof(struct __pyx_obj_3pkg_4eggs_Eggs)); if (!__pyx_ptype_3pkg_4eggs_Eggs) {__pyx_filename = __pyx_f[1]; __pyx_lineno = 1; goto __pyx_L1;}

  /* "/Local/Projects/D/Pyrex/Source/Tests/8/cimport.pyx":7 */
  eat(__pyx_v_7cimport_yummy);

  /* "/Local/Projects/D/Pyrex/Source/Tests/8/cimport.pyx":8 */
  tons = 3.14;

  /* "/Local/Projects/D/Pyrex/Source/Tests/8/cimport.pyx":9 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_pkg); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_1, __pyx_n_eggs); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (PyObject_SetAttr(__pyx_m, __pyx_n_ova, __pyx_2) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/8/cimport.pyx":10 */
  __pyx_1 = PyObject_CallObject(((PyObject *)__pyx_ptype_3pkg_4eggs_Eggs), 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 10; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_7cimport_fried));
  __pyx_v_7cimport_fried = ((struct __pyx_obj_3pkg_4eggs_Eggs *)__pyx_1);
  __pyx_1 = 0;
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("cimport");
}

static char *__pyx_filenames[] = {
  "cimport.pyx",
  "pkg.eggs.pxd",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
	while (t->p) {
		*t->p = PyString_FromStringAndSize(t->s, t->n - 1);
		if (!*t->p)
			return -1;
		if (t->i)
			PyString_InternInPlace(t->p);
		++t;
	}
	return 0;
}

#ifndef __PYX_HAVE_RT_ImportType
#define __PYX_HAVE_RT_ImportType
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, 
	long size) 
{
	PyObject *py_module = 0;
	PyObject *result = 0;
	
	py_module = __Pyx_ImportModule(module_name);
	if (!py_module)
		goto bad;
	result = PyObject_GetAttrString(py_module, class_name);
	if (!result)
		goto bad;
	if (!PyType_Check(result)) {
		PyErr_Format(PyExc_TypeError, 
			"%s.%s is not a type object",
			module_name, class_name);
		goto bad;
	}
	if (((PyTypeObject *)result)->tp_basicsize != size) {
		PyErr_Format(PyExc_ValueError, 
			"%s.%s does not appear to be the correct type object",
			module_name, class_name);
		goto bad;
	}
	return (PyTypeObject *)result;
bad:
	Py_XDECREF(result);
	return 0;
}
#endif

#ifndef __PYX_HAVE_RT_ImportModule
#define __PYX_HAVE_RT_ImportModule
static PyObject *__Pyx_ImportModule(char *name) {
	PyObject *py_name = 0;
	
	py_name = PyString_FromString(name);
	if (!py_name)
		goto bad;
	return PyImport_Import(py_name);
bad:
	Py_XDECREF(py_name);
	return 0;
}
#endif

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
	PyObject *result;
	result = PyObject_GetAttr(dict, name);
	if (!result)
		PyErr_SetObject(PyExc_NameError, name);
	return result;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
	PyObject *py_srcfile = 0;
	PyObject *py_funcname = 0;
	PyObject *py_globals = 0;
	PyObject *empty_tuple = 0;
	PyObject *empty_string = 0;
	PyCodeObject *py_code = 0;
	PyFrameObject *py_frame = 0;
	
	py_srcfile = PyString_FromString(__pyx_filename);
	if (!py_srcfile) goto bad;
	py_funcname = PyString_FromString(funcname);
	if (!py_funcname) goto bad;
	py_globals = PyModule_GetDict(__pyx_m);
	if (!py_globals) goto bad;
	empty_tuple = PyTuple_New(0);
	if (!empty_tuple) goto bad;
	empty_string = PyString_FromString("");
	if (!empty_string) goto bad;
	py_code = PyCode_New(
		0,            /*int argcount,*/
		0,            /*int nlocals,*/
		0,            /*int stacksize,*/
		0,            /*int flags,*/
		empty_string, /*PyObject *code,*/
		empty_tuple,  /*PyObject *consts,*/
		empty_tuple,  /*PyObject *names,*/
		empty_tuple,  /*PyObject *varnames,*/
		empty_tuple,  /*PyObject *freevars,*/
		empty_tuple,  /*PyObject *cellvars,*/
		py_srcfile,   /*PyObject *filename,*/
		py_funcname,  /*PyObject *name,*/
		__pyx_lineno,   /*int firstlineno,*/
		empty_string  /*PyObject *lnotab*/
	);
	if (!py_code) goto bad;
	py_frame = PyFrame_New(
		PyThreadState_Get(), /*PyThreadState *tstate,*/
		py_code,             /*PyCodeObject *code,*/
		py_globals,          /*PyObject *globals,*/
		0                    /*PyObject *locals*/
	);
	if (!py_frame) goto bad;
	py_frame->f_lineno = __pyx_lineno;
	PyTraceBack_Here(py_frame);
bad:
	Py_XDECREF(py_srcfile);
	Py_XDECREF(py_funcname);
	Py_XDECREF(empty_tuple);
	Py_XDECREF(empty_string);
	Py_XDECREF(py_code);
	Py_XDECREF(py_frame);
}
