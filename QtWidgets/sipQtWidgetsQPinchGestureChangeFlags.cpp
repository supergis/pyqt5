/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:28 2015
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

#include "sipAPIQtWidgets.h"

#line 70 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"

#line 70 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qgesture.sip"
#include <qgesture.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"


extern "C" {static int slot_QPinchGesture_ChangeFlags___bool__(PyObject *);}
static int slot_QPinchGesture_ChangeFlags___bool__(PyObject *sipSelf)
{
    QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPinchGesture::ChangeFlags::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPinchGesture::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPinchGesture::ChangeFlags::Int() != a0->operator QPinchGesture::ChangeFlags::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"
            sipReleaseType(const_cast<QPinchGesture::ChangeFlags *>(a0),sipType_QPinchGesture_ChangeFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QPinchGesture_ChangeFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPinchGesture::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QPinchGesture::ChangeFlags::Int() == a0->operator QPinchGesture::ChangeFlags::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"
            sipReleaseType(const_cast<QPinchGesture::ChangeFlags *>(a0),sipType_QPinchGesture_ChangeFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QPinchGesture_ChangeFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___invert__(PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___invert__(PyObject *sipSelf)
{
    QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QPinchGesture::ChangeFlags*sipRes;

            sipRes = new QPinchGesture::ChangeFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPinchGesture::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPinchGesture_ChangeFlags, &a0, &a0State, &a1))
        {
            QPinchGesture::ChangeFlags*sipRes;

            sipRes = new QPinchGesture::ChangeFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPinchGesture::ChangeFlags* a0;
        int a0State = 0;
        QPinchGesture::ChangeFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State, sipType_QPinchGesture_ChangeFlags, &a1, &a1State))
        {
            QPinchGesture::ChangeFlags*sipRes;

            sipRes = new QPinchGesture::ChangeFlags((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);
            sipReleaseType(a1,sipType_QPinchGesture_ChangeFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,NULL);
        }
    }

    {
        QPinchGesture::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPinchGesture_ChangeFlags, &a0, &a0State, &a1))
        {
            QPinchGesture::ChangeFlags*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QPinchGesture::ChangeFlags(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QPinchGesture::ChangeFlags* a0;
        int a0State = 0;
        QPinchGesture::ChangeFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State, sipType_QPinchGesture_ChangeFlags, &a1, &a1State))
        {
            QPinchGesture::ChangeFlags*sipRes;

            sipRes = new QPinchGesture::ChangeFlags((*a0 | *a1));
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);
            sipReleaseType(a1,sipType_QPinchGesture_ChangeFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,NULL);
        }
    }

    {
        QPinchGesture::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QPinchGesture_ChangeFlags, &a0, &a0State, &a1))
        {
            QPinchGesture::ChangeFlags*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QPinchGesture::ChangeFlags(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPinchGesture_ChangeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___int__(PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___int__(PyObject *sipSelf)
{
    QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

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


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QPinchGesture::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State))
        {
            sipCpp->QPinchGesture::ChangeFlags::operator^=(*a0);
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);

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


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QPinchGesture::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State))
        {
            sipCpp->QPinchGesture::ChangeFlags::operator|=(*a0);
            sipReleaseType(a0,sipType_QPinchGesture_ChangeFlags,a0State);

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


extern "C" {static PyObject *slot_QPinchGesture_ChangeFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QPinchGesture_ChangeFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPinchGesture::ChangeFlags *sipCpp = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPinchGesture_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QPinchGesture::ChangeFlags::operator&=(a0);

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
extern "C" {static void *cast_QPinchGesture_ChangeFlags(void *, const sipTypeDef *);}
static void *cast_QPinchGesture_ChangeFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPinchGesture_ChangeFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPinchGesture_ChangeFlags(void *, int);}
static void release_QPinchGesture_ChangeFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QPinchGesture::ChangeFlags *>(sipCppV);
}


extern "C" {static void assign_QPinchGesture_ChangeFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QPinchGesture_ChangeFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPinchGesture::ChangeFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPinchGesture::ChangeFlags *>(sipSrc);
}


extern "C" {static void *array_QPinchGesture_ChangeFlags(SIP_SSIZE_T);}
static void *array_QPinchGesture_ChangeFlags(SIP_SSIZE_T sipNrElem)
{
    return new QPinchGesture::ChangeFlags[sipNrElem];
}


extern "C" {static void *copy_QPinchGesture_ChangeFlags(const void *, SIP_SSIZE_T);}
static void *copy_QPinchGesture_ChangeFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPinchGesture::ChangeFlags(reinterpret_cast<const QPinchGesture::ChangeFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPinchGesture_ChangeFlags(sipSimpleWrapper *);}
static void dealloc_QPinchGesture_ChangeFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPinchGesture_ChangeFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPinchGesture_ChangeFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPinchGesture_ChangeFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPinchGesture::ChangeFlags *sipCpp = 0;

    {
        const QPinchGesture::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QPinchGesture_ChangeFlags, &a0, &a0State))
        {
            sipCpp = new QPinchGesture::ChangeFlags(*a0);
            sipReleaseType(const_cast<QPinchGesture::ChangeFlags *>(a0),sipType_QPinchGesture_ChangeFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QPinchGesture::ChangeFlags(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPinchGesture::ChangeFlags();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QPinchGesture_ChangeFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPinchGesture_ChangeFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPinchGesture::ChangeFlags **sipCppPtr = reinterpret_cast<QPinchGesture::ChangeFlags **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QPinchGesture::ChangeFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QPinchGesture_ChangeFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QPinchGesture_ChangeFlag)))
{
    *sipCppPtr = new QPinchGesture::ChangeFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QPinchGesture::ChangeFlags *>(sipConvertToType(sipPy, sipType_QPinchGesture_ChangeFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQPinchGestureChangeFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPinchGesture_ChangeFlags[] = {
    {(void *)slot_QPinchGesture_ChangeFlags___bool__, bool_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___ne__, ne_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___eq__, eq_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___invert__, invert_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___and__, and_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___xor__, xor_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___or__, or_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___int__, int_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___ixor__, ixor_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___ior__, ior_slot},
    {(void *)slot_QPinchGesture_ChangeFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QPinchGesture_ChangeFlags, "\1QPinchGesture.ChangeFlags(QPinchGesture.ChangeFlags)\n"
    "QPinchGesture.ChangeFlags(int)\n"
    "QPinchGesture.ChangeFlags()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QPinchGesture_ChangeFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPinchGesture__ChangeFlags,
        {0}
    },
    {
        sipNameNr_ChangeFlags,
        {242, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPinchGesture_ChangeFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPinchGesture_ChangeFlags,
    init_type_QPinchGesture_ChangeFlags,
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
    dealloc_QPinchGesture_ChangeFlags,
    assign_QPinchGesture_ChangeFlags,
    array_QPinchGesture_ChangeFlags,
    copy_QPinchGesture_ChangeFlags,
    release_QPinchGesture_ChangeFlags,
    cast_QPinchGesture_ChangeFlags,
    convertTo_QPinchGesture_ChangeFlags,
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
