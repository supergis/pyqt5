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

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qjsondocument.sip"
#include <qjsondocument.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQJsonParseError.cpp"

#line 27 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQJsonParseError.cpp"


PyDoc_STRVAR(doc_QJsonParseError_errorString, "QJsonParseError.errorString() -> str");

extern "C" {static PyObject *meth_QJsonParseError_errorString(PyObject *, PyObject *);}
static PyObject *meth_QJsonParseError_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonParseError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonParseError, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonParseError, sipName_errorString, doc_QJsonParseError_errorString);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QJsonParseError(void *, const sipTypeDef *);}
static void *cast_QJsonParseError(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QJsonParseError)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QJsonParseError(void *, int);}
static void release_QJsonParseError(void *sipCppV,int)
{
    delete reinterpret_cast<QJsonParseError *>(sipCppV);
}


extern "C" {static void assign_QJsonParseError(void *, SIP_SSIZE_T, const void *);}
static void assign_QJsonParseError(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QJsonParseError *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QJsonParseError *>(sipSrc);
}


extern "C" {static void *array_QJsonParseError(SIP_SSIZE_T);}
static void *array_QJsonParseError(SIP_SSIZE_T sipNrElem)
{
    return new QJsonParseError[sipNrElem];
}


extern "C" {static void *copy_QJsonParseError(const void *, SIP_SSIZE_T);}
static void *copy_QJsonParseError(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QJsonParseError(reinterpret_cast<const QJsonParseError *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QJsonParseError(sipSimpleWrapper *);}
static void dealloc_QJsonParseError(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QJsonParseError(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QJsonParseError(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QJsonParseError(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QJsonParseError *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QJsonParseError();

            return sipCpp;
        }
    }

    {
        const QJsonParseError* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QJsonParseError, &a0))
        {
            sipCpp = new QJsonParseError(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QJsonParseError[] = {
    {SIP_MLNAME_CAST(sipName_errorString), meth_QJsonParseError_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonParseError_errorString)}
};

static sipEnumMemberDef enummembers_QJsonParseError[] = {
    {sipName_DeepNesting, static_cast<int>(QJsonParseError::DeepNesting), 93},
    {sipName_DocumentTooLarge, static_cast<int>(QJsonParseError::DocumentTooLarge), 93},
    {sipName_GarbageAtEnd, static_cast<int>(QJsonParseError::GarbageAtEnd), 93},
    {sipName_IllegalEscapeSequence, static_cast<int>(QJsonParseError::IllegalEscapeSequence), 93},
    {sipName_IllegalNumber, static_cast<int>(QJsonParseError::IllegalNumber), 93},
    {sipName_IllegalUTF8String, static_cast<int>(QJsonParseError::IllegalUTF8String), 93},
    {sipName_IllegalValue, static_cast<int>(QJsonParseError::IllegalValue), 93},
    {sipName_MissingNameSeparator, static_cast<int>(QJsonParseError::MissingNameSeparator), 93},
    {sipName_MissingObject, static_cast<int>(QJsonParseError::MissingObject), 93},
    {sipName_MissingValueSeparator, static_cast<int>(QJsonParseError::MissingValueSeparator), 93},
    {sipName_NoError, static_cast<int>(QJsonParseError::NoError), 93},
    {sipName_TerminationByNumber, static_cast<int>(QJsonParseError::TerminationByNumber), 93},
    {sipName_UnterminatedArray, static_cast<int>(QJsonParseError::UnterminatedArray), 93},
    {sipName_UnterminatedObject, static_cast<int>(QJsonParseError::UnterminatedObject), 93},
    {sipName_UnterminatedString, static_cast<int>(QJsonParseError::UnterminatedString), 93},
};


extern "C" {static PyObject *varget_QJsonParseError_error(void *, PyObject *, PyObject *);}
static PyObject *varget_QJsonParseError_error(void *sipSelf, PyObject *, PyObject *)
{
    QJsonParseError::ParseError sipVal;
    QJsonParseError *sipCpp = reinterpret_cast<QJsonParseError *>(sipSelf);

    sipVal = sipCpp->error;

    return sipConvertFromEnum(sipVal, sipType_QJsonParseError_ParseError);
}


extern "C" {static int varset_QJsonParseError_error(void *, PyObject *, PyObject *);}
static int varset_QJsonParseError_error(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QJsonParseError::ParseError sipVal;
    QJsonParseError *sipCpp = reinterpret_cast<QJsonParseError *>(sipSelf);

    sipVal = (QJsonParseError::ParseError)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->error = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QJsonParseError_offset(void *, PyObject *, PyObject *);}
static PyObject *varget_QJsonParseError_offset(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QJsonParseError *sipCpp = reinterpret_cast<QJsonParseError *>(sipSelf);

    sipVal = sipCpp->offset;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QJsonParseError_offset(void *, PyObject *, PyObject *);}
static int varset_QJsonParseError_offset(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QJsonParseError *sipCpp = reinterpret_cast<QJsonParseError *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->offset = sipVal;

    return 0;
}

sipVariableDef variables_QJsonParseError[] = {
    {InstanceVariable, sipName_error, (PyMethodDef *)varget_QJsonParseError_error, (PyMethodDef *)varset_QJsonParseError_error, NULL, NULL},
    {InstanceVariable, sipName_offset, (PyMethodDef *)varget_QJsonParseError_offset, (PyMethodDef *)varset_QJsonParseError_offset, NULL, NULL},
};

PyDoc_STRVAR(doc_QJsonParseError, "\1QJsonParseError()\n"
    "QJsonParseError(QJsonParseError)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QJsonParseError = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QJsonParseError,
        {0}
    },
    {
        sipNameNr_QJsonParseError,
        {0, 0, 1},
        1, methods_QJsonParseError,
        15, enummembers_QJsonParseError,
        2, variables_QJsonParseError,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QJsonParseError,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QJsonParseError,
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
    dealloc_QJsonParseError,
    assign_QJsonParseError,
    array_QJsonParseError,
    copy_QJsonParseError,
    release_QJsonParseError,
    cast_QJsonParseError,
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