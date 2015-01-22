/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:44 2015
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

#include "sipAPIQtQml.h"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qqmlscriptstring.sip"
#include <qqmlscriptstring.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlScriptString.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlScriptString.cpp"


PyDoc_STRVAR(doc_QQmlScriptString_isEmpty, "QQmlScriptString.isEmpty() -> bool");

extern "C" {static PyObject *meth_QQmlScriptString_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QQmlScriptString_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlScriptString, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlScriptString, sipName_isEmpty, doc_QQmlScriptString_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlScriptString_isUndefinedLiteral, "QQmlScriptString.isUndefinedLiteral() -> bool");

extern "C" {static PyObject *meth_QQmlScriptString_isUndefinedLiteral(PyObject *, PyObject *);}
static PyObject *meth_QQmlScriptString_isUndefinedLiteral(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlScriptString, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isUndefinedLiteral();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlScriptString, sipName_isUndefinedLiteral, doc_QQmlScriptString_isUndefinedLiteral);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlScriptString_isNullLiteral, "QQmlScriptString.isNullLiteral() -> bool");

extern "C" {static PyObject *meth_QQmlScriptString_isNullLiteral(PyObject *, PyObject *);}
static PyObject *meth_QQmlScriptString_isNullLiteral(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlScriptString, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNullLiteral();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlScriptString, sipName_isNullLiteral, doc_QQmlScriptString_isNullLiteral);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlScriptString_stringLiteral, "QQmlScriptString.stringLiteral() -> str");

extern "C" {static PyObject *meth_QQmlScriptString_stringLiteral(PyObject *, PyObject *);}
static PyObject *meth_QQmlScriptString_stringLiteral(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlScriptString, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->stringLiteral());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlScriptString, sipName_stringLiteral, doc_QQmlScriptString_stringLiteral);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlScriptString_numberLiteral, "QQmlScriptString.numberLiteral() -> (float, bool)");

extern "C" {static PyObject *meth_QQmlScriptString_numberLiteral(PyObject *, PyObject *);}
static PyObject *meth_QQmlScriptString_numberLiteral(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        const QQmlScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlScriptString, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->numberLiteral(&a0);

            return sipBuildResult(0,"(db)",sipRes,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlScriptString, sipName_numberLiteral, doc_QQmlScriptString_numberLiteral);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlScriptString_booleanLiteral, "QQmlScriptString.booleanLiteral() -> (bool, bool)");

extern "C" {static PyObject *meth_QQmlScriptString_booleanLiteral(PyObject *, PyObject *);}
static PyObject *meth_QQmlScriptString_booleanLiteral(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        const QQmlScriptString *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlScriptString, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->booleanLiteral(&a0);

            return sipBuildResult(0,"(bb)",sipRes,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlScriptString, sipName_booleanLiteral, doc_QQmlScriptString_booleanLiteral);

    return NULL;
}


extern "C" {static PyObject *slot_QQmlScriptString___ne__(PyObject *,PyObject *);}
static PyObject *slot_QQmlScriptString___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QQmlScriptString *sipCpp = reinterpret_cast<QQmlScriptString *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQmlScriptString));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QQmlScriptString* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QQmlScriptString, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QQmlScriptString::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQml,ne_slot,sipType_QQmlScriptString,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QQmlScriptString___eq__(PyObject *,PyObject *);}
static PyObject *slot_QQmlScriptString___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QQmlScriptString *sipCpp = reinterpret_cast<QQmlScriptString *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQmlScriptString));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QQmlScriptString* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QQmlScriptString, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QQmlScriptString::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQml,eq_slot,sipType_QQmlScriptString,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQmlScriptString(void *, const sipTypeDef *);}
static void *cast_QQmlScriptString(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQmlScriptString)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlScriptString(void *, int);}
static void release_QQmlScriptString(void *sipCppV,int)
{
    delete reinterpret_cast<QQmlScriptString *>(sipCppV);
}


extern "C" {static void assign_QQmlScriptString(void *, SIP_SSIZE_T, const void *);}
static void assign_QQmlScriptString(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QQmlScriptString *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QQmlScriptString *>(sipSrc);
}


extern "C" {static void *array_QQmlScriptString(SIP_SSIZE_T);}
static void *array_QQmlScriptString(SIP_SSIZE_T sipNrElem)
{
    return new QQmlScriptString[sipNrElem];
}


extern "C" {static void *copy_QQmlScriptString(const void *, SIP_SSIZE_T);}
static void *copy_QQmlScriptString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QQmlScriptString(reinterpret_cast<const QQmlScriptString *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QQmlScriptString(sipSimpleWrapper *);}
static void dealloc_QQmlScriptString(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlScriptString(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QQmlScriptString(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlScriptString(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QQmlScriptString *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QQmlScriptString();

            return sipCpp;
        }
    }

    {
        const QQmlScriptString* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQmlScriptString, &a0))
        {
            sipCpp = new QQmlScriptString(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QQmlScriptString[] = {
    {(void *)slot_QQmlScriptString___ne__, ne_slot},
    {(void *)slot_QQmlScriptString___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QQmlScriptString[] = {
    {SIP_MLNAME_CAST(sipName_booleanLiteral), meth_QQmlScriptString_booleanLiteral, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlScriptString_booleanLiteral)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QQmlScriptString_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlScriptString_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isNullLiteral), meth_QQmlScriptString_isNullLiteral, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlScriptString_isNullLiteral)},
    {SIP_MLNAME_CAST(sipName_isUndefinedLiteral), meth_QQmlScriptString_isUndefinedLiteral, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlScriptString_isUndefinedLiteral)},
    {SIP_MLNAME_CAST(sipName_numberLiteral), meth_QQmlScriptString_numberLiteral, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlScriptString_numberLiteral)},
    {SIP_MLNAME_CAST(sipName_stringLiteral), meth_QQmlScriptString_stringLiteral, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlScriptString_stringLiteral)}
};

PyDoc_STRVAR(doc_QQmlScriptString, "\1QQmlScriptString()\n"
    "QQmlScriptString(QQmlScriptString)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlScriptString = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlScriptString,
        {0}
    },
    {
        sipNameNr_QQmlScriptString,
        {0, 0, 1},
        6, methods_QQmlScriptString,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlScriptString,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QQmlScriptString,
    init_type_QQmlScriptString,
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
    dealloc_QQmlScriptString,
    assign_QQmlScriptString,
    array_QQmlScriptString,
    copy_QQmlScriptString,
    release_QQmlScriptString,
    cast_QQmlScriptString,
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
