/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:18 2015
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

#include "sipAPIQtMultimedia.h"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qcamera.sip"
#include <qcamera.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQCameraLockTypes.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qcamera.sip"
#include <qcamera.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQCameraLockTypes.cpp"


extern "C" {static int slot_QCamera_LockTypes___bool__(PyObject *);}
static int slot_QCamera_LockTypes___bool__(PyObject *sipSelf)
{
    QCamera::LockTypes *sipCpp = reinterpret_cast<QCamera::LockTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCamera_LockTypes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCamera::LockTypes::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQCameraLockTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QCamera_LockTypes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QCamera_LockTypes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QCamera::LockTypes *sipCpp = reinterpret_cast<QCamera::LockTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCamera_LockTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QCamera::LockTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCamera_LockTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCamera::LockTypes::Int() != a0->operator QCamera::LockTypes::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQCameraLockTypes.cpp"
            sipReleaseType(const_cast<QCamera::LockTypes *>(a0),sipType_QCamera_LockTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QCamera_LockTypes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QCamera_LockTypes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QCamera_LockTypes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QCamera::LockTypes *sipCpp = reinterpret_cast<QCamera::LockTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCamera_LockTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QCamera::LockTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCamera_LockTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCamera::LockTypes::Int() == a0->operator QCamera::LockTypes::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQCameraLockTypes.cpp"
            sipReleaseType(const_cast<QCamera::LockTypes *>(a0),sipType_QCamera_LockTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QCamera_LockTypes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QCamera_LockTypes___invert__(PyObject *);}
static PyObject *slot_QCamera_LockTypes___invert__(PyObject *sipSelf)
{
    QCamera::LockTypes *sipCpp = reinterpret_cast<QCamera::LockTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCamera_LockTypes));

    if (!sipCpp)
        return 0;


    {
        {
            QCamera::LockTypes*sipRes;

            sipRes = new QCamera::LockTypes(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QCamera_LockTypes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QCamera_LockTypes___and__(PyObject *,PyObject *);}
static PyObject *slot_QCamera_LockTypes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCamera::LockTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCamera_LockTypes, &a0, &a0State, &a1))
        {
            QCamera::LockTypes*sipRes;

            sipRes = new QCamera::LockTypes((*a0 & a1));
            sipReleaseType(a0,sipType_QCamera_LockTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCamera_LockTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCamera_LockTypes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QCamera_LockTypes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCamera::LockTypes* a0;
        int a0State = 0;
        QCamera::LockTypes* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QCamera_LockTypes, &a0, &a0State, sipType_QCamera_LockTypes, &a1, &a1State))
        {
            QCamera::LockTypes*sipRes;

            sipRes = new QCamera::LockTypes((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QCamera_LockTypes,a0State);
            sipReleaseType(a1,sipType_QCamera_LockTypes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QCamera_LockTypes,NULL);
        }
    }

    {
        QCamera::LockTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCamera_LockTypes, &a0, &a0State, &a1))
        {
            QCamera::LockTypes*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QCamera::LockTypes(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQCameraLockTypes.cpp"
            sipReleaseType(a0,sipType_QCamera_LockTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCamera_LockTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCamera_LockTypes___or__(PyObject *,PyObject *);}
static PyObject *slot_QCamera_LockTypes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCamera::LockTypes* a0;
        int a0State = 0;
        QCamera::LockTypes* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QCamera_LockTypes, &a0, &a0State, sipType_QCamera_LockTypes, &a1, &a1State))
        {
            QCamera::LockTypes*sipRes;

            sipRes = new QCamera::LockTypes((*a0 | *a1));
            sipReleaseType(a0,sipType_QCamera_LockTypes,a0State);
            sipReleaseType(a1,sipType_QCamera_LockTypes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QCamera_LockTypes,NULL);
        }
    }

    {
        QCamera::LockTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCamera_LockTypes, &a0, &a0State, &a1))
        {
            QCamera::LockTypes*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QCamera::LockTypes(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQCameraLockTypes.cpp"
            sipReleaseType(a0,sipType_QCamera_LockTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCamera_LockTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCamera_LockTypes___int__(PyObject *);}
static PyObject *slot_QCamera_LockTypes___int__(PyObject *sipSelf)
{
    QCamera::LockTypes *sipCpp = reinterpret_cast<QCamera::LockTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCamera_LockTypes));

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


extern "C" {static PyObject *slot_QCamera_LockTypes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QCamera_LockTypes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCamera_LockTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCamera::LockTypes *sipCpp = reinterpret_cast<QCamera::LockTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCamera_LockTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QCamera::LockTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCamera_LockTypes, &a0, &a0State))
        {
            sipCpp->QCamera::LockTypes::operator^=(*a0);
            sipReleaseType(a0,sipType_QCamera_LockTypes,a0State);

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


extern "C" {static PyObject *slot_QCamera_LockTypes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QCamera_LockTypes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCamera_LockTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCamera::LockTypes *sipCpp = reinterpret_cast<QCamera::LockTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCamera_LockTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QCamera::LockTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCamera_LockTypes, &a0, &a0State))
        {
            sipCpp->QCamera::LockTypes::operator|=(*a0);
            sipReleaseType(a0,sipType_QCamera_LockTypes,a0State);

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


extern "C" {static PyObject *slot_QCamera_LockTypes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QCamera_LockTypes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCamera_LockTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCamera::LockTypes *sipCpp = reinterpret_cast<QCamera::LockTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCamera_LockTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QCamera::LockTypes::operator&=(a0);

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
extern "C" {static void *cast_QCamera_LockTypes(void *, const sipTypeDef *);}
static void *cast_QCamera_LockTypes(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QCamera_LockTypes)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCamera_LockTypes(void *, int);}
static void release_QCamera_LockTypes(void *sipCppV,int)
{
    delete reinterpret_cast<QCamera::LockTypes *>(sipCppV);
}


extern "C" {static void assign_QCamera_LockTypes(void *, SIP_SSIZE_T, const void *);}
static void assign_QCamera_LockTypes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QCamera::LockTypes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QCamera::LockTypes *>(sipSrc);
}


