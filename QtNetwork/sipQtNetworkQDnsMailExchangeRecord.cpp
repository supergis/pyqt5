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

#line 58 "/home/supermap/OpenThings/pyqt5/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtNetwork/sipQtNetworkQDnsMailExchangeRecord.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtNetwork/sipQtNetworkQDnsMailExchangeRecord.cpp"


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_swap, "QDnsMailExchangeRecord.swap(QDnsMailExchangeRecord)");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDnsMailExchangeRecord* a0;
        QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp, sipType_QDnsMailExchangeRecord, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_swap, doc_QDnsMailExchangeRecord_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_exchange, "QDnsMailExchangeRecord.exchange() -> str");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_exchange(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_exchange(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->exchange());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_exchange, doc_QDnsMailExchangeRecord_exchange);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_name, "QDnsMailExchangeRecord.name() -> str");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_name, doc_QDnsMailExchangeRecord_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_preference, "QDnsMailExchangeRecord.preference() -> int");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_preference(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_preference(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp))
        {
            quint16 sipRes;

            sipRes = sipCpp->preference();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_preference, doc_QDnsMailExchangeRecord_preference);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsMailExchangeRecord_timeToLive, "QDnsMailExchangeRecord.timeToLive() -> int");

extern "C" {static PyObject *meth_QDnsMailExchangeRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsMailExchangeRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsMailExchangeRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsMailExchangeRecord, &sipCpp))
        {
            quint32 sipRes;

            sipRes = sipCpp->timeToLive();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsMailExchangeRecord, sipName_timeToLive, doc_QDnsMailExchangeRecord_timeToLive);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDnsMailExchangeRecord(void *, const sipTypeDef *);}
static void *cast_QDnsMailExchangeRecord(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDnsMailExchangeRecord)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsMailExchangeRecord(void *, int);}
static void release_QDnsMailExchangeRecord(void *sipCppV,int)
{
    delete reinterpret_cast<QDnsMailExchangeRecord *>(sipCppV);
}


extern "C" {static void assign_QDnsMailExchangeRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QDnsMailExchangeRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDnsMailExchangeRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDnsMailExchangeRecord *>(sipSrc);
}


extern "C" {static void *array_QDnsMailExchangeRecord(SIP_SSIZE_T);}
static void *array_QDnsMailExchangeRecord(SIP_SSIZE_T sipNrElem)
{
    return new QDnsMailExchangeRecord[sipNrElem];
}


extern "C" {static void *copy_QDnsMailExchangeRecord(const void *, SIP_SSIZE_T);}
static void *copy_QDnsMailExchangeRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDnsMailExchangeRecord(reinterpret_cast<const QDnsMailExchangeRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsMailExchangeRecord(sipSimpleWrapper *);}
static void dealloc_QDnsMailExchangeRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDnsMailExchangeRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDnsMailExchangeRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsMailExchangeRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDnsMailExchangeRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDnsMailExchangeRecord();

            return sipCpp;
        }
    }

    {
        const QDnsMailExchangeRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDnsMailExchangeRecord, &a0))
        {
            sipCpp = new QDnsMailExchangeRecord(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDnsMailExchangeRecord[] = {
    {SIP_MLNAME_CAST(sipName_exchange), meth_QDnsMailExchangeRecord_exchange, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsMailExchangeRecord_exchange)},
    {SIP_MLNAME_CAST(sipName_name), meth_QDnsMailExchangeRecord_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsMailExchangeRecord_name)},
    {SIP_MLNAME_CAST(sipName_preference), meth_QDnsMailExchangeRecord_preference, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsMailExchangeRecord_preference)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDnsMailExchangeRecord_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsMailExchangeRecord_swap)},
    {SIP_MLNAME_CAST(sipName_timeToLive), meth_QDnsMailExchangeRecord_timeToLive, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsMailExchangeRecord_timeToLive)}
};

PyDoc_STRVAR(doc_QDnsMailExchangeRecord, "\1QDnsMailExchangeRecord()\n"
    "QDnsMailExchangeRecord(QDnsMailExchangeRecord)");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QDnsMailExchangeRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDnsMailExchangeRecord,
        {0}
    },
    {
        sipNameNr_QDnsMailExchangeRecord,
        {0, 0, 1},
        5, methods_QDnsMailExchangeRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDnsMailExchangeRecord,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDnsMailExchangeRecord,
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
    dealloc_QDnsMailExchangeRecord,
    assign_QDnsMailExchangeRecord,
    array_QDnsMailExchangeRecord,
    copy_QDnsMailExchangeRecord,
    release_QDnsMailExchangeRecord,
    cast_QDnsMailExchangeRecord,
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
