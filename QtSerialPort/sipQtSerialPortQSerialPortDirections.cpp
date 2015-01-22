/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:40 2015
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

#include "sipAPIQtSerialPort.h"

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtSerialPort/qserialport.sip"
#include <qserialport.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtSerialPort/sipQtSerialPortQSerialPortDirections.cpp"

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtSerialPort/qserialport.sip"
#include <qserialport.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtSerialPort/sipQtSerialPortQSerialPortDirections.cpp"


extern "C" {static int slot_QSerialPort_Directions___bool__(PyObject *);}
static int slot_QSerialPort_Directions___bool__(PyObject *sipSelf)
{
    QSerialPort::Directions *sipCpp = reinterpret_cast<QSerialPort::Directions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_Directions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSerialPort::Directions::Int() != 0);
#line 51 "/home/supermap/OpenThings/pyqt5/QtSerialPort/sipQtSerialPortQSerialPortDirections.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSerialPort_Directions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Directions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSerialPort::Directions *sipCpp = reinterpret_cast<QSerialPort::Directions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_Directions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSerialPort::Directions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSerialPort_Directions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSerialPort::Directions::Int() != a0->operator QSerialPort::Directions::Int());
#line 81 "/home/supermap/OpenThings/pyqt5/QtSerialPort/sipQtSerialPortQSerialPortDirections.cpp"
            sipReleaseType(const_cast<QSerialPort::Directions *>(a0),sipType_QSerialPort_Directions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,ne_slot,sipType_QSerialPort_Directions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSerialPort_Directions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Directions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSerialPort::Directions *sipCpp = reinterpret_cast<QSerialPort::Directions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_Directions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSerialPort::Directions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSerialPort_Directions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSerialPort::Directions::Int() == a0->operator QSerialPort::Directions::Int());
#line 117 "/home/supermap/OpenThings/pyqt5/QtSerialPort/sipQtSerialPortQSerialPortDirections.cpp"
            sipReleaseType(const_cast<QSerialPort::Directions *>(a0),sipType_QSerialPort_Directions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,eq_slot,sipType_QSerialPort_Directions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSerialPort_Directions___invert__(PyObject *);}
static PyObject *slot_QSerialPort_Directions___invert__(PyObject *sipSelf)
{
    QSerialPort::Directions *sipCpp = reinterpret_cast<QSerialPort::Directions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_Directions));

    if (!sipCpp)
        return 0;


    {
        {
            QSerialPort::Directions*sipRes;

            sipRes = new QSerialPort::Directions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_Directions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSerialPort_Directions___and__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Directions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPort::Directions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSerialPort_Directions, &a0, &a0State, &a1))
        {
            QSerialPort::Directions*sipRes;

            sipRes = new QSerialPort::Directions((*a0 & a1));
            sipReleaseType(a0,sipType_QSerialPort_Directions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_Directions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSerialPort_Directions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Directions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPort::Directions* a0;
        int a0State = 0;
        QSerialPort::Directions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSerialPort_Directions, &a0, &a0State, sipType_QSerialPort_Directions, &a1, &a1State))
        {
            QSerialPort::Directions*sipRes;

            sipRes = new QSerialPort::Directions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QSerialPort_Directions,a0State);
            sipReleaseType(a1,sipType_QSerialPort_Directions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_Directions,NULL);
        }
    }

    {
        QSerialPort::Directions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSerialPort_Directions, &a0, &a0State, &a1))
        {
            QSerialPort::Directions*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QSerialPort::Directions(*a0 ^ a1);
#line 220 "/home/supermap/OpenThings/pyqt5/QtSerialPort/sipQtSerialPortQSerialPortDirections.cpp"
            sipReleaseType(a0,sipType_QSerialPort_Directions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_Directions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSerialPort_Directions___or__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Directions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPort::Directions* a0;
        int a0State = 0;
        QSerialPort::Directions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSerialPort_Directions, &a0, &a0State, sipType_QSerialPort_Directions, &a1, &a1State))
        {
            QSerialPort::Directions*sipRes;

            sipRes = new QSerialPort::Directions((*a0 | *a1));
            sipReleaseType(a0,sipType_QSerialPort_Directions,a0State);
            sipReleaseType(a1,sipType_QSerialPort_Directions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_Directions,NULL);
        }
    }

    {
        QSerialPort::Directions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSerialPort_Directions, &a0, &a0State, &a1))
        {
            QSerialPort::Directions*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QSerialPort::Directions(*a0 | a1);
#line 270 "/home/supermap/OpenThings/pyqt5/QtSerialPort/sipQtSerialPortQSerialPortDirections.cpp"
            sipReleaseType(a0,sipType_QSerialPort_Directions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_Directions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSerialPort,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSerialPort_Directions___int__(PyObject *);}
static PyObject *slot_QSerialPort_Directions___int__(PyObject *sipSelf)
{
    QSerialPort::Directions *sipCpp = reinterpret_cast<QSerialPort::Directions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_Directions));

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


