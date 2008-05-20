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


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/


struct __pyx_obj_9extcoerce_Grail {
  PyObject_HEAD
};

struct __pyx_obj_9extcoerce_Swallow {
  PyObject_HEAD
};



static PyTypeObject *__pyx_ptype_9extcoerce_Grail = 0;
static PyTypeObject *__pyx_ptype_9extcoerce_Swallow = 0;


/* Implementation of extcoerce */

static PyObject *__pyx_f_9extcoerce_5Grail___add__(PyObject *__pyx_arg_x, PyObject *__pyx_arg_y); /*proto*/
static PyObject *__pyx_f_9extcoerce_5Grail___add__(PyObject *__pyx_arg_x, PyObject *__pyx_arg_y) {
  int __pyx_v_x;
  float __pyx_v_y;
  PyObject *__pyx_r;
  __pyx_v_x = PyInt_AsLong(__pyx_arg_x); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  __pyx_v_y = PyFloat_AsDouble(__pyx_arg_y); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("extcoerce.Grail.__add__");
  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

static PyObject *__pyx_f_9extcoerce_5Grail___getslice__(PyObject *__pyx_v_self, Py_ssize_t __pyx_arg_i, Py_ssize_t __pyx_arg_j); /*proto*/
static PyObject *__pyx_f_9extcoerce_5Grail___getslice__(PyObject *__pyx_v_self, Py_ssize_t __pyx_arg_i, Py_ssize_t __pyx_arg_j) {
  PyObject *__pyx_v_i = 0;
  PyObject *__pyx_v_j = 0;
  PyObject *__pyx_r;
  Py_INCREF(__pyx_v_self);
  __pyx_v_i = PyInt_FromSsize_t(__pyx_arg_i); if (!__pyx_v_i) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  __pyx_v_j = PyInt_FromSsize_t(__pyx_arg_j); if (!__pyx_v_j) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("extcoerce.Grail.__getslice__");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_i);
  Py_DECREF(__pyx_v_j);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static int __pyx_f_9extcoerce_5Grail___setslice__(PyObject *__pyx_v_self, Py_ssize_t __pyx_v_i, Py_ssize_t __pyx_arg_j, PyObject *__pyx_v_x); /*proto*/
static int __pyx_f_9extcoerce_5Grail___setslice__(PyObject *__pyx_v_self, Py_ssize_t __pyx_v_i, Py_ssize_t __pyx_arg_j, PyObject *__pyx_v_x) {
  float __pyx_v_j;
  int __pyx_r;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_x);
  __pyx_v_j = __pyx_arg_j;

  __pyx_r = 0;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_x);
  return __pyx_r;
}

static PyObject *__pyx_f_9extcoerce_f(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_9extcoerce_f(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  struct __pyx_obj_9extcoerce_Grail *__pyx_v_g = 0;
  int __pyx_v_i;
  struct __pyx_obj_9extcoerce_Swallow *__pyx_v_s;
  PyObject *__pyx_v_x;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  static char *__pyx_argnames[] = {"g",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_g)) return 0;
  Py_INCREF(__pyx_v_g);
  __pyx_v_s = ((struct __pyx_obj_9extcoerce_Swallow *)Py_None); Py_INCREF(Py_None);
  __pyx_v_x = Py_None; Py_INCREF(Py_None);
  if (!__Pyx_ArgTypeTest(((PyObject *)__pyx_v_g), __pyx_ptype_9extcoerce_Grail, 1, "g")) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 15; goto __pyx_L1;}

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/extcoerce.pyx":18 */
  if (!__Pyx_TypeTest(__pyx_v_x, __pyx_ptype_9extcoerce_Grail)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 18; goto __pyx_L1;}
  Py_INCREF(__pyx_v_x);
  Py_DECREF(((PyObject *)__pyx_v_g));
  __pyx_v_g = ((struct __pyx_obj_9extcoerce_Grail *)__pyx_v_x);

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/extcoerce.pyx":19 */
  Py_INCREF(((PyObject *)__pyx_v_g));
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = ((PyObject *)__pyx_v_g);

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/extcoerce.pyx":20 */
  __pyx_1 = PyInt_FromLong(__pyx_v_i); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 20; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_9extcoerce_Grail)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 20; goto __pyx_L1;}
  Py_DECREF(((PyObject *)__pyx_v_g));
  __pyx_v_g = ((struct __pyx_obj_9extcoerce_Grail *)__pyx_1);
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/extcoerce.pyx":21 */
  __pyx_2 = PyInt_AsLong(((PyObject *)__pyx_v_g)); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 21; goto __pyx_L1;}
  __pyx_v_i = __pyx_2;

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/extcoerce.pyx":22 */
  if (!__Pyx_TypeTest(((PyObject *)__pyx_v_s), __pyx_ptype_9extcoerce_Grail)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}
  Py_INCREF(((PyObject *)__pyx_v_s));
  Py_DECREF(((PyObject *)__pyx_v_g));
  __pyx_v_g = ((struct __pyx_obj_9extcoerce_Grail *)__pyx_v_s);

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/extcoerce.pyx":23 */
  if (!__Pyx_TypeTest(((PyObject *)__pyx_v_g), __pyx_ptype_9extcoerce_Swallow)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 23; goto __pyx_L1;}
  Py_INCREF(((PyObject *)__pyx_v_g));
  Py_DECREF(((PyObject *)__pyx_v_s));
  __pyx_v_s = ((struct __pyx_obj_9extcoerce_Swallow *)__pyx_v_g);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("extcoerce.f");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_s);
  Py_DECREF(__pyx_v_x);
  Py_DECREF(__pyx_v_g);
  return __pyx_r;
}

