/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:36:02 2015
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

#include "sipAPIQtWebEngineWidgets.h"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtWebEngineWidgets/qwebenginepage.sip"
#include <qwebenginepage.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtWebEngineWidgets/qwebenginepage.sip"
#include <qwebenginepage.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp"


extern "C" {static int slot_QWebEnginePage_FindFlags___bool__(PyObject *);}
static int slot_QWebEnginePage_FindFlags___bool__(PyObject *sipSelf)
{
    QWebEnginePage::FindFlags *sipCpp = reinterpret_cast<QWebEnginePage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEnginePage_FindFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEnginePage::FindFlags::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebEnginePage::FindFlags *sipCpp = reinterpret_cast<QWebEnginePage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEnginePage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebEnginePage::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebEnginePage_FindFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEnginePage::FindFlags::Int() != a0->operator QWebEnginePage::FindFlags::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp"
            sipReleaseType(const_cast<QWebEnginePage::FindFlags *>(a0),sipType_QWebEnginePage_FindFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets,ne_slot,sipType_QWebEnginePage_FindFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebEnginePage::FindFlags *sipCpp = reinterpret_cast<QWebEnginePage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEnginePage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebEnginePage::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebEnginePage_FindFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWebEnginePage::FindFlags::Int() == a0->operator QWebEnginePage::FindFlags::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp"
            sipReleaseType(const_cast<QWebEnginePage::FindFlags *>(a0),sipType_QWebEnginePage_FindFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets,eq_slot,sipType_QWebEnginePage_FindFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___invert__(PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___invert__(PyObject *sipSelf)
{
    QWebEnginePage::FindFlags *sipCpp = reinterpret_cast<QWebEnginePage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEnginePage_FindFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QWebEnginePage::FindFlags*sipRes;

            sipRes = new QWebEnginePage::FindFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QWebEnginePage_FindFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWebEnginePage::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEnginePage_FindFlags, &a0, &a0State, &a1))
        {
            QWebEnginePage::FindFlags*sipRes;

            sipRes = new QWebEnginePage::FindFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QWebEnginePage_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEnginePage_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWebEnginePage::FindFlags* a0;
        int a0State = 0;
        QWebEnginePage::FindFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QWebEnginePage_FindFlags, &a0, &a0State, sipType_QWebEnginePage_FindFlags, &a1, &a1State))
        {
            QWebEnginePage::FindFlags*sipRes;

            sipRes = new QWebEnginePage::FindFlags((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QWebEnginePage_FindFlags,a0State);
            sipReleaseType(a1,sipType_QWebEnginePage_FindFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QWebEnginePage_FindFlags,NULL);
        }
    }

    {
        QWebEnginePage::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEnginePage_FindFlags, &a0, &a0State, &a1))
        {
            QWebEnginePage::FindFlags*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QWebEnginePage::FindFlags(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp"
            sipReleaseType(a0,sipType_QWebEnginePage_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEnginePage_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWebEnginePage::FindFlags* a0;
        int a0State = 0;
        QWebEnginePage::FindFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QWebEnginePage_FindFlags, &a0, &a0State, sipType_QWebEnginePage_FindFlags, &a1, &a1State))
        {
            QWebEnginePage::FindFlags*sipRes;

            sipRes = new QWebEnginePage::FindFlags((*a0 | *a1));
            sipReleaseType(a0,sipType_QWebEnginePage_FindFlags,a0State);
            sipReleaseType(a1,sipType_QWebEnginePage_FindFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QWebEnginePage_FindFlags,NULL);
        }
    }

    {
        QWebEnginePage::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWebEnginePage_FindFlags, &a0, &a0State, &a1))
        {
            QWebEnginePage::FindFlags*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QWebEnginePage::FindFlags(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp"
            sipReleaseType(a0,sipType_QWebEnginePage_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWebEnginePage_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebEngineWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___int__(PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___int__(PyObject *sipSelf)
{
    QWebEnginePage::FindFlags *sipCpp = reinterpret_cast<QWebEnginePage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEnginePage_FindFlags));

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


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEnginePage_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWebEnginePage::FindFlags *sipCpp = reinterpret_cast<QWebEnginePage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEnginePage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QWebEnginePage::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebEnginePage_FindFlags, &a0, &a0State))
        {
            sipCpp->QWebEnginePage::FindFlags::operator^=(*a0);
            sipReleaseType(a0,sipType_QWebEnginePage_FindFlags,a0State);

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


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEnginePage_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWebEnginePage::FindFlags *sipCpp = reinterpret_cast<QWebEnginePage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEnginePage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QWebEnginePage::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWebEnginePage_FindFlags, &a0, &a0State))
        {
            sipCpp->QWebEnginePage::FindFlags::operator|=(*a0);
            sipReleaseType(a0,sipType_QWebEnginePage_FindFlags,a0State);

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


extern "C" {static PyObject *slot_QWebEnginePage_FindFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QWebEnginePage_FindFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWebEnginePage_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWebEnginePage::FindFlags *sipCpp = reinterpret_cast<QWebEnginePage::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEnginePage_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QWebEnginePage::FindFlags::operator&=(a0);

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
extern "C" {static void *cast_QWebEnginePage_FindFlags(void *, const sipTypeDef *);}
static void *cast_QWebEnginePage_FindFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebEnginePage_FindFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebEnginePage_FindFlags(void *, int);}
static void release_QWebEnginePage_FindFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QWebEnginePage::FindFlags *>(sipCppV);
}


