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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qcolordialog.sip"
#include <qcolordialog.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQColorDialogColorDialogOptions.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qcolordialog.sip"
#include <qcolordialog.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQColorDialogColorDialogOptions.cpp"


extern "C" {static int slot_QColorDialog_ColorDialogOptions___bool__(PyObject *);}
static int slot_QColorDialog_ColorDialogOptions___bool__(PyObject *sipSelf)
{
    QColorDialog::ColorDialogOptions *sipCpp = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QColorDialog_ColorDialogOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QColorDialog::ColorDialogOptions::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQColorDialogColorDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QColorDialog::ColorDialogOptions *sipCpp = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QColorDialog_ColorDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QColorDialog::ColorDialogOptions::Int() != a0->operator QColorDialog::ColorDialogOptions::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQColorDialogColorDialogOptions.cpp"
            sipReleaseType(const_cast<QColorDialog::ColorDialogOptions *>(a0),sipType_QColorDialog_ColorDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QColorDialog_ColorDialogOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QColorDialog::ColorDialogOptions *sipCpp = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QColorDialog_ColorDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QColorDialog::ColorDialogOptions::Int() == a0->operator QColorDialog::ColorDialogOptions::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQColorDialogColorDialogOptions.cpp"
            sipReleaseType(const_cast<QColorDialog::ColorDialogOptions *>(a0),sipType_QColorDialog_ColorDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QColorDialog_ColorDialogOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___invert__(PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___invert__(PyObject *sipSelf)
{
    QColorDialog::ColorDialogOptions *sipCpp = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QColorDialog_ColorDialogOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QColorDialog::ColorDialogOptions*sipRes;

            sipRes = new QColorDialog::ColorDialogOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QColorDialog_ColorDialogOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State, &a1))
        {
            QColorDialog::ColorDialogOptions*sipRes;

            sipRes = new QColorDialog::ColorDialogOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QColorDialog_ColorDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QColorDialog_ColorDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;
        QColorDialog::ColorDialogOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State, sipType_QColorDialog_ColorDialogOptions, &a1, &a1State))
        {
            QColorDialog::ColorDialogOptions*sipRes;

            sipRes = new QColorDialog::ColorDialogOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QColorDialog_ColorDialogOptions,a0State);
            sipReleaseType(a1,sipType_QColorDialog_ColorDialogOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QColorDialog_ColorDialogOptions,NULL);
        }
    }

    {
        QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State, &a1))
        {
            QColorDialog::ColorDialogOptions*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QColorDialog::ColorDialogOptions(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQColorDialogColorDialogOptions.cpp"
            sipReleaseType(a0,sipType_QColorDialog_ColorDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QColorDialog_ColorDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;
        QColorDialog::ColorDialogOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State, sipType_QColorDialog_ColorDialogOptions, &a1, &a1State))
        {
            QColorDialog::ColorDialogOptions*sipRes;

            sipRes = new QColorDialog::ColorDialogOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QColorDialog_ColorDialogOptions,a0State);
            sipReleaseType(a1,sipType_QColorDialog_ColorDialogOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QColorDialog_ColorDialogOptions,NULL);
        }
    }

    {
        QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State, &a1))
        {
            QColorDialog::ColorDialogOptions*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QColorDialog::ColorDialogOptions(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQColorDialogColorDialogOptions.cpp"
            sipReleaseType(a0,sipType_QColorDialog_ColorDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QColorDialog_ColorDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___int__(PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___int__(PyObject *sipSelf)
{
    QColorDialog::ColorDialogOptions *sipCpp = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QColorDialog_ColorDialogOptions));

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


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QColorDialog_ColorDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QColorDialog::ColorDialogOptions *sipCpp = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QColorDialog_ColorDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State))
        {
            sipCpp->QColorDialog::ColorDialogOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QColorDialog_ColorDialogOptions,a0State);

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


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QColorDialog_ColorDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QColorDialog::ColorDialogOptions *sipCpp = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QColorDialog_ColorDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State))
        {
            sipCpp->QColorDialog::ColorDialogOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QColorDialog_ColorDialogOptions,a0State);

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


