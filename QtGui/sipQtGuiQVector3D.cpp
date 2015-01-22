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

#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qvector3d.sip"
#include <qvector3d.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQVector3D.cpp"

#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQVector3D.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQVector3D.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qvector2d.sip"
#include <qvector2d.h>
#line 39 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQVector3D.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qvector4d.sip"
#include <qvector4d.h>
#line 42 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQVector3D.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 45 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQVector3D.cpp"


PyDoc_STRVAR(doc_QVector3D_length, "QVector3D.length() -> float");

extern "C" {static PyObject *meth_QVector3D_length(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->length();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_length, doc_QVector3D_length);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_lengthSquared, "QVector3D.lengthSquared() -> float");

extern "C" {static PyObject *meth_QVector3D_lengthSquared(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_lengthSquared(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->lengthSquared();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_lengthSquared, doc_QVector3D_lengthSquared);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_normalized, "QVector3D.normalized() -> QVector3D");

extern "C" {static PyObject *meth_QVector3D_normalized(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_normalized(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D(sipCpp->normalized());

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_normalized, doc_QVector3D_normalized);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_normalize, "QVector3D.normalize()");

extern "C" {static PyObject *meth_QVector3D_normalize(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_normalize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            sipCpp->normalize();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_normalize, doc_QVector3D_normalize);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_dotProduct, "QVector3D.dotProduct(QVector3D, QVector3D) -> float");

extern "C" {static PyObject *meth_QVector3D_dotProduct(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_dotProduct(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QVector3D* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QVector3D, &a0, sipType_QVector3D, &a1))
        {
            float sipRes;

            sipRes = QVector3D::dotProduct(*a0,*a1);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_dotProduct, doc_QVector3D_dotProduct);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_crossProduct, "QVector3D.crossProduct(QVector3D, QVector3D) -> QVector3D");

extern "C" {static PyObject *meth_QVector3D_crossProduct(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_crossProduct(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QVector3D* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QVector3D, &a0, sipType_QVector3D, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D(QVector3D::crossProduct(*a0,*a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_crossProduct, doc_QVector3D_crossProduct);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_normal, "QVector3D.normal(QVector3D, QVector3D) -> QVector3D\n"
    "QVector3D.normal(QVector3D, QVector3D, QVector3D) -> QVector3D");

extern "C" {static PyObject *meth_QVector3D_normal(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_normal(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QVector3D* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QVector3D, &a0, sipType_QVector3D, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D(QVector3D::normal(*a0,*a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    {
        const QVector3D* a0;
        const QVector3D* a1;
        const QVector3D* a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9J9", sipType_QVector3D, &a0, sipType_QVector3D, &a1, sipType_QVector3D, &a2))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D(QVector3D::normal(*a0,*a1,*a2));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_normal, doc_QVector3D_normal);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_distanceToPlane, "QVector3D.distanceToPlane(QVector3D, QVector3D) -> float\n"
    "QVector3D.distanceToPlane(QVector3D, QVector3D, QVector3D) -> float");

extern "C" {static PyObject *meth_QVector3D_distanceToPlane(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_distanceToPlane(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QVector3D* a1;
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_QVector3D, &sipCpp, sipType_QVector3D, &a0, sipType_QVector3D, &a1))
        {
            float sipRes;

            sipRes = sipCpp->distanceToPlane(*a0,*a1);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const QVector3D* a0;
        const QVector3D* a1;
        const QVector3D* a2;
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9J9", &sipSelf, sipType_QVector3D, &sipCpp, sipType_QVector3D, &a0, sipType_QVector3D, &a1, sipType_QVector3D, &a2))
        {
            float sipRes;

            sipRes = sipCpp->distanceToPlane(*a0,*a1,*a2);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_distanceToPlane, doc_QVector3D_distanceToPlane);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_distanceToLine, "QVector3D.distanceToLine(QVector3D, QVector3D) -> float");

extern "C" {static PyObject *meth_QVector3D_distanceToLine(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_distanceToLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QVector3D* a1;
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_QVector3D, &sipCpp, sipType_QVector3D, &a0, sipType_QVector3D, &a1))
        {
            float sipRes;

            sipRes = sipCpp->distanceToLine(*a0,*a1);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_distanceToLine, doc_QVector3D_distanceToLine);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_toVector2D, "QVector3D.toVector2D() -> QVector2D");

extern "C" {static PyObject *meth_QVector3D_toVector2D(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_toVector2D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            QVector2D*sipRes;

            sipRes = new QVector2D(sipCpp->toVector2D());

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_toVector2D, doc_QVector3D_toVector2D);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_toVector4D, "QVector3D.toVector4D() -> QVector4D");

extern "C" {static PyObject *meth_QVector3D_toVector4D(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_toVector4D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            QVector4D*sipRes;

            sipRes = new QVector4D(sipCpp->toVector4D());

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_toVector4D, doc_QVector3D_toVector4D);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_isNull, "QVector3D.isNull() -> bool");

extern "C" {static PyObject *meth_QVector3D_isNull(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_isNull, doc_QVector3D_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_x, "QVector3D.x() -> float");

extern "C" {static PyObject *meth_QVector3D_x(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->x();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_x, doc_QVector3D_x);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_y, "QVector3D.y() -> float");

extern "C" {static PyObject *meth_QVector3D_y(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->y();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_y, doc_QVector3D_y);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_z, "QVector3D.z() -> float");

extern "C" {static PyObject *meth_QVector3D_z(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_z(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->z();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_z, doc_QVector3D_z);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_setX, "QVector3D.setX(float)");

extern "C" {static PyObject *meth_QVector3D_setX(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_setX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QVector3D, &sipCpp, &a0))
        {
            sipCpp->setX(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_setX, doc_QVector3D_setX);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_setY, "QVector3D.setY(float)");

extern "C" {static PyObject *meth_QVector3D_setY(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_setY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QVector3D, &sipCpp, &a0))
        {
            sipCpp->setY(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_setY, doc_QVector3D_setY);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_setZ, "QVector3D.setZ(float)");

extern "C" {static PyObject *meth_QVector3D_setZ(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_setZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QVector3D, &sipCpp, &a0))
        {
            sipCpp->setZ(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_setZ, doc_QVector3D_setZ);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_toPoint, "QVector3D.toPoint() -> QPoint");

extern "C" {static PyObject *meth_QVector3D_toPoint(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_toPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->toPoint());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_toPoint, doc_QVector3D_toPoint);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_toPointF, "QVector3D.toPointF() -> QPointF");

extern "C" {static PyObject *meth_QVector3D_toPointF(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_toPointF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector3D, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->toPointF());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_toPointF, doc_QVector3D_toPointF);

    return NULL;
}


PyDoc_STRVAR(doc_QVector3D_distanceToPoint, "QVector3D.distanceToPoint(QVector3D) -> float");

extern "C" {static PyObject *meth_QVector3D_distanceToPoint(PyObject *, PyObject *);}
static PyObject *meth_QVector3D_distanceToPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QVector3D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVector3D, &sipCpp, sipType_QVector3D, &a0))
        {
            float sipRes;

            sipRes = sipCpp->distanceToPoint(*a0);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName_distanceToPoint, doc_QVector3D_distanceToPoint);

    return NULL;
}


extern "C" {static PyObject *slot_QVector3D___eq__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector3D, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QVector3D,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVector3D___div__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        float a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9f", sipType_QVector3D, &a0, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector3D___add__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QVector3D* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector3D, &a0, sipType_QVector3D, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector3D___sub__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QVector3D* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector3D, &a0, sipType_QVector3D, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector3D___mul__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        const QMatrix4x4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector3D, &a0, sipType_QMatrix4x4, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    {
        float a0;
        const QVector3D* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "fJ9", &a0, sipType_QVector3D, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D((a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    {
        const QVector3D* a0;
        float a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9f", sipType_QVector3D, &a0, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    {
        const QVector3D* a0;
        const QVector3D* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector3D, &a0, sipType_QVector3D, &a1))
        {
            QVector3D*sipRes;

            sipRes = new QVector3D((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector3D___neg__(PyObject *);}
static PyObject *slot_QVector3D___neg__(PyObject *sipSelf)
{
    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;


    {
        {
            QVector3D*sipRes;

            sipRes = new QVector3D(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QVector3D___ne__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector3D, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QVector3D,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVector3D___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            float sipRes;

            sipRes = (*sipCpp)[a0];

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector3D, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static PyObject *slot_QVector3D___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector3D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp->QVector3D::operator/=(a0);

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


extern "C" {static PyObject *slot_QVector3D___imul__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector3D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        float a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1f", &a0))
        {
            sipCpp->QVector3D::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const QVector3D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector3D, &a0))
        {
            sipCpp->QVector3D::operator*=(*a0);

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


extern "C" {static PyObject *slot_QVector3D___isub__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector3D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector3D, &a0))
        {
            sipCpp->QVector3D::operator-=(*a0);

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


extern "C" {static PyObject *slot_QVector3D___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QVector3D___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector3D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector3D, &a0))
        {
            sipCpp->QVector3D::operator+=(*a0);

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


extern "C" {static PyObject *slot_QVector3D___repr__(PyObject *);}
static PyObject *slot_QVector3D___repr__(PyObject *sipSelf)
{
    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector3D));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 48 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qvector3d.sip"
        PyObject *x = PyFloat_FromDouble(sipCpp->x());
        PyObject *y = PyFloat_FromDouble(sipCpp->y());
        PyObject *z = PyFloat_FromDouble(sipCpp->z());
        
        if (x && y && z)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt5.QtGui.QVector3D(%R, %R, %R)", x, y,
                    z);
        #else
            sipRes = PyString_FromString("PyQt5.QtGui.QVector3D(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(x));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(y));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(z));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        }
        
        Py_XDECREF(x);
        Py_XDECREF(y);
        Py_XDECREF(z);
#line 1135 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQVector3D.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QVector3D(void *, const sipTypeDef *);}
static void *cast_QVector3D(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QVector3D)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QVector3D(void *, int);}
static void release_QVector3D(void *sipCppV,int)
{
    delete reinterpret_cast<QVector3D *>(sipCppV);
}


extern "C" {static PyObject *pickle_QVector3D(void *);}
static PyObject *pickle_QVector3D(void *sipCppV)
{
    QVector3D *sipCpp = reinterpret_cast<QVector3D *>(sipCppV);
    PyObject *sipRes;

#line 34 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qvector3d.sip"
    sipRes = Py_BuildValue((char *)"ddd", (double)sipCpp->x(), (double)sipCpp->y(),
            (double)sipCpp->z());
#line 1173 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQVector3D.cpp"

    return sipRes;
}


extern "C" {static void assign_QVector3D(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector3D(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector3D *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector3D *>(sipSrc);
}


extern "C" {static void *array_QVector3D(SIP_SSIZE_T);}
static void *array_QVector3D(SIP_SSIZE_T sipNrElem)
{
    return new QVector3D[sipNrElem];
}


extern "C" {static void *copy_QVector3D(const void *, SIP_SSIZE_T);}
static void *copy_QVector3D(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector3D(reinterpret_cast<const QVector3D *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVector3D(sipSimpleWrapper *);}
static void dealloc_QVector3D(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QVector3D(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QVector3D(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QVector3D(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QVector3D *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QVector3D();

            return sipCpp;
        }
    }

    {
        float a0;
        float a1;
        float a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "fff", &a0, &a1, &a2))
        {
            sipCpp = new QVector3D(a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const QPoint* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPoint, &a0))
        {
            sipCpp = new QVector3D(*a0);

            return sipCpp;
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QPointF, &a0, &a0State))
        {
            sipCpp = new QVector3D(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipCpp;
        }
    }

    {
        const QVector2D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector2D, &a0))
        {
            sipCpp = new QVector3D(*a0);

            return sipCpp;
        }
    }

    {
        const QVector2D* a0;
        float a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9f", sipType_QVector2D, &a0, &a1))
        {
            sipCpp = new QVector3D(*a0,a1);

            return sipCpp;
        }
    }

    {
        const QVector4D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector4D, &a0))
        {
            sipCpp = new QVector3D(*a0);

            return sipCpp;
        }
    }

    {
        const QVector3D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector3D, &a0))
        {
            sipCpp = new QVector3D(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QVector3D[] = {
    {(void *)slot_QVector3D___eq__, eq_slot},
    {(void *)slot_QVector3D___div__, div_slot},
    {(void *)slot_QVector3D___add__, add_slot},
    {(void *)slot_QVector3D___sub__, sub_slot},
    {(void *)slot_QVector3D___mul__, mul_slot},
    {(void *)slot_QVector3D___neg__, neg_slot},
    {(void *)slot_QVector3D___ne__, ne_slot},
    {(void *)slot_QVector3D___getitem__, getitem_slot},
    {(void *)slot_QVector3D___idiv__, idiv_slot},
    {(void *)slot_QVector3D___imul__, imul_slot},
    {(void *)slot_QVector3D___isub__, isub_slot},
    {(void *)slot_QVector3D___iadd__, iadd_slot},
    {(void *)slot_QVector3D___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QVector3D[] = {
    {SIP_MLNAME_CAST(sipName_crossProduct), meth_QVector3D_crossProduct, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_crossProduct)},
    {SIP_MLNAME_CAST(sipName_distanceToLine), meth_QVector3D_distanceToLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_distanceToLine)},
    {SIP_MLNAME_CAST(sipName_distanceToPlane), meth_QVector3D_distanceToPlane, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_distanceToPlane)},
    {SIP_MLNAME_CAST(sipName_distanceToPoint), meth_QVector3D_distanceToPoint, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_distanceToPoint)},
    {SIP_MLNAME_CAST(sipName_dotProduct), meth_QVector3D_dotProduct, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_dotProduct)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QVector3D_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_isNull)},
    {SIP_MLNAME_CAST(sipName_length), meth_QVector3D_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_length)},
    {SIP_MLNAME_CAST(sipName_lengthSquared), meth_QVector3D_lengthSquared, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_lengthSquared)},
    {SIP_MLNAME_CAST(sipName_normal), meth_QVector3D_normal, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_normal)},
    {SIP_MLNAME_CAST(sipName_normalize), meth_QVector3D_normalize, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_normalize)},
    {SIP_MLNAME_CAST(sipName_normalized), meth_QVector3D_normalized, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_normalized)},
    {SIP_MLNAME_CAST(sipName_setX), meth_QVector3D_setX, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_setX)},
    {SIP_MLNAME_CAST(sipName_setY), meth_QVector3D_setY, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_setY)},
    {SIP_MLNAME_CAST(sipName_setZ), meth_QVector3D_setZ, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_setZ)},
    {SIP_MLNAME_CAST(sipName_toPoint), meth_QVector3D_toPoint, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_toPoint)},
    {SIP_MLNAME_CAST(sipName_toPointF), meth_QVector3D_toPointF, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_toPointF)},
    {SIP_MLNAME_CAST(sipName_toVector2D), meth_QVector3D_toVector2D, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_toVector2D)},
    {SIP_MLNAME_CAST(sipName_toVector4D), meth_QVector3D_toVector4D, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_toVector4D)},
    {SIP_MLNAME_CAST(sipName_x), meth_QVector3D_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QVector3D_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_y)},
    {SIP_MLNAME_CAST(sipName_z), meth_QVector3D_z, METH_VARARGS, SIP_MLDOC_CAST(doc_QVector3D_z)}
};

PyDoc_STRVAR(doc_QVector3D, "\1QVector3D()\n"
    "QVector3D(float, float, float)\n"
    "QVector3D(QPoint)\n"
    "QVector3D(QPointF)\n"
    "QVector3D(QVector2D)\n"
    "QVector3D(QVector2D, float)\n"
    "QVector3D(QVector4D)\n"
    "QVector3D(QVector3D)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QVector3D = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QVector3D,
        {0}
    },
    {
        sipNameNr_QVector3D,
        {0, 0, 1},
        21, methods_QVector3D,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QVector3D,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QVector3D,
    init_type_QVector3D,
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
    dealloc_QVector3D,
    assign_QVector3D,
    array_QVector3D,
    copy_QVector3D,
    release_QVector3D,
    cast_QVector3D,
    0,
    0,
    0,
    pickle_QVector3D,
    0,
    0
},
    0,
    0,
    0,
    0
};
