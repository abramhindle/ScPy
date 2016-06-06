#pragma once

#include <Python.h>
#include <string>
#include "object.h"

class Evaluator
{
  public:
    Evaluator();
    ~Evaluator();

    PyObject* eval(PyObject* obj);
    PyObject* compile(const std::string& code);
    bool checkError();
    void printError();
    void defineGlobal(const std::string& name, Object obj);

  private:
    PyObject *_globals, *_locals;
    PyObject* _flusher;
};