extern "C" {static void assign_QWebEnginePage_FindFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebEnginePage_FindFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebEnginePage::FindFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebEnginePage::FindFlags *>(sipSrc);
}


extern "C" {static void *array_QWebEnginePage_FindFlags(SIP_SSIZE_T);}
static void *array_QWebEnginePage_FindFlags(SIP_SSIZE_T sipNrElem)
{
    return new QWebEnginePage::FindFlags[sipNrElem];
}


extern "C" {static void *copy_QWebEnginePage_FindFlags(const void *, SIP_SSIZE_T);}
static void *copy_QWebEnginePage_FindFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebEnginePage::FindFlags(reinterpret_cast<const QWebEnginePage::FindFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebEnginePage_FindFlags(sipSimpleWrapper *);}
static void dealloc_QWebEnginePage_FindFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebEnginePage_FindFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebEnginePage_FindFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebEnginePage_FindFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebEnginePage::FindFlags *sipCpp = 0;

    {
        const QWebEnginePage::FindFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QWebEnginePage_FindFlags, &a0, &a0State))
        {
            sipCpp = new QWebEnginePage::FindFlags(*a0);
            sipReleaseType(const_cast<QWebEnginePage::FindFlags *>(a0),sipType_QWebEnginePage_FindFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QWebEnginePage::FindFlags(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWebEnginePage::FindFlags();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QWebEnginePage_FindFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QWebEnginePage_FindFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QWebEnginePage::FindFlags **sipCppPtr = reinterpret_cast<QWebEnginePage::FindFlags **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QWebEnginePage::FindFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebEnginePage_FindFlag)) ||
            sipCanConvertToType(sipPy, sipType_QWebEnginePage_FindFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWebEnginePage_FindFlag)))
{
    *sipCppPtr = new QWebEnginePage::FindFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QWebEnginePage::FindFlags *>(sipConvertToType(sipPy, sipType_QWebEnginePage_FindFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebEnginePage_FindFlags[] = {
    {(void *)slot_QWebEnginePage_FindFlags___bool__, bool_slot},
    {(void *)slot_QWebEnginePage_FindFlags___ne__, ne_slot},
    {(void *)slot_QWebEnginePage_FindFlags___eq__, eq_slot},
    {(void *)slot_QWebEnginePage_FindFlags___invert__, invert_slot},
    {(void *)slot_QWebEnginePage_FindFlags___and__, and_slot},
    {(void *)slot_QWebEnginePage_FindFlags___xor__, xor_slot},
    {(void *)slot_QWebEnginePage_FindFlags___or__, or_slot},
    {(void *)slot_QWebEnginePage_FindFlags___int__, int_slot},
    {(void *)slot_QWebEnginePage_FindFlags___ixor__, ixor_slot},
    {(void *)slot_QWebEnginePage_FindFlags___ior__, ior_slot},
    {(void *)slot_QWebEnginePage_FindFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QWebEnginePage_FindFlags, "\1QWebEnginePage.FindFlags(QWebEnginePage.FindFlags)\n"
    "QWebEnginePage.FindFlags(int)\n"
    "QWebEnginePage.FindFlags()");


pyqt5ClassTypeDef sipTypeDef_QtWebEngineWidgets_QWebEnginePage_FindFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebEnginePage__FindFlags,
        {0}
    },
    {
        sipNameNr_FindFlags,
        {5, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebEnginePage_FindFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebEnginePage_FindFlags,
    init_type_QWebEnginePage_FindFlags,
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
    dealloc_QWebEnginePage_FindFlags,
    assign_QWebEnginePage_FindFlags,
    array_QWebEnginePage_FindFlags,
    copy_QWebEnginePage_FindFlags,
    release_QWebEnginePage_FindFlags,
    cast_QWebEnginePage_FindFlags,
    convertTo_QWebEnginePage_FindFlags,
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
