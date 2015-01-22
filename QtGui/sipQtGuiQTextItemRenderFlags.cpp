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

#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextItemRenderFlags.cpp"

#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextItemRenderFlags.cpp"


extern "C" {static int slot_QTextItem_RenderFlags___bool__(PyObject *);}
static int slot_QTextItem_RenderFlags___bool__(PyObject *sipSelf)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextItem::RenderFlags::Int() != 0);
#line 51 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextItemRenderFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextItem::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextItem::RenderFlags::Int() != a0->operator QTextItem::RenderFlags::Int());
#line 81 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(const_cast<QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextItem_RenderFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextItem::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextItem::RenderFlags::Int() == a0->operator QTextItem::RenderFlags::Int());
#line 117 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(const_cast<QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextItem_RenderFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___invert__(PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___invert__(PyObject *sipSelf)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QTextItem::RenderFlags*sipRes;

            sipRes = new QTextItem::RenderFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
            QTextItem::RenderFlags*sipRes;

            sipRes = new QTextItem::RenderFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags* a0;
        int a0State = 0;
        QTextItem::RenderFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextItem_RenderFlags, &a0, &a0State, sipType_QTextItem_RenderFlags, &a1, &a1State))
        {
            QTextItem::RenderFlags*sipRes;

            sipRes = new QTextItem::RenderFlags((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);
            sipReleaseType(a1,sipType_QTextItem_RenderFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    {
        QTextItem::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
            QTextItem::RenderFlags*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QTextItem::RenderFlags(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags* a0;
        int a0State = 0;
        QTextItem::RenderFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextItem_RenderFlags, &a0, &a0State, sipType_QTextItem_RenderFlags, &a1, &a1State))
        {
            QTextItem::RenderFlags*sipRes;

            sipRes = new QTextItem::RenderFlags((*a0 | *a1));
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);
            sipReleaseType(a1,sipType_QTextItem_RenderFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    {
        QTextItem::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextItem_RenderFlags, &a0, &a0State, &a1))
        {
            QTextItem::RenderFlags*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QTextItem::RenderFlags(*a0 | a1);
#line 270 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextItemRenderFlags.cpp"
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextItem_RenderFlags___int__(PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___int__(PyObject *sipSelf)
{
    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

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


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            sipCpp->QTextItem::RenderFlags::operator^=(*a0);
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

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


extern "C" {static PyObject *slot_QTextItem_RenderFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextItem::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            sipCpp->QTextItem::RenderFlags::operator|=(*a0);
            sipReleaseType(a0,sipType_QTextItem_RenderFlags,a0State);

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


extern "C" {static PyObject *slot_QTextItem_RenderFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextItem_RenderFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextItem::RenderFlags *sipCpp = reinterpret_cast<QTextItem::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextItem_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QTextItem::RenderFlags::operator&=(a0);

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
extern "C" {static void *cast_QTextItem_RenderFlags(void *, const sipTypeDef *);}
static void *cast_QTextItem_RenderFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextItem_RenderFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextItem_RenderFlags(void *, int);}
static void release_QTextItem_RenderFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QTextItem::RenderFlags *>(sipCppV);
}


extern "C" {static void assign_QTextItem_RenderFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextItem_RenderFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextItem::RenderFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextItem::RenderFlags *>(sipSrc);
}


extern "C" {static void *array_QTextItem_RenderFlags(SIP_SSIZE_T);}
static void *array_QTextItem_RenderFlags(SIP_SSIZE_T sipNrElem)
{
    return new QTextItem::RenderFlags[sipNrElem];
}


extern "C" {static void *copy_QTextItem_RenderFlags(const void *, SIP_SSIZE_T);}
static void *copy_QTextItem_RenderFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextItem::RenderFlags(reinterpret_cast<const QTextItem::RenderFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextItem_RenderFlags(sipSimpleWrapper *);}
static void dealloc_QTextItem_RenderFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextItem_RenderFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextItem_RenderFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextItem_RenderFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextItem::RenderFlags *sipCpp = 0;

    {
        const QTextItem::RenderFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextItem_RenderFlags, &a0, &a0State))
        {
            sipCpp = new QTextItem::RenderFlags(*a0);
            sipReleaseType(const_cast<QTextItem::RenderFlags *>(a0),sipType_QTextItem_RenderFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QTextItem::RenderFlags(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTextItem::RenderFlags();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextItem_RenderFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextItem_RenderFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextItem::RenderFlags **sipCppPtr = reinterpret_cast<QTextItem::RenderFlags **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextItem::RenderFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextItem_RenderFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextItem_RenderFlag)))
{
    *sipCppPtr = new QTextItem::RenderFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextItem::RenderFlags *>(sipConvertToType(sipPy, sipType_QTextItem_RenderFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextItemRenderFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextItem_RenderFlags[] = {
    {(void *)slot_QTextItem_RenderFlags___bool__, bool_slot},
    {(void *)slot_QTextItem_RenderFlags___ne__, ne_slot},
    {(void *)slot_QTextItem_RenderFlags___eq__, eq_slot},
    {(void *)slot_QTextItem_RenderFlags___invert__, invert_slot},
    {(void *)slot_QTextItem_RenderFlags___and__, and_slot},
    {(void *)slot_QTextItem_RenderFlags___xor__, xor_slot},
    {(void *)slot_QTextItem_RenderFlags___or__, or_slot},
    {(void *)slot_QTextItem_RenderFlags___int__, int_slot},
    {(void *)slot_QTextItem_RenderFlags___ixor__, ixor_slot},
    {(void *)slot_QTextItem_RenderFlags___ior__, ior_slot},
    {(void *)slot_QTextItem_RenderFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextItem_RenderFlags, "\1QTextItem.RenderFlags(QTextItem.RenderFlags)\n"
    "QTextItem.RenderFlags(int)\n"
    "QTextItem.RenderFlags()");


pyqt5ClassTypeDef sipTypeDef_QtGui_QTextItem_RenderFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextItem__RenderFlags,
        {0}
    },
    {
        sipNameNr_RenderFlags,
        {305, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextItem_RenderFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextItem_RenderFlags,
    init_type_QTextItem_RenderFlags,
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
    dealloc_QTextItem_RenderFlags,
    assign_QTextItem_RenderFlags,
    array_QTextItem_RenderFlags,
    copy_QTextItem_RenderFlags,
    release_QTextItem_RenderFlags,
    cast_QTextItem_RenderFlags,
    convertTo_QTextItem_RenderFlags,
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