extern "C" {static void *array_QCamera_LockTypes(SIP_SSIZE_T);}
static void *array_QCamera_LockTypes(SIP_SSIZE_T sipNrElem)
{
    return new QCamera::LockTypes[sipNrElem];
}


extern "C" {static void *copy_QCamera_LockTypes(const void *, SIP_SSIZE_T);}
static void *copy_QCamera_LockTypes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QCamera::LockTypes(reinterpret_cast<const QCamera::LockTypes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCamera_LockTypes(sipSimpleWrapper *);}
static void dealloc_QCamera_LockTypes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCamera_LockTypes(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCamera_LockTypes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCamera_LockTypes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCamera::LockTypes *sipCpp = 0;

    {
        const QCamera::LockTypes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QCamera_LockTypes, &a0, &a0State))
        {
            sipCpp = new QCamera::LockTypes(*a0);
            sipReleaseType(const_cast<QCamera::LockTypes *>(a0),sipType_QCamera_LockTypes,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QCamera::LockTypes(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QCamera::LockTypes();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QCamera_LockTypes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QCamera_LockTypes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QCamera::LockTypes **sipCppPtr = reinterpret_cast<QCamera::LockTypes **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QCamera::LockTypes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QCamera_LockType)) ||
            sipCanConvertToType(sipPy, sipType_QCamera_LockTypes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QCamera_LockType)))
{
    *sipCppPtr = new QCamera::LockTypes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QCamera::LockTypes *>(sipConvertToType(sipPy, sipType_QCamera_LockTypes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQCameraLockTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QCamera_LockTypes[] = {
    {(void *)slot_QCamera_LockTypes___bool__, bool_slot},
    {(void *)slot_QCamera_LockTypes___ne__, ne_slot},
    {(void *)slot_QCamera_LockTypes___eq__, eq_slot},
    {(void *)slot_QCamera_LockTypes___invert__, invert_slot},
    {(void *)slot_QCamera_LockTypes___and__, and_slot},
    {(void *)slot_QCamera_LockTypes___xor__, xor_slot},
    {(void *)slot_QCamera_LockTypes___or__, or_slot},
    {(void *)slot_QCamera_LockTypes___int__, int_slot},
    {(void *)slot_QCamera_LockTypes___ixor__, ixor_slot},
    {(void *)slot_QCamera_LockTypes___ior__, ior_slot},
    {(void *)slot_QCamera_LockTypes___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QCamera_LockTypes, "\1QCamera.LockTypes(QCamera.LockTypes)\n"
    "QCamera.LockTypes(int)\n"
    "QCamera.LockTypes()");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QCamera_LockTypes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCamera__LockTypes,
        {0}
    },
    {
        sipNameNr_LockTypes,
        {22, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCamera_LockTypes,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QCamera_LockTypes,
    init_type_QCamera_LockTypes,
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
    dealloc_QCamera_LockTypes,
    assign_QCamera_LockTypes,
    array_QCamera_LockTypes,
    copy_QCamera_LockTypes,
    release_QCamera_LockTypes,
    cast_QCamera_LockTypes,
    convertTo_QCamera_LockTypes,
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
