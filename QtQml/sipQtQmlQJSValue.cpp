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

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qjsvalue.sip"
#include <qjsvalue.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQJSValue.cpp"

#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQJSValue.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQJSValue.cpp"
#line 299 "sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQJSValue.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQJSValue.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQJSValue.cpp"


PyDoc_STRVAR(doc_QJSValue_isBool, "QJSValue.isBool() -> bool");

extern "C" {static PyObject *meth_QJSValue_isBool(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isBool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isBool();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isBool, doc_QJSValue_isBool);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isNumber, "QJSValue.isNumber() -> bool");

extern "C" {static PyObject *meth_QJSValue_isNumber(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNumber();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isNumber, doc_QJSValue_isNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isNull, "QJSValue.isNull() -> bool");

extern "C" {static PyObject *meth_QJSValue_isNull(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isNull, doc_QJSValue_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isString, "QJSValue.isString() -> bool");

extern "C" {static PyObject *meth_QJSValue_isString(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isString();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isString, doc_QJSValue_isString);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isUndefined, "QJSValue.isUndefined() -> bool");

extern "C" {static PyObject *meth_QJSValue_isUndefined(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isUndefined(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isUndefined();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isUndefined, doc_QJSValue_isUndefined);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isVariant, "QJSValue.isVariant() -> bool");

extern "C" {static PyObject *meth_QJSValue_isVariant(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isVariant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isVariant();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isVariant, doc_QJSValue_isVariant);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isQObject, "QJSValue.isQObject() -> bool");

extern "C" {static PyObject *meth_QJSValue_isQObject(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isQObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isQObject();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isQObject, doc_QJSValue_isQObject);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isObject, "QJSValue.isObject() -> bool");

extern "C" {static PyObject *meth_QJSValue_isObject(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isObject();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isObject, doc_QJSValue_isObject);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isDate, "QJSValue.isDate() -> bool");

extern "C" {static PyObject *meth_QJSValue_isDate(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDate();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isDate, doc_QJSValue_isDate);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isRegExp, "QJSValue.isRegExp() -> bool");

extern "C" {static PyObject *meth_QJSValue_isRegExp(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isRegExp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isRegExp();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isRegExp, doc_QJSValue_isRegExp);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isArray, "QJSValue.isArray() -> bool");

extern "C" {static PyObject *meth_QJSValue_isArray(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isArray();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isArray, doc_QJSValue_isArray);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isError, "QJSValue.isError() -> bool");

extern "C" {static PyObject *meth_QJSValue_isError(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isError();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isError, doc_QJSValue_isError);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_toString, "QJSValue.toString() -> str");

extern "C" {static PyObject *meth_QJSValue_toString(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_toString, doc_QJSValue_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_toNumber, "QJSValue.toNumber() -> float");

extern "C" {static PyObject *meth_QJSValue_toNumber(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_toNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->toNumber();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_toNumber, doc_QJSValue_toNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_toInt, "QJSValue.toInt() -> int");

extern "C" {static PyObject *meth_QJSValue_toInt(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_toInt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            qint32 sipRes;

            sipRes = sipCpp->toInt();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_toInt, doc_QJSValue_toInt);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_toUInt, "QJSValue.toUInt() -> int");

extern "C" {static PyObject *meth_QJSValue_toUInt(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_toUInt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            quint32 sipRes;

            sipRes = sipCpp->toUInt();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_toUInt, doc_QJSValue_toUInt);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_toBool, "QJSValue.toBool() -> bool");

extern "C" {static PyObject *meth_QJSValue_toBool(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_toBool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->toBool();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_toBool, doc_QJSValue_toBool);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_toVariant, "QJSValue.toVariant() -> QVariant");

extern "C" {static PyObject *meth_QJSValue_toVariant(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_toVariant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->toVariant());

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_toVariant, doc_QJSValue_toVariant);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_toQObject, "QJSValue.toQObject() -> QObject");

extern "C" {static PyObject *meth_QJSValue_toQObject(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_toQObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->toQObject();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_toQObject, doc_QJSValue_toQObject);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_toDateTime, "QJSValue.toDateTime() -> QDateTime");

extern "C" {static PyObject *meth_QJSValue_toDateTime(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_toDateTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            QDateTime*sipRes;

            sipRes = new QDateTime(sipCpp->toDateTime());

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_toDateTime, doc_QJSValue_toDateTime);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_equals, "QJSValue.equals(QJSValue) -> bool");

extern "C" {static PyObject *meth_QJSValue_equals(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_equals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue* a0;
        int a0State = 0;
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QJSValue, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->equals(*a0);
            sipReleaseType(const_cast<QJSValue *>(a0),sipType_QJSValue,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_equals, doc_QJSValue_equals);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_strictlyEquals, "QJSValue.strictlyEquals(QJSValue) -> bool");

extern "C" {static PyObject *meth_QJSValue_strictlyEquals(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_strictlyEquals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue* a0;
        int a0State = 0;
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QJSValue, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->strictlyEquals(*a0);
            sipReleaseType(const_cast<QJSValue *>(a0),sipType_QJSValue,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_strictlyEquals, doc_QJSValue_strictlyEquals);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_prototype, "QJSValue.prototype() -> QJSValue");

extern "C" {static PyObject *meth_QJSValue_prototype(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_prototype(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->prototype());

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_prototype, doc_QJSValue_prototype);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_setPrototype, "QJSValue.setPrototype(QJSValue)");

extern "C" {static PyObject *meth_QJSValue_setPrototype(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_setPrototype(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue* a0;
        int a0State = 0;
        QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QJSValue, &a0, &a0State))
        {
            sipCpp->setPrototype(*a0);
            sipReleaseType(const_cast<QJSValue *>(a0),sipType_QJSValue,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_setPrototype, doc_QJSValue_setPrototype);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_property, "QJSValue.property(str) -> QJSValue\n"
    "QJSValue.property(int) -> QJSValue");

extern "C" {static PyObject *meth_QJSValue_property(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_property(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->property(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    {
        quint32 a0;
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QJSValue, &sipCpp, &a0))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->property(a0));

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_property, doc_QJSValue_property);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_setProperty, "QJSValue.setProperty(str, QJSValue)\n"
    "QJSValue.setProperty(int, QJSValue)");

extern "C" {static PyObject *meth_QJSValue_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QJSValue* a1;
        int a1State = 0;
        QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QString,&a0, &a0State, sipType_QJSValue, &a1, &a1State))
        {
            sipCpp->setProperty(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QJSValue *>(a1),sipType_QJSValue,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        quint32 a0;
        const QJSValue* a1;
        int a1State = 0;
        QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BuJ1", &sipSelf, sipType_QJSValue, &sipCpp, &a0, sipType_QJSValue, &a1, &a1State))
        {
            sipCpp->setProperty(a0,*a1);
            sipReleaseType(const_cast<QJSValue *>(a1),sipType_QJSValue,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_setProperty, doc_QJSValue_setProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_hasProperty, "QJSValue.hasProperty(str) -> bool");

extern "C" {static PyObject *meth_QJSValue_hasProperty(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_hasProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->hasProperty(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_hasProperty, doc_QJSValue_hasProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_hasOwnProperty, "QJSValue.hasOwnProperty(str) -> bool");

extern "C" {static PyObject *meth_QJSValue_hasOwnProperty(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_hasOwnProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->hasOwnProperty(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_hasOwnProperty, doc_QJSValue_hasOwnProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_deleteProperty, "QJSValue.deleteProperty(str) -> bool");

extern "C" {static PyObject *meth_QJSValue_deleteProperty(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_deleteProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->deleteProperty(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_deleteProperty, doc_QJSValue_deleteProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_isCallable, "QJSValue.isCallable() -> bool");

extern "C" {static PyObject *meth_QJSValue_isCallable(PyObject *, PyObject *);}
static PyObject *meth_QJSValue_isCallable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJSValue, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCallable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_isCallable, doc_QJSValue_isCallable);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_call, "QJSValue.call(list-of-QJSValue args=QList&lt;QJSValue&gt;()) -> QJSValue");

extern "C" {static PyObject *meth_QJSValue_call(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJSValue_call(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValueList& a0def = QList<QJSValue>();
        const QJSValueList* a0 = &a0def;
        int a0State = 0;
        QJSValue *sipCpp;

        static const char *sipKwdList[] = {
            sipName_args,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QList_0100QJSValue,&a0, &a0State))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->call(*a0));
            sipReleaseType(const_cast<QJSValueList *>(a0),sipType_QList_0100QJSValue,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_call, doc_QJSValue_call);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_callWithInstance, "QJSValue.callWithInstance(QJSValue, list-of-QJSValue args=QList&lt;QJSValue&gt;()) -> QJSValue");

extern "C" {static PyObject *meth_QJSValue_callWithInstance(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJSValue_callWithInstance(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValue* a0;
        int a0State = 0;
        const QJSValueList& a1def = QList<QJSValue>();
        const QJSValueList* a1 = &a1def;
        int a1State = 0;
        QJSValue *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_args,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QJSValue, &a0, &a0State, sipType_QList_0100QJSValue,&a1, &a1State))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->callWithInstance(*a0,*a1));
            sipReleaseType(const_cast<QJSValue *>(a0),sipType_QJSValue,a0State);
            sipReleaseType(const_cast<QJSValueList *>(a1),sipType_QList_0100QJSValue,a1State);

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_callWithInstance, doc_QJSValue_callWithInstance);

    return NULL;
}


PyDoc_STRVAR(doc_QJSValue_callAsConstructor, "QJSValue.callAsConstructor(list-of-QJSValue args=QList&lt;QJSValue&gt;()) -> QJSValue");

extern "C" {static PyObject *meth_QJSValue_callAsConstructor(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJSValue_callAsConstructor(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QJSValueList& a0def = QList<QJSValue>();
        const QJSValueList* a0 = &a0def;
        int a0State = 0;
        QJSValue *sipCpp;

        static const char *sipKwdList[] = {
            sipName_args,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QJSValue, &sipCpp, sipType_QList_0100QJSValue,&a0, &a0State))
        {
            QJSValue*sipRes;

            sipRes = new QJSValue(sipCpp->callAsConstructor(*a0));
            sipReleaseType(const_cast<QJSValueList *>(a0),sipType_QList_0100QJSValue,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJSValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJSValue, sipName_callAsConstructor, doc_QJSValue_callAsConstructor);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QJSValue(void *, const sipTypeDef *);}
static void *cast_QJSValue(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QJSValue)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QJSValue(void *, int);}
static void release_QJSValue(void *sipCppV,int)
{
    delete reinterpret_cast<QJSValue *>(sipCppV);
}


extern "C" {static void assign_QJSValue(void *, SIP_SSIZE_T, const void *);}
static void assign_QJSValue(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QJSValue *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QJSValue *>(sipSrc);
}


extern "C" {static void *array_QJSValue(SIP_SSIZE_T);}
static void *array_QJSValue(SIP_SSIZE_T sipNrElem)
{
    return new QJSValue[sipNrElem];
}


extern "C" {static void *copy_QJSValue(const void *, SIP_SSIZE_T);}
static void *copy_QJSValue(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QJSValue(reinterpret_cast<const QJSValue *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QJSValue(sipSimpleWrapper *);}
static void dealloc_QJSValue(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QJSValue(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QJSValue(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QJSValue(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QJSValue *sipCpp = 0;

    {
        QJSValue::SpecialValue a0 = QJSValue::UndefinedValue;

        static const char *sipKwdList[] = {
            sipName_value,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|XE", sipType_QJSValue_SpecialValue, &a0))
        {
            sipCpp = new QJSValue(a0);

            return sipCpp;
        }
    }

    {
        const QJSValue* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QJSValue, &a0, &a0State))
        {
            sipCpp = new QJSValue(*a0);
            sipReleaseType(const_cast<QJSValue *>(a0),sipType_QJSValue,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QJSValue(PyObject *, void **, int *, PyObject *);}
static int convertTo_QJSValue(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QJSValue **sipCppPtr = reinterpret_cast<QJSValue **>(sipCppPtrV);

#line 32 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qjsvalue.sip"
if (!sipIsErr)
    return qpyqml_canConvertTo_QJSValue(sipPy);

return qpyqml_convertTo_QJSValue(sipPy, sipTransferObj, sipCppPtr, sipIsErr);
#line 1121 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQJSValue.cpp"
}


static PyMethodDef methods_QJSValue[] = {
    {SIP_MLNAME_CAST(sipName_call), (PyCFunction)meth_QJSValue_call, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QJSValue_call)},
    {SIP_MLNAME_CAST(sipName_callAsConstructor), (PyCFunction)meth_QJSValue_callAsConstructor, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QJSValue_callAsConstructor)},
    {SIP_MLNAME_CAST(sipName_callWithInstance), (PyCFunction)meth_QJSValue_callWithInstance, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QJSValue_callWithInstance)},
    {SIP_MLNAME_CAST(sipName_deleteProperty), meth_QJSValue_deleteProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_deleteProperty)},
    {SIP_MLNAME_CAST(sipName_equals), meth_QJSValue_equals, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_equals)},
    {SIP_MLNAME_CAST(sipName_hasOwnProperty), meth_QJSValue_hasOwnProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_hasOwnProperty)},
    {SIP_MLNAME_CAST(sipName_hasProperty), meth_QJSValue_hasProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_hasProperty)},
    {SIP_MLNAME_CAST(sipName_isArray), meth_QJSValue_isArray, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isArray)},
    {SIP_MLNAME_CAST(sipName_isBool), meth_QJSValue_isBool, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isBool)},
    {SIP_MLNAME_CAST(sipName_isCallable), meth_QJSValue_isCallable, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isCallable)},
    {SIP_MLNAME_CAST(sipName_isDate), meth_QJSValue_isDate, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isDate)},
    {SIP_MLNAME_CAST(sipName_isError), meth_QJSValue_isError, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isError)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QJSValue_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isNull)},
    {SIP_MLNAME_CAST(sipName_isNumber), meth_QJSValue_isNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isNumber)},
    {SIP_MLNAME_CAST(sipName_isObject), meth_QJSValue_isObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isObject)},
    {SIP_MLNAME_CAST(sipName_isQObject), meth_QJSValue_isQObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isQObject)},
    {SIP_MLNAME_CAST(sipName_isRegExp), meth_QJSValue_isRegExp, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isRegExp)},
    {SIP_MLNAME_CAST(sipName_isString), meth_QJSValue_isString, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isString)},
    {SIP_MLNAME_CAST(sipName_isUndefined), meth_QJSValue_isUndefined, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isUndefined)},
    {SIP_MLNAME_CAST(sipName_isVariant), meth_QJSValue_isVariant, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_isVariant)},
    {SIP_MLNAME_CAST(sipName_property), meth_QJSValue_property, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_property)},
    {SIP_MLNAME_CAST(sipName_prototype), meth_QJSValue_prototype, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_prototype)},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QJSValue_setProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_setProperty)},
    {SIP_MLNAME_CAST(sipName_setPrototype), meth_QJSValue_setPrototype, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_setPrototype)},
    {SIP_MLNAME_CAST(sipName_strictlyEquals), meth_QJSValue_strictlyEquals, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_strictlyEquals)},
    {SIP_MLNAME_CAST(sipName_toBool), meth_QJSValue_toBool, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_toBool)},
    {SIP_MLNAME_CAST(sipName_toDateTime), meth_QJSValue_toDateTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_toDateTime)},
    {SIP_MLNAME_CAST(sipName_toInt), meth_QJSValue_toInt, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_toInt)},
    {SIP_MLNAME_CAST(sipName_toNumber), meth_QJSValue_toNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_toNumber)},
    {SIP_MLNAME_CAST(sipName_toQObject), meth_QJSValue_toQObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_toQObject)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QJSValue_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_toString)},
    {SIP_MLNAME_CAST(sipName_toUInt), meth_QJSValue_toUInt, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_toUInt)},
    {SIP_MLNAME_CAST(sipName_toVariant), meth_QJSValue_toVariant, METH_VARARGS, SIP_MLDOC_CAST(doc_QJSValue_toVariant)}
};

static sipEnumMemberDef enummembers_QJSValue[] = {
    {sipName_NullValue, static_cast<int>(QJSValue::NullValue), 2},
    {sipName_UndefinedValue, static_cast<int>(QJSValue::UndefinedValue), 2},
};

PyDoc_STRVAR(doc_QJSValue, "\1QJSValue(QJSValue.SpecialValue value=QJSValue.UndefinedValue)\n"
    "QJSValue(QJSValue)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QJSValue = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QJSValue,
        {0}
    },
    {
        sipNameNr_QJSValue,
        {0, 0, 1},
        33, methods_QJSValue,
        2, enummembers_QJSValue,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QJSValue,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QJSValue,
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
    dealloc_QJSValue,
    assign_QJSValue,
    array_QJSValue,
    copy_QJSValue,
    release_QJSValue,
    cast_QJSValue,
    convertTo_QJSValue,
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
