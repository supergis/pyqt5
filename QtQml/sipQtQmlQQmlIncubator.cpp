/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:44 2015
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

#include "sipAPIQtQml.h"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qqmlincubator.sip"
#include <qqmlincubator.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlIncubator.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlIncubator.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlIncubator.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qqmlerror.sip"
#include <qqmlerror.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlIncubator.cpp"


class sipQQmlIncubator : public QQmlIncubator
{
public:
    sipQQmlIncubator(QQmlIncubator::IncubationMode);
    virtual ~sipQQmlIncubator();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void setInitialState(QObject*);
    void statusChanged(QQmlIncubator::Status);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQmlIncubator(const sipQQmlIncubator &);
    sipQQmlIncubator &operator = (const sipQQmlIncubator &);

    char sipPyMethods[2];
};

sipQQmlIncubator::sipQQmlIncubator(QQmlIncubator::IncubationMode a0): QQmlIncubator(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlIncubator::~sipQQmlIncubator()
{
    sipCommonDtor(sipPySelf);
}

void sipQQmlIncubator::setInitialState(QObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_setInitialState);

    if (!sipMeth)
    {
        QQmlIncubator::setInitialState(a0);
        return;
    }

    extern void sipVH_QtQml_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*);

    sipVH_QtQml_3(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQmlIncubator::statusChanged(QQmlIncubator::Status a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_statusChanged);

    if (!sipMeth)
    {
        QQmlIncubator::statusChanged(a0);
        return;
    }

    extern void sipVH_QtQml_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QQmlIncubator::Status);

    sipVH_QtQml_4(sipGILState, sipModuleAPI_QtQml_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QQmlIncubator_clear, "QQmlIncubator.clear()");

extern "C" {static PyObject *meth_QQmlIncubator_clear(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_clear, doc_QQmlIncubator_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_forceCompletion, "QQmlIncubator.forceCompletion()");

extern "C" {static PyObject *meth_QQmlIncubator_forceCompletion(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_forceCompletion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            sipCpp->forceCompletion();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_forceCompletion, doc_QQmlIncubator_forceCompletion);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_isNull, "QQmlIncubator.isNull() -> bool");

extern "C" {static PyObject *meth_QQmlIncubator_isNull(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_isNull, doc_QQmlIncubator_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_isReady, "QQmlIncubator.isReady() -> bool");

extern "C" {static PyObject *meth_QQmlIncubator_isReady(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_isReady(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isReady();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_isReady, doc_QQmlIncubator_isReady);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_isError, "QQmlIncubator.isError() -> bool");

extern "C" {static PyObject *meth_QQmlIncubator_isError(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_isError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isError();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_isError, doc_QQmlIncubator_isError);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_isLoading, "QQmlIncubator.isLoading() -> bool");

extern "C" {static PyObject *meth_QQmlIncubator_isLoading(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_isLoading(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLoading();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_isLoading, doc_QQmlIncubator_isLoading);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_errors, "QQmlIncubator.errors() -> list-of-QQmlError");

extern "C" {static PyObject *meth_QQmlIncubator_errors(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_errors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            QList<QQmlError>*sipRes;

            sipRes = new QList<QQmlError>(sipCpp->errors());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QQmlError,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_errors, doc_QQmlIncubator_errors);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_incubationMode, "QQmlIncubator.incubationMode() -> QQmlIncubator.IncubationMode");

extern "C" {static PyObject *meth_QQmlIncubator_incubationMode(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_incubationMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            QQmlIncubator::IncubationMode sipRes;

            sipRes = sipCpp->incubationMode();

            return sipConvertFromEnum(sipRes,sipType_QQmlIncubator_IncubationMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_incubationMode, doc_QQmlIncubator_incubationMode);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_status, "QQmlIncubator.status() -> QQmlIncubator.Status");

extern "C" {static PyObject *meth_QQmlIncubator_status(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_status(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            QQmlIncubator::Status sipRes;

            sipRes = sipCpp->status();

            return sipConvertFromEnum(sipRes,sipType_QQmlIncubator_Status);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_status, doc_QQmlIncubator_status);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_object, "QQmlIncubator.object() -> QObject");

extern "C" {static PyObject *meth_QQmlIncubator_object(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlIncubator, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->object();

            return sipConvertFromNewType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_object, doc_QQmlIncubator_object);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_statusChanged, "QQmlIncubator.statusChanged(QQmlIncubator.Status)");

extern "C" {static PyObject *meth_QQmlIncubator_statusChanged(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_statusChanged(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QQmlIncubator::Status a0;
        QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pE", &sipSelf, sipType_QQmlIncubator, &sipCpp, sipType_QQmlIncubator_Status, &a0))
        {
            (sipSelfWasArg ? sipCpp->QQmlIncubator::statusChanged(a0) : sipCpp->statusChanged(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_statusChanged, doc_QQmlIncubator_statusChanged);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlIncubator_setInitialState, "QQmlIncubator.setInitialState(QObject)");

extern "C" {static PyObject *meth_QQmlIncubator_setInitialState(PyObject *, PyObject *);}
static PyObject *meth_QQmlIncubator_setInitialState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QObject* a0;
        QQmlIncubator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QQmlIncubator, &sipCpp, sipType_QObject, &a0))
        {
            (sipSelfWasArg ? sipCpp->QQmlIncubator::setInitialState(a0) : sipCpp->setInitialState(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlIncubator, sipName_setInitialState, doc_QQmlIncubator_setInitialState);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQmlIncubator(void *, const sipTypeDef *);}
static void *cast_QQmlIncubator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQmlIncubator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlIncubator(void *, int);}
static void release_QQmlIncubator(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQQmlIncubator *>(sipCppV);
    else
        delete reinterpret_cast<QQmlIncubator *>(sipCppV);
}


extern "C" {static void dealloc_QQmlIncubator(sipSimpleWrapper *);}
static void dealloc_QQmlIncubator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQmlIncubator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlIncubator(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQmlIncubator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlIncubator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQQmlIncubator *sipCpp = 0;

    {
        QQmlIncubator::IncubationMode a0 = QQmlIncubator::Asynchronous;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|E", sipType_QQmlIncubator_IncubationMode, &a0))
        {
            sipCpp = new sipQQmlIncubator(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QQmlIncubator[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QQmlIncubator_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_clear)},
    {SIP_MLNAME_CAST(sipName_errors), meth_QQmlIncubator_errors, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_errors)},
    {SIP_MLNAME_CAST(sipName_forceCompletion), meth_QQmlIncubator_forceCompletion, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_forceCompletion)},
    {SIP_MLNAME_CAST(sipName_incubationMode), meth_QQmlIncubator_incubationMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_incubationMode)},
    {SIP_MLNAME_CAST(sipName_isError), meth_QQmlIncubator_isError, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_isError)},
    {SIP_MLNAME_CAST(sipName_isLoading), meth_QQmlIncubator_isLoading, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_isLoading)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QQmlIncubator_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_isNull)},
    {SIP_MLNAME_CAST(sipName_isReady), meth_QQmlIncubator_isReady, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_isReady)},
    {SIP_MLNAME_CAST(sipName_object), meth_QQmlIncubator_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_object)},
    {SIP_MLNAME_CAST(sipName_setInitialState), meth_QQmlIncubator_setInitialState, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_setInitialState)},
    {SIP_MLNAME_CAST(sipName_status), meth_QQmlIncubator_status, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_status)},
    {SIP_MLNAME_CAST(sipName_statusChanged), meth_QQmlIncubator_statusChanged, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlIncubator_statusChanged)}
};

static sipEnumMemberDef enummembers_QQmlIncubator[] = {
    {sipName_Asynchronous, static_cast<int>(QQmlIncubator::Asynchronous), 26},
    {sipName_AsynchronousIfNested, static_cast<int>(QQmlIncubator::AsynchronousIfNested), 26},
    {sipName_Error, static_cast<int>(QQmlIncubator::Error), 27},
    {sipName_Loading, static_cast<int>(QQmlIncubator::Loading), 27},
    {sipName_Null, static_cast<int>(QQmlIncubator::Null), 27},
    {sipName_Ready, static_cast<int>(QQmlIncubator::Ready), 27},
    {sipName_Synchronous, static_cast<int>(QQmlIncubator::Synchronous), 26},
};

PyDoc_STRVAR(doc_QQmlIncubator, "\1QQmlIncubator(QQmlIncubator.IncubationMode mode=QQmlIncubator.Asynchronous)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlIncubator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlIncubator,
        {0}
    },
    {
        sipNameNr_QQmlIncubator,
        {0, 0, 1},
        12, methods_QQmlIncubator,
        7, enummembers_QQmlIncubator,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlIncubator,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQmlIncubator,
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
    dealloc_QQmlIncubator,
    0,
    0,
    0,
    release_QQmlIncubator,
    cast_QQmlIncubator,
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
