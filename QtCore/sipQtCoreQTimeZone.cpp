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

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qtimezone.sip"
#include <qtimezone.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQTimeZone.cpp"

#line 32 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQTimeZone.cpp"
#line 27 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQTimeZone.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQTimeZone.cpp"
#line 36 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQTimeZone.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQTimeZone.cpp"
#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qtimezone.sip"
#include <qtimezone.h>
#line 56 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qtimezone.sip"
#include <qtimezone.h>
#line 50 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQTimeZone.cpp"
#line 299 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 53 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQTimeZone.cpp"


PyDoc_STRVAR(doc_QTimeZone_swap, "QTimeZone.swap(QTimeZone)");

extern "C" {static PyObject *meth_QTimeZone_swap(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTimeZone* a0;
        QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QTimeZone, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_swap, doc_QTimeZone_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_isValid, "QTimeZone.isValid() -> bool");

extern "C" {static PyObject *meth_QTimeZone_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimeZone, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_isValid, doc_QTimeZone_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_id, "QTimeZone.id() -> QByteArray");

extern "C" {static PyObject *meth_QTimeZone_id(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimeZone, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->id());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_id, doc_QTimeZone_id);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_country, "QTimeZone.country() -> QLocale.Country");

extern "C" {static PyObject *meth_QTimeZone_country(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_country(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimeZone, &sipCpp))
        {
            QLocale::Country sipRes;

            sipRes = sipCpp->country();

            return sipConvertFromEnum(sipRes,sipType_QLocale_Country);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_country, doc_QTimeZone_country);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_comment, "QTimeZone.comment() -> str");

extern "C" {static PyObject *meth_QTimeZone_comment(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimeZone, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->comment());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_comment, doc_QTimeZone_comment);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_displayName, "QTimeZone.displayName(QDateTime, QTimeZone.NameType nameType=QTimeZone.DefaultName, QLocale locale=QLocale()) -> str\n"
    "QTimeZone.displayName(QTimeZone.TimeType, QTimeZone.NameType nameType=QTimeZone.DefaultName, QLocale locale=QLocale()) -> str");

extern "C" {static PyObject *meth_QTimeZone_displayName(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_displayName(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        QTimeZone::NameType a1 = QTimeZone::DefaultName;
        const QLocale& a2def = QLocale();
        const QLocale* a2 = &a2def;
        const QTimeZone *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_nameType,
            sipName_locale,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|EJ9", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State, sipType_QTimeZone_NameType, &a1, sipType_QLocale, &a2))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->displayName(*a0,a1,*a2));
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        QTimeZone::TimeType a0;
        QTimeZone::NameType a1 = QTimeZone::DefaultName;
        const QLocale& a2def = QLocale();
        const QLocale* a2 = &a2def;
        const QTimeZone *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_nameType,
            sipName_locale,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|EJ9", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QTimeZone_TimeType, &a0, sipType_QTimeZone_NameType, &a1, sipType_QLocale, &a2))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->displayName(a0,a1,*a2));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_displayName, doc_QTimeZone_displayName);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_abbreviation, "QTimeZone.abbreviation(QDateTime) -> str");

extern "C" {static PyObject *meth_QTimeZone_abbreviation(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_abbreviation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->abbreviation(*a0));
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_abbreviation, doc_QTimeZone_abbreviation);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_offsetFromUtc, "QTimeZone.offsetFromUtc(QDateTime) -> int");

extern "C" {static PyObject *meth_QTimeZone_offsetFromUtc(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_offsetFromUtc(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->offsetFromUtc(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_offsetFromUtc, doc_QTimeZone_offsetFromUtc);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_standardTimeOffset, "QTimeZone.standardTimeOffset(QDateTime) -> int");

extern "C" {static PyObject *meth_QTimeZone_standardTimeOffset(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_standardTimeOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->standardTimeOffset(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_standardTimeOffset, doc_QTimeZone_standardTimeOffset);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_daylightTimeOffset, "QTimeZone.daylightTimeOffset(QDateTime) -> int");

extern "C" {static PyObject *meth_QTimeZone_daylightTimeOffset(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_daylightTimeOffset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->daylightTimeOffset(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_daylightTimeOffset, doc_QTimeZone_daylightTimeOffset);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_hasDaylightTime, "QTimeZone.hasDaylightTime() -> bool");

extern "C" {static PyObject *meth_QTimeZone_hasDaylightTime(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_hasDaylightTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimeZone, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasDaylightTime();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_hasDaylightTime, doc_QTimeZone_hasDaylightTime);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_isDaylightTime, "QTimeZone.isDaylightTime(QDateTime) -> bool");

extern "C" {static PyObject *meth_QTimeZone_isDaylightTime(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_isDaylightTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->isDaylightTime(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_isDaylightTime, doc_QTimeZone_isDaylightTime);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_offsetData, "QTimeZone.offsetData(QDateTime) -> QTimeZone.OffsetData");

extern "C" {static PyObject *meth_QTimeZone_offsetData(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_offsetData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            QTimeZone::OffsetData*sipRes;

            sipRes = new QTimeZone::OffsetData(sipCpp->offsetData(*a0));
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTimeZone_OffsetData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_offsetData, doc_QTimeZone_offsetData);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_hasTransitions, "QTimeZone.hasTransitions() -> bool");

extern "C" {static PyObject *meth_QTimeZone_hasTransitions(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_hasTransitions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimeZone, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasTransitions();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_hasTransitions, doc_QTimeZone_hasTransitions);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_nextTransition, "QTimeZone.nextTransition(QDateTime) -> QTimeZone.OffsetData");

extern "C" {static PyObject *meth_QTimeZone_nextTransition(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_nextTransition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            QTimeZone::OffsetData*sipRes;

            sipRes = new QTimeZone::OffsetData(sipCpp->nextTransition(*a0));
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTimeZone_OffsetData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_nextTransition, doc_QTimeZone_nextTransition);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_previousTransition, "QTimeZone.previousTransition(QDateTime) -> QTimeZone.OffsetData");

extern "C" {static PyObject *meth_QTimeZone_previousTransition(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_previousTransition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            QTimeZone::OffsetData*sipRes;

            sipRes = new QTimeZone::OffsetData(sipCpp->previousTransition(*a0));
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTimeZone_OffsetData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_previousTransition, doc_QTimeZone_previousTransition);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_transitions, "QTimeZone.transitions(QDateTime, QDateTime) -> list-of-QTimeZone.OffsetData");

extern "C" {static PyObject *meth_QTimeZone_transitions(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_transitions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        const QDateTime* a1;
        int a1State = 0;
        const QTimeZone *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QTimeZone, &sipCpp, sipType_QDateTime, &a0, &a0State, sipType_QDateTime, &a1, &a1State))
        {
            QVector<QTimeZone::OffsetData>*sipRes;

            sipRes = new QVector<QTimeZone::OffsetData>(sipCpp->transitions(*a0,*a1));
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);
            sipReleaseType(const_cast<QDateTime *>(a1),sipType_QDateTime,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QTimeZone_OffsetData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_transitions, doc_QTimeZone_transitions);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_systemTimeZoneId, "QTimeZone.systemTimeZoneId() -> QByteArray");

extern "C" {static PyObject *meth_QTimeZone_systemTimeZoneId(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_systemTimeZoneId(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(QTimeZone::systemTimeZoneId());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_systemTimeZoneId, doc_QTimeZone_systemTimeZoneId);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_isTimeZoneIdAvailable, "QTimeZone.isTimeZoneIdAvailable(QByteArray) -> bool");

extern "C" {static PyObject *meth_QTimeZone_isTimeZoneIdAvailable(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_isTimeZoneIdAvailable(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            bool sipRes;

            sipRes = QTimeZone::isTimeZoneIdAvailable(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_isTimeZoneIdAvailable, doc_QTimeZone_isTimeZoneIdAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_availableTimeZoneIds, "QTimeZone.availableTimeZoneIds() -> list-of-QByteArray\n"
    "QTimeZone.availableTimeZoneIds(QLocale.Country) -> list-of-QByteArray\n"
    "QTimeZone.availableTimeZoneIds(int) -> list-of-QByteArray");

extern "C" {static PyObject *meth_QTimeZone_availableTimeZoneIds(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_availableTimeZoneIds(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QByteArray>*sipRes;

            sipRes = new QList<QByteArray>(QTimeZone::availableTimeZoneIds());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    {
        QLocale::Country a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "XE", sipType_QLocale_Country, &a0))
        {
            QList<QByteArray>*sipRes;

            sipRes = new QList<QByteArray>(QTimeZone::availableTimeZoneIds(a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QList<QByteArray>*sipRes;

            sipRes = new QList<QByteArray>(QTimeZone::availableTimeZoneIds(a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_availableTimeZoneIds, doc_QTimeZone_availableTimeZoneIds);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_ianaIdToWindowsId, "QTimeZone.ianaIdToWindowsId(QByteArray) -> QByteArray");

extern "C" {static PyObject *meth_QTimeZone_ianaIdToWindowsId(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_ianaIdToWindowsId(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(QTimeZone::ianaIdToWindowsId(*a0));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_ianaIdToWindowsId, doc_QTimeZone_ianaIdToWindowsId);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_windowsIdToDefaultIanaId, "QTimeZone.windowsIdToDefaultIanaId(QByteArray) -> QByteArray\n"
    "QTimeZone.windowsIdToDefaultIanaId(QByteArray, QLocale.Country) -> QByteArray");

extern "C" {static PyObject *meth_QTimeZone_windowsIdToDefaultIanaId(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_windowsIdToDefaultIanaId(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(QTimeZone::windowsIdToDefaultIanaId(*a0));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        QLocale::Country a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1E", sipType_QByteArray, &a0, &a0State, sipType_QLocale_Country, &a1))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(QTimeZone::windowsIdToDefaultIanaId(*a0,a1));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_windowsIdToDefaultIanaId, doc_QTimeZone_windowsIdToDefaultIanaId);

    return NULL;
}


PyDoc_STRVAR(doc_QTimeZone_windowsIdToIanaIds, "QTimeZone.windowsIdToIanaIds(QByteArray) -> list-of-QByteArray\n"
    "QTimeZone.windowsIdToIanaIds(QByteArray, QLocale.Country) -> list-of-QByteArray");

extern "C" {static PyObject *meth_QTimeZone_windowsIdToIanaIds(PyObject *, PyObject *);}
static PyObject *meth_QTimeZone_windowsIdToIanaIds(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QList<QByteArray>*sipRes;

            sipRes = new QList<QByteArray>(QTimeZone::windowsIdToIanaIds(*a0));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        QLocale::Country a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1E", sipType_QByteArray, &a0, &a0State, sipType_QLocale_Country, &a1))
        {
            QList<QByteArray>*sipRes;

            sipRes = new QList<QByteArray>(QTimeZone::windowsIdToIanaIds(*a0,a1));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimeZone, sipName_windowsIdToIanaIds, doc_QTimeZone_windowsIdToIanaIds);

    return NULL;
}


extern "C" {static PyObject *slot_QTimeZone___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTimeZone___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTimeZone *sipCpp = reinterpret_cast<QTimeZone *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTimeZone));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTimeZone* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTimeZone, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QTimeZone::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QTimeZone,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTimeZone___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTimeZone___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTimeZone *sipCpp = reinterpret_cast<QTimeZone *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTimeZone));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTimeZone* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTimeZone, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QTimeZone::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QTimeZone,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTimeZone(void *, const sipTypeDef *);}
static void *cast_QTimeZone(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTimeZone)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTimeZone(void *, int);}
static void release_QTimeZone(void *sipCppV,int)
{
    delete reinterpret_cast<QTimeZone *>(sipCppV);
}


extern "C" {static void assign_QTimeZone(void *, SIP_SSIZE_T, const void *);}
static void assign_QTimeZone(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTimeZone *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTimeZone *>(sipSrc);
}


extern "C" {static void *array_QTimeZone(SIP_SSIZE_T);}
static void *array_QTimeZone(SIP_SSIZE_T sipNrElem)
{
    return new QTimeZone[sipNrElem];
}


extern "C" {static void *copy_QTimeZone(const void *, SIP_SSIZE_T);}
static void *copy_QTimeZone(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTimeZone(reinterpret_cast<const QTimeZone *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTimeZone(sipSimpleWrapper *);}
static void dealloc_QTimeZone(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTimeZone(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTimeZone(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTimeZone(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTimeZone *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTimeZone();

            return sipCpp;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QByteArray, &a0, &a0State))
        {
            sipCpp = new QTimeZone(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QTimeZone(a0);

            return sipCpp;
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        int a1;
        const QString* a2;
        int a2State = 0;
        const QString* a3;
        int a3State = 0;
        QLocale::Country a4 = QLocale::AnyCountry;
        const QString& a5def = QString();
        const QString* a5 = &a5def;
        int a5State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_country,
            sipName_comment,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1iJ1J1|EJ1", sipType_QByteArray, &a0, &a0State, &a1, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State, sipType_QLocale_Country, &a4, sipType_QString,&a5, &a5State))
        {
            sipCpp = new QTimeZone(*a0,a1,*a2,*a3,a4,*a5);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);
            sipReleaseType(const_cast<QString *>(a5),sipType_QString,a5State);

            return sipCpp;
        }
    }

    {
        const QTimeZone* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTimeZone, &a0))
        {
            sipCpp = new QTimeZone(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTimeZone[] = {
    {(void *)slot_QTimeZone___ne__, ne_slot},
    {(void *)slot_QTimeZone___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTimeZone[] = {
    {SIP_MLNAME_CAST(sipName_abbreviation), meth_QTimeZone_abbreviation, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_abbreviation)},
    {SIP_MLNAME_CAST(sipName_availableTimeZoneIds), meth_QTimeZone_availableTimeZoneIds, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_availableTimeZoneIds)},
    {SIP_MLNAME_CAST(sipName_comment), meth_QTimeZone_comment, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_comment)},
    {SIP_MLNAME_CAST(sipName_country), meth_QTimeZone_country, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_country)},
    {SIP_MLNAME_CAST(sipName_daylightTimeOffset), meth_QTimeZone_daylightTimeOffset, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_daylightTimeOffset)},
    {SIP_MLNAME_CAST(sipName_displayName), (PyCFunction)meth_QTimeZone_displayName, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTimeZone_displayName)},
    {SIP_MLNAME_CAST(sipName_hasDaylightTime), meth_QTimeZone_hasDaylightTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_hasDaylightTime)},
    {SIP_MLNAME_CAST(sipName_hasTransitions), meth_QTimeZone_hasTransitions, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_hasTransitions)},
    {SIP_MLNAME_CAST(sipName_ianaIdToWindowsId), meth_QTimeZone_ianaIdToWindowsId, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_ianaIdToWindowsId)},
    {SIP_MLNAME_CAST(sipName_id), meth_QTimeZone_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_id)},
    {SIP_MLNAME_CAST(sipName_isDaylightTime), meth_QTimeZone_isDaylightTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_isDaylightTime)},
    {SIP_MLNAME_CAST(sipName_isTimeZoneIdAvailable), meth_QTimeZone_isTimeZoneIdAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_isTimeZoneIdAvailable)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTimeZone_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_isValid)},
    {SIP_MLNAME_CAST(sipName_nextTransition), meth_QTimeZone_nextTransition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_nextTransition)},
    {SIP_MLNAME_CAST(sipName_offsetData), meth_QTimeZone_offsetData, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_offsetData)},
    {SIP_MLNAME_CAST(sipName_offsetFromUtc), meth_QTimeZone_offsetFromUtc, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_offsetFromUtc)},
    {SIP_MLNAME_CAST(sipName_previousTransition), meth_QTimeZone_previousTransition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_previousTransition)},
    {SIP_MLNAME_CAST(sipName_standardTimeOffset), meth_QTimeZone_standardTimeOffset, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_standardTimeOffset)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QTimeZone_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_swap)},
    {SIP_MLNAME_CAST(sipName_systemTimeZoneId), meth_QTimeZone_systemTimeZoneId, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_systemTimeZoneId)},
    {SIP_MLNAME_CAST(sipName_transitions), meth_QTimeZone_transitions, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_transitions)},
    {SIP_MLNAME_CAST(sipName_windowsIdToDefaultIanaId), meth_QTimeZone_windowsIdToDefaultIanaId, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_windowsIdToDefaultIanaId)},
    {SIP_MLNAME_CAST(sipName_windowsIdToIanaIds), meth_QTimeZone_windowsIdToIanaIds, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimeZone_windowsIdToIanaIds)}
};

