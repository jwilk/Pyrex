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

static PyObject *__Pyx_ImportModule(char *name); /*proto*/

static int __Pyx_ImportFunction(PyObject *module, char *funcname, void **f, char *sig); /*proto*/

static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/

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

static PyTypeObject *__pyx_ptype_8ia_etree__Document = 0;
static PyTypeObject *__pyx_ptype_8ia_etree__Element = 0;
static PyObject *(*__pyx_f_8ia_etree_getAttributeValue)(struct LxmlElement *,PyObject *,PyObject *); /*proto*/

/* Declarations from use_etree */


/* Declarations from implementation of use_etree */


static char __pyx_k1[] = "doc";
static char __pyx_k2[] = "elem";
static char __pyx_k3[] = "zax";
static char __pyx_k4[] = "ftang";

static PyObject *__pyx_n_doc;
static PyObject *__pyx_n_elem;
static PyObject *__pyx_n_ftang;
static PyObject *__pyx_n_zax;


static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_n_doc, 1, __pyx_k1, sizeof(__pyx_k1)},
  {&__pyx_n_elem, 1, __pyx_k2, sizeof(__pyx_k2)},
  {&__pyx_n_ftang, 1, __pyx_k4, sizeof(__pyx_k4)},
  {&__pyx_n_zax, 1, __pyx_k3, sizeof(__pyx_k3)},
  {0, 0, 0, 0}
};



/* Implementation of use_etree */

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC inituse_etree(void); /*proto*/
PyMODINIT_FUNC inituse_etree(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("use_etree", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_1 = __Pyx_ImportModule("ia_etree"); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  if (__Pyx_ImportFunction(__pyx_1, "getAttributeValue", (void**)&__pyx_f_8ia_etree_getAttributeValue, "PyObject *(struct LxmlElement *,PyObject *,PyObject *)") < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_ptype_8ia_etree__Document = __Pyx_ImportType("ia_etree", "_Document", sizeof(struct LxmlDocument)); if (!__pyx_ptype_8ia_etree__Document) {__pyx_filename = __pyx_f[1]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_ptype_8ia_etree__Element = __Pyx_ImportType("ia_etree", "_Element", sizeof(struct LxmlElement)); if (!__pyx_ptype_8ia_etree__Element) {__pyx_filename = __pyx_f[1]; __pyx_lineno = 9; goto __pyx_L1;}

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/behnel/behnel5/use_etree.pyx":3 */
  __pyx_1 = PyObject_CallObject(((PyObject *)__pyx_ptype_8ia_etree__Document), 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_doc, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/behnel/behnel5/use_etree.pyx":4 */
  __pyx_1 = PyObject_CallObject(((PyObject *)__pyx_ptype_8ia_etree__Element), 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_elem, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/Bugs/behnel/behnel5/use_etree.pyx":5 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_elem); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_1, __pyx_ptype_8ia_etree__Element)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_2 = __pyx_f_8ia_etree_getAttributeValue(((struct LxmlElement *)__pyx_1),__pyx_n_zax,__pyx_n_ftang); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("use_etree");
}

static char *__pyx_filenames[] = {
  "use_etree.pyx",
  "ia_etree.pxd",
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

#ifndef __PYX_HAVE_RT_ImportFunction
#define __PYX_HAVE_RT_ImportFunction
static int __Pyx_ImportFunction(PyObject *module, char *funcname, void **f, char *sig) {
	PyObject *d = 0;
	PyObject *cobj = 0;
	char *desc;
	
	d = PyObject_GetAttrString(module, "__pyx_capi__");
	if (!d)
		goto bad;
	cobj = PyDict_GetItemString(d, funcname);
	if (!cobj) {
		PyErr_Format(PyExc_ImportError,
			"%s does not export expected C function %s",
				PyModule_GetName(module), funcname);
		goto bad;
	}
	desc = (char *)PyCObject_GetDesc(cobj);
	if (!desc)
		goto bad;
	if (strcmp(desc, sig) != 0) {
		PyErr_Format(PyExc_TypeError,
			"C function %s.%s has wrong signature (expected %s, got %s)",
				PyModule_GetName(module), funcname, sig, desc);
		goto bad;
	}
	*f = PyCObject_AsVoidPtr(cobj);
	Py_DECREF(d);
	return 0;
bad:
	Py_XDECREF(d);
	return -1;
}
#endif

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

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
	PyObject *result;
	result = PyObject_GetAttr(dict, name);
	if (!result)
		PyErr_SetObject(PyExc_NameError, name);
	return result;
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
