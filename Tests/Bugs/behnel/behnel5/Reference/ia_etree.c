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

static int __Pyx_ExportFunction(char *n, void *f, char *s); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from tree */


/* Declarations from ia_etree */

struct LxmlDocument {
  PyObject_HEAD
  struct __pyx_t_4tree_xmlDoc *_c_doc;
  struct __pyx_obj_8ia_etree__BaseParser *_parser;
};

struct LxmlElement {
  PyObject_HEAD
  struct LxmlDocument *_doc;
  struct __pyx_t_4tree_xmlNode *_c_node;
};


__PYX_EXTERN_C DL_EXPORT(PyTypeObject) LxmlDocumentType;

__PYX_EXTERN_C DL_EXPORT(PyTypeObject) LxmlElementType;

static PyTypeObject *__pyx_ptype_8ia_etree__BaseParser = 0;
static PyTypeObject *__pyx_ptype_8ia_etree__Document = 0;
static PyTypeObject *__pyx_ptype_8ia_etree__Element = 0;
static PyObject *__pyx_f_8ia_etree_getAttributeValue(struct LxmlElement *,PyObject *,PyObject *); /*proto*/

/* Declarations from implementation of ia_etree */

struct __pyx_t_8ia_etree_Foo {
  int spam;
};

struct __pyx_obj_8ia_etree_Vorpal {
  PyObject_HEAD
};

struct __pyx_obj_8ia_etree__BaseParser {
  PyObject_HEAD
  struct __pyx_t_8ia_etree_Foo *foo;
  struct __pyx_obj_8ia_etree_Vorpal *bunny;
};


static PyTypeObject *__pyx_ptype_8ia_etree_Vorpal = 0;




static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {0, 0, 0, 0}
};



/* Implementation of ia_etree */

static PyObject *__pyx_f_8ia_etree_getAttributeValue(struct LxmlElement *__pyx_v_element,PyObject *__pyx_v_key,PyObject *__pyx_v_default) {
  PyObject *__pyx_r;
  Py_INCREF(__pyx_v_element);
  Py_INCREF(__pyx_v_key);
  Py_INCREF(__pyx_v_default);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  Py_DECREF(__pyx_v_element);
  Py_DECREF(__pyx_v_key);
  Py_DECREF(__pyx_v_default);
  return __pyx_r;
}

