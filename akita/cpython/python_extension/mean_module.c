// mean_module.c
#include <Python.h>

// Function wrapper for Python
static PyObject *mean(PyObject *self, PyObject *args) {
  double a, b;
  if (!PyArg_ParseTuple(args, "dd", &a, &b))
    return NULL;
  return Py_BuildValue("d", (a + b) / 2.0);
}

// Method table
static PyMethodDef MeanMethods[] = {
    {"mean", mean, METH_VARARGS, "Compute mean of two numbers"},
    {NULL, NULL, 0, NULL}};

// Module definition
static struct PyModuleDef meanmodule = {PyModuleDef_HEAD_INIT, "mean", NULL, -1,
                                        MeanMethods};

// Module initialization
PyMODINIT_FUNC PyInit_mean(void) { return PyModule_Create(&meanmodule); }