extern "C" {static PyObject *slot_QSerialPort_Directions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Directions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSerialPort_Directions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSerialPort::Directions *sipCpp = reinterpret_cast<QSerialPort::Directions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_Directions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSerialPort::Directions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSerialPort_Directions, &a0, &a0State))
        {
            sipCpp->QSerialPort::Directions::operator^=(*a0);
            sipReleaseType(a0,sipType_QSerialPort_Directions,a0State);

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


extern "C" {static PyObject *slot_QSerialPort_Directions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Directions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSerialPort_Directions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSerialPort::Directions *sipCpp = reinterpret_cast<QSerialPort::Directions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_Directions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSerialPort::Directions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSerialPort_Directions, &a0, &a0State))
        {
            sipCpp->QSerialPort::Directions::operator|=(*a0);
            sipReleaseType(a0,sipType_QSerialPort_Directions,a0State);

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


extern "C" {static PyObject *slot_QSerialPort_Directions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Directions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSerialPort_Directions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSerialPort::Directions *sipCpp = reinterpret_cast<QSerialPort::Directions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSerialPort_Directions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QSerialPort::Directions::operator&=(a0);

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
extern "C" {static void *cast_QSerialPort_Directions(void *, const sipTypeDef *);}
static void *cast_QSerialPort_Directions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSerialPort_Directions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSerialPort_Directions(void *, int);}
static void release_QSerialPort_Directions(void *sipCppV,int)
{
    delete reinterpret_cast<QSerialPort::Directions *>(sipCppV);
}


extern "C" {static void assign_QSerialPort_Directions(void *, SIP_SSIZE_T, const void *);}
static void assign_QSerialPort_Directions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSerialPort::Directions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSerialPort::Directions *>(sipSrc);
}


extern "C" {static void *array_QSerialPort_Directions(SIP_SSIZE_T);}
static void *array_QSerialPort_Directions(SIP_SSIZE_T sipNrElem)
{
    return new QSerialPort::Directions[sipNrElem];
}


extern "C" {static void *copy_QSerialPort_Directions(const void *, SIP_SSIZE_T);}
static void *copy_QSerialPort_Directions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSerialPort::Directions(reinterpret_cast<const QSerialPort::Directions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSerialPort_Directions(sipSimpleWrapper *);}
static void dealloc_QSerialPort_Directions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSerialPort_Directions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSerialPort_Directions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSerialPort_Directions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSerialPort::Directions *sipCpp = 0;

    {
        const QSerialPort::Directions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSerialPort_Directions, &a0, &a0State))
        {
            sipCpp = new QSerialPort::Directions(*a0);
            sipReleaseType(const_cast<QSerialPort::Directions *>(a0),sipType_QSerialPort_Directions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QSerialPort::Directions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSerialPort::Directions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSerialPort_Directions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSerialPort_Directions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSerialPort::Directions **sipCppPtr = reinterpret_cast<QSerialPort::Directions **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSerialPort::Directions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSerialPort_Direction)) ||
            sipCanConvertToType(sipPy, sipType_QSerialPort_Directions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSerialPort_Direction)))
{
    *sipCppPtr = new QSerialPort::Directions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSerialPort::Directions *>(sipConvertToType(sipPy, sipType_QSerialPort_Directions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "/home/supermap/OpenThings/pyqt5/QtSerialPort/sipQtSerialPortQSerialPortDirections.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSerialPort_Directions[] = {
    {(void *)slot_QSerialPort_Directions___bool__, bool_slot},
    {(void *)slot_QSerialPort_Directions___ne__, ne_slot},
    {(void *)slot_QSerialPort_Directions___eq__, eq_slot},
    {(void *)slot_QSerialPort_Directions___invert__, invert_slot},
    {(void *)slot_QSerialPort_Directions___and__, and_slot},
    {(void *)slot_QSerialPort_Directions___xor__, xor_slot},
    {(void *)slot_QSerialPort_Directions___or__, or_slot},
    {(void *)slot_QSerialPort_Directions___int__, int_slot},
    {(void *)slot_QSerialPort_Directions___ixor__, ixor_slot},
    {(void *)slot_QSerialPort_Directions___ior__, ior_slot},
    {(void *)slot_QSerialPort_Directions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSerialPort_Directions, "\1QSerialPort.Directions(QSerialPort.Directions)\n"
    "QSerialPort.Directions(int)\n"
    "QSerialPort.Directions()");


pyqt5ClassTypeDef sipTypeDef_QtSerialPort_QSerialPort_Directions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSerialPort__Directions,
        {0}
    },
    {
        sipNameNr_Directions,
        {1, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSerialPort_Directions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSerialPort_Directions,
    init_type_QSerialPort_Directions,
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
    dealloc_QSerialPort_Directions,
    assign_QSerialPort_Directions,
    array_QSerialPort_Directions,
    copy_QSerialPort_Directions,
    release_QSerialPort_Directions,
    cast_QSerialPort_Directions,
    convertTo_QSerialPort_Directions,
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
