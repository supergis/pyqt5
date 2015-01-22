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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qgraphicsview.sip"
#include <qgraphicsview.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsViewCacheMode.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qgraphicsview.sip"
#include <qgraphicsview.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsViewCacheMode.cpp"


extern "C" {static int slot_QGraphicsView_CacheMode___bool__(PyObject *);}
static int slot_QGraphicsView_CacheMode___bool__(PyObject *sipSelf)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsView::CacheMode::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsViewCacheMode.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsView::CacheMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsView_CacheMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsView::CacheMode::Int() != a0->operator QGraphicsView::CacheMode::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsViewCacheMode.cpp"
            sipReleaseType(const_cast<QGraphicsView::CacheMode *>(a0),sipType_QGraphicsView_CacheMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QGraphicsView_CacheMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsView::CacheMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsView_CacheMode, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsView::CacheMode::Int() == a0->operator QGraphicsView::CacheMode::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsViewCacheMode.cpp"
            sipReleaseType(const_cast<QGraphicsView::CacheMode *>(a0),sipType_QGraphicsView_CacheMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QGraphicsView_CacheMode,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___invert__(PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___invert__(PyObject *sipSelf)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsView::CacheMode*sipRes;

            sipRes = new QGraphicsView::CacheMode(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsView::CacheMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsView_CacheMode, &a0, &a0State, &a1))
        {
            QGraphicsView::CacheMode*sipRes;

            sipRes = new QGraphicsView::CacheMode((*a0 & a1));
            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsView::CacheMode* a0;
        int a0State = 0;
        QGraphicsView::CacheMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsView_CacheMode, &a0, &a0State, sipType_QGraphicsView_CacheMode, &a1, &a1State))
        {
            QGraphicsView::CacheMode*sipRes;

            sipRes = new QGraphicsView::CacheMode((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);
            sipReleaseType(a1,sipType_QGraphicsView_CacheMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    {
        QGraphicsView::CacheMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsView_CacheMode, &a0, &a0State, &a1))
        {
            QGraphicsView::CacheMode*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsView::CacheMode(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsViewCacheMode.cpp"
            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsView::CacheMode* a0;
        int a0State = 0;
        QGraphicsView::CacheMode* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsView_CacheMode, &a0, &a0State, sipType_QGraphicsView_CacheMode, &a1, &a1State))
        {
            QGraphicsView::CacheMode*sipRes;

            sipRes = new QGraphicsView::CacheMode((*a0 | *a1));
            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);
            sipReleaseType(a1,sipType_QGraphicsView_CacheMode,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    {
        QGraphicsView::CacheMode* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsView_CacheMode, &a0, &a0State, &a1))
        {
            QGraphicsView::CacheMode*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsView::CacheMode(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsViewCacheMode.cpp"
            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsView_CacheMode,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___int__(PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___int__(PyObject *sipSelf)
{
    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

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


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsView::CacheMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsView_CacheMode, &a0, &a0State))
        {
            sipCpp->QGraphicsView::CacheMode::operator^=(*a0);
            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);

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


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsView::CacheMode* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsView_CacheMode, &a0, &a0State))
        {
            sipCpp->QGraphicsView::CacheMode::operator|=(*a0);
            sipReleaseType(a0,sipType_QGraphicsView_CacheMode,a0State);

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


extern "C" {static PyObject *slot_QGraphicsView_CacheMode___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsView_CacheMode___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheMode)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsView::CacheMode *sipCpp = reinterpret_cast<QGraphicsView::CacheMode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsView_CacheMode));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QGraphicsView::CacheMode::operator&=(a0);

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
extern "C" {static void *cast_QGraphicsView_CacheMode(void *, const sipTypeDef *);}
static void *cast_QGraphicsView_CacheMode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGraphicsView_CacheMode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsView_CacheMode(void *, int);}
static void release_QGraphicsView_CacheMode(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsView::CacheMode *>(sipCppV);
}


extern "C" {static void assign_QGraphicsView_CacheMode(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsView_CacheMode(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsView::CacheMode *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsView::CacheMode *>(sipSrc);
}


extern "C" {static void *array_QGraphicsView_CacheMode(SIP_SSIZE_T);}
static void *array_QGraphicsView_CacheMode(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsView::CacheMode[sipNrElem];
}


extern "C" {static void *copy_QGraphicsView_CacheMode(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsView_CacheMode(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsView::CacheMode(reinterpret_cast<const QGraphicsView::CacheMode *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsView_CacheMode(sipSimpleWrapper *);}
static void dealloc_QGraphicsView_CacheMode(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsView_CacheMode(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGraphicsView_CacheMode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsView_CacheMode(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsView::CacheMode *sipCpp = 0;

    {
        const QGraphicsView::CacheMode* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsView_CacheMode, &a0, &a0State))
        {
            sipCpp = new QGraphicsView::CacheMode(*a0);
            sipReleaseType(const_cast<QGraphicsView::CacheMode *>(a0),sipType_QGraphicsView_CacheMode,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QGraphicsView::CacheMode(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGraphicsView::CacheMode();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsView_CacheMode(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsView_CacheMode(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsView::CacheMode **sipCppPtr = reinterpret_cast<QGraphicsView::CacheMode **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsView::CacheMode is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheModeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsView_CacheMode, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsView_CacheModeFlag)))
{
    *sipCppPtr = new QGraphicsView::CacheMode(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsView::CacheMode *>(sipConvertToType(sipPy, sipType_QGraphicsView_CacheMode, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsViewCacheMode.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsView_CacheMode[] = {
    {(void *)slot_QGraphicsView_CacheMode___bool__, bool_slot},
    {(void *)slot_QGraphicsView_CacheMode___ne__, ne_slot},
    {(void *)slot_QGraphicsView_CacheMode___eq__, eq_slot},
    {(void *)slot_QGraphicsView_CacheMode___invert__, invert_slot},
    {(void *)slot_QGraphicsView_CacheMode___and__, and_slot},
    {(void *)slot_QGraphicsView_CacheMode___xor__, xor_slot},
    {(void *)slot_QGraphicsView_CacheMode___or__, or_slot},
    {(void *)slot_QGraphicsView_CacheMode___int__, int_slot},
    {(void *)slot_QGraphicsView_CacheMode___ixor__, ixor_slot},
    {(void *)slot_QGraphicsView_CacheMode___ior__, ior_slot},
    {(void *)slot_QGraphicsView_CacheMode___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsView_CacheMode, "\1QGraphicsView.CacheMode(QGraphicsView.CacheMode)\n"
    "QGraphicsView.CacheMode(int)\n"
    "QGraphicsView.CacheMode()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsView_CacheMode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsView__CacheMode,
        {0}
    },
    {
        sipNameNr_CacheMode,
        {159, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsView_CacheMode,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsView_CacheMode,
    init_type_QGraphicsView_CacheMode,
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
    dealloc_QGraphicsView_CacheMode,
    assign_QGraphicsView_CacheMode,
    array_QGraphicsView_CacheMode,
    copy_QGraphicsView_CacheMode,
    release_QGraphicsView_CacheMode,
    cast_QGraphicsView_CacheMode,
    convertTo_QGraphicsView_CacheMode,
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
