/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:18 2015
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

#include "sipAPIQtMultimedia.h"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qmediaobject.sip"
#include <qmediaobject.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qmediaservice.sip"
#include <qmediaservice.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qmultimedia.sip"
#include <qmultimedia.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 34 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 84 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 87 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQMediaObject.cpp"


class sipQMediaObject : public QMediaObject
{
public:
    sipQMediaObject(QObject*,QMediaService*);
    virtual ~sipQMediaObject();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);
    void unbind(QObject*);
    bool bind(QObject*);
    QMediaService* service() const;
    QMultimedia::AvailabilityStatus availability() const;
    bool isAvailable() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMediaObject(const sipQMediaObject &);
    sipQMediaObject &operator = (const sipQMediaObject &);

    char sipPyMethods[12];
};

sipQMediaObject::sipQMediaObject(QObject*a0,QMediaService*a1): QMediaObject(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMediaObject::~sipQMediaObject()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQMediaObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtMultimedia_qt_metaobject(sipPySelf,sipType_QMediaObject);
}

int sipQMediaObject::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QMediaObject::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtMultimedia_qt_metacall(sipPySelf,sipType_QMediaObject,_c,_id,_a);

    return _id;
}

void *sipQMediaObject::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtMultimedia_qt_metacast(sipPySelf, sipType_QMediaObject, _clname, &sipCpp) ? sipCpp : QMediaObject::qt_metacast(_clname));
}

void sipQMediaObject::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QMediaObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQMediaObject::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QMediaObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQMediaObject::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QMediaObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQMediaObject::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QMediaObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQMediaObject::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QMediaObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQMediaObject::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QMediaObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQMediaObject::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QMediaObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQMediaObject::unbind(QObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_unbind);

    if (!sipMeth)
    {
        QMediaObject::unbind(a0);
        return;
    }

    extern void sipVH_QtMultimedia_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*);

    sipVH_QtMultimedia_5(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQMediaObject::bind(QObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_bind);

    if (!sipMeth)
        return QMediaObject::bind(a0);

    typedef bool (*sipVH_QtCore_63)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*);

    return ((sipVH_QtCore_63)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[63]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QMediaService* sipQMediaObject::service() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_service);

    if (!sipMeth)
        return QMediaObject::service();

    extern QMediaService* sipVH_QtMultimedia_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtMultimedia_6(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QMultimedia::AvailabilityStatus sipQMediaObject::availability() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_availability);

    if (!sipMeth)
        return QMediaObject::availability();

    extern QMultimedia::AvailabilityStatus sipVH_QtMultimedia_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtMultimedia_0(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQMediaObject::isAvailable() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_isAvailable);

    if (!sipMeth)
        return QMediaObject::isAvailable();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QMediaObject_isAvailable, "QMediaObject.isAvailable() -> bool");

extern "C" {static PyObject *meth_QMediaObject_isAvailable(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_isAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaObject, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QMediaObject::isAvailable() : sipCpp->isAvailable());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_isAvailable, doc_QMediaObject_isAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_availability, "QMediaObject.availability() -> QMultimedia.AvailabilityStatus");

extern "C" {static PyObject *meth_QMediaObject_availability(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_availability(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaObject, &sipCpp))
        {
            QMultimedia::AvailabilityStatus sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QMediaObject::availability() : sipCpp->availability());

            return sipConvertFromEnum(sipRes,sipType_QMultimedia_AvailabilityStatus);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_availability, doc_QMediaObject_availability);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_service, "QMediaObject.service() -> QMediaService");

extern "C" {static PyObject *meth_QMediaObject_service(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_service(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaObject, &sipCpp))
        {
            QMediaService*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QMediaObject::service() : sipCpp->service());

            return sipConvertFromType(sipRes,sipType_QMediaService,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_service, doc_QMediaObject_service);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_notifyInterval, "QMediaObject.notifyInterval() -> int");

