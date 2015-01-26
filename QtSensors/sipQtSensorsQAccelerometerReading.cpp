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

#include "sipAPIQtSensors.h"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtSensors/qaccelerometer.sip"
#include <qaccelerometer.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsQAccelerometerReading.cpp"


PyDoc_STRVAR(doc_QAccelerometerReading_x, "QAccelerometerReading.x() -> float");

extern "C" {static PyObject *meth_QAccelerometerReading_x(PyObject *, PyObject *);}
static PyObject *meth_QAccelerometerReading_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAccelerometerReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccelerometerReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->x();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccelerometerReading, sipName_x, doc_QAccelerometerReading_x);

    return NULL;
}


PyDoc_STRVAR(doc_QAccelerometerReading_setX, "QAccelerometerReading.setX(float)");

extern "C" {static PyObject *meth_QAccelerometerReading_setX(PyObject *, PyObject *);}
static PyObject *meth_QAccelerometerReading_setX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QAccelerometerReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QAccelerometerReading, &sipCpp, &a0))
        {
            sipCpp->setX(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccelerometerReading, sipName_setX, doc_QAccelerometerReading_setX);

    return NULL;
}


PyDoc_STRVAR(doc_QAccelerometerReading_y, "QAccelerometerReading.y() -> float");

extern "C" {static PyObject *meth_QAccelerometerReading_y(PyObject *, PyObject *);}
static PyObject *meth_QAccelerometerReading_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAccelerometerReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccelerometerReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->y();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccelerometerReading, sipName_y, doc_QAccelerometerReading_y);

    return NULL;
}


PyDoc_STRVAR(doc_QAccelerometerReading_setY, "QAccelerometerReading.setY(float)");

extern "C" {static PyObject *meth_QAccelerometerReading_setY(PyObject *, PyObject *);}
static PyObject *meth_QAccelerometerReading_setY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QAccelerometerReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QAccelerometerReading, &sipCpp, &a0))
        {
            sipCpp->setY(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccelerometerReading, sipName_setY, doc_QAccelerometerReading_setY);

    return NULL;
}


PyDoc_STRVAR(doc_QAccelerometerReading_z, "QAccelerometerReading.z() -> float");

extern "C" {static PyObject *meth_QAccelerometerReading_z(PyObject *, PyObject *);}
static PyObject *meth_QAccelerometerReading_z(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAccelerometerReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAccelerometerReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->z();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccelerometerReading, sipName_z, doc_QAccelerometerReading_z);

    return NULL;
}


PyDoc_STRVAR(doc_QAccelerometerReading_setZ, "QAccelerometerReading.setZ(float)");

extern "C" {static PyObject *meth_QAccelerometerReading_setZ(PyObject *, PyObject *);}
static PyObject *meth_QAccelerometerReading_setZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QAccelerometerReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QAccelerometerReading, &sipCpp, &a0))
        {
            sipCpp->setZ(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAccelerometerReading, sipName_setZ, doc_QAccelerometerReading_setZ);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAccelerometerReading(void *, const sipTypeDef *);}
static void *cast_QAccelerometerReading(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAccelerometerReading)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorReading)->ctd_cast((QSensorReading *)(QAccelerometerReading *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAccelerometerReading(void *, int);}
static void release_QAccelerometerReading(void *sipCppV,int)
{
    QAccelerometerReading *sipCpp = reinterpret_cast<QAccelerometerReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QAccelerometerReading(sipSimpleWrapper *);}
static void dealloc_QAccelerometerReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAccelerometerReading(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAccelerometerReading[] = {{54, 255, 1}};


static PyMethodDef methods_QAccelerometerReading[] = {
    {SIP_MLNAME_CAST(sipName_setX), meth_QAccelerometerReading_setX, METH_VARARGS, SIP_MLDOC_CAST(doc_QAccelerometerReading_setX)},
    {SIP_MLNAME_CAST(sipName_setY), meth_QAccelerometerReading_setY, METH_VARARGS, SIP_MLDOC_CAST(doc_QAccelerometerReading_setY)},
    {SIP_MLNAME_CAST(sipName_setZ), meth_QAccelerometerReading_setZ, METH_VARARGS, SIP_MLDOC_CAST(doc_QAccelerometerReading_setZ)},
    {SIP_MLNAME_CAST(sipName_x), meth_QAccelerometerReading_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QAccelerometerReading_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QAccelerometerReading_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QAccelerometerReading_y)},
    {SIP_MLNAME_CAST(sipName_z), meth_QAccelerometerReading_z, METH_VARARGS, SIP_MLDOC_CAST(doc_QAccelerometerReading_z)}
};


pyqt5ClassTypeDef sipTypeDef_QtSensors_QAccelerometerReading = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAccelerometerReading,
        {0}
    },
    {
        sipNameNr_QAccelerometerReading,
        {0, 0, 1},
        6, methods_QAccelerometerReading,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QAccelerometerReading,
    0,
    0,
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
    dealloc_QAccelerometerReading,
    0,
    0,
    0,
    release_QAccelerometerReading,
    cast_QAccelerometerReading,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QAccelerometerReading::staticMetaObject,
    0,
    0,
    0
};