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

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qqmlproperty.sip"
#include <qqmlproperty.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qqmlcontext.sip"
#include <qqmlcontext.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"
#line 60 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qqmlengine.sip"
#include <qqmlengine.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"
#line 167 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"


PyDoc_STRVAR(doc_QQmlProperty_type, "QQmlProperty.type() -> QQmlProperty.Type");

extern "C" {static PyObject *meth_QQmlProperty_type(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            QQmlProperty::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QQmlProperty_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_type, doc_QQmlProperty_type);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_isValid, "QQmlProperty.isValid() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_isValid(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_isValid, doc_QQmlProperty_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_isProperty, "QQmlProperty.isProperty() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_isProperty(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_isProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isProperty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_isProperty, doc_QQmlProperty_isProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_isSignalProperty, "QQmlProperty.isSignalProperty() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_isSignalProperty(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_isSignalProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSignalProperty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_isSignalProperty, doc_QQmlProperty_isSignalProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_propertyType, "QQmlProperty.propertyType() -> int");

extern "C" {static PyObject *meth_QQmlProperty_propertyType(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_propertyType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->propertyType();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_propertyType, doc_QQmlProperty_propertyType);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_propertyTypeCategory, "QQmlProperty.propertyTypeCategory() -> QQmlProperty.PropertyTypeCategory");

extern "C" {static PyObject *meth_QQmlProperty_propertyTypeCategory(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_propertyTypeCategory(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            QQmlProperty::PropertyTypeCategory sipRes;

            sipRes = sipCpp->propertyTypeCategory();

            return sipConvertFromEnum(sipRes,sipType_QQmlProperty_PropertyTypeCategory);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_propertyTypeCategory, doc_QQmlProperty_propertyTypeCategory);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_propertyTypeName, "QQmlProperty.propertyTypeName() -> str");

extern "C" {static PyObject *meth_QQmlProperty_propertyTypeName(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_propertyTypeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->propertyTypeName();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_propertyTypeName, doc_QQmlProperty_propertyTypeName);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_name, "QQmlProperty.name() -> str");

extern "C" {static PyObject *meth_QQmlProperty_name(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_name, doc_QQmlProperty_name);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_read, "QQmlProperty.read() -> QVariant\n"
    "QQmlProperty.read(QObject, str) -> QVariant\n"
    "QQmlProperty.read(QObject, str, QQmlContext) -> QVariant\n"
    "QQmlProperty.read(QObject, str, QQmlEngine) -> QVariant");

extern "C" {static PyObject *meth_QQmlProperty_read(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->read());

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    {
        const QObject* a0;
        const QString* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J1", sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(QQmlProperty::read(a0,*a1));
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    {
        const QObject* a0;
        const QString* a1;
        int a1State = 0;
        QQmlContext* a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J1J8", sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QQmlContext, &a2))
        {
            QVariant*sipRes;

            sipRes = new QVariant(QQmlProperty::read(a0,*a1,a2));
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    {
        const QObject* a0;
        const QString* a1;
        int a1State = 0;
        QQmlEngine* a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J1J8", sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QQmlEngine, &a2))
        {
            QVariant*sipRes;

            sipRes = new QVariant(QQmlProperty::read(a0,*a1,a2));
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_read, doc_QQmlProperty_read);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_write, "QQmlProperty.write(QVariant) -> bool\n"
    "QQmlProperty.write(QObject, str, QVariant) -> bool\n"
    "QQmlProperty.write(QObject, str, QVariant, QQmlContext) -> bool\n"
    "QQmlProperty.write(QObject, str, QVariant, QQmlEngine) -> bool");

extern "C" {static PyObject *meth_QQmlProperty_write(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariant* a0;
        int a0State = 0;
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQmlProperty, &sipCpp, sipType_QVariant, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->write(*a0);
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QObject* a0;
        const QString* a1;
        int a1State = 0;
        const QVariant* a2;
        int a2State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J1J1", sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QVariant, &a2, &a2State))
        {
            bool sipRes;

            sipRes = QQmlProperty::write(a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QVariant *>(a2),sipType_QVariant,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QObject* a0;
        const QString* a1;
        int a1State = 0;
        const QVariant* a2;
        int a2State = 0;
        QQmlContext* a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J1J1J8", sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QVariant, &a2, &a2State, sipType_QQmlContext, &a3))
        {
            bool sipRes;

            sipRes = QQmlProperty::write(a0,*a1,*a2,a3);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QVariant *>(a2),sipType_QVariant,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QObject* a0;
        const QString* a1;
        int a1State = 0;
        const QVariant* a2;
        int a2State = 0;
        QQmlEngine* a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J1J1J8", sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QVariant, &a2, &a2State, sipType_QQmlEngine, &a3))
        {
            bool sipRes;

            sipRes = QQmlProperty::write(a0,*a1,*a2,a3);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QVariant *>(a2),sipType_QVariant,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_write, doc_QQmlProperty_write);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_reset, "QQmlProperty.reset() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_reset(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->reset();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_reset, doc_QQmlProperty_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_hasNotifySignal, "QQmlProperty.hasNotifySignal() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_hasNotifySignal(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_hasNotifySignal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasNotifySignal();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_hasNotifySignal, doc_QQmlProperty_hasNotifySignal);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_needsNotifySignal, "QQmlProperty.needsNotifySignal() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_needsNotifySignal(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_needsNotifySignal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->needsNotifySignal();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_needsNotifySignal, doc_QQmlProperty_needsNotifySignal);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_connectNotifySignal, "QQmlProperty.connectNotifySignal(slot) -> bool\n"
    "QQmlProperty.connectNotifySignal(QObject, int) -> bool");

extern "C" {static PyObject *meth_QQmlProperty_connectNotifySignal(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_connectNotifySignal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_QQmlProperty, &sipCpp, &a0))
        {
            bool sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 81 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qqmlproperty.sip"
        QObject *receiver;
        QByteArray slot;
        
        if ((sipError = pyqt5_qtqml_get_pyqtslot_parts(a0, &receiver, slot)) == sipErrorNone)
        {
            sipRes = sipCpp->connectNotifySignal(receiver, slot.constData());
        }
        else if (sipError == sipErrorContinue)
        {
            sipError = sipBadCallableArg(0, a0);
        }
#line 558 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return PyBool_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    {
        QObject* a0;
        int a1;
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8i", &sipSelf, sipType_QQmlProperty, &sipCpp, sipType_QObject, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->connectNotifySignal(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_connectNotifySignal, doc_QQmlProperty_connectNotifySignal);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_isWritable, "QQmlProperty.isWritable() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_isWritable(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_isWritable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isWritable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_isWritable, doc_QQmlProperty_isWritable);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_isDesignable, "QQmlProperty.isDesignable() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_isDesignable(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_isDesignable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDesignable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_isDesignable, doc_QQmlProperty_isDesignable);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_isResettable, "QQmlProperty.isResettable() -> bool");

extern "C" {static PyObject *meth_QQmlProperty_isResettable(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_isResettable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isResettable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_isResettable, doc_QQmlProperty_isResettable);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_object, "QQmlProperty.object() -> QObject");

extern "C" {static PyObject *meth_QQmlProperty_object(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->object();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_object, doc_QQmlProperty_object);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_index, "QQmlProperty.index() -> int");

extern "C" {static PyObject *meth_QQmlProperty_index(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_index(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->index();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_index, doc_QQmlProperty_index);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_property, "QQmlProperty.property() -> QMetaProperty");

extern "C" {static PyObject *meth_QQmlProperty_property(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_property(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            QMetaProperty*sipRes;

            sipRes = new QMetaProperty(sipCpp->property());

            return sipConvertFromNewType(sipRes,sipType_QMetaProperty,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_property, doc_QQmlProperty_property);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlProperty_method, "QQmlProperty.method() -> QMetaMethod");

extern "C" {static PyObject *meth_QQmlProperty_method(PyObject *, PyObject *);}
static PyObject *meth_QQmlProperty_method(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlProperty, &sipCpp))
        {
            QMetaMethod*sipRes;

            sipRes = new QMetaMethod(sipCpp->method());

            return sipConvertFromNewType(sipRes,sipType_QMetaMethod,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlProperty, sipName_method, doc_QQmlProperty_method);

    return NULL;
}


extern "C" {static PyObject *slot_QQmlProperty___ne__(PyObject *,PyObject *);}
static PyObject *slot_QQmlProperty___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QQmlProperty *sipCpp = reinterpret_cast<QQmlProperty *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQmlProperty));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QQmlProperty, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp->QQmlProperty::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQml,ne_slot,sipType_QQmlProperty,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QQmlProperty___eq__(PyObject *,PyObject *);}
static PyObject *slot_QQmlProperty___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QQmlProperty *sipCpp = reinterpret_cast<QQmlProperty *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQmlProperty));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QQmlProperty* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QQmlProperty, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QQmlProperty::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtQml,eq_slot,sipType_QQmlProperty,sipSelf,sipArg);
}


extern "C" {static long slot_QQmlProperty___hash__(PyObject *);}
static long slot_QQmlProperty___hash__(PyObject *sipSelf)
{
    QQmlProperty *sipCpp = reinterpret_cast<QQmlProperty *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QQmlProperty));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 56 "/home/supermap/OpenThings/pyqt5/sip/QtQml/qqmlproperty.sip"
        sipRes = qHash(*sipCpp);
#line 862 "/home/supermap/OpenThings/pyqt5/QtQml/sipQtQmlQQmlProperty.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQmlProperty(void *, const sipTypeDef *);}
static void *cast_QQmlProperty(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQmlProperty)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlProperty(void *, int);}
static void release_QQmlProperty(void *sipCppV,int)
{
    delete reinterpret_cast<QQmlProperty *>(sipCppV);
}


extern "C" {static void assign_QQmlProperty(void *, SIP_SSIZE_T, const void *);}
static void assign_QQmlProperty(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QQmlProperty *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QQmlProperty *>(sipSrc);
}


extern "C" {static void *array_QQmlProperty(SIP_SSIZE_T);}
static void *array_QQmlProperty(SIP_SSIZE_T sipNrElem)
{
    return new QQmlProperty[sipNrElem];
}


extern "C" {static void *copy_QQmlProperty(const void *, SIP_SSIZE_T);}
static void *copy_QQmlProperty(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QQmlProperty(reinterpret_cast<const QQmlProperty *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QQmlProperty(sipSimpleWrapper *);}
static void dealloc_QQmlProperty(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlProperty(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QQmlProperty(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlProperty(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QQmlProperty *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QQmlProperty();

            return sipCpp;
        }
    }

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QObject, &a0))
        {
            sipCpp = new QQmlProperty(a0);

            return sipCpp;
        }
    }

    {
        QObject* a0;
        QQmlContext* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J8", sipType_QObject, &a0, sipType_QQmlContext, &a1))
        {
            sipCpp = new QQmlProperty(a0,a1);

            return sipCpp;
        }
    }

    {
        QObject* a0;
        QQmlEngine* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J8", sipType_QObject, &a0, sipType_QQmlEngine, &a1))
        {
            sipCpp = new QQmlProperty(a0,a1);

            return sipCpp;
        }
    }

    {
        QObject* a0;
        const QString* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J1", sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
            sipCpp = new QQmlProperty(a0,*a1);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        QObject* a0;
        const QString* a1;
        int a1State = 0;
        QQmlContext* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J1J8", sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QQmlContext, &a2))
        {
            sipCpp = new QQmlProperty(a0,*a1,a2);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        QObject* a0;
        const QString* a1;
        int a1State = 0;
        QQmlEngine* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J1J8", sipType_QObject, &a0, sipType_QString,&a1, &a1State, sipType_QQmlEngine, &a2))
        {
            sipCpp = new QQmlProperty(a0,*a1,a2);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        const QQmlProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQmlProperty, &a0))
        {
            sipCpp = new QQmlProperty(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QQmlProperty[] = {
    {(void *)slot_QQmlProperty___ne__, ne_slot},
    {(void *)slot_QQmlProperty___eq__, eq_slot},
    {(void *)slot_QQmlProperty___hash__, hash_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QQmlProperty[] = {
    {SIP_MLNAME_CAST(sipName_connectNotifySignal), meth_QQmlProperty_connectNotifySignal, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_connectNotifySignal)},
    {SIP_MLNAME_CAST(sipName_hasNotifySignal), meth_QQmlProperty_hasNotifySignal, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_hasNotifySignal)},
    {SIP_MLNAME_CAST(sipName_index), meth_QQmlProperty_index, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_index)},
    {SIP_MLNAME_CAST(sipName_isDesignable), meth_QQmlProperty_isDesignable, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_isDesignable)},
    {SIP_MLNAME_CAST(sipName_isProperty), meth_QQmlProperty_isProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_isProperty)},
    {SIP_MLNAME_CAST(sipName_isResettable), meth_QQmlProperty_isResettable, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_isResettable)},
    {SIP_MLNAME_CAST(sipName_isSignalProperty), meth_QQmlProperty_isSignalProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_isSignalProperty)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QQmlProperty_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_isValid)},
    {SIP_MLNAME_CAST(sipName_isWritable), meth_QQmlProperty_isWritable, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_isWritable)},
    {SIP_MLNAME_CAST(sipName_method), meth_QQmlProperty_method, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_method)},
    {SIP_MLNAME_CAST(sipName_name), meth_QQmlProperty_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_name)},
    {SIP_MLNAME_CAST(sipName_needsNotifySignal), meth_QQmlProperty_needsNotifySignal, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_needsNotifySignal)},
    {SIP_MLNAME_CAST(sipName_object), meth_QQmlProperty_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_object)},
    {SIP_MLNAME_CAST(sipName_property), meth_QQmlProperty_property, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_property)},
    {SIP_MLNAME_CAST(sipName_propertyType), meth_QQmlProperty_propertyType, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_propertyType)},
    {SIP_MLNAME_CAST(sipName_propertyTypeCategory), meth_QQmlProperty_propertyTypeCategory, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_propertyTypeCategory)},
    {SIP_MLNAME_CAST(sipName_propertyTypeName), meth_QQmlProperty_propertyTypeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_propertyTypeName)},
    {SIP_MLNAME_CAST(sipName_read), meth_QQmlProperty_read, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_read)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QQmlProperty_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_reset)},
    {SIP_MLNAME_CAST(sipName_type), meth_QQmlProperty_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_type)},
    {SIP_MLNAME_CAST(sipName_write), meth_QQmlProperty_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlProperty_write)}
};

static sipEnumMemberDef enummembers_QQmlProperty[] = {
    {sipName_Invalid, static_cast<int>(QQmlProperty::Invalid), 34},
    {sipName_InvalidCategory, static_cast<int>(QQmlProperty::InvalidCategory), 33},
    {sipName_List, static_cast<int>(QQmlProperty::List), 33},
    {sipName_Normal, static_cast<int>(QQmlProperty::Normal), 33},
    {sipName_Object, static_cast<int>(QQmlProperty::Object), 33},
    {sipName_Property, static_cast<int>(QQmlProperty::Property), 34},
    {sipName_SignalProperty, static_cast<int>(QQmlProperty::SignalProperty), 34},
};

PyDoc_STRVAR(doc_QQmlProperty, "\1QQmlProperty()\n"
    "QQmlProperty(QObject)\n"
    "QQmlProperty(QObject, QQmlContext)\n"
    "QQmlProperty(QObject, QQmlEngine)\n"
    "QQmlProperty(QObject, str)\n"
    "QQmlProperty(QObject, str, QQmlContext)\n"
    "QQmlProperty(QObject, str, QQmlEngine)\n"
    "QQmlProperty(QQmlProperty)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlProperty = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlProperty,
        {0}
    },
    {
        sipNameNr_QQmlProperty,
        {0, 0, 1},
        21, methods_QQmlProperty,
        7, enummembers_QQmlProperty,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlProperty,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QQmlProperty,
    init_type_QQmlProperty,
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
    dealloc_QQmlProperty,
    assign_QQmlProperty,
    array_QQmlProperty,
    copy_QQmlProperty,
    release_QQmlProperty,
    cast_QQmlProperty,
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
