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

#line 202 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQMetaClassInfo.cpp"



PyDoc_STRVAR(doc_QMetaClassInfo_name, "QMetaClassInfo.name() -> str");

extern "C" {static PyObject *meth_QMetaClassInfo_name(PyObject *, PyObject *);}
static PyObject *meth_QMetaClassInfo_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaClassInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaClassInfo, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->name();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaClassInfo, sipName_name, doc_QMetaClassInfo_name);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaClassInfo_value, "QMetaClassInfo.value() -> str");

extern "C" {static PyObject *meth_QMetaClassInfo_value(PyObject *, PyObject *);}
static PyObject *meth_QMetaClassInfo_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaClassInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaClassInfo, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->value();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaClassInfo, sipName_value, doc_QMetaClassInfo_value);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMetaClassInfo(void *, const sipTypeDef *);}
static void *cast_QMetaClassInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMetaClassInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaClassInfo(void *, int);}
static void release_QMetaClassInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QMetaClassInfo *>(sipCppV);
}


extern "C" {static void assign_QMetaClassInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QMetaClassInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMetaClassInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMetaClassInfo *>(sipSrc);
}


extern "C" {static void *array_QMetaClassInfo(SIP_SSIZE_T);}
static void *array_QMetaClassInfo(SIP_SSIZE_T sipNrElem)
{
    return new QMetaClassInfo[sipNrElem];
}


extern "C" {static void *copy_QMetaClassInfo(const void *, SIP_SSIZE_T);}
static void *copy_QMetaClassInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMetaClassInfo(reinterpret_cast<const QMetaClassInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaClassInfo(sipSimpleWrapper *);}
static void dealloc_QMetaClassInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMetaClassInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMetaClassInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMetaClassInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMetaClassInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QMetaClassInfo();

            return sipCpp;
        }
    }

    {
        const QMetaClassInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMetaClassInfo, &a0))
        {
            sipCpp = new QMetaClassInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMetaClassInfo[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QMetaClassInfo_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaClassInfo_name)},
    {SIP_MLNAME_CAST(sipName_value), meth_QMetaClassInfo_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaClassInfo_value)}
};

PyDoc_STRVAR(doc_QMetaClassInfo, "\1QMetaClassInfo()\n"
    "QMetaClassInfo(QMetaClassInfo)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QMetaClassInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMetaClassInfo,
        {0}
    },
    {
        sipNameNr_QMetaClassInfo,
        {0, 0, 1},
        2, methods_QMetaClassInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMetaClassInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMetaClassInfo,
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
    dealloc_QMetaClassInfo,
    assign_QMetaClassInfo,
    array_QMetaClassInfo,
    copy_QMetaClassInfo,
    release_QMetaClassInfo,
    cast_QMetaClassInfo,
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
