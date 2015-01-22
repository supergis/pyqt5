/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:52:28 2015
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

#include "sipAPIQtGui.h"

#line 35 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

#line 35 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"


extern "C" {static int slot_QOpenGLDebugMessage_Types___bool__(PyObject *);}
static int slot_QOpenGLDebugMessage_Types___bool__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() != 0);
#line 51 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() != a0->operator QOpenGLDebugMessage::Types::Int());
#line 81 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
            sipReleaseType(const_cast<QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QOpenGLDebugMessage_Types,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Types::Int() == a0->operator QOpenGLDebugMessage::Types::Int());
#line 117 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
            sipReleaseType(const_cast<QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QOpenGLDebugMessage_Types,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___invert__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___invert__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;


    {
        {
            QOpenGLDebugMessage::Types*sipRes;

            sipRes = new QOpenGLDebugMessage::Types(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___and__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Types*sipRes;

            sipRes = new QOpenGLDebugMessage::Types((*a0 & a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___xor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        QOpenGLDebugMessage::Types* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, sipType_QOpenGLDebugMessage_Types, &a1, &a1State))
        {
            QOpenGLDebugMessage::Types*sipRes;

            sipRes = new QOpenGLDebugMessage::Types((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);
            sipReleaseType(a1,sipType_QOpenGLDebugMessage_Types,a1State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Types*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QOpenGLDebugMessage::Types(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___or__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        QOpenGLDebugMessage::Types* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, sipType_QOpenGLDebugMessage_Types, &a1, &a1State))
        {
            QOpenGLDebugMessage::Types*sipRes;

            sipRes = new QOpenGLDebugMessage::Types((*a0 | *a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);
            sipReleaseType(a1,sipType_QOpenGLDebugMessage_Types,a1State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Types, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Types*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QOpenGLDebugMessage::Types(*a0 | a1);
#line 270 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Types,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___int__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___int__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            sipCpp->QOpenGLDebugMessage::Types::operator^=(*a0);
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___ior__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            sipCpp->QOpenGLDebugMessage::Types::operator|=(*a0);
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Types,a0State);

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


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Types___iand__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Types___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Types)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Types *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Types));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QOpenGLDebugMessage::Types::operator&=(a0);

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
extern "C" {static void *cast_QOpenGLDebugMessage_Types(void *, const sipTypeDef *);}
static void *cast_QOpenGLDebugMessage_Types(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QOpenGLDebugMessage_Types)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLDebugMessage_Types(void *, int);}
static void release_QOpenGLDebugMessage_Types(void *sipCppV,int)
{
    delete reinterpret_cast<QOpenGLDebugMessage::Types *>(sipCppV);
}


extern "C" {static void assign_QOpenGLDebugMessage_Types(void *, SIP_SSIZE_T, const void *);}
static void assign_QOpenGLDebugMessage_Types(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QOpenGLDebugMessage::Types *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QOpenGLDebugMessage::Types *>(sipSrc);
}


extern "C" {static void *array_QOpenGLDebugMessage_Types(SIP_SSIZE_T);}
static void *array_QOpenGLDebugMessage_Types(SIP_SSIZE_T sipNrElem)
{
    return new QOpenGLDebugMessage::Types[sipNrElem];
}


extern "C" {static void *copy_QOpenGLDebugMessage_Types(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLDebugMessage_Types(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QOpenGLDebugMessage::Types(reinterpret_cast<const QOpenGLDebugMessage::Types *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLDebugMessage_Types(sipSimpleWrapper *);}
static void dealloc_QOpenGLDebugMessage_Types(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLDebugMessage_Types(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QOpenGLDebugMessage_Types(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLDebugMessage_Types(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QOpenGLDebugMessage::Types *sipCpp = 0;

    {
        const QOpenGLDebugMessage::Types* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QOpenGLDebugMessage_Types, &a0, &a0State))
        {
            sipCpp = new QOpenGLDebugMessage::Types(*a0);
            sipReleaseType(const_cast<QOpenGLDebugMessage::Types *>(a0),sipType_QOpenGLDebugMessage_Types,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QOpenGLDebugMessage::Types(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QOpenGLDebugMessage::Types();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QOpenGLDebugMessage_Types(PyObject *, void **, int *, PyObject *);}
static int convertTo_QOpenGLDebugMessage_Types(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QOpenGLDebugMessage::Types **sipCppPtr = reinterpret_cast<QOpenGLDebugMessage::Types **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QOpenGLDebugMessage::Types is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Type)) ||
            sipCanConvertToType(sipPy, sipType_QOpenGLDebugMessage_Types, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Type)))
{
    *sipCppPtr = new QOpenGLDebugMessage::Types(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QOpenGLDebugMessage::Types *>(sipConvertToType(sipPy, sipType_QOpenGLDebugMessage_Types, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLDebugMessageTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLDebugMessage_Types[] = {
    {(void *)slot_QOpenGLDebugMessage_Types___bool__, bool_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ne__, ne_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___eq__, eq_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___invert__, invert_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___and__, and_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___xor__, xor_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___or__, or_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___int__, int_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ixor__, ixor_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___ior__, ior_slot},
    {(void *)slot_QOpenGLDebugMessage_Types___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QOpenGLDebugMessage_Types, "\1QOpenGLDebugMessage.Types(QOpenGLDebugMessage.Types)\n"
    "QOpenGLDebugMessage.Types(int)\n"
    "QOpenGLDebugMessage.Types()");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLDebugMessage_Types = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLDebugMessage__Types,
        {0}
    },
    {
        sipNameNr_Types,
        {132, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLDebugMessage_Types,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLDebugMessage_Types,
    init_type_QOpenGLDebugMessage_Types,
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
    dealloc_QOpenGLDebugMessage_Types,
    assign_QOpenGLDebugMessage_Types,
    array_QOpenGLDebugMessage_Types,
    copy_QOpenGLDebugMessage_Types,
    release_QOpenGLDebugMessage_Types,
    cast_QOpenGLDebugMessage_Types,
    convertTo_QOpenGLDebugMessage_Types,
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
