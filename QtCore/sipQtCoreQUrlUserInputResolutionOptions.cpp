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

#line 100 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQUrlUserInputResolutionOptions.cpp"

#line 100 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQUrlUserInputResolutionOptions.cpp"


extern "C" {static int slot_QUrl_UserInputResolutionOptions___bool__(PyObject *);}
static int slot_QUrl_UserInputResolutionOptions___bool__(PyObject *sipSelf)
{
    QUrl::UserInputResolutionOptions *sipCpp = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_UserInputResolutionOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QUrl::UserInputResolutionOptions::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQUrlUserInputResolutionOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrl::UserInputResolutionOptions *sipCpp = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_UserInputResolutionOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QUrl::UserInputResolutionOptions::Int() != a0->operator QUrl::UserInputResolutionOptions::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQUrlUserInputResolutionOptions.cpp"
            sipReleaseType(const_cast<QUrl::UserInputResolutionOptions *>(a0),sipType_QUrl_UserInputResolutionOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QUrl_UserInputResolutionOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrl::UserInputResolutionOptions *sipCpp = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_UserInputResolutionOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QUrl::UserInputResolutionOptions::Int() == a0->operator QUrl::UserInputResolutionOptions::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQUrlUserInputResolutionOptions.cpp"
            sipReleaseType(const_cast<QUrl::UserInputResolutionOptions *>(a0),sipType_QUrl_UserInputResolutionOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QUrl_UserInputResolutionOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___invert__(PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___invert__(PyObject *sipSelf)
{
    QUrl::UserInputResolutionOptions *sipCpp = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_UserInputResolutionOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QUrl::UserInputResolutionOptions*sipRes;

            sipRes = new QUrl::UserInputResolutionOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QUrl_UserInputResolutionOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State, &a1))
        {
            QUrl::UserInputResolutionOptions*sipRes;

            sipRes = new QUrl::UserInputResolutionOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QUrl_UserInputResolutionOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_UserInputResolutionOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;
        QUrl::UserInputResolutionOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State, sipType_QUrl_UserInputResolutionOptions, &a1, &a1State))
        {
            QUrl::UserInputResolutionOptions*sipRes;

            sipRes = new QUrl::UserInputResolutionOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QUrl_UserInputResolutionOptions,a0State);
            sipReleaseType(a1,sipType_QUrl_UserInputResolutionOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_UserInputResolutionOptions,NULL);
        }
    }

    {
        QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State, &a1))
        {
            QUrl::UserInputResolutionOptions*sipRes = 0;

#line 103 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = new QUrl::UserInputResolutionOptions(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQUrlUserInputResolutionOptions.cpp"
            sipReleaseType(a0,sipType_QUrl_UserInputResolutionOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_UserInputResolutionOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;
        QUrl::UserInputResolutionOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State, sipType_QUrl_UserInputResolutionOptions, &a1, &a1State))
        {
            QUrl::UserInputResolutionOptions*sipRes;

            sipRes = new QUrl::UserInputResolutionOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QUrl_UserInputResolutionOptions,a0State);
            sipReleaseType(a1,sipType_QUrl_UserInputResolutionOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_UserInputResolutionOptions,NULL);
        }
    }

    {
        QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State, &a1))
        {
            QUrl::UserInputResolutionOptions*sipRes = 0;

#line 98 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
        sipRes = new QUrl::UserInputResolutionOptions(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQUrlUserInputResolutionOptions.cpp"
            sipReleaseType(a0,sipType_QUrl_UserInputResolutionOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_UserInputResolutionOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___int__(PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___int__(PyObject *sipSelf)
{
    QUrl::UserInputResolutionOptions *sipCpp = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_UserInputResolutionOptions));

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


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_UserInputResolutionOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::UserInputResolutionOptions *sipCpp = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_UserInputResolutionOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State))
        {
            sipCpp->QUrl::UserInputResolutionOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QUrl_UserInputResolutionOptions,a0State);

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


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_UserInputResolutionOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::UserInputResolutionOptions *sipCpp = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_UserInputResolutionOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State))
        {
            sipCpp->QUrl::UserInputResolutionOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QUrl_UserInputResolutionOptions,a0State);

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


