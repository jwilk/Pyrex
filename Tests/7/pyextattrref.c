/* Generated by Pyrex 0.9.6.4 on Sat Mar 29 13:27:14 2008 */

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

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from pyextattrref */

struct __pyx_obj_12pyextattrref_Eggs {
  PyObject_HEAD
  PyObject *ham;
};

struct __pyx_obj_12pyextattrref_Spam {
  PyObject_HEAD
  struct __pyx_obj_12pyextattrref_Eggs *eggs;
};



static PyTypeObject *__pyx_ptype_12pyextattrref_Eggs = 0;
static PyTypeObject *__pyx_ptype_12pyextattrref_Spam = 0;
static void __pyx_f_12pyextattrref_tomato(struct __pyx_obj_12pyextattrref_Spam *); /*proto*/


/* Implementation of pyextattrref */

static void __pyx_f_12pyextattrref_tomato(struct __pyx_obj_12pyextattrref_Spam *__pyx_v_s) {
  PyObject *__pyx_v_food;
  Py_INCREF(__pyx_v_s);
  __pyx_v_food = Py_None; Py_INCREF(Py_None);
  Py_INCREF(__pyx_v_s->eggs->ham);
  Py_DECREF(__pyx_v_food);
  __pyx_v_food = __pyx_v_s->eggs->ham;

  Py_DECREF(__pyx_v_food);
  Py_DECREF(__pyx_v_s);
}

static PyObject *__pyx_tp_new_12pyextattrref_Eggs(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_12pyextattrref_Eggs *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_12pyextattrref_Eggs *)o);
  p->ham = Py_None; Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_12pyextattrref_Eggs(PyObject *o) {
  struct __pyx_obj_12pyextattrref_Eggs *p = (struct __pyx_obj_12pyextattrref_Eggs *)o;
  Py_XDECREF(p->ham);
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_12pyextattrref_Eggs(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_12pyextattrref_Eggs *p = (struct __pyx_obj_12pyextattrref_Eggs *)o;
  if (p->ham) {
    e = (*v)(p->ham, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_12pyextattrref_Eggs(PyObject *o) {
  struct __pyx_obj_12pyextattrref_Eggs *p = (struct __pyx_obj_12pyextattrref_Eggs *)o;
  Py_XDECREF(p->ham);
  p->ham = Py_None; Py_INCREF(Py_None);
  return 0;
}

static struct PyMethodDef __pyx_methods_12pyextattrref_Eggs[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Eggs = {
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

static PySequenceMethods __pyx_tp_as_sequence_Eggs = {
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

static PyMappingMethods __pyx_tp_as_mapping_Eggs = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Eggs = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_12pyextattrref_Eggs = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "pyextattrref.Eggs", /*tp_name*/
  sizeof(struct __pyx_obj_12pyextattrref_Eggs), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_12pyextattrref_Eggs, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Eggs, /*tp_as_number*/
  &__pyx_tp_as_sequence_Eggs, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Eggs, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Eggs, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_12pyextattrref_Eggs, /*tp_traverse*/
  __pyx_tp_clear_12pyextattrref_Eggs, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_12pyextattrref_Eggs, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_12pyextattrref_Eggs, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_12pyextattrref_Spam(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_12pyextattrref_Spam *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_12pyextattrref_Spam *)o);
  p->eggs = ((struct __pyx_obj_12pyextattrref_Eggs *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_12pyextattrref_Spam(PyObject *o) {
  struct __pyx_obj_12pyextattrref_Spam *p = (struct __pyx_obj_12pyextattrref_Spam *)o;
  Py_XDECREF(((PyObject *)p->eggs));
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_12pyextattrref_Spam(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_12pyextattrref_Spam *p = (struct __pyx_obj_12pyextattrref_Spam *)o;
  if (p->eggs) {
    e = (*v)(((PyObject*)p->eggs), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_12pyextattrref_Spam(PyObject *o) {
  struct __pyx_obj_12pyextattrref_Spam *p = (struct __pyx_obj_12pyextattrref_Spam *)o;
  Py_XDECREF(((PyObject *)p->eggs));
  p->eggs = ((struct __pyx_obj_12pyextattrref_Eggs *)Py_None); Py_INCREF(Py_None);
  return 0;
}

static struct PyMethodDef __pyx_methods_12pyextattrref_Spam[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Spam = {
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

static PySequenceMethods __pyx_tp_as_sequence_Spam = {
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

static PyMappingMethods __pyx_tp_as_mapping_Spam = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Spam = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_12pyextattrref_Spam = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "pyextattrref.Spam", /*tp_name*/
  sizeof(struct __pyx_obj_12pyextattrref_Spam), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_12pyextattrref_Spam, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Spam, /*tp_as_number*/
  &__pyx_tp_as_sequence_Spam, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Spam, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Spam, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_12pyextattrref_Spam, /*tp_traverse*/
  __pyx_tp_clear_12pyextattrref_Spam, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_12pyextattrref_Spam, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_12pyextattrref_Spam, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initpyextattrref(void); /*proto*/
PyMODINIT_FUNC initpyextattrref(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("pyextattrref", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_type_12pyextattrref_Eggs.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_12pyextattrref_Eggs) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Eggs", (PyObject *)&__pyx_type_12pyextattrref_Eggs) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_ptype_12pyextattrref_Eggs = &__pyx_type_12pyextattrref_Eggs;
  __pyx_type_12pyextattrref_Spam.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_12pyextattrref_Spam) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Spam", (PyObject *)&__pyx_type_12pyextattrref_Spam) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  __pyx_ptype_12pyextattrref_Spam = &__pyx_type_12pyextattrref_Spam;

  /* "/Local/Projects/D/Pyrex/Source/Tests/7/pyextattrref.pyx":7 */
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("pyextattrref");
}

static char *__pyx_filenames[] = {
  "pyextattrref.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
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
