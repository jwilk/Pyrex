#include "Python.h"

#define const


static PyObject *__Pyx_UnpackItem(PyObject *, int);
static int __Pyx_EndUnpack(PyObject *, int);
static int __Pyx_PrintItem(PyObject *);
static int __Pyx_PrintNewline(void);
static void __Pyx_ReRaise(void);
static void __Pyx_RaiseWithTraceback(PyObject *, PyObject *, PyObject *);
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list);
static PyObject *__Pyx_GetExcValue(void);
static PyObject *__Pyx_GetName(PyObject *dict, char *name);
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, char *name);
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type);

static PyObject *__pyx_m;
static PyObject *__pyx_b;


static PyObject *__pyx_f_cannotFindRange(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_cannotFindRange(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_limit = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"limit",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_limit)) return 0;
  Py_INCREF(__pyx_v_limit);

  /* "ProjectsA:Python:Pyrex:Tests:Bugs:r_mitch_chapman_1.pyx":4 */
  __pyx_1 = __Pyx_GetName(__pyx_b, "range"); if (!__pyx_1) goto __pyx_L1;
  __pyx_2 = PyTuple_New(1); if (!__pyx_2) goto __pyx_L1;
  Py_INCREF(__pyx_v_limit);
  PyTuple_SET_ITEM(__pyx_2, 0, __pyx_v_limit);
  __pyx_3 = PyObject_CallObject(__pyx_1, __pyx_2); if (!__pyx_3) goto __pyx_L1;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_r = __pyx_3;
  __pyx_3 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(__pyx_r);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_limit);
  return __pyx_r;
}

static struct PyMethodDef __pyx_methods[] = {
  {"cannotFindRange", (PyCFunction)__pyx_f_cannotFindRange, METH_VARARGS|METH_KEYWORDS, 0},
{0, 0, 0, 0}
};


void initr_mitch_chapman_1(void); /*proto*/
void initr_mitch_chapman_1(void) {
__pyx_m = Py_InitModule4("r_mitch_chapman_1", __pyx_methods, 0, 0, PYTHON_API_VERSION);
__pyx_b = PyImport_AddModule("__builtin__");
PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b);

/* "ProjectsA:Python:Pyrex:Tests:Bugs:r_mitch_chapman_1.pyx":1 */
return;
__pyx_L1:;
}

/* Runtime support code */

static PyObject *__Pyx_GetName(PyObject *dict, char *name) {
	PyObject *result;
	result = PyObject_GetAttrString(dict, name);
	if (!result)
		PyErr_SetString(PyExc_NameError, name);
	return result;
}