extern "C" {static PyObject *slot_QColorDialog_ColorDialogOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QColorDialog_ColorDialogOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QColorDialog_ColorDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QColorDialog::ColorDialogOptions *sipCpp = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QColorDialog_ColorDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QColorDialog::ColorDialogOptions::operator&=(a0);

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
extern "C" {static void *cast_QColorDialog_ColorDialogOptions(void *, const sipTypeDef *);}
static void *cast_QColorDialog_ColorDialogOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QColorDialog_ColorDialogOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QColorDialog_ColorDialogOptions(void *, int);}
static void release_QColorDialog_ColorDialogOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipCppV);
}


extern "C" {static void assign_QColorDialog_ColorDialogOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QColorDialog_ColorDialogOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QColorDialog::ColorDialogOptions *>(sipSrc);
}


extern "C" {static void *array_QColorDialog_ColorDialogOptions(SIP_SSIZE_T);}
static void *array_QColorDialog_ColorDialogOptions(SIP_SSIZE_T sipNrElem)
{
    return new QColorDialog::ColorDialogOptions[sipNrElem];
}


extern "C" {static void *copy_QColorDialog_ColorDialogOptions(const void *, SIP_SSIZE_T);}
static void *copy_QColorDialog_ColorDialogOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QColorDialog::ColorDialogOptions(reinterpret_cast<const QColorDialog::ColorDialogOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QColorDialog_ColorDialogOptions(sipSimpleWrapper *);}
static void dealloc_QColorDialog_ColorDialogOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QColorDialog_ColorDialogOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QColorDialog_ColorDialogOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QColorDialog_ColorDialogOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QColorDialog::ColorDialogOptions *sipCpp = 0;

    {
        const QColorDialog::ColorDialogOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QColorDialog_ColorDialogOptions, &a0, &a0State))
        {
            sipCpp = new QColorDialog::ColorDialogOptions(*a0);
            sipReleaseType(const_cast<QColorDialog::ColorDialogOptions *>(a0),sipType_QColorDialog_ColorDialogOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QColorDialog::ColorDialogOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QColorDialog::ColorDialogOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QColorDialog_ColorDialogOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QColorDialog_ColorDialogOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QColorDialog::ColorDialogOptions **sipCppPtr = reinterpret_cast<QColorDialog::ColorDialogOptions **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QColorDialog::ColorDialogOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QColorDialog_ColorDialogOption)) ||
            sipCanConvertToType(sipPy, sipType_QColorDialog_ColorDialogOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QColorDialog_ColorDialogOption)))
{
    *sipCppPtr = new QColorDialog::ColorDialogOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QColorDialog::ColorDialogOptions *>(sipConvertToType(sipPy, sipType_QColorDialog_ColorDialogOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQColorDialogColorDialogOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QColorDialog_ColorDialogOptions[] = {
    {(void *)slot_QColorDialog_ColorDialogOptions___bool__, bool_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___ne__, ne_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___eq__, eq_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___invert__, invert_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___and__, and_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___xor__, xor_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___or__, or_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___int__, int_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___ixor__, ixor_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___ior__, ior_slot},
    {(void *)slot_QColorDialog_ColorDialogOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QColorDialog_ColorDialogOptions, "\1QColorDialog.ColorDialogOptions(QColorDialog.ColorDialogOptions)\n"
    "QColorDialog.ColorDialogOptions(int)\n"
    "QColorDialog.ColorDialogOptions()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QColorDialog_ColorDialogOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QColorDialog__ColorDialogOptions,
        {0}
    },
    {
        sipNameNr_ColorDialogOptions,
        {40, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QColorDialog_ColorDialogOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QColorDialog_ColorDialogOptions,
    init_type_QColorDialog_ColorDialogOptions,
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
    dealloc_QColorDialog_ColorDialogOptions,
    assign_QColorDialog_ColorDialogOptions,
    array_QColorDialog_ColorDialogOptions,
    copy_QColorDialog_ColorDialogOptions,
    release_QColorDialog_ColorDialogOptions,
    cast_QColorDialog_ColorDialogOptions,
    convertTo_QColorDialog_ColorDialogOptions,
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
