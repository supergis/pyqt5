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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQIODeviceOpenMode.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQIODeviceOpenMode.cpp"


extern "C" {static int slot_QIODevice_OpenMode___bool__(PyObject *);}
static int slot_QIODevice_OpenMode___bool__(PyObject *sipSelf)
{
    QIODevice::OpenMode *sipCpp = reinterpret_cast<QIODevice::OpenMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QIODevice_OpenMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QIODevice::OpenMode::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQIODeviceOpenMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QIODevice_OpenMode___ne__(PyObject *,PyObject *);}
static PyObject *slot_QIODevice_OpenMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QIODevice::OpenMode *sipCpp = reinterpret_cast<QIODevice::OpenMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QIODevice_OpenMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QIODevice::OpenMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QIODevice_OpenMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QIODevice::OpenMode::Int() != a0->operator QIODevice::OpenMode::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQIODeviceOpenMode.cpp"
            sipReleaseType(const_cast<QIODevice::OpenMode *>(a0),sipType_QIODevice_OpenMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QIODevice_OpenMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QIODevice_OpenMode___eq__(PyObject *,PyObject *);}
static PyObject *slot_QIODevice_OpenMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QIODevice::OpenMode *sipCpp = reinterpret_cast<QIODevice::OpenMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QIODevice_OpenMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QIODevice::OpenMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QIODevice_OpenMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QIODevice::OpenMode::Int() == a0->operator QIODevice::OpenMode::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQIODeviceOpenMode.cpp"
            sipReleaseType(const_cast<QIODevice::OpenMode *>(a0),sipType_QIODevice_OpenMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QIODevice_OpenMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QIODevice_OpenMode___invert__(PyObject *);}
static PyObject *slot_QIODevice_OpenMode___invert__(PyObject *sipSelf)
{
    QIODevice::OpenMode *sipCpp = reinterpret_cast<QIODevice::OpenMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QIODevice_OpenMode));

    if (!sipCpp)
        return 0;


    {
        {
            QIODevice::OpenMode*sipRes;

            sipRes = new QIODevice::OpenMode(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QIODevice_OpenMode,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QIODevice_OpenMode___and__(PyObject *,PyObject *);}
static PyObject *slot_QIODevice_OpenMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice::OpenMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QIODevice_OpenMode, &a0, &a0State, &a1))
        {
            QIODevice::OpenMode*sipRes;

            sipRes = new QIODevice::OpenMode((*a0 & a1));
            sipReleaseType(a0,sipType_QIODevice_OpenMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QIODevice_OpenMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QIODevice_OpenMode___xor__(PyObject *,PyObject *);}
static PyObject *slot_QIODevice_OpenMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice::OpenMode* a0;
        int a0State = 0;
        QIODevice::OpenMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QIODevice_OpenMode, &a0, &a0State, sipType_QIODevice_OpenMode, &a1, &a1State))
        {
            QIODevice::OpenMode*sipRes;

            sipRes = new QIODevice::OpenMode((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QIODevice_OpenMode,a0State);
            sipReleaseType(a1,sipType_QIODevice_OpenMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QIODevice_OpenMode,NULL);
        }
    }

    {
        QIODevice::OpenMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QIODevice_OpenMode, &a0, &a0State, &a1))
        {
            QIODevice::OpenMode*sipRes = 0;

#line 103 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = new QIODevice::OpenMode(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQIODeviceOpenMode.cpp"
            sipReleaseType(a0,sipType_QIODevice_OpenMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QIODevice_OpenMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QIODevice_OpenMode___or__(PyObject *,PyObject *);}
static PyObject *slot_QIODevice_OpenMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice::OpenMode* a0;
        int a0State = 0;
        QIODevice::OpenMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QIODevice_OpenMode, &a0, &a0State, sipType_QIODevice_OpenMode, &a1, &a1State))
        {
            QIODevice::OpenMode*sipRes;

            sipRes = new QIODevice::OpenMode((*a0 | *a1));
            sipReleaseType(a0,sipType_QIODevice_OpenMode,a0State);
            sipReleaseType(a1,sipType_QIODevice_OpenMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QIODevice_OpenMode,NULL);
        }
    }

    {
        QIODevice::OpenMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QIODevice_OpenMode, &a0, &a0State, &a1))
        {
            QIODevice::OpenMode*sipRes = 0;

#line 98 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = new QIODevice::OpenMode(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQIODeviceOpenMode.cpp"
            sipReleaseType(a0,sipType_QIODevice_OpenMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QIODevice_OpenMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QIODevice_OpenMode___int__(PyObject *);}
static PyObject *slot_QIODevice_OpenMode___int__(PyObject *sipSelf)
{
    QIODevice::OpenMode *sipCpp = reinterpret_cast<QIODevice::OpenMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QIODevice_OpenMode));

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


