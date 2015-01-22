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

#line 29 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qmediaplayer.sip"
#include <qmediaplayer.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaPlayerFlags.cpp"

#line 29 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qmediaplayer.sip"
#include <qmediaplayer.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaPlayerFlags.cpp"


extern "C" {static int slot_QMediaPlayer_Flags___bool__(PyObject *);}
static int slot_QMediaPlayer_Flags___bool__(PyObject *sipSelf)
{
    QMediaPlayer::Flags *sipCpp = reinterpret_cast<QMediaPlayer::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaPlayer_Flags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QMediaPlayer::Flags::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaPlayerFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMediaPlayer_Flags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMediaPlayer::Flags *sipCpp = reinterpret_cast<QMediaPlayer::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaPlayer_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMediaPlayer::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMediaPlayer_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QMediaPlayer::Flags::Int() != a0->operator QMediaPlayer::Flags::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaPlayerFlags.cpp"
            sipReleaseType(const_cast<QMediaPlayer::Flags *>(a0),sipType_QMediaPlayer_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QMediaPlayer_Flags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMediaPlayer_Flags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMediaPlayer::Flags *sipCpp = reinterpret_cast<QMediaPlayer::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaPlayer_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMediaPlayer::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMediaPlayer_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QMediaPlayer::Flags::Int() == a0->operator QMediaPlayer::Flags::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaPlayerFlags.cpp"
            sipReleaseType(const_cast<QMediaPlayer::Flags *>(a0),sipType_QMediaPlayer_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QMediaPlayer_Flags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMediaPlayer_Flags___invert__(PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___invert__(PyObject *sipSelf)
{
    QMediaPlayer::Flags *sipCpp = reinterpret_cast<QMediaPlayer::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaPlayer_Flags));

    if (!sipCpp)
        return 0;


    {
        {
            QMediaPlayer::Flags*sipRes;

            sipRes = new QMediaPlayer::Flags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QMediaPlayer_Flags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMediaPlayer_Flags___and__(PyObject *,PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMediaPlayer::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMediaPlayer_Flags, &a0, &a0State, &a1))
        {
            QMediaPlayer::Flags*sipRes;

            sipRes = new QMediaPlayer::Flags((*a0 & a1));
            sipReleaseType(a0,sipType_QMediaPlayer_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMediaPlayer_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMediaPlayer_Flags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMediaPlayer::Flags* a0;
        int a0State = 0;
        QMediaPlayer::Flags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMediaPlayer_Flags, &a0, &a0State, sipType_QMediaPlayer_Flags, &a1, &a1State))
        {
            QMediaPlayer::Flags*sipRes;

            sipRes = new QMediaPlayer::Flags((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QMediaPlayer_Flags,a0State);
            sipReleaseType(a1,sipType_QMediaPlayer_Flags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMediaPlayer_Flags,NULL);
        }
    }

    {
        QMediaPlayer::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMediaPlayer_Flags, &a0, &a0State, &a1))
        {
            QMediaPlayer::Flags*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QMediaPlayer::Flags(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaPlayerFlags.cpp"
            sipReleaseType(a0,sipType_QMediaPlayer_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMediaPlayer_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMediaPlayer_Flags___or__(PyObject *,PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMediaPlayer::Flags* a0;
        int a0State = 0;
        QMediaPlayer::Flags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMediaPlayer_Flags, &a0, &a0State, sipType_QMediaPlayer_Flags, &a1, &a1State))
        {
            QMediaPlayer::Flags*sipRes;

            sipRes = new QMediaPlayer::Flags((*a0 | *a1));
            sipReleaseType(a0,sipType_QMediaPlayer_Flags,a0State);
            sipReleaseType(a1,sipType_QMediaPlayer_Flags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMediaPlayer_Flags,NULL);
        }
    }

    {
        QMediaPlayer::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMediaPlayer_Flags, &a0, &a0State, &a1))
        {
            QMediaPlayer::Flags*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QMediaPlayer::Flags(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaPlayerFlags.cpp"
            sipReleaseType(a0,sipType_QMediaPlayer_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMediaPlayer_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMediaPlayer_Flags___int__(PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___int__(PyObject *sipSelf)
{
    QMediaPlayer::Flags *sipCpp = reinterpret_cast<QMediaPlayer::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaPlayer_Flags));

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


extern "C" {static PyObject *slot_QMediaPlayer_Flags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMediaPlayer_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMediaPlayer::Flags *sipCpp = reinterpret_cast<QMediaPlayer::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaPlayer_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMediaPlayer::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMediaPlayer_Flags, &a0, &a0State))
        {
            sipCpp->QMediaPlayer::Flags::operator^=(*a0);
            sipReleaseType(a0,sipType_QMediaPlayer_Flags,a0State);

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


extern "C" {static PyObject *slot_QMediaPlayer_Flags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMediaPlayer_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMediaPlayer::Flags *sipCpp = reinterpret_cast<QMediaPlayer::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaPlayer_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMediaPlayer::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMediaPlayer_Flags, &a0, &a0State))
        {
            sipCpp->QMediaPlayer::Flags::operator|=(*a0);
            sipReleaseType(a0,sipType_QMediaPlayer_Flags,a0State);

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


extern "C" {static PyObject *slot_QMediaPlayer_Flags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QMediaPlayer_Flags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMediaPlayer_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMediaPlayer::Flags *sipCpp = reinterpret_cast<QMediaPlayer::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMediaPlayer_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QMediaPlayer::Flags::operator&=(a0);

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
extern "C" {static void *cast_QMediaPlayer_Flags(void *, const sipTypeDef *);}
static void *cast_QMediaPlayer_Flags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMediaPlayer_Flags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMediaPlayer_Flags(void *, int);}
static void release_QMediaPlayer_Flags(void *sipCppV,int)
{
    delete reinterpret_cast<QMediaPlayer::Flags *>(sipCppV);
}


extern "C" {static void assign_QMediaPlayer_Flags(void *, SIP_SSIZE_T, const void *);}
static void assign_QMediaPlayer_Flags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMediaPlayer::Flags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMediaPlayer::Flags *>(sipSrc);
}


extern "C" {static void *array_QMediaPlayer_Flags(SIP_SSIZE_T);}
static void *array_QMediaPlayer_Flags(SIP_SSIZE_T sipNrElem)
{
    return new QMediaPlayer::Flags[sipNrElem];
}


extern "C" {static void *copy_QMediaPlayer_Flags(const void *, SIP_SSIZE_T);}
static void *copy_QMediaPlayer_Flags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMediaPlayer::Flags(reinterpret_cast<const QMediaPlayer::Flags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMediaPlayer_Flags(sipSimpleWrapper *);}
static void dealloc_QMediaPlayer_Flags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMediaPlayer_Flags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMediaPlayer_Flags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMediaPlayer_Flags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMediaPlayer::Flags *sipCpp = 0;

    {
        const QMediaPlayer::Flags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QMediaPlayer_Flags, &a0, &a0State))
        {
            sipCpp = new QMediaPlayer::Flags(*a0);
            sipReleaseType(const_cast<QMediaPlayer::Flags *>(a0),sipType_QMediaPlayer_Flags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QMediaPlayer::Flags(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QMediaPlayer::Flags();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QMediaPlayer_Flags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMediaPlayer_Flags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMediaPlayer::Flags **sipCppPtr = reinterpret_cast<QMediaPlayer::Flags **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QMediaPlayer::Flags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMediaPlayer_Flag)) ||
            sipCanConvertToType(sipPy, sipType_QMediaPlayer_Flags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMediaPlayer_Flag)))
{
    *sipCppPtr = new QMediaPlayer::Flags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QMediaPlayer::Flags *>(sipConvertToType(sipPy, sipType_QMediaPlayer_Flags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaPlayerFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMediaPlayer_Flags[] = {
    {(void *)slot_QMediaPlayer_Flags___bool__, bool_slot},
    {(void *)slot_QMediaPlayer_Flags___ne__, ne_slot},
    {(void *)slot_QMediaPlayer_Flags___eq__, eq_slot},
    {(void *)slot_QMediaPlayer_Flags___invert__, invert_slot},
    {(void *)slot_QMediaPlayer_Flags___and__, and_slot},
    {(void *)slot_QMediaPlayer_Flags___xor__, xor_slot},
    {(void *)slot_QMediaPlayer_Flags___or__, or_slot},
    {(void *)slot_QMediaPlayer_Flags___int__, int_slot},
    {(void *)slot_QMediaPlayer_Flags___ixor__, ixor_slot},
    {(void *)slot_QMediaPlayer_Flags___ior__, ior_slot},
    {(void *)slot_QMediaPlayer_Flags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QMediaPlayer_Flags, "\1QMediaPlayer.Flags(QMediaPlayer.Flags)\n"
    "QMediaPlayer.Flags(int)\n"
    "QMediaPlayer.Flags()");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QMediaPlayer_Flags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMediaPlayer__Flags,
        {0}
    },
    {
        sipNameNr_Flags,
        {68, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMediaPlayer_Flags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMediaPlayer_Flags,
    init_type_QMediaPlayer_Flags,
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
    dealloc_QMediaPlayer_Flags,
    assign_QMediaPlayer_Flags,
    array_QMediaPlayer_Flags,
    copy_QMediaPlayer_Flags,
    release_QMediaPlayer_Flags,
    cast_QMediaPlayer_Flags,
    convertTo_QMediaPlayer_Flags,
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
