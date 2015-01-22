/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:03 2015
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qwaitcondition.sip"
#include <qwaitcondition.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQWaitCondition.cpp"

#line 54 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qmutex.sip"
#include <qmutex.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQWaitCondition.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQWaitCondition.cpp"


PyDoc_STRVAR(doc_QWaitCondition_wait, "QWaitCondition.wait(QMutex, int msecs=ULONG_MAX) -> bool\n"
    "QWaitCondition.wait(QReadWriteLock, int msecs=ULONG_MAX) -> bool");

extern "C" {static PyObject *meth_QWaitCondition_wait(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWaitCondition_wait(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QMutex* a0;
        unsigned long a1 = ULONG_MAX;
        QWaitCondition *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|m", &sipSelf, sipType_QWaitCondition, &sipCpp, sipType_QMutex, &a0, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->wait(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QReadWriteLock* a0;
        unsigned long a1 = ULONG_MAX;
        QWaitCondition *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|m", &sipSelf, sipType_QWaitCondition, &sipCpp, sipType_QReadWriteLock, &a0, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->wait(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWaitCondition, sipName_wait, doc_QWaitCondition_wait);

    return NULL;
}


PyDoc_STRVAR(doc_QWaitCondition_wakeOne, "QWaitCondition.wakeOne()");

extern "C" {static PyObject *meth_QWaitCondition_wakeOne(PyObject *, PyObject *);}
static PyObject *meth_QWaitCondition_wakeOne(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWaitCondition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWaitCondition, &sipCpp))
        {
            sipCpp->wakeOne();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWaitCondition, sipName_wakeOne, doc_QWaitCondition_wakeOne);

    return NULL;
}


PyDoc_STRVAR(doc_QWaitCondition_wakeAll, "QWaitCondition.wakeAll()");

extern "C" {static PyObject *meth_QWaitCondition_wakeAll(PyObject *, PyObject *);}
static PyObject *meth_QWaitCondition_wakeAll(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWaitCondition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWaitCondition, &sipCpp))
        {
            sipCpp->wakeAll();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWaitCondition, sipName_wakeAll, doc_QWaitCondition_wakeAll);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWaitCondition(void *, const sipTypeDef *);}
static void *cast_QWaitCondition(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWaitCondition)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWaitCondition(void *, int);}
static void release_QWaitCondition(void *sipCppV,int)
{
    delete reinterpret_cast<QWaitCondition *>(sipCppV);
}


extern "C" {static void dealloc_QWaitCondition(sipSimpleWrapper *);}
static void dealloc_QWaitCondition(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWaitCondition(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWaitCondition(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWaitCondition(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWaitCondition *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWaitCondition();

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWaitCondition[] = {
    {SIP_MLNAME_CAST(sipName_wait), (PyCFunction)meth_QWaitCondition_wait, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QWaitCondition_wait)},
    {SIP_MLNAME_CAST(sipName_wakeAll), meth_QWaitCondition_wakeAll, METH_VARARGS, SIP_MLDOC_CAST(doc_QWaitCondition_wakeAll)},
    {SIP_MLNAME_CAST(sipName_wakeOne), meth_QWaitCondition_wakeOne, METH_VARARGS, SIP_MLDOC_CAST(doc_QWaitCondition_wakeOne)}
};

PyDoc_STRVAR(doc_QWaitCondition, "\1QWaitCondition()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QWaitCondition = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWaitCondition,
        {0}
    },
    {
        sipNameNr_QWaitCondition,
        {0, 0, 1},
        3, methods_QWaitCondition,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWaitCondition,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWaitCondition,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QWaitCondition,
    0,
    0,
    0,
    release_QWaitCondition,
    cast_QWaitCondition,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
