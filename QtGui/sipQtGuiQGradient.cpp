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

#line 127 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQGradient.cpp"

#line 135 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#include <qpair.h>
#line 34 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQGradient.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 37 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQGradient.cpp"


PyDoc_STRVAR(doc_QGradient_type, "QGradient.type() -> QGradient.Type");

extern "C" {static PyObject *meth_QGradient_type(PyObject *, PyObject *);}
static PyObject *meth_QGradient_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGradient, &sipCpp))
        {
            QGradient::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QGradient_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGradient, sipName_type, doc_QGradient_type);

    return NULL;
}


PyDoc_STRVAR(doc_QGradient_spread, "QGradient.spread() -> QGradient.Spread");

extern "C" {static PyObject *meth_QGradient_spread(PyObject *, PyObject *);}
static PyObject *meth_QGradient_spread(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGradient, &sipCpp))
        {
            QGradient::Spread sipRes;

            sipRes = sipCpp->spread();

            return sipConvertFromEnum(sipRes,sipType_QGradient_Spread);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGradient, sipName_spread, doc_QGradient_spread);

    return NULL;
}


PyDoc_STRVAR(doc_QGradient_setColorAt, "QGradient.setColorAt(float, QColor)");

extern "C" {static PyObject *meth_QGradient_setColorAt(PyObject *, PyObject *);}
static PyObject *meth_QGradient_setColorAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        const QColor* a1;
        int a1State = 0;
        QGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BdJ1", &sipSelf, sipType_QGradient, &sipCpp, &a0, sipType_QColor, &a1, &a1State))
        {
            sipCpp->setColorAt(a0,*a1);
            sipReleaseType(const_cast<QColor *>(a1),sipType_QColor,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGradient, sipName_setColorAt, doc_QGradient_setColorAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGradient_setStops, "QGradient.setStops(list-of-tuple-of-float-QColor)");

extern "C" {static PyObject *meth_QGradient_setStops(PyObject *, PyObject *);}
static PyObject *meth_QGradient_setStops(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGradientStops* a0;
        int a0State = 0;
        QGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGradient, &sipCpp, sipType_QVector_0600QPair_2400_0100QColor,&a0, &a0State))
        {
            sipCpp->setStops(*a0);
            sipReleaseType(const_cast<QGradientStops *>(a0),sipType_QVector_0600QPair_2400_0100QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGradient, sipName_setStops, doc_QGradient_setStops);

    return NULL;
}


PyDoc_STRVAR(doc_QGradient_stops, "QGradient.stops() -> list-of-tuple-of-float-QColor");

extern "C" {static PyObject *meth_QGradient_stops(PyObject *, PyObject *);}
static PyObject *meth_QGradient_stops(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGradient, &sipCpp))
        {
            QGradientStops*sipRes;

            sipRes = new QGradientStops(sipCpp->stops());

            return sipConvertFromNewType(sipRes,sipType_QVector_0600QPair_2400_0100QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGradient, sipName_stops, doc_QGradient_stops);

    return NULL;
}


PyDoc_STRVAR(doc_QGradient_setSpread, "QGradient.setSpread(QGradient.Spread)");

extern "C" {static PyObject *meth_QGradient_setSpread(PyObject *, PyObject *);}
static PyObject *meth_QGradient_setSpread(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGradient::Spread a0;
        QGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGradient, &sipCpp, sipType_QGradient_Spread, &a0))
        {
            sipCpp->setSpread(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGradient, sipName_setSpread, doc_QGradient_setSpread);

    return NULL;
}


PyDoc_STRVAR(doc_QGradient_coordinateMode, "QGradient.coordinateMode() -> QGradient.CoordinateMode");

extern "C" {static PyObject *meth_QGradient_coordinateMode(PyObject *, PyObject *);}
static PyObject *meth_QGradient_coordinateMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGradient, &sipCpp))
        {
            QGradient::CoordinateMode sipRes;

            sipRes = sipCpp->coordinateMode();

            return sipConvertFromEnum(sipRes,sipType_QGradient_CoordinateMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGradient, sipName_coordinateMode, doc_QGradient_coordinateMode);

    return NULL;
}


PyDoc_STRVAR(doc_QGradient_setCoordinateMode, "QGradient.setCoordinateMode(QGradient.CoordinateMode)");

extern "C" {static PyObject *meth_QGradient_setCoordinateMode(PyObject *, PyObject *);}
static PyObject *meth_QGradient_setCoordinateMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGradient::CoordinateMode a0;
        QGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGradient, &sipCpp, sipType_QGradient_CoordinateMode, &a0))
        {
            sipCpp->setCoordinateMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGradient, sipName_setCoordinateMode, doc_QGradient_setCoordinateMode);

    return NULL;
}


