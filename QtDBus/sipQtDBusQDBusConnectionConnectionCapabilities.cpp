/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:37 2015
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

#include "sipAPIQtDBus.h"

#line 45 "/home/supermap/OpenThings/pyqt5/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusConnectionConnectionCapabilities.cpp"

#line 45 "/home/supermap/OpenThings/pyqt5/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusConnectionConnectionCapabilities.cpp"


extern "C" {static int slot_QDBusConnection_ConnectionCapabilities___bool__(PyObject *);}
static int slot_QDBusConnection_ConnectionCapabilities___bool__(PyObject *sipSelf)
{
    QDBusConnection::ConnectionCapabilities *sipCpp = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_ConnectionCapabilities));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusConnection::ConnectionCapabilities::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusConnectionConnectionCapabilities.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusConnection::ConnectionCapabilities *sipCpp = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_ConnectionCapabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusConnection::ConnectionCapabilities::Int() != a0->operator QDBusConnection::ConnectionCapabilities::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusConnectionConnectionCapabilities.cpp"
            sipReleaseType(const_cast<QDBusConnection::ConnectionCapabilities *>(a0),sipType_QDBusConnection_ConnectionCapabilities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,ne_slot,sipType_QDBusConnection_ConnectionCapabilities,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDBusConnection::ConnectionCapabilities *sipCpp = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_ConnectionCapabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QDBusConnection::ConnectionCapabilities::Int() == a0->operator QDBusConnection::ConnectionCapabilities::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusConnectionConnectionCapabilities.cpp"
            sipReleaseType(const_cast<QDBusConnection::ConnectionCapabilities *>(a0),sipType_QDBusConnection_ConnectionCapabilities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,eq_slot,sipType_QDBusConnection_ConnectionCapabilities,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___invert__(PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___invert__(PyObject *sipSelf)
{
    QDBusConnection::ConnectionCapabilities *sipCpp = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_ConnectionCapabilities));

    if (!sipCpp)
        return 0;


    {
        {
            QDBusConnection::ConnectionCapabilities*sipRes;

            sipRes = new QDBusConnection::ConnectionCapabilities(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_ConnectionCapabilities,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___and__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State, &a1))
        {
            QDBusConnection::ConnectionCapabilities*sipRes;

            sipRes = new QDBusConnection::ConnectionCapabilities((*a0 & a1));
            sipReleaseType(a0,sipType_QDBusConnection_ConnectionCapabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_ConnectionCapabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;
        QDBusConnection::ConnectionCapabilities* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State, sipType_QDBusConnection_ConnectionCapabilities, &a1, &a1State))
        {
            QDBusConnection::ConnectionCapabilities*sipRes;

            sipRes = new QDBusConnection::ConnectionCapabilities((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QDBusConnection_ConnectionCapabilities,a0State);
            sipReleaseType(a1,sipType_QDBusConnection_ConnectionCapabilities,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_ConnectionCapabilities,NULL);
        }
    }

    {
        QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State, &a1))
        {
            QDBusConnection::ConnectionCapabilities*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QDBusConnection::ConnectionCapabilities(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusConnectionConnectionCapabilities.cpp"
            sipReleaseType(a0,sipType_QDBusConnection_ConnectionCapabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_ConnectionCapabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___or__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;
        QDBusConnection::ConnectionCapabilities* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State, sipType_QDBusConnection_ConnectionCapabilities, &a1, &a1State))
        {
            QDBusConnection::ConnectionCapabilities*sipRes;

            sipRes = new QDBusConnection::ConnectionCapabilities((*a0 | *a1));
            sipReleaseType(a0,sipType_QDBusConnection_ConnectionCapabilities,a0State);
            sipReleaseType(a1,sipType_QDBusConnection_ConnectionCapabilities,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_ConnectionCapabilities,NULL);
        }
    }

    {
        QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State, &a1))
        {
            QDBusConnection::ConnectionCapabilities*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QDBusConnection::ConnectionCapabilities(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusConnectionConnectionCapabilities.cpp"
            sipReleaseType(a0,sipType_QDBusConnection_ConnectionCapabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDBusConnection_ConnectionCapabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDBus,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___int__(PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___int__(PyObject *sipSelf)
{
    QDBusConnection::ConnectionCapabilities *sipCpp = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_ConnectionCapabilities));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusConnection_ConnectionCapabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDBusConnection::ConnectionCapabilities *sipCpp = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_ConnectionCapabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State))
        {
            sipCpp->QDBusConnection::ConnectionCapabilities::operator^=(*a0);
            sipReleaseType(a0,sipType_QDBusConnection_ConnectionCapabilities,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusConnection_ConnectionCapabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDBusConnection::ConnectionCapabilities *sipCpp = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_ConnectionCapabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State))
        {
            sipCpp->QDBusConnection::ConnectionCapabilities::operator|=(*a0);
            sipReleaseType(a0,sipType_QDBusConnection_ConnectionCapabilities,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QDBusConnection_ConnectionCapabilities___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDBusConnection_ConnectionCapabilities___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDBusConnection_ConnectionCapabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDBusConnection::ConnectionCapabilities *sipCpp = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDBusConnection_ConnectionCapabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QDBusConnection::ConnectionCapabilities::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDBusConnection_ConnectionCapabilities(void *, const sipTypeDef *);}
static void *cast_QDBusConnection_ConnectionCapabilities(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDBusConnection_ConnectionCapabilities)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusConnection_ConnectionCapabilities(void *, int);}
static void release_QDBusConnection_ConnectionCapabilities(void *sipCppV,int)
{
    delete reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipCppV);
}


extern "C" {static void assign_QDBusConnection_ConnectionCapabilities(void *, SIP_SSIZE_T, const void *);}
static void assign_QDBusConnection_ConnectionCapabilities(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDBusConnection::ConnectionCapabilities *>(sipSrc);
}


extern "C" {static void *array_QDBusConnection_ConnectionCapabilities(SIP_SSIZE_T);}
static void *array_QDBusConnection_ConnectionCapabilities(SIP_SSIZE_T sipNrElem)
{
    return new QDBusConnection::ConnectionCapabilities[sipNrElem];
}


extern "C" {static void *copy_QDBusConnection_ConnectionCapabilities(const void *, SIP_SSIZE_T);}
static void *copy_QDBusConnection_ConnectionCapabilities(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDBusConnection::ConnectionCapabilities(reinterpret_cast<const QDBusConnection::ConnectionCapabilities *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDBusConnection_ConnectionCapabilities(sipSimpleWrapper *);}
static void dealloc_QDBusConnection_ConnectionCapabilities(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDBusConnection_ConnectionCapabilities(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDBusConnection_ConnectionCapabilities(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusConnection_ConnectionCapabilities(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDBusConnection::ConnectionCapabilities *sipCpp = 0;

    {
        const QDBusConnection::ConnectionCapabilities* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDBusConnection_ConnectionCapabilities, &a0, &a0State))
        {
            sipCpp = new QDBusConnection::ConnectionCapabilities(*a0);
            sipReleaseType(const_cast<QDBusConnection::ConnectionCapabilities *>(a0),sipType_QDBusConnection_ConnectionCapabilities,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QDBusConnection::ConnectionCapabilities(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDBusConnection::ConnectionCapabilities();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDBusConnection_ConnectionCapabilities(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDBusConnection_ConnectionCapabilities(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QDBusConnection::ConnectionCapabilities **sipCppPtr = reinterpret_cast<QDBusConnection::ConnectionCapabilities **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDBusConnection::ConnectionCapabilities is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDBusConnection_ConnectionCapability)) ||
            sipCanConvertToType(sipPy, sipType_QDBusConnection_ConnectionCapabilities, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDBusConnection_ConnectionCapability)))
{
    *sipCppPtr = new QDBusConnection::ConnectionCapabilities(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDBusConnection::ConnectionCapabilities *>(sipConvertToType(sipPy, sipType_QDBusConnection_ConnectionCapabilities, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusConnectionConnectionCapabilities.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDBusConnection_ConnectionCapabilities[] = {
    {(void *)slot_QDBusConnection_ConnectionCapabilities___bool__, bool_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___ne__, ne_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___eq__, eq_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___invert__, invert_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___and__, and_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___xor__, xor_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___or__, or_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___int__, int_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___ixor__, ixor_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___ior__, ior_slot},
    {(void *)slot_QDBusConnection_ConnectionCapabilities___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDBusConnection_ConnectionCapabilities, "\1QDBusConnection.ConnectionCapabilities(QDBusConnection.ConnectionCapabilities)\n"
    "QDBusConnection.ConnectionCapabilities(int)\n"
    "QDBusConnection.ConnectionCapabilities()");


pyqt5ClassTypeDef sipTypeDef_QtDBus_QDBusConnection_ConnectionCapabilities = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDBusConnection__ConnectionCapabilities,
        {0}
    },
    {
        sipNameNr_ConnectionCapabilities,
        {5, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusConnection_ConnectionCapabilities,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDBusConnection_ConnectionCapabilities,
    init_type_QDBusConnection_ConnectionCapabilities,
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
    dealloc_QDBusConnection_ConnectionCapabilities,
    assign_QDBusConnection_ConnectionCapabilities,
    array_QDBusConnection_ConnectionCapabilities,
    copy_QDBusConnection_ConnectionCapabilities,
    release_QDBusConnection_ConnectionCapabilities,
    cast_QDBusConnection_ConnectionCapabilities,
    convertTo_QDBusConnection_ConnectionCapabilities,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};