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
#if !defined(WIN32) && !defined(MS_WINDOWS)
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

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from tuple */


/* Declarations from implementation of tuple */





static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {0, 0, 0, 0}
};



/* Implementation of tuple */

static PyObject *__pyx_f_5tuple_f(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_5tuple_f(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_obj1 = 0;
  PyObject *__pyx_v_obj2 = 0;
  PyObject *__pyx_v_obj3 = 0;
  PyObject *__pyx_v_obj4 = 0;
  PyObject *__pyx_v_obj5 = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  static char *__pyx_argnames[] = {"obj1","obj2","obj3","obj4","obj5",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOOOO", __pyx_argnames, &__pyx_v_obj1, &__pyx_v_obj2, &__pyx_v_obj3, &__pyx_v_obj4, &__pyx_v_obj5)) return 0;
  Py_INCREF(__pyx_v_obj1);
  Py_INCREF(__pyx_v_obj2);
  Py_INCREF(__pyx_v_obj3);
  Py_INCREF(__pyx_v_obj4);
  Py_INCREF(__pyx_v_obj5);

  /* "/Local/Projects/D/Pyrex/Source/Tests/2/tuple.pyx":2 */
  __pyx_1 = PyTuple_New(0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;}
  Py_DECREF(__pyx_v_obj1);
  __pyx_v_obj1 = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/2/tuple.pyx":3 */
  __pyx_1 = PyTuple_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_INCREF(__pyx_v_obj2);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_obj2);
  Py_DECREF(__pyx_v_obj1);
  __pyx_v_obj1 = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/2/tuple.pyx":4 */
  __pyx_1 = PyTuple_New(2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  Py_INCREF(__pyx_v_obj2);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_obj2);
  Py_INCREF(__pyx_v_obj3);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_obj3);
  Py_DECREF(__pyx_v_obj1);
  __pyx_v_obj1 = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/2/tuple.pyx":5 */
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  Py_INCREF(__pyx_v_obj2);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_obj2);
  Py_INCREF(__pyx_v_obj3);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_obj3);
  Py_INCREF(__pyx_v_obj4);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_obj4);
  Py_DECREF(__pyx_v_obj1);
  __pyx_v_obj1 = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/2/tuple.pyx":6 */
  __pyx_1 = PyTuple_New(3); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  Py_INCREF(__pyx_v_obj2);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_obj2);
  Py_INCREF(__pyx_v_obj3);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_obj3);
  Py_INCREF(__pyx_v_obj4);
  PyTuple_SET_ITEM(__pyx_1, 2, __pyx_v_obj4);
  Py_DECREF(__pyx_v_obj1);
  __pyx_v_obj1 = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/2/tuple.pyx":7 */
  __pyx_1 = PyInt_FromLong(17); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  __pyx_2 = PyInt_FromLong(42); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  __pyx_3 = PyInt_FromLong(88); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  __pyx_4 = PyTuple_New(3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_1);
  PyTuple_SET_ITEM(__pyx_4, 1, __pyx_2);
  PyTuple_SET_ITEM(__pyx_4, 2, __pyx_3);
  __pyx_1 = 0;
  __pyx_2 = 0;
  __pyx_3 = 0;
  Py_DECREF(__pyx_v_obj1);
  __pyx_v_obj1 = __pyx_4;
  __pyx_4 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("tuple.f");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_obj1);
  Py_DECREF(__pyx_v_obj2);
  Py_DECREF(__pyx_v_obj3);
  Py_DECREF(__pyx_v_obj4);
  Py_DECREF(__pyx_v_obj5);
  return __pyx_r;
}

static struct PyMethodDef __pyx_methods[] = {
  {"f", (PyCFunction)__pyx_f_5tuple_f, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC inittuple(void); /*proto*/
PyMODINIT_FUNC inittuple(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("tuple", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("tuple");
}

static char *__pyx_filenames[] = {
  "tuple.pyx",
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