extern "C" {static PyObject *slot_QGradient___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGradient___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGradient *sipCpp = reinterpret_cast<QGradient *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGradient));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGradient* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGradient, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGradient::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QGradient,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGradient___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGradient___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGradient *sipCpp = reinterpret_cast<QGradient *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGradient));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGradient* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGradient, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGradient::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QGradient,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGradient(void *, const sipTypeDef *);}
static void *cast_QGradient(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGradient)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGradient(void *, int);}
static void release_QGradient(void *sipCppV,int)
{
    delete reinterpret_cast<QGradient *>(sipCppV);
}


extern "C" {static void assign_QGradient(void *, SIP_SSIZE_T, const void *);}
static void assign_QGradient(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGradient *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGradient *>(sipSrc);
}


extern "C" {static void *array_QGradient(SIP_SSIZE_T);}
static void *array_QGradient(SIP_SSIZE_T sipNrElem)
{
    return new QGradient[sipNrElem];
}


extern "C" {static void *copy_QGradient(const void *, SIP_SSIZE_T);}
static void *copy_QGradient(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGradient(reinterpret_cast<const QGradient *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGradient(sipSimpleWrapper *);}
static void dealloc_QGradient(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGradient(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGradient(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGradient(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGradient *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGradient();

            return sipCpp;
        }
    }

    {
        const QGradient* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGradient, &a0))
        {
            sipCpp = new QGradient(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGradient[] = {
    {(void *)slot_QGradient___ne__, ne_slot},
    {(void *)slot_QGradient___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGradient[] = {
    {SIP_MLNAME_CAST(sipName_coordinateMode), meth_QGradient_coordinateMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QGradient_coordinateMode)},
    {SIP_MLNAME_CAST(sipName_setColorAt), meth_QGradient_setColorAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGradient_setColorAt)},
    {SIP_MLNAME_CAST(sipName_setCoordinateMode), meth_QGradient_setCoordinateMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QGradient_setCoordinateMode)},
    {SIP_MLNAME_CAST(sipName_setSpread), meth_QGradient_setSpread, METH_VARARGS, SIP_MLDOC_CAST(doc_QGradient_setSpread)},
    {SIP_MLNAME_CAST(sipName_setStops), meth_QGradient_setStops, METH_VARARGS, SIP_MLDOC_CAST(doc_QGradient_setStops)},
    {SIP_MLNAME_CAST(sipName_spread), meth_QGradient_spread, METH_VARARGS, SIP_MLDOC_CAST(doc_QGradient_spread)},
    {SIP_MLNAME_CAST(sipName_stops), meth_QGradient_stops, METH_VARARGS, SIP_MLDOC_CAST(doc_QGradient_stops)},
    {SIP_MLNAME_CAST(sipName_type), meth_QGradient_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QGradient_type)}
};

static sipEnumMemberDef enummembers_QGradient[] = {
    {sipName_ConicalGradient, static_cast<int>(QGradient::ConicalGradient), 52},
    {sipName_LinearGradient, static_cast<int>(QGradient::LinearGradient), 52},
    {sipName_LogicalMode, static_cast<int>(QGradient::LogicalMode), 50},
    {sipName_NoGradient, static_cast<int>(QGradient::NoGradient), 52},
    {sipName_ObjectBoundingMode, static_cast<int>(QGradient::ObjectBoundingMode), 50},
    {sipName_PadSpread, static_cast<int>(QGradient::PadSpread), 51},
    {sipName_RadialGradient, static_cast<int>(QGradient::RadialGradient), 52},
    {sipName_ReflectSpread, static_cast<int>(QGradient::ReflectSpread), 51},
    {sipName_RepeatSpread, static_cast<int>(QGradient::RepeatSpread), 51},
    {sipName_StretchToDeviceMode, static_cast<int>(QGradient::StretchToDeviceMode), 50},
};

PyDoc_STRVAR(doc_QGradient, "\1QGradient()\n"
    "QGradient(QGradient)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QGradient = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGradient,
        {0}
    },
    {
        sipNameNr_QGradient,
        {0, 0, 1},
        8, methods_QGradient,
        10, enummembers_QGradient,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGradient,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGradient,
    init_type_QGradient,
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
    dealloc_QGradient,
    assign_QGradient,
    array_QGradient,
    copy_QGradient,
    release_QGradient,
    cast_QGradient,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