static PyObject *__pyx_tp_new_8ia_etree__BaseParser(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct __pyx_obj_8ia_etree__BaseParser *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct __pyx_obj_8ia_etree__BaseParser *)o);
  p->bunny = ((struct __pyx_obj_8ia_etree_Vorpal *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_8ia_etree__BaseParser(PyObject *o) {
  struct __pyx_obj_8ia_etree__BaseParser *p = (struct __pyx_obj_8ia_etree__BaseParser *)o;
  Py_XDECREF(((PyObject *)p->bunny));
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_8ia_etree__BaseParser(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_8ia_etree__BaseParser *p = (struct __pyx_obj_8ia_etree__BaseParser *)o;
  if (p->bunny) {
    e = (*v)(((PyObject*)p->bunny), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_8ia_etree__BaseParser(PyObject *o) {
  struct __pyx_obj_8ia_etree__BaseParser *p = (struct __pyx_obj_8ia_etree__BaseParser *)o;
  PyObject *t;
  t = ((PyObject *)p->bunny); 
  p->bunny = ((struct __pyx_obj_8ia_etree_Vorpal *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_8ia_etree__BaseParser[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number__BaseParser = {
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

static PySequenceMethods __pyx_tp_as_sequence__BaseParser = {
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

static PyMappingMethods __pyx_tp_as_mapping__BaseParser = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer__BaseParser = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_8ia_etree__BaseParser = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "ia_etree._BaseParser", /*tp_name*/
  sizeof(struct __pyx_obj_8ia_etree__BaseParser), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_8ia_etree__BaseParser, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number__BaseParser, /*tp_as_number*/
  &__pyx_tp_as_sequence__BaseParser, /*tp_as_sequence*/
  &__pyx_tp_as_mapping__BaseParser, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer__BaseParser, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_8ia_etree__BaseParser, /*tp_traverse*/
  __pyx_tp_clear_8ia_etree__BaseParser, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_8ia_etree__BaseParser, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_8ia_etree__BaseParser, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_8ia_etree__Document(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct LxmlDocument *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct LxmlDocument *)o);
  p->_parser = ((struct __pyx_obj_8ia_etree__BaseParser *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_8ia_etree__Document(PyObject *o) {
  struct LxmlDocument *p = (struct LxmlDocument *)o;
  Py_XDECREF(((PyObject *)p->_parser));
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_8ia_etree__Document(PyObject *o, visitproc v, void *a) {
  int e;
  struct LxmlDocument *p = (struct LxmlDocument *)o;
  if (p->_parser) {
    e = (*v)(((PyObject*)p->_parser), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_8ia_etree__Document(PyObject *o) {
  struct LxmlDocument *p = (struct LxmlDocument *)o;
  PyObject *t;
  t = ((PyObject *)p->_parser); 
  p->_parser = ((struct __pyx_obj_8ia_etree__BaseParser *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_8ia_etree__Document[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number__Document = {
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

static PySequenceMethods __pyx_tp_as_sequence__Document = {
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

static PyMappingMethods __pyx_tp_as_mapping__Document = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer__Document = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

DL_EXPORT(PyTypeObject) LxmlDocumentType = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "ia_etree._Document", /*tp_name*/
  sizeof(struct LxmlDocument), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_8ia_etree__Document, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number__Document, /*tp_as_number*/
  &__pyx_tp_as_sequence__Document, /*tp_as_sequence*/
  &__pyx_tp_as_mapping__Document, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer__Document, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_8ia_etree__Document, /*tp_traverse*/
  __pyx_tp_clear_8ia_etree__Document, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_8ia_etree__Document, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_8ia_etree__Document, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_8ia_etree__Element(PyTypeObject *t, PyObject *a, PyObject *k) {
  struct LxmlElement *p;
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  p = ((struct LxmlElement *)o);
  p->_doc = ((struct LxmlDocument *)Py_None); Py_INCREF(Py_None);
  return o;
}

static void __pyx_tp_dealloc_8ia_etree__Element(PyObject *o) {
  struct LxmlElement *p = (struct LxmlElement *)o;
  Py_XDECREF(((PyObject *)p->_doc));
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_8ia_etree__Element(PyObject *o, visitproc v, void *a) {
  int e;
  struct LxmlElement *p = (struct LxmlElement *)o;
  if (p->_doc) {
    e = (*v)(((PyObject*)p->_doc), a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_8ia_etree__Element(PyObject *o) {
  struct LxmlElement *p = (struct LxmlElement *)o;
  PyObject *t;
  t = ((PyObject *)p->_doc); 
  p->_doc = ((struct LxmlDocument *)Py_None); Py_INCREF(Py_None);
  Py_XDECREF(t);
  return 0;
}

static struct PyMethodDef __pyx_methods_8ia_etree__Element[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number__Element = {
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

static PySequenceMethods __pyx_tp_as_sequence__Element = {
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

static PyMappingMethods __pyx_tp_as_mapping__Element = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer__Element = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

DL_EXPORT(PyTypeObject) LxmlElementType = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "ia_etree._Element", /*tp_name*/
  sizeof(struct LxmlElement), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_8ia_etree__Element, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number__Element, /*tp_as_number*/
  &__pyx_tp_as_sequence__Element, /*tp_as_sequence*/
  &__pyx_tp_as_mapping__Element, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer__Element, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_8ia_etree__Element, /*tp_traverse*/
  __pyx_tp_clear_8ia_etree__Element, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_8ia_etree__Element, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_8ia_etree__Element, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static PyObject *__pyx_tp_new_8ia_etree_Vorpal(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  return o;
}

static void __pyx_tp_dealloc_8ia_etree_Vorpal(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static struct PyMethodDef __pyx_methods_8ia_etree_Vorpal[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_Vorpal = {
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

static PySequenceMethods __pyx_tp_as_sequence_Vorpal = {
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

static PyMappingMethods __pyx_tp_as_mapping_Vorpal = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_Vorpal = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_8ia_etree_Vorpal = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "ia_etree.Vorpal", /*tp_name*/
  sizeof(struct __pyx_obj_8ia_etree_Vorpal), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_8ia_etree_Vorpal, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_Vorpal, /*tp_as_number*/
  &__pyx_tp_as_sequence_Vorpal, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_Vorpal, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_Vorpal, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_8ia_etree_Vorpal, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_8ia_etree_Vorpal, /*tp_new*/
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

PyMODINIT_FUNC initia_etree(void); /*proto*/
PyMODINIT_FUNC initia_etree(void) {
  PyObject *__pyx_1 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("ia_etree", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_ExportFunction("getAttributeValue", (void*)__pyx_f_8ia_etree_getAttributeValue, "PyObject *(struct LxmlElement *,PyObject *,PyObject *)") < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  __pyx_type_8ia_etree__BaseParser.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&__pyx_type_8ia_etree__BaseParser) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 13; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "_BaseParser", (PyObject *)&__pyx_type_8ia_etree__BaseParser) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 13; goto __pyx_L1;}
  __pyx_ptype_8ia_etree__BaseParser = &__pyx_type_8ia_etree__BaseParser;
  LxmlDocumentType.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&LxmlDocumentType) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "_Document", (PyObject *)&LxmlDocumentType) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  __pyx_ptype_8ia_etree__Document = &LxmlDocumentType;
  LxmlElementType.tp_free = _PyObject_GC_Del;
  if (PyType_Ready(&LxmlElementType) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "_Element", (PyObject *)&LxmlElementType) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  __pyx_ptype_8ia_etree__Element = &LxmlElementType;
  if (PyType_Ready(&__pyx_type_8ia_etree_Vorpal) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 10; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "Vorpal", (PyObject *)&__pyx_type_8ia_etree_Vorpal) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 10; goto __pyx_L1;}
  __pyx_ptype_8ia_etree_Vorpal = &__pyx_type_8ia_etree_Vorpal;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/behnel/behnel5/ia_etree.pyx":17 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("ia_etree");
}

static char *__pyx_filenames[] = {
  "ia_etree.pyx",
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

static int __Pyx_ExportFunction(char *n, void *f, char *s) {
	PyObject *d = 0;
	PyObject *p = 0;
	d = PyObject_GetAttrString(__pyx_m, "__pyx_capi__");
	if (!d) {
		PyErr_Clear();
		d = PyDict_New();
		if (!d)
			goto bad;
		Py_INCREF(d);
		if (PyModule_AddObject(__pyx_m, "__pyx_capi__", d) < 0)
			goto bad;
	}
	p = PyCObject_FromVoidPtrAndDesc(f, s, 0);
	if (!p)
		goto bad;
	if (PyDict_SetItemString(d, n, p) < 0)
		goto bad;
	Py_DECREF(d);
	return 0;
bad:
	Py_XDECREF(p);
	Py_XDECREF(d);
	return -1;
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
