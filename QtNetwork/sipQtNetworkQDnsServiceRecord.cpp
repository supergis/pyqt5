/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:28 2015
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

#include "sipAPIQtNetwork.h"

#line 75 "/home/supermap/OpenThings/pyqt5/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtNetwork/sipQtNetworkQDnsServiceRecord.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtNetwork/sipQtNetworkQDnsServiceRecord.cpp"


PyDoc_STRVAR(doc_QDnsServiceRecord_swap, "QDnsServiceRecord.swap(QDnsServiceRecord)");

extern "C" {static PyObject *meth_QDnsServiceRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDnsServiceRecord* a0;
        QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsServiceRecord, &sipCpp, sipType_QDnsServiceRecord, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_swap, doc_QDnsServiceRecord_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_name, "QDnsServiceRecord.name() -> str");

extern "C" {static PyObject *meth_QDnsServiceRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_name, doc_QDnsServiceRecord_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_port, "QDnsServiceRecord.port() -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_port(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_port(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            quint16 sipRes;

            sipRes = sipCpp->port();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_port, doc_QDnsServiceRecord_port);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_priority, "QDnsServiceRecord.priority() -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_priority(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_priority(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            quint16 sipRes;

            sipRes = sipCpp->priority();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_priority, doc_QDnsServiceRecord_priority);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_target, "QDnsServiceRecord.target() -> str");

extern "C" {static PyObject *meth_QDnsServiceRecord_target(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_target(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->target());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_target, doc_QDnsServiceRecord_target);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_timeToLive, "QDnsServiceRecord.timeToLive() -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            quint32 sipRes;

            sipRes = sipCpp->timeToLive();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_timeToLive, doc_QDnsServiceRecord_timeToLive);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsServiceRecord_weight, "QDnsServiceRecord.weight() -> int");

extern "C" {static PyObject *meth_QDnsServiceRecord_weight(PyObject *, PyObject *);}
static PyObject *meth_QDnsServiceRecord_weight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsServiceRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsServiceRecord, &sipCpp))
        {
            quint16 sipRes;

            sipRes = sipCpp->weight();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsServiceRecord, sipName_weight, doc_QDnsServiceRecord_weight);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDnsServiceRecord(void *, const sipTypeDef *);}
static void *cast_QDnsServiceRecord(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDnsServiceRecord)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsServiceRecord(void *, int);}
static void release_QDnsServiceRecord(void *sipCppV,int)
{
    delete reinterpret_cast<QDnsServiceRecord *>(sipCppV);
}


extern "C" {static void assign_QDnsServiceRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QDnsServiceRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDnsServiceRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDnsServiceRecord *>(sipSrc);
}


extern "C" {static void *array_QDnsServiceRecord(SIP_SSIZE_T);}
static void *array_QDnsServiceRecord(SIP_SSIZE_T sipNrElem)
{
    return new QDnsServiceRecord[sipNrElem];
}


extern "C" {static void *copy_QDnsServiceRecord(const void *, SIP_SSIZE_T);}
static void *copy_QDnsServiceRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDnsServiceRecord(reinterpret_cast<const QDnsServiceRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsServiceRecord(sipSimpleWrapper *);}
static void dealloc_QDnsServiceRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDnsServiceRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDnsServiceRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsServiceRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDnsServiceRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDnsServiceRecord();

            return sipCpp;
        }
    }

    {
        const QDnsServiceRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDnsServiceRecord, &a0))
        {
            sipCpp = new QDnsServiceRecord(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDnsServiceRecord[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QDnsServiceRecord_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_name)},
    {SIP_MLNAME_CAST(sipName_port), meth_QDnsServiceRecord_port, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_port)},
    {SIP_MLNAME_CAST(sipName_priority), meth_QDnsServiceRecord_priority, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_priority)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDnsServiceRecord_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_swap)},
    {SIP_MLNAME_CAST(sipName_target), meth_QDnsServiceRecord_target, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_target)},
    {SIP_MLNAME_CAST(sipName_timeToLive), meth_QDnsServiceRecord_timeToLive, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_timeToLive)},
    {SIP_MLNAME_CAST(sipName_weight), meth_QDnsServiceRecord_weight, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsServiceRecord_weight)}
};

PyDoc_STRVAR(doc_QDnsServiceRecord, "\1QDnsServiceRecord()\n"
    "QDnsServiceRecord(QDnsServiceRecord)");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QDnsServiceRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDnsServiceRecord,
        {0}
    },
    {
        sipNameNr_QDnsServiceRecord,
        {0, 0, 1},
        7, methods_QDnsServiceRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDnsServiceRecord,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDnsServiceRecord,
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
    dealloc_QDnsServiceRecord,
    assign_QDnsServiceRecord,
    array_QDnsServiceRecord,
    copy_QDnsServiceRecord,
    release_QDnsServiceRecord,
    cast_QDnsServiceRecord,
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