static PyObject *__pyx_tp_new_9extcoerce_Grail(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  return o;
}

static void __pyx_tp_dealloc_9extcoerce_Grail(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static int __pyx_sq_ass_slice_9extcoerce_Grail(PyObject *o, Py_ssize_t i, Py_ssize_t j, PyObject *v) {
  if (v) {
    return __pyx_f_9extcoerce_5Grail___setslice__(o, i, j, v);
  }
  else {
    PyErr_Format(PyExc_NotImplementedError,
      "2-element slice deletion not supported by %s", o->ob_type->tp_name);
    return -1;
  }
}

static struct PyMethodDef __pyx_methods_9extcoerce_Grail[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Grail = {
  __pyx_f_9extcoerce_5Grail___add__, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_Grail = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  __pyx_f_9extcoerce_5Grail___getslice__, /*sq_slice*/
  0, /*sq_ass_item*/
  __pyx_sq_ass_slice_9extcoerce_Grail, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Grail = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Grail = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_9extcoerce_Grail = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "extcoerce.Grail", /*tp_name*/
  sizeof(struct __pyx_obj_9extcoerce_Grail), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_9extcoerce_Grail, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Grail, /*tp_as_number*/
  &__pyx_tp_as_sequence_Grail, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Grail, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Grail, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_9extcoerce_Grail, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_9extcoerce_Grail, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_9extcoerce_Swallow(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  return o;
}

static void __pyx_tp_dealloc_9extcoerce_Swallow(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static struct PyMethodDef __pyx_methods_9extcoerce_Swallow[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Swallow = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_Swallow = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_Swallow = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Swallow = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_9extcoerce_Swallow = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "extcoerce.Swallow", /*tp_name*/
  sizeof(struct __pyx_obj_9extcoerce_Swallow), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_9extcoerce_Swallow, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Swallow, /*tp_as_number*/
  &__pyx_tp_as_sequence_Swallow, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Swallow, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Swallow, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_9extcoerce_Swallow, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_9extcoerce_Swallow, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {"f", (PyCFunction)__pyx_f_9extcoerce_f, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initextcoerce(void); /*proto*/
PyMODINIT_FUNC initextcoerce(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("extcoerce", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyType_Ready(&__pyx_type_9extcoerce_Grail) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Grail", (PyObject *)&__pyx_type_9extcoerce_Grail) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_ptype_9extcoerce_Grail = &__pyx_type_9extcoerce_Grail;
  if (PyType_Ready(&__pyx_type_9extcoerce_Swallow) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Swallow", (PyObject *)&__pyx_type_9extcoerce_Swallow) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  __pyx_ptype_9extcoerce_Swallow = &__pyx_type_9extcoerce_Swallow;

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/extcoerce.pyx":15 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("extcoerce");
}

static char *__pyx_filenames[] = {
  "extcoerce.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name) {
	if (!type) {
		PyErr_Format(PyExc_SystemError, "Missing type object");
		return 0;
	}
	if ((none_allowed && obj == Py_None) || PyObject_TypeCheck(obj, type))
		return 1;
	PyErr_Format(PyExc_TypeError,
		"Argument '%s' has incorrect type (expected %s, got %s)",
		name, type->tp_name, obj->ob_type->tp_name);
	return 0;
}

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type) {
	if (!type) {
		PyErr_Format(PyExc_SystemError, "Missing type object");
		return 0;
	}
	if (obj == Py_None || PyObject_TypeCheck(obj, type))
		return 1;
	PyErr_Format(PyExc_TypeError, "Cannot convert %s to %s",
		obj->ob_type->tp_name, type->tp_name);
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

/* Declarations from extcoerce */

/* Declarations from implementation of extcoerce */