extern "C" {static PyObject *slot_QUrl_UserInputResolutionOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_UserInputResolutionOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_UserInputResolutionOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::UserInputResolutionOptions *sipCpp = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_UserInputResolutionOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QUrl::UserInputResolutionOptions::operator&=(a0);

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
extern "C" {static void *cast_QUrl_UserInputResolutionOptions(void *, const sipTypeDef *);}
static void *cast_QUrl_UserInputResolutionOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QUrl_UserInputResolutionOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUrl_UserInputResolutionOptions(void *, int);}
static void release_QUrl_UserInputResolutionOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipCppV);
}


extern "C" {static void assign_QUrl_UserInputResolutionOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QUrl_UserInputResolutionOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QUrl::UserInputResolutionOptions *>(sipSrc);
}


extern "C" {static void *array_QUrl_UserInputResolutionOptions(SIP_SSIZE_T);}
static void *array_QUrl_UserInputResolutionOptions(SIP_SSIZE_T sipNrElem)
{
    return new QUrl::UserInputResolutionOptions[sipNrElem];
}


extern "C" {static void *copy_QUrl_UserInputResolutionOptions(const void *, SIP_SSIZE_T);}
static void *copy_QUrl_UserInputResolutionOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QUrl::UserInputResolutionOptions(reinterpret_cast<const QUrl::UserInputResolutionOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QUrl_UserInputResolutionOptions(sipSimpleWrapper *);}
static void dealloc_QUrl_UserInputResolutionOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QUrl_UserInputResolutionOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QUrl_UserInputResolutionOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUrl_UserInputResolutionOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QUrl::UserInputResolutionOptions *sipCpp = 0;

    {
        const QUrl::UserInputResolutionOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QUrl_UserInputResolutionOptions, &a0, &a0State))
        {
            sipCpp = new QUrl::UserInputResolutionOptions(*a0);
            sipReleaseType(const_cast<QUrl::UserInputResolutionOptions *>(a0),sipType_QUrl_UserInputResolutionOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QUrl::UserInputResolutionOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QUrl::UserInputResolutionOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QUrl_UserInputResolutionOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QUrl_UserInputResolutionOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QUrl::UserInputResolutionOptions **sipCppPtr = reinterpret_cast<QUrl::UserInputResolutionOptions **>(sipCppPtrV);

#line 124 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QUrl::UserInputResolutionOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_UserInputResolutionOption)) ||
            sipCanConvertToType(sipPy, sipType_QUrl_UserInputResolutionOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_UserInputResolutionOption)))
{
    *sipCppPtr = new QUrl::UserInputResolutionOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QUrl::UserInputResolutionOptions *>(sipConvertToType(sipPy, sipType_QUrl_UserInputResolutionOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQUrlUserInputResolutionOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUrl_UserInputResolutionOptions[] = {
    {(void *)slot_QUrl_UserInputResolutionOptions___bool__, bool_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___ne__, ne_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___eq__, eq_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___invert__, invert_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___and__, and_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___xor__, xor_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___or__, or_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___int__, int_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___ixor__, ixor_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___ior__, ior_slot},
    {(void *)slot_QUrl_UserInputResolutionOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QUrl_UserInputResolutionOptions, "\1QUrl.UserInputResolutionOptions(QUrl.UserInputResolutionOptions)\n"
    "QUrl.UserInputResolutionOptions(int)\n"
    "QUrl.UserInputResolutionOptions()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QUrl_UserInputResolutionOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QUrl__UserInputResolutionOptions,
        {0}
    },
    {
        sipNameNr_UserInputResolutionOptions,
        {274, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUrl_UserInputResolutionOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QUrl_UserInputResolutionOptions,
    init_type_QUrl_UserInputResolutionOptions,
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
    dealloc_QUrl_UserInputResolutionOptions,
    assign_QUrl_UserInputResolutionOptions,
    array_QUrl_UserInputResolutionOptions,
    copy_QUrl_UserInputResolutionOptions,
    release_QUrl_UserInputResolutionOptions,
    cast_QUrl_UserInputResolutionOptions,
    convertTo_QUrl_UserInputResolutionOptions,
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