extern "C" {static PyObject *meth_QMediaObject_notifyInterval(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_notifyInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaObject, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->notifyInterval();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_notifyInterval, doc_QMediaObject_notifyInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_setNotifyInterval, "QMediaObject.setNotifyInterval(int)");

extern "C" {static PyObject *meth_QMediaObject_setNotifyInterval(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_setNotifyInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QMediaObject, &sipCpp, &a0))
        {
            sipCpp->setNotifyInterval(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_setNotifyInterval, doc_QMediaObject_setNotifyInterval);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_bind, "QMediaObject.bind(QObject) -> bool");

extern "C" {static PyObject *meth_QMediaObject_bind(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_bind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QObject* a0;
        QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QMediaObject, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QMediaObject::bind(a0) : sipCpp->bind(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_bind, doc_QMediaObject_bind);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_unbind, "QMediaObject.unbind(QObject)");

extern "C" {static PyObject *meth_QMediaObject_unbind(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_unbind(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QObject* a0;
        QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QMediaObject, &sipCpp, sipType_QObject, &a0))
        {
            (sipSelfWasArg ? sipCpp->QMediaObject::unbind(a0) : sipCpp->unbind(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_unbind, doc_QMediaObject_unbind);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_isMetaDataAvailable, "QMediaObject.isMetaDataAvailable() -> bool");

extern "C" {static PyObject *meth_QMediaObject_isMetaDataAvailable(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_isMetaDataAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaObject, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isMetaDataAvailable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_isMetaDataAvailable, doc_QMediaObject_isMetaDataAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_metaData, "QMediaObject.metaData(str) -> QVariant");

extern "C" {static PyObject *meth_QMediaObject_metaData(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_metaData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QMediaObject, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->metaData(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_metaData, doc_QMediaObject_metaData);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_availableMetaData, "QMediaObject.availableMetaData() -> list-of-str");

extern "C" {static PyObject *meth_QMediaObject_availableMetaData(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_availableMetaData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaObject, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->availableMetaData());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_availableMetaData, doc_QMediaObject_availableMetaData);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_addPropertyWatch, "QMediaObject.addPropertyWatch(QByteArray)");

extern "C" {static PyObject *meth_QMediaObject_addPropertyWatch(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_addPropertyWatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1", &sipSelf, sipType_QMediaObject, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->addPropertyWatch(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_addPropertyWatch, doc_QMediaObject_addPropertyWatch);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaObject_removePropertyWatch, "QMediaObject.removePropertyWatch(QByteArray)");

extern "C" {static PyObject *meth_QMediaObject_removePropertyWatch(PyObject *, PyObject *);}
static PyObject *meth_QMediaObject_removePropertyWatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QMediaObject *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1", &sipSelf, sipType_QMediaObject, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->removePropertyWatch(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaObject, sipName_removePropertyWatch, doc_QMediaObject_removePropertyWatch);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMediaObject(void *, const sipTypeDef *);}
static void *cast_QMediaObject(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QMediaObject)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QMediaObject *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMediaObject(void *, int);}
static void release_QMediaObject(void *sipCppV,int)
{
    QMediaObject *sipCpp = reinterpret_cast<QMediaObject *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QMediaObject(sipSimpleWrapper *);}
static void dealloc_QMediaObject(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMediaObject *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMediaObject(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QMediaObject(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMediaObject(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQMediaObject *sipCpp = 0;

    {
        QObject* a0;
        QMediaService* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JHJ8", sipType_QObject, &a0, sipOwner, sipType_QMediaService, &a1))
        {
            sipCpp = new sipQMediaObject(a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMediaObject[] = {{162, 0, 1}};


static PyMethodDef methods_QMediaObject[] = {
    {SIP_MLNAME_CAST(sipName_addPropertyWatch), meth_QMediaObject_addPropertyWatch, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_addPropertyWatch)},
    {SIP_MLNAME_CAST(sipName_availability), meth_QMediaObject_availability, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_availability)},
    {SIP_MLNAME_CAST(sipName_availableMetaData), meth_QMediaObject_availableMetaData, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_availableMetaData)},
    {SIP_MLNAME_CAST(sipName_bind), meth_QMediaObject_bind, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_bind)},
    {SIP_MLNAME_CAST(sipName_isAvailable), meth_QMediaObject_isAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_isAvailable)},
    {SIP_MLNAME_CAST(sipName_isMetaDataAvailable), meth_QMediaObject_isMetaDataAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_isMetaDataAvailable)},
    {SIP_MLNAME_CAST(sipName_metaData), meth_QMediaObject_metaData, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_metaData)},
    {SIP_MLNAME_CAST(sipName_notifyInterval), meth_QMediaObject_notifyInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_notifyInterval)},
    {SIP_MLNAME_CAST(sipName_removePropertyWatch), meth_QMediaObject_removePropertyWatch, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_removePropertyWatch)},
    {SIP_MLNAME_CAST(sipName_service), meth_QMediaObject_service, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_service)},
    {SIP_MLNAME_CAST(sipName_setNotifyInterval), meth_QMediaObject_setNotifyInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_setNotifyInterval)},
    {SIP_MLNAME_CAST(sipName_unbind), meth_QMediaObject_unbind, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaObject_unbind)}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QMediaObject[] = {
    {"availabilityChanged(QMultimedia::AvailabilityStatus)", "\1QMediaObject.availabilityChanged[QMultimedia.AvailabilityStatus]", 0, 0},
    {"metaDataChanged()", "\1QMediaObject.metaDataChanged", 0, 0},
    {"metaDataChanged(QString,QVariant)", "\1QMediaObject.metaDataChanged[str, QVariant]", 0, 0},
    {"metaDataAvailableChanged(bool)", "\1QMediaObject.metaDataAvailableChanged[bool]", 0, 0},
    {"notifyIntervalChanged(int)", "\1QMediaObject.notifyIntervalChanged[int]", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QMediaObject, "\1QMediaObject(QObject, QMediaService)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QMediaObject = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMediaObject,
        {0}
    },
    {
        sipNameNr_QMediaObject,
        {0, 0, 1},
        12, methods_QMediaObject,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMediaObject,
    -1,
    -1,
    supers_QMediaObject,
    0,
    init_type_QMediaObject,
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
    dealloc_QMediaObject,
    0,
    0,
    0,
    release_QMediaObject,
    cast_QMediaObject,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QMediaObject::staticMetaObject,
    0,
    signals_QMediaObject,
    0
};
