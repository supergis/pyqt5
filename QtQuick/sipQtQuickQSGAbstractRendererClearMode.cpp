/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:47 2015
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

#include "sipAPIQtQuick.h"

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgabstractrenderer.sip"
#include <qsgabstractrenderer.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGAbstractRendererClearMode.cpp"

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgabstractrenderer.sip"
#include <qsgabstractrenderer.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGAbstractRendererClearMode.cpp"


extern "C" {static int slot_QSGAbstractRenderer_ClearMode___bool__(PyObject *);}
static int slot_QSGAbstractRenderer_ClearMode___bool__(PyObject *sipSelf)
{
    QSGAbstractRenderer::ClearMode *sipCpp = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGAbstractRenderer_ClearMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGAbstractRenderer::ClearMode::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGAbstractRendererClearMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSGAbstractRenderer::ClearMode *sipCpp = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGAbstractRenderer_ClearMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGAbstractRenderer::ClearMode::Int() != a0->operator QSGAbstractRenderer::ClearMode::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGAbstractRendererClearMode.cpp"
            sipReleaseType(const_cast<QSGAbstractRenderer::ClearMode *>(a0),sipType_QSGAbstractRenderer_ClearMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,ne_slot,sipType_QSGAbstractRenderer_ClearMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSGAbstractRenderer::ClearMode *sipCpp = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGAbstractRenderer_ClearMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSGAbstractRenderer::ClearMode::Int() == a0->operator QSGAbstractRenderer::ClearMode::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGAbstractRendererClearMode.cpp"
            sipReleaseType(const_cast<QSGAbstractRenderer::ClearMode *>(a0),sipType_QSGAbstractRenderer_ClearMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,eq_slot,sipType_QSGAbstractRenderer_ClearMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___invert__(PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___invert__(PyObject *sipSelf)
{
    QSGAbstractRenderer::ClearMode *sipCpp = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGAbstractRenderer_ClearMode));

    if (!sipCpp)
        return 0;


    {
        {
            QSGAbstractRenderer::ClearMode*sipRes;

            sipRes = new QSGAbstractRenderer::ClearMode(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSGAbstractRenderer_ClearMode,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___and__(PyObject *,PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State, &a1))
        {
            QSGAbstractRenderer::ClearMode*sipRes;

            sipRes = new QSGAbstractRenderer::ClearMode((*a0 & a1));
            sipReleaseType(a0,sipType_QSGAbstractRenderer_ClearMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGAbstractRenderer_ClearMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;
        QSGAbstractRenderer::ClearMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State, sipType_QSGAbstractRenderer_ClearMode, &a1, &a1State))
        {
            QSGAbstractRenderer::ClearMode*sipRes;

            sipRes = new QSGAbstractRenderer::ClearMode((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QSGAbstractRenderer_ClearMode,a0State);
            sipReleaseType(a1,sipType_QSGAbstractRenderer_ClearMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSGAbstractRenderer_ClearMode,NULL);
        }
    }

    {
        QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State, &a1))
        {
            QSGAbstractRenderer::ClearMode*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QSGAbstractRenderer::ClearMode(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGAbstractRendererClearMode.cpp"
            sipReleaseType(a0,sipType_QSGAbstractRenderer_ClearMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGAbstractRenderer_ClearMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___or__(PyObject *,PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;
        QSGAbstractRenderer::ClearMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State, sipType_QSGAbstractRenderer_ClearMode, &a1, &a1State))
        {
            QSGAbstractRenderer::ClearMode*sipRes;

            sipRes = new QSGAbstractRenderer::ClearMode((*a0 | *a1));
            sipReleaseType(a0,sipType_QSGAbstractRenderer_ClearMode,a0State);
            sipReleaseType(a1,sipType_QSGAbstractRenderer_ClearMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSGAbstractRenderer_ClearMode,NULL);
        }
    }

    {
        QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State, &a1))
        {
            QSGAbstractRenderer::ClearMode*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QSGAbstractRenderer::ClearMode(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGAbstractRendererClearMode.cpp"
            sipReleaseType(a0,sipType_QSGAbstractRenderer_ClearMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSGAbstractRenderer_ClearMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQuick,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___int__(PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___int__(PyObject *sipSelf)
{
    QSGAbstractRenderer::ClearMode *sipCpp = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGAbstractRenderer_ClearMode));

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


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGAbstractRenderer_ClearMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSGAbstractRenderer::ClearMode *sipCpp = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGAbstractRenderer_ClearMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State))
        {
            sipCpp->QSGAbstractRenderer::ClearMode::operator^=(*a0);
            sipReleaseType(a0,sipType_QSGAbstractRenderer_ClearMode,a0State);

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


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGAbstractRenderer_ClearMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSGAbstractRenderer::ClearMode *sipCpp = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGAbstractRenderer_ClearMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State))
        {
            sipCpp->QSGAbstractRenderer::ClearMode::operator|=(*a0);
            sipReleaseType(a0,sipType_QSGAbstractRenderer_ClearMode,a0State);

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


extern "C" {static PyObject *slot_QSGAbstractRenderer_ClearMode___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSGAbstractRenderer_ClearMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSGAbstractRenderer_ClearMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSGAbstractRenderer::ClearMode *sipCpp = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGAbstractRenderer_ClearMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QSGAbstractRenderer::ClearMode::operator&=(a0);

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
extern "C" {static void *cast_QSGAbstractRenderer_ClearMode(void *, const sipTypeDef *);}
static void *cast_QSGAbstractRenderer_ClearMode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSGAbstractRenderer_ClearMode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGAbstractRenderer_ClearMode(void *, int);}
static void release_QSGAbstractRenderer_ClearMode(void *sipCppV,int)
{
    delete reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipCppV);
}


extern "C" {static void assign_QSGAbstractRenderer_ClearMode(void *, SIP_SSIZE_T, const void *);}
static void assign_QSGAbstractRenderer_ClearMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSGAbstractRenderer::ClearMode *>(sipSrc);
}


extern "C" {static void *array_QSGAbstractRenderer_ClearMode(SIP_SSIZE_T);}
static void *array_QSGAbstractRenderer_ClearMode(SIP_SSIZE_T sipNrElem)
{
    return new QSGAbstractRenderer::ClearMode[sipNrElem];
}


extern "C" {static void *copy_QSGAbstractRenderer_ClearMode(const void *, SIP_SSIZE_T);}
static void *copy_QSGAbstractRenderer_ClearMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSGAbstractRenderer::ClearMode(reinterpret_cast<const QSGAbstractRenderer::ClearMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGAbstractRenderer_ClearMode(sipSimpleWrapper *);}
static void dealloc_QSGAbstractRenderer_ClearMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSGAbstractRenderer_ClearMode(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSGAbstractRenderer_ClearMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGAbstractRenderer_ClearMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSGAbstractRenderer::ClearMode *sipCpp = 0;

    {
        const QSGAbstractRenderer::ClearMode* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSGAbstractRenderer_ClearMode, &a0, &a0State))
        {
            sipCpp = new QSGAbstractRenderer::ClearMode(*a0);
            sipReleaseType(const_cast<QSGAbstractRenderer::ClearMode *>(a0),sipType_QSGAbstractRenderer_ClearMode,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QSGAbstractRenderer::ClearMode(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSGAbstractRenderer::ClearMode();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSGAbstractRenderer_ClearMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSGAbstractRenderer_ClearMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSGAbstractRenderer::ClearMode **sipCppPtr = reinterpret_cast<QSGAbstractRenderer::ClearMode **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSGAbstractRenderer::ClearMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGAbstractRenderer_ClearModeBit)) ||
            sipCanConvertToType(sipPy, sipType_QSGAbstractRenderer_ClearMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSGAbstractRenderer_ClearModeBit)))
{
    *sipCppPtr = new QSGAbstractRenderer::ClearMode(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSGAbstractRenderer::ClearMode *>(sipConvertToType(sipPy, sipType_QSGAbstractRenderer_ClearMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGAbstractRendererClearMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSGAbstractRenderer_ClearMode[] = {
    {(void *)slot_QSGAbstractRenderer_ClearMode___bool__, bool_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___ne__, ne_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___eq__, eq_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___invert__, invert_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___and__, and_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___xor__, xor_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___or__, or_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___int__, int_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___ixor__, ixor_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___ior__, ior_slot},
    {(void *)slot_QSGAbstractRenderer_ClearMode___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSGAbstractRenderer_ClearMode, "\1QSGAbstractRenderer.ClearMode(QSGAbstractRenderer.ClearMode)\n"
    "QSGAbstractRenderer.ClearMode(int)\n"
    "QSGAbstractRenderer.ClearMode()");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGAbstractRenderer_ClearMode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGAbstractRenderer__ClearMode,
        {0}
    },
    {
        sipNameNr_ClearMode,
        {27, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGAbstractRenderer_ClearMode,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSGAbstractRenderer_ClearMode,
    init_type_QSGAbstractRenderer_ClearMode,
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
    dealloc_QSGAbstractRenderer_ClearMode,
    assign_QSGAbstractRenderer_ClearMode,
    array_QSGAbstractRenderer_ClearMode,
    copy_QSGAbstractRenderer_ClearMode,
    release_QSGAbstractRenderer_ClearMode,
    cast_QSGAbstractRenderer_ClearMode,
    convertTo_QSGAbstractRenderer_ClearMode,
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