static sipEnumMemberDef enummembers_QTimeZone[] = {
    {sipName_DaylightTime, static_cast<int>(QTimeZone::DaylightTime), 270},
    {sipName_DefaultName, static_cast<int>(QTimeZone::DefaultName), 268},
    {sipName_GenericTime, static_cast<int>(QTimeZone::GenericTime), 270},
    {sipName_LongName, static_cast<int>(QTimeZone::LongName), 268},
    {sipName_OffsetName, static_cast<int>(QTimeZone::OffsetName), 268},
    {sipName_ShortName, static_cast<int>(QTimeZone::ShortName), 268},
    {sipName_StandardTime, static_cast<int>(QTimeZone::StandardTime), 270},
};

PyDoc_STRVAR(doc_QTimeZone, "\1QTimeZone()\n"
    "QTimeZone(QByteArray)\n"
    "QTimeZone(int)\n"
    "QTimeZone(QByteArray, int, str, str, QLocale.Country country=QLocale.AnyCountry, str comment=QString())\n"
    "QTimeZone(QTimeZone)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QTimeZone = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTimeZone,
        {0}
    },
    {
        sipNameNr_QTimeZone,
        {0, 0, 1},
        23, methods_QTimeZone,
        7, enummembers_QTimeZone,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTimeZone,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTimeZone,
    init_type_QTimeZone,
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
    dealloc_QTimeZone,
    assign_QTimeZone,
    array_QTimeZone,
    copy_QTimeZone,
    release_QTimeZone,
    cast_QTimeZone,
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