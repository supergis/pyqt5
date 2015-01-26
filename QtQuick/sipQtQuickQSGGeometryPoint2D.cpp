/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:47 2015
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

#include "sipAPIQtQuick.h"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 231 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGGeometryPoint2D.cpp"



PyDoc_STRVAR(doc_QSGGeometry_Point2D_set, "QSGGeometry.Point2D.set(float, float)");

extern "C" {static PyObject *meth_QSGGeometry_Point2D_set(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_Point2D_set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        float a1;
        QSGGeometry::Point2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bff", &sipSelf, sipType_QSGGeometry_Point2D, &sipCpp, &a0, &a1))
        {
            sipCpp->set(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Point2D, sipName_set, doc_QSGGeometry_Point2D_set);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGGeometry_Point2D(void *, const sipTypeDef *);}
static void *cast_QSGGeometry_Point2D(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSGGeometry_Point2D)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGGeometry_Point2D(void *, int);}
static void release_QSGGeometry_Point2D(void *sipCppV,int)
{
    delete reinterpret_cast<QSGGeometry::Point2D *>(sipCppV);
}


extern "C" {static void assign_QSGGeometry_Point2D(void *, SIP_SSIZE_T, const void *);}
static void assign_QSGGeometry_Point2D(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSGGeometry::Point2D *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSGGeometry::Point2D *>(sipSrc);
}


extern "C" {static void *array_QSGGeometry_Point2D(SIP_SSIZE_T);}
static void *array_QSGGeometry_Point2D(SIP_SSIZE_T sipNrElem)
{
    return new QSGGeometry::Point2D[sipNrElem];
}


extern "C" {static void *copy_QSGGeometry_Point2D(const void *, SIP_SSIZE_T);}
static void *copy_QSGGeometry_Point2D(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSGGeometry::Point2D(reinterpret_cast<const QSGGeometry::Point2D *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGGeometry_Point2D(sipSimpleWrapper *);}
static void dealloc_QSGGeometry_Point2D(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSGGeometry_Point2D(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSGGeometry_Point2D(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGGeometry_Point2D(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSGGeometry::Point2D *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSGGeometry::Point2D();

            return sipCpp;
        }
    }

    {
        const QSGGeometry::Point2D* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSGGeometry_Point2D, &a0))
        {
            sipCpp = new QSGGeometry::Point2D(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSGGeometry_Point2D[] = {
    {SIP_MLNAME_CAST(sipName_set), meth_QSGGeometry_Point2D_set, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_Point2D_set)}
};


extern "C" {static PyObject *varget_QSGGeometry_Point2D_x(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_Point2D_x(void *sipSelf, PyObject *, PyObject *)
{
    float sipVal;
    QSGGeometry::Point2D *sipCpp = reinterpret_cast<QSGGeometry::Point2D *>(sipSelf);

    sipVal = sipCpp->x;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static int varset_QSGGeometry_Point2D_x(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_Point2D_x(void *sipSelf, PyObject *sipPy, PyObject *)
{
    float sipVal;
    QSGGeometry::Point2D *sipCpp = reinterpret_cast<QSGGeometry::Point2D *>(sipSelf);

    sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->x = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QSGGeometry_Point2D_y(void *, PyObject *, PyObject *);}
static PyObject *varget_QSGGeometry_Point2D_y(void *sipSelf, PyObject *, PyObject *)
{
    float sipVal;
    QSGGeometry::Point2D *sipCpp = reinterpret_cast<QSGGeometry::Point2D *>(sipSelf);

    sipVal = sipCpp->y;

    return PyFloat_FromDouble((double)sipVal);
}


extern "C" {static int varset_QSGGeometry_Point2D_y(void *, PyObject *, PyObject *);}
static int varset_QSGGeometry_Point2D_y(void *sipSelf, PyObject *sipPy, PyObject *)
{
    float sipVal;
    QSGGeometry::Point2D *sipCpp = reinterpret_cast<QSGGeometry::Point2D *>(sipSelf);

    sipVal = (float)PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->y = sipVal;

    return 0;
}

sipVariableDef variables_QSGGeometry_Point2D[] = {
    {InstanceVariable, sipName_x, (PyMethodDef *)varget_QSGGeometry_Point2D_x, (PyMethodDef *)varset_QSGGeometry_Point2D_x, NULL, NULL},
    {InstanceVariable, sipName_y, (PyMethodDef *)varget_QSGGeometry_Point2D_y, (PyMethodDef *)varset_QSGGeometry_Point2D_y, NULL, NULL},
};

PyDoc_STRVAR(doc_QSGGeometry_Point2D, "\1QSGGeometry.Point2D()\n"
    "QSGGeometry.Point2D(QSGGeometry.Point2D)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGGeometry_Point2D = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGGeometry__Point2D,
        {0}
    },
    {
        sipNameNr_Point2D,
        {37, 255, 0},
        1, methods_QSGGeometry_Point2D,
        0, 0,
        2, variables_QSGGeometry_Point2D,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGGeometry_Point2D,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSGGeometry_Point2D,
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
    dealloc_QSGGeometry_Point2D,
    assign_QSGGeometry_Point2D,
    array_QSGGeometry_Point2D,
    copy_QSGGeometry_Point2D,
    release_QSGGeometry_Point2D,
    cast_QSGGeometry_Point2D,
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