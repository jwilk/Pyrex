/* Generated by Pyrex 0.9.6 on Mon Oct  8 21:24:52 2007 */

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
  #define __stdcall
  #define __cdecl
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/

static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from new_style_exceptions */



/* Implementation of new_style_exceptions */


static PyObject *__pyx_n_sys;

static PyObject *__pyx_n_exc_info;

static PyObject *__pyx_k2p;
static PyObject *__pyx_k3p;

static char __pyx_k2[] = "Raising:";
static char __pyx_k3[] = "Caught: %r %r";

static PyObject *__pyx_f_20new_style_exceptions_test(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_20new_style_exceptions_test(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_obj = 0;
  PyObject *__pyx_v_info;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  PyObject *__pyx_6 = 0;
  static char *__pyx_argnames[] = {"obj",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_obj)) return 0;
  Py_INCREF(__pyx_v_obj);
  __pyx_v_info = Py_None; Py_INCREF(Py_None);

  /* "/Local/Projects/D/Pyrex/Source/Tests/(Manual)/new_style_exceptions.pyx":4 */
  if (__Pyx_PrintItem(__pyx_k2p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  __pyx_1 = PyObject_Repr(__pyx_v_obj); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  if (__Pyx_PrintItem(__pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (__Pyx_PrintNewline() < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}

  /* "/Local/Projects/D/Pyrex/Source/Tests/(Manual)/new_style_exceptions.pyx":5 */
  /*try:*/ {
    __Pyx_Raise(__pyx_v_obj, 0, 0);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L2;}
  }
  goto __pyx_L3;
  __pyx_L2:;
  Py_XDECREF(__pyx_1); __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/(Manual)/new_style_exceptions.pyx":7 */
  /*except:*/ {
    __Pyx_AddTraceback("new_style_exceptions.test");
    if (__Pyx_GetException(&__pyx_1, &__pyx_2, &__pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}

    /* "/Local/Projects/D/Pyrex/Source/Tests/(Manual)/new_style_exceptions.pyx":8 */
    __pyx_4 = __Pyx_GetName(__pyx_m, __pyx_n_sys); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    __pyx_5 = PyObject_GetAttr(__pyx_4, __pyx_n_exc_info); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    __pyx_4 = PyObject_CallObject(__pyx_5, 0); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    Py_DECREF(__pyx_v_info);
    __pyx_v_info = __pyx_4;
    __pyx_4 = 0;

    /* "/Local/Projects/D/Pyrex/Source/Tests/(Manual)/new_style_exceptions.pyx":9 */
    __pyx_5 = PyInt_FromLong(0); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
    __pyx_4 = PyObject_GetItem(__pyx_v_info, __pyx_5); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_5 = PyInt_FromLong(1); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
    __pyx_6 = PyObject_GetItem(__pyx_v_info, __pyx_5); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_5 = PyTuple_New(2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
    PyTuple_SET_ITEM(__pyx_5, 0, __pyx_4);
    PyTuple_SET_ITEM(__pyx_5, 1, __pyx_6);
    __pyx_4 = 0;
    __pyx_6 = 0;
    __pyx_4 = PyNumber_Remainder(__pyx_k3p, __pyx_5); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    if (__Pyx_PrintItem(__pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
    Py_DECREF(__pyx_4); __pyx_4 = 0;
    if (__Pyx_PrintNewline() < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
    Py_DECREF(__pyx_1);
    Py_DECREF(__pyx_2);
    Py_DECREF(__pyx_3);
    goto __pyx_L3;
  }
  __pyx_L3:;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  Py_XDECREF(__pyx_6);
  __Pyx_AddTraceback("new_style_exceptions.test");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_info);
  Py_DECREF(__pyx_v_obj);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_exc_info, "exc_info"},
  {&__pyx_n_sys, "sys"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k2p, __pyx_k2, sizeof(__pyx_k2)},
  {&__pyx_k3p, __pyx_k3, sizeof(__pyx_k3)},
  {0, 0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"test", (PyCFunction)__pyx_f_20new_style_exceptions_test, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initnew_style_exceptions(void); /*proto*/
PyMODINIT_FUNC initnew_style_exceptions(void) {
  PyObject *__pyx_1 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("new_style_exceptions", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};

  /* "/Local/Projects/D/Pyrex/Source/Tests/(Manual)/new_style_exceptions.pyx":1 */
  __pyx_1 = __Pyx_Import(__pyx_n_sys, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_sys, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/(Manual)/new_style_exceptions.pyx":3 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("new_style_exceptions");
}

static char *__pyx_filenames[] = {
  "new_style_exceptions.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list) {
	PyObject *__import__ = 0;
	PyObject *empty_list = 0;
	PyObject *module = 0;
	PyObject *global_dict = 0;
	PyObject *empty_dict = 0;
	PyObject *list;
	__import__ = PyObject_GetAttrString(__pyx_b, "__import__");
	if (!__import__)
		goto bad;
	if (from_list)
		list = from_list;
	else {
		empty_list = PyList_New(0);
		if (!empty_list)
			goto bad;
		list = empty_list;
	}
	global_dict = PyModule_GetDict(__pyx_m);
	if (!global_dict)
		goto bad;
	empty_dict = PyDict_New();
	if (!empty_dict)
		goto bad;
	module = PyObject_CallFunction(__import__, "OOOO",
		name, global_dict, empty_dict, list);
bad:
	Py_XDECREF(empty_list);
	Py_XDECREF(__import__);
	Py_XDECREF(empty_dict);
	return module;
}

static PyObject *__Pyx_GetStdout(void) {
	PyObject *f = PySys_GetObject("stdout");
	if (!f) {
		PyErr_SetString(PyExc_RuntimeError, "lost sys.stdout");
	}
	return f;
}

static int __Pyx_PrintItem(PyObject *v) {
	PyObject *f;
	
	if (!(f = __Pyx_GetStdout()))
		return -1;
	if (PyFile_SoftSpace(f, 1)) {
		if (PyFile_WriteString(" ", f) < 0)
			return -1;
	}
	if (PyFile_WriteObject(v, f, Py_PRINT_RAW) < 0)
		return -1;
	if (PyString_Check(v)) {
		char *s = PyString_AsString(v);
		Py_ssize_t len = PyString_Size(v);
		if (len > 0 &&
			isspace(Py_CHARMASK(s[len-1])) &&
			s[len-1] != ' ')
				PyFile_SoftSpace(f, 0);
	}
	return 0;
}

static int __Pyx_PrintNewline(void) {
	PyObject *f;
	
	if (!(f = __Pyx_GetStdout()))
		return -1;
	if (PyFile_WriteString("\n", f) < 0)
		return -1;
	PyFile_SoftSpace(f, 0);
	return 0;
}

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb) {
	Py_XINCREF(type);
	Py_XINCREF(value);
	Py_XINCREF(tb);
	/* First, check the traceback argument, replacing None with NULL. */
	if (tb == Py_None) {
		Py_DECREF(tb);
		tb = 0;
	}
	else if (tb != NULL && !PyTraceBack_Check(tb)) {
		PyErr_SetString(PyExc_TypeError,
			"raise: arg 3 must be a traceback or None");
		goto raise_error;
	}
	/* Next, replace a missing value with None */
	if (value == NULL) {
		value = Py_None;
		Py_INCREF(value);
	}
	#if PY_VERSION_HEX < 0x02050000
	if (!PyClass_Check(type))
	#else
	if (!PyType_Check(type))
	#endif
	{
		/* Raising an instance.  The value should be a dummy. */
		if (value != Py_None) {
			PyErr_SetString(PyExc_TypeError,
				"instance exception may not have a separate value");
			goto raise_error;
		}
		/* Normalize to raise <class>, <instance> */
		Py_DECREF(value);
		value = type;
		#if PY_VERSION_HEX < 0x02050000
			if (PyInstance_Check(type)) {
				type = (PyObject*) ((PyInstanceObject*)type)->in_class;
				Py_INCREF(type);
			}
			else {
				PyErr_SetString(PyExc_TypeError,
					"raise: exception must be an old-style class or instance");
				goto raise_error;
			}
		#else
			type = (PyObject*) type->ob_type;
			Py_INCREF(type);
			if (!PyType_IsSubtype(type, PyExc_BaseException)) {
/*		if (!PyType_IsSubtype((PyTypeObject *)type, PyExc_BaseException)) { */
				PyErr_SetString(PyExc_TypeError,
					"raise: exception class must be a subclass of BaseException");
				goto raise_error;
			}
		#endif
	}
	PyErr_Restore(type, value, tb);
	return;
raise_error:
	Py_XDECREF(value);
	Py_XDECREF(type);
	Py_XDECREF(tb);
	return;
}

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
	PyObject *result;
	result = PyObject_GetAttr(dict, name);
	if (!result)
		PyErr_SetObject(PyExc_NameError, name);
	return result;
}

static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb) {
	PyThreadState *tstate = PyThreadState_Get();
	PyErr_Fetch(type, value, tb);
	PyErr_NormalizeException(type, value, tb);
	if (PyErr_Occurred())
		goto bad;
	Py_INCREF(*type);
	Py_INCREF(*value);
	Py_INCREF(*tb);
	Py_XDECREF(tstate->exc_type);
	Py_XDECREF(tstate->exc_value);
	Py_XDECREF(tstate->exc_traceback);
	tstate->exc_type = *type;
	tstate->exc_value = *value;
	tstate->exc_traceback = *tb;
	return 0;
bad:
	Py_XDECREF(*type);
	Py_XDECREF(*value);
	Py_XDECREF(*tb);
	return -1;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
	while (t->p) {
		*t->p = PyString_InternFromString(t->s);
		if (!*t->p)
			return -1;
		++t;
	}
	return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
	while (t->p) {
		*t->p = PyString_FromStringAndSize(t->s, t->n - 1);
		if (!*t->p)
			return -1;
		++t;
	}
	return 0;
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
