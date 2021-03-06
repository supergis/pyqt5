/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:41 2015
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

#include "sipAPIQtBluetooth.h"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtBluetooth/qbluetoothtransferrequest.sip"
#include <qbluetoothtransferrequest.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferRequest.cpp"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtBluetooth/qbluetoothaddress.sip"
#include <qbluetoothaddress.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferRequest.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferRequest.cpp"


PyDoc_STRVAR(doc_QBluetoothTransferRequest_attribute, "QBluetoothTransferRequest.attribute(QBluetoothTransferRequest.Attribute, QVariant defaultValue=QVariant()) -> QVariant");

extern "C" {static PyObject *meth_QBluetoothTransferRequest_attribute(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferRequest_attribute(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothTransferRequest::Attribute a0;
        const QVariant& a1def = QVariant();
        const QVariant* a1 = &a1def;
        int a1State = 0;
        const QBluetoothTransferRequest *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|J1", &sipSelf, sipType_QBluetoothTransferRequest, &sipCpp, sipType_QBluetoothTransferRequest_Attribute, &a0, sipType_QVariant, &a1, &a1State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->attribute(a0,*a1));
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferRequest, sipName_attribute, doc_QBluetoothTransferRequest_attribute);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferRequest_setAttribute, "QBluetoothTransferRequest.setAttribute(QBluetoothTransferRequest.Attribute, QVariant)");

extern "C" {static PyObject *meth_QBluetoothTransferRequest_setAttribute(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferRequest_setAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothTransferRequest::Attribute a0;
        const QVariant* a1;
        int a1State = 0;
        QBluetoothTransferRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QBluetoothTransferRequest, &sipCpp, sipType_QBluetoothTransferRequest_Attribute, &a0, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setAttribute(a0,*a1);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferRequest, sipName_setAttribute, doc_QBluetoothTransferRequest_setAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferRequest_address, "QBluetoothTransferRequest.address() -> QBluetoothAddress");

extern "C" {static PyObject *meth_QBluetoothTransferRequest_address(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferRequest_address(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothTransferRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothTransferRequest, &sipCpp))
        {
            QBluetoothAddress*sipRes;

            sipRes = new QBluetoothAddress(sipCpp->address());

            return sipConvertFromNewType(sipRes,sipType_QBluetoothAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferRequest, sipName_address, doc_QBluetoothTransferRequest_address);

    return NULL;
}


extern "C" {static PyObject *slot_QBluetoothTransferRequest___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothTransferRequest___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothTransferRequest *sipCpp = reinterpret_cast<QBluetoothTransferRequest *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothTransferRequest));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothTransferRequest* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBluetoothTransferRequest, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QBluetoothTransferRequest::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,eq_slot,sipType_QBluetoothTransferRequest,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetoothTransferRequest___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothTransferRequest___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothTransferRequest *sipCpp = reinterpret_cast<QBluetoothTransferRequest *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothTransferRequest));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothTransferRequest* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBluetoothTransferRequest, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QBluetoothTransferRequest::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,ne_slot,sipType_QBluetoothTransferRequest,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBluetoothTransferRequest(void *, const sipTypeDef *);}
static void *cast_QBluetoothTransferRequest(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QBluetoothTransferRequest)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBluetoothTransferRequest(void *, int);}
static void release_QBluetoothTransferRequest(void *sipCppV,int)
{
    delete reinterpret_cast<QBluetoothTransferRequest *>(sipCppV);
}


extern "C" {static void assign_QBluetoothTransferRequest(void *, SIP_SSIZE_T, const void *);}
static void assign_QBluetoothTransferRequest(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBluetoothTransferRequest *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBluetoothTransferRequest *>(sipSrc);
}


extern "C" {static void *array_QBluetoothTransferRequest(SIP_SSIZE_T);}
static void *array_QBluetoothTransferRequest(SIP_SSIZE_T sipNrElem)
{
    return new QBluetoothTransferRequest[sipNrElem];
}


extern "C" {static void *copy_QBluetoothTransferRequest(const void *, SIP_SSIZE_T);}
static void *copy_QBluetoothTransferRequest(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBluetoothTransferRequest(reinterpret_cast<const QBluetoothTransferRequest *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBluetoothTransferRequest(sipSimpleWrapper *);}
static void dealloc_QBluetoothTransferRequest(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBluetoothTransferRequest(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QBluetoothTransferRequest(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBluetoothTransferRequest(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBluetoothTransferRequest *sipCpp = 0;

    {
        const QBluetoothAddress& a0def = QBluetoothAddress();
        const QBluetoothAddress* a0 = &a0def;

        static const char *sipKwdList[] = {
            sipName_address,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J9", sipType_QBluetoothAddress, &a0))
        {
            sipCpp = new QBluetoothTransferRequest(*a0);

            return sipCpp;
        }
    }

    {
        const QBluetoothTransferRequest* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QBluetoothTransferRequest, &a0))
        {
            sipCpp = new QBluetoothTransferRequest(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBluetoothTransferRequest[] = {
    {(void *)slot_QBluetoothTransferRequest___eq__, eq_slot},
    {(void *)slot_QBluetoothTransferRequest___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QBluetoothTransferRequest[] = {
    {SIP_MLNAME_CAST(sipName_address), meth_QBluetoothTransferRequest_address, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferRequest_address)},
    {SIP_MLNAME_CAST(sipName_attribute), (PyCFunction)meth_QBluetoothTransferRequest_attribute, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QBluetoothTransferRequest_attribute)},
    {SIP_MLNAME_CAST(sipName_setAttribute), meth_QBluetoothTransferRequest_setAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferRequest_setAttribute)}
};

static sipEnumMemberDef enummembers_QBluetoothTransferRequest[] = {
    {sipName_DescriptionAttribute, static_cast<int>(QBluetoothTransferRequest::DescriptionAttribute), 45},
    {sipName_LengthAttribute, static_cast<int>(QBluetoothTransferRequest::LengthAttribute), 45},
    {sipName_NameAttribute, static_cast<int>(QBluetoothTransferRequest::NameAttribute), 45},
    {sipName_TimeAttribute, static_cast<int>(QBluetoothTransferRequest::TimeAttribute), 45},
    {sipName_TypeAttribute, static_cast<int>(QBluetoothTransferRequest::TypeAttribute), 45},
};

PyDoc_STRVAR(doc_QBluetoothTransferRequest, "\1QBluetoothTransferRequest(QBluetoothAddress address=QBluetoothAddress())\n"
    "QBluetoothTransferRequest(QBluetoothTransferRequest)");


pyqt5ClassTypeDef sipTypeDef_QtBluetooth_QBluetoothTransferRequest = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBluetoothTransferRequest,
        {0}
    },
    {
        sipNameNr_QBluetoothTransferRequest,
        {0, 0, 1},
        3, methods_QBluetoothTransferRequest,
        5, enummembers_QBluetoothTransferRequest,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBluetoothTransferRequest,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QBluetoothTransferRequest,
    init_type_QBluetoothTransferRequest,
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
    dealloc_QBluetoothTransferRequest,
    assign_QBluetoothTransferRequest,
    array_QBluetoothTransferRequest,
    copy_QBluetoothTransferRequest,
    release_QBluetoothTransferRequest,
    cast_QBluetoothTransferRequest,
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
