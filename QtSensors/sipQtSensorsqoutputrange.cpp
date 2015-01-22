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

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtSensors/qsensor.sip"
#include <qsensor.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtSensors/sipQtSensorsqoutputrange.cpp"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_qoutputrange(void *, const sipTypeDef *);}
static void *cast_qoutputrange(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_qoutputrange)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_qoutputrange(void *, int);}
static void release_qoutputrange(void *sipCppV,int)
{
    delete reinterpret_cast<qoutputrange *>(sipCppV);
}


extern "C" {static void assign_qoutputrange(void *, SIP_SSIZE_T, const void *);}
static void assign_qoutputrange(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<qoutputrange *>(sipDst)[sipDstIdx] = *reinterpret_cast<const qoutputrange *>(sipSrc);
}


extern "C" {static void *array_qoutputrange(SIP_SSIZE_T);}
static void *array_qoutputrange(SIP_SSIZE_T sipNrElem)
{
    return new qoutputrange[sipNrElem];
}


extern "C" {static void *copy_qoutputrange(const void *, SIP_SSIZE_T);}
static void *copy_qoutputrange(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new qoutputrange(reinterpret_cast<const qoutputrange *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_qoutputrange(sipSimpleWrapper *);}
static void dealloc_qoutputrange(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_qoutputrange(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_qoutputrange(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_qoutputrange(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    qoutputrange *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new qoutputrange();

            return sipCpp;
        }
    }

    {
        const qoutputrange* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_qoutputrange, &a0))
        {
            sipCpp = new qoutputrange(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_qoutputrange_accuracy(void *, PyObject *, PyObject *);}
static PyObject *varget_qoutputrange_accuracy(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    qoutputrange *sipCpp = reinterpret_cast<qoutputrange *>(sipSelf);

    sipVal = sipCpp->accuracy;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_qoutputrange_accuracy(void *, PyObject *, PyObject *);}
static int varset_qoutputrange_accuracy(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    qoutputrange *sipCpp = reinterpret_cast<qoutputrange *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->accuracy = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_qoutputrange_maximum(void *, PyObject *, PyObject *);}
static PyObject *varget_qoutputrange_maximum(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    qoutputrange *sipCpp = reinterpret_cast<qoutputrange *>(sipSelf);

    sipVal = sipCpp->maximum;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_qoutputrange_maximum(void *, PyObject *, PyObject *);}
static int varset_qoutputrange_maximum(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    qoutputrange *sipCpp = reinterpret_cast<qoutputrange *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->maximum = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_qoutputrange_minimum(void *, PyObject *, PyObject *);}
static PyObject *varget_qoutputrange_minimum(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    qoutputrange *sipCpp = reinterpret_cast<qoutputrange *>(sipSelf);

    sipVal = sipCpp->minimum;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_qoutputrange_minimum(void *, PyObject *, PyObject *);}
static int varset_qoutputrange_minimum(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    qoutputrange *sipCpp = reinterpret_cast<qoutputrange *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->minimum = sipVal;

    return 0;
}

sipVariableDef variables_qoutputrange[] = {
    {InstanceVariable, sipName_accuracy, (PyMethodDef *)varget_qoutputrange_accuracy, (PyMethodDef *)varset_qoutputrange_accuracy, NULL, NULL},
    {InstanceVariable, sipName_maximum, (PyMethodDef *)varget_qoutputrange_maximum, (PyMethodDef *)varset_qoutputrange_maximum, NULL, NULL},
    {InstanceVariable, sipName_minimum, (PyMethodDef *)varget_qoutputrange_minimum, (PyMethodDef *)varset_qoutputrange_minimum, NULL, NULL},
};

PyDoc_STRVAR(doc_qoutputrange, "\1qoutputrange()\n"
    "qoutputrange(qoutputrange)");


pyqt5ClassTypeDef sipTypeDef_QtSensors_qoutputrange = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_qoutputrange,
        {0}
    },
    {
        sipNameNr_qoutputrange,
        {0, 0, 1},
        0, 0,
        0, 0,
        3, variables_qoutputrange,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_qoutputrange,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_qoutputrange,
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
    dealloc_qoutputrange,
    assign_qoutputrange,
    array_qoutputrange,
    copy_qoutputrange,
    release_qoutputrange,
    cast_qoutputrange,
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