extern "C" {static PyObject *slot_QIODevice_OpenMode___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QIODevice_OpenMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QIODevice_OpenMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QIODevice::OpenMode *sipCpp = reinterpret_cast<QIODevice::OpenMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QIODevice_OpenMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QIODevice::OpenMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QIODevice_OpenMode, &a0, &a0State))
        {
            sipCpp->QIODevice::OpenMode::operator^=(*a0);
            sipReleaseType(a0,sipType_QIODevice_OpenMode,a0State);

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


extern "C" {static PyObject *slot_QIODevice_OpenMode___ior__(PyObject *,PyObject *);}
static PyObject *slot_QIODevice_OpenMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QIODevice_OpenMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QIODevice::OpenMode *sipCpp = reinterpret_cast<QIODevice::OpenMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QIODevice_OpenMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QIODevice::OpenMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QIODevice_OpenMode, &a0, &a0State))
        {
            sipCpp->QIODevice::OpenMode::operator|=(*a0);
            sipReleaseType(a0,sipType_QIODevice_OpenMode,a0State);

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


extern "C" {static PyObject *slot_QIODevice_OpenMode___iand__(PyObject *,PyObject *);}
static PyObject *slot_QIODevice_OpenMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QIODevice_OpenMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QIODevice::OpenMode *sipCpp = reinterpret_cast<QIODevice::OpenMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QIODevice_OpenMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QIODevice::OpenMode::operator&=(a0);

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
extern "C" {static void *cast_QIODevice_OpenMode(void *, const sipTypeDef *);}
static void *cast_QIODevice_OpenMode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QIODevice_OpenMode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIODevice_OpenMode(void *, int);}
static void release_QIODevice_OpenMode(void *sipCppV,int)
{
    delete reinterpret_cast<QIODevice::OpenMode *>(sipCppV);
}


extern "C" {static void assign_QIODevice_OpenMode(void *, SIP_SSIZE_T, const void *);}
static void assign_QIODevice_OpenMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QIODevice::OpenMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QIODevice::OpenMode *>(sipSrc);
}


extern "C" {static void *array_QIODevice_OpenMode(SIP_SSIZE_T);}
static void *array_QIODevice_OpenMode(SIP_SSIZE_T sipNrElem)
{
    return new QIODevice::OpenMode[sipNrElem];
}


extern "C" {static void *copy_QIODevice_OpenMode(const void *, SIP_SSIZE_T);}
static void *copy_QIODevice_OpenMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QIODevice::OpenMode(reinterpret_cast<const QIODevice::OpenMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QIODevice_OpenMode(sipSimpleWrapper *);}
static void dealloc_QIODevice_OpenMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QIODevice_OpenMode(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QIODevice_OpenMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIODevice_OpenMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QIODevice::OpenMode *sipCpp = 0;

    {
        const QIODevice::OpenMode* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QIODevice_OpenMode, &a0, &a0State))
        {
            sipCpp = new QIODevice::OpenMode(*a0);
            sipReleaseType(const_cast<QIODevice::OpenMode *>(a0),sipType_QIODevice_OpenMode,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QIODevice::OpenMode(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QIODevice::OpenMode();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QIODevice_OpenMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QIODevice_OpenMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QIODevice::OpenMode **sipCppPtr = reinterpret_cast<QIODevice::OpenMode **>(sipCppPtrV);

#line 124 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QIODevice::OpenMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QIODevice_OpenModeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QIODevice_OpenMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QIODevice_OpenModeFlag)))
{
    *sipCppPtr = new QIODevice::OpenMode(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QIODevice::OpenMode *>(sipConvertToType(sipPy, sipType_QIODevice_OpenMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQIODeviceOpenMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QIODevice_OpenMode[] = {
    {(void *)slot_QIODevice_OpenMode___bool__, bool_slot},
    {(void *)slot_QIODevice_OpenMode___ne__, ne_slot},
    {(void *)slot_QIODevice_OpenMode___eq__, eq_slot},
    {(void *)slot_QIODevice_OpenMode___invert__, invert_slot},
    {(void *)slot_QIODevice_OpenMode___and__, and_slot},
    {(void *)slot_QIODevice_OpenMode___xor__, xor_slot},
    {(void *)slot_QIODevice_OpenMode___or__, or_slot},
    {(void *)slot_QIODevice_OpenMode___int__, int_slot},
    {(void *)slot_QIODevice_OpenMode___ixor__, ixor_slot},
    {(void *)slot_QIODevice_OpenMode___ior__, ior_slot},
    {(void *)slot_QIODevice_OpenMode___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QIODevice_OpenMode, "\1QIODevice.OpenMode(QIODevice.OpenMode)\n"
    "QIODevice.OpenMode(int)\n"
    "QIODevice.OpenMode()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QIODevice_OpenMode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QIODevice__OpenMode,
        {0}
    },
    {
        sipNameNr_OpenMode,
        {78, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIODevice_OpenMode,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QIODevice_OpenMode,
    init_type_QIODevice_OpenMode,
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
    dealloc_QIODevice_OpenMode,
    assign_QIODevice_OpenMode,
    array_QIODevice_OpenMode,
    copy_QIODevice_OpenMode,
    release_QIODevice_OpenMode,
    cast_QIODevice_OpenMode,
    convertTo_QIODevice_OpenMode,
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
