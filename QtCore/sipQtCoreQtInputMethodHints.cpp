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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQtInputMethodHints.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQtInputMethodHints.cpp"


extern "C" {static int slot_Qt_InputMethodHints___bool__(PyObject *);}
static int slot_Qt_InputMethodHints___bool__(PyObject *sipSelf)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::InputMethodHints::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQtInputMethodHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::InputMethodHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::InputMethodHints::Int() != a0->operator Qt::InputMethodHints::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(const_cast<Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_InputMethodHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::InputMethodHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::InputMethodHints::Int() == a0->operator Qt::InputMethodHints::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(const_cast<Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_InputMethodHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___invert__(PyObject *);}
static PyObject *slot_Qt_InputMethodHints___invert__(PyObject *sipSelf)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::InputMethodHints*sipRes;

            sipRes = new Qt::InputMethodHints(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
            Qt::InputMethodHints*sipRes;

            sipRes = new Qt::InputMethodHints((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints* a0;
        int a0State = 0;
        Qt::InputMethodHints* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_InputMethodHints, &a0, &a0State, sipType_Qt_InputMethodHints, &a1, &a1State))
        {
            Qt::InputMethodHints*sipRes;

            sipRes = new Qt::InputMethodHints((*a0 ^ *a1));
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);
            sipReleaseType(a1,sipType_Qt_InputMethodHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    {
        Qt::InputMethodHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
            Qt::InputMethodHints*sipRes = 0;

#line 103 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = new Qt::InputMethodHints(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints* a0;
        int a0State = 0;
        Qt::InputMethodHints* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_InputMethodHints, &a0, &a0State, sipType_Qt_InputMethodHints, &a1, &a1State))
        {
            Qt::InputMethodHints*sipRes;

            sipRes = new Qt::InputMethodHints((*a0 | *a1));
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);
            sipReleaseType(a1,sipType_Qt_InputMethodHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    {
        Qt::InputMethodHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_InputMethodHints, &a0, &a0State, &a1))
        {
            Qt::InputMethodHints*sipRes = 0;

#line 98 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = new Qt::InputMethodHints(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQtInputMethodHints.cpp"
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_InputMethodHints___int__(PyObject *);}
static PyObject *slot_Qt_InputMethodHints___int__(PyObject *sipSelf)
{
    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

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


extern "C" {static PyObject *slot_Qt_InputMethodHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            sipCpp->Qt::InputMethodHints::operator^=(*a0);
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

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


extern "C" {static PyObject *slot_Qt_InputMethodHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            sipCpp->Qt::InputMethodHints::operator|=(*a0);
            sipReleaseType(a0,sipType_Qt_InputMethodHints,a0State);

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


extern "C" {static PyObject *slot_Qt_InputMethodHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_InputMethodHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::InputMethodHints *sipCpp = reinterpret_cast<Qt::InputMethodHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_InputMethodHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->Qt::InputMethodHints::operator&=(a0);

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
extern "C" {static void *cast_Qt_InputMethodHints(void *, const sipTypeDef *);}
static void *cast_Qt_InputMethodHints(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Qt_InputMethodHints)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_InputMethodHints(void *, int);}
static void release_Qt_InputMethodHints(void *sipCppV,int)
{
    delete reinterpret_cast<Qt::InputMethodHints *>(sipCppV);
}


extern "C" {static void assign_Qt_InputMethodHints(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_InputMethodHints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::InputMethodHints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::InputMethodHints *>(sipSrc);
}


extern "C" {static void *array_Qt_InputMethodHints(SIP_SSIZE_T);}
static void *array_Qt_InputMethodHints(SIP_SSIZE_T sipNrElem)
{
    return new Qt::InputMethodHints[sipNrElem];
}


extern "C" {static void *copy_Qt_InputMethodHints(const void *, SIP_SSIZE_T);}
static void *copy_Qt_InputMethodHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::InputMethodHints(reinterpret_cast<const Qt::InputMethodHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_InputMethodHints(sipSimpleWrapper *);}
static void dealloc_Qt_InputMethodHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_InputMethodHints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_InputMethodHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_InputMethodHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::InputMethodHints *sipCpp = 0;

    {
        const Qt::InputMethodHints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_InputMethodHints, &a0, &a0State))
        {
            sipCpp = new Qt::InputMethodHints(*a0);
            sipReleaseType(const_cast<Qt::InputMethodHints *>(a0),sipType_Qt_InputMethodHints,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new Qt::InputMethodHints(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new Qt::InputMethodHints();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_InputMethodHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_InputMethodHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::InputMethodHints **sipCppPtr = reinterpret_cast<Qt::InputMethodHints **>(sipCppPtrV);

#line 124 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::InputMethodHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHint)) ||
            sipCanConvertToType(sipPy, sipType_Qt_InputMethodHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_InputMethodHint)))
{
    *sipCppPtr = new Qt::InputMethodHints(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::InputMethodHints *>(sipConvertToType(sipPy, sipType_Qt_InputMethodHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQtInputMethodHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_InputMethodHints[] = {
    {(void *)slot_Qt_InputMethodHints___bool__, bool_slot},
    {(void *)slot_Qt_InputMethodHints___ne__, ne_slot},
    {(void *)slot_Qt_InputMethodHints___eq__, eq_slot},
    {(void *)slot_Qt_InputMethodHints___invert__, invert_slot},
    {(void *)slot_Qt_InputMethodHints___and__, and_slot},
    {(void *)slot_Qt_InputMethodHints___xor__, xor_slot},
    {(void *)slot_Qt_InputMethodHints___or__, or_slot},
    {(void *)slot_Qt_InputMethodHints___int__, int_slot},
    {(void *)slot_Qt_InputMethodHints___ixor__, ixor_slot},
    {(void *)slot_Qt_InputMethodHints___ior__, ior_slot},
    {(void *)slot_Qt_InputMethodHints___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_InputMethodHints, "\1Qt.InputMethodHints(Qt.InputMethodHints)\n"
    "Qt.InputMethodHints(int)\n"
    "Qt.InputMethodHints()");


pyqt5ClassTypeDef sipTypeDef_QtCore_Qt_InputMethodHints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_Qt__InputMethodHints,
        {0}
    },
    {
        sipNameNr_InputMethodHints,
        {310, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_InputMethodHints,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_InputMethodHints,
    init_type_Qt_InputMethodHints,
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
    dealloc_Qt_InputMethodHints,
    assign_Qt_InputMethodHints,
    array_Qt_InputMethodHints,
    copy_Qt_InputMethodHints,
    release_Qt_InputMethodHints,
    cast_Qt_InputMethodHints,
    convertTo_Qt_InputMethodHints,
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
