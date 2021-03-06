/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:41 2015
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

#include "sipAPIQtBluetooth.h"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtBluetooth/qbluetoothtransferreply.sip"
#include <qbluetoothtransferreply.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtBluetooth/qbluetoothtransferrequest.sip"
#include <qbluetoothtransferrequest.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtBluetooth/qbluetoothtransfermanager.sip"
#include <qbluetoothtransfermanager.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQBluetoothTransferReply.cpp"


class sipQBluetoothTransferReply : public QBluetoothTransferReply
{
public:
    sipQBluetoothTransferReply(QObject*);
    virtual ~sipQBluetoothTransferReply();

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
    QString errorString() const;
    QBluetoothTransferReply::TransferError error() const;
    bool isRunning() const;
    bool isFinished() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQBluetoothTransferReply(const sipQBluetoothTransferReply &);
    sipQBluetoothTransferReply &operator = (const sipQBluetoothTransferReply &);

    char sipPyMethods[11];
};

sipQBluetoothTransferReply::sipQBluetoothTransferReply(QObject*a0): QBluetoothTransferReply(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBluetoothTransferReply::~sipQBluetoothTransferReply()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQBluetoothTransferReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtBluetooth_qt_metaobject(sipPySelf,sipType_QBluetoothTransferReply);
}

int sipQBluetoothTransferReply::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QBluetoothTransferReply::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtBluetooth_qt_metacall(sipPySelf,sipType_QBluetoothTransferReply,_c,_id,_a);

    return _id;
}

void *sipQBluetoothTransferReply::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtBluetooth_qt_metacast(sipPySelf, sipType_QBluetoothTransferReply, _clname, &sipCpp) ? sipCpp : QBluetoothTransferReply::qt_metacast(_clname));
}

void sipQBluetoothTransferReply::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QBluetoothTransferReply::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQBluetoothTransferReply::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QBluetoothTransferReply::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQBluetoothTransferReply::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QBluetoothTransferReply::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQBluetoothTransferReply::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QBluetoothTransferReply::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQBluetoothTransferReply::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QBluetoothTransferReply::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQBluetoothTransferReply::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QBluetoothTransferReply::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQBluetoothTransferReply::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QBluetoothTransferReply::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QString sipQBluetoothTransferReply::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QBluetoothTransferReply,sipName_errorString);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_16)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_16)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[16]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QBluetoothTransferReply::TransferError sipQBluetoothTransferReply::error() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QBluetoothTransferReply,sipName_error);

    if (!sipMeth)
        return (QBluetoothTransferReply::TransferError)0;

    extern QBluetoothTransferReply::TransferError sipVH_QtBluetooth_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtBluetooth_0(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQBluetoothTransferReply::isRunning() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QBluetoothTransferReply,sipName_isRunning);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQBluetoothTransferReply::isFinished() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QBluetoothTransferReply,sipName_isFinished);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtBluetooth_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtBluetooth_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_isFinished, "QBluetoothTransferReply.isFinished() -> bool");

extern "C" {static PyObject *meth_QBluetoothTransferReply_isFinished(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_isFinished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QBluetoothTransferReply, sipName_isFinished);
                return NULL;
            }

            sipRes = sipCpp->isFinished();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_isFinished, doc_QBluetoothTransferReply_isFinished);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_isRunning, "QBluetoothTransferReply.isRunning() -> bool");

extern "C" {static PyObject *meth_QBluetoothTransferReply_isRunning(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_isRunning(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QBluetoothTransferReply, sipName_isRunning);
                return NULL;
            }

            sipRes = sipCpp->isRunning();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_isRunning, doc_QBluetoothTransferReply_isRunning);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_manager, "QBluetoothTransferReply.manager() -> QBluetoothTransferManager");

extern "C" {static PyObject *meth_QBluetoothTransferReply_manager(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_manager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp))
        {
            QBluetoothTransferManager*sipRes;

            sipRes = sipCpp->manager();

            return sipConvertFromType(sipRes,sipType_QBluetoothTransferManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_manager, doc_QBluetoothTransferReply_manager);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_error, "QBluetoothTransferReply.error() -> QBluetoothTransferReply.TransferError");

extern "C" {static PyObject *meth_QBluetoothTransferReply_error(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp))
        {
            QBluetoothTransferReply::TransferError sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QBluetoothTransferReply, sipName_error);
                return NULL;
            }

            sipRes = sipCpp->error();

            return sipConvertFromEnum(sipRes,sipType_QBluetoothTransferReply_TransferError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_error, doc_QBluetoothTransferReply_error);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_errorString, "QBluetoothTransferReply.errorString() -> str");

extern "C" {static PyObject *meth_QBluetoothTransferReply_errorString(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QBluetoothTransferReply, sipName_errorString);
                return NULL;
            }

            sipRes = new QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_errorString, doc_QBluetoothTransferReply_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_request, "QBluetoothTransferReply.request() -> QBluetoothTransferRequest");

extern "C" {static PyObject *meth_QBluetoothTransferReply_request(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_request(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp))
        {
            QBluetoothTransferRequest*sipRes;

            sipRes = new QBluetoothTransferRequest(sipCpp->request());

            return sipConvertFromNewType(sipRes,sipType_QBluetoothTransferRequest,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_request, doc_QBluetoothTransferReply_request);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_abort, "QBluetoothTransferReply.abort()");

extern "C" {static PyObject *meth_QBluetoothTransferReply_abort(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_abort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp))
        {
            sipCpp->abort();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_abort, doc_QBluetoothTransferReply_abort);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_setManager, "QBluetoothTransferReply.setManager(QBluetoothTransferManager)");

extern "C" {static PyObject *meth_QBluetoothTransferReply_setManager(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_setManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothTransferManager* a0;
        QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp, sipType_QBluetoothTransferManager, &a0))
        {
            sipCpp->setManager(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_setManager, doc_QBluetoothTransferReply_setManager);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothTransferReply_setRequest, "QBluetoothTransferReply.setRequest(QBluetoothTransferRequest)");

extern "C" {static PyObject *meth_QBluetoothTransferReply_setRequest(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothTransferReply_setRequest(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothTransferRequest* a0;
        QBluetoothTransferReply *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ9", &sipSelf, sipType_QBluetoothTransferReply, &sipCpp, sipType_QBluetoothTransferRequest, &a0))
        {
            sipCpp->setRequest(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothTransferReply, sipName_setRequest, doc_QBluetoothTransferReply_setRequest);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBluetoothTransferReply(void *, const sipTypeDef *);}
static void *cast_QBluetoothTransferReply(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QBluetoothTransferReply)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QBluetoothTransferReply *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBluetoothTransferReply(void *, int);}
static void release_QBluetoothTransferReply(void *sipCppV,int)
{
    QBluetoothTransferReply *sipCpp = reinterpret_cast<QBluetoothTransferReply *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QBluetoothTransferReply(sipSimpleWrapper *);}
static void dealloc_QBluetoothTransferReply(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQBluetoothTransferReply *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QBluetoothTransferReply(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QBluetoothTransferReply(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBluetoothTransferReply(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQBluetoothTransferReply *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQBluetoothTransferReply(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QBluetoothTransferReply[] = {{162, 0, 1}};


static PyMethodDef methods_QBluetoothTransferReply[] = {
    {SIP_MLNAME_CAST(sipName_abort), meth_QBluetoothTransferReply_abort, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_abort)},
    {SIP_MLNAME_CAST(sipName_error), meth_QBluetoothTransferReply_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_error)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QBluetoothTransferReply_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_errorString)},
    {SIP_MLNAME_CAST(sipName_isFinished), meth_QBluetoothTransferReply_isFinished, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_isFinished)},
    {SIP_MLNAME_CAST(sipName_isRunning), meth_QBluetoothTransferReply_isRunning, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_isRunning)},
    {SIP_MLNAME_CAST(sipName_manager), meth_QBluetoothTransferReply_manager, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_manager)},
    {SIP_MLNAME_CAST(sipName_request), meth_QBluetoothTransferReply_request, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_request)},
    {SIP_MLNAME_CAST(sipName_setManager), meth_QBluetoothTransferReply_setManager, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_setManager)},
    {SIP_MLNAME_CAST(sipName_setRequest), meth_QBluetoothTransferReply_setRequest, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothTransferReply_setRequest)}
};

static sipEnumMemberDef enummembers_QBluetoothTransferReply[] = {
    {sipName_FileNotFoundError, static_cast<int>(QBluetoothTransferReply::FileNotFoundError), 43},
    {sipName_HostNotFoundError, static_cast<int>(QBluetoothTransferReply::HostNotFoundError), 43},
    {sipName_IODeviceNotReadableError, static_cast<int>(QBluetoothTransferReply::IODeviceNotReadableError), 43},
    {sipName_NoError, static_cast<int>(QBluetoothTransferReply::NoError), 43},
    {sipName_ResourceBusyError, static_cast<int>(QBluetoothTransferReply::ResourceBusyError), 43},
    {sipName_SessionError, static_cast<int>(QBluetoothTransferReply::SessionError), 43},
    {sipName_UnknownError, static_cast<int>(QBluetoothTransferReply::UnknownError), 43},
    {sipName_UserCanceledTransferError, static_cast<int>(QBluetoothTransferReply::UserCanceledTransferError), 43},
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QBluetoothTransferReply[] = {
    {"transferProgress(qint64,qint64)", "\1QBluetoothTransferReply.transferProgress[int, int]", 0, 0},
    {"finished(QBluetoothTransferReply*)", "\1QBluetoothTransferReply.finished[QBluetoothTransferReply]", 0, 0},
    {"error(QBluetoothTransferReply::TransferError)", "\1QBluetoothTransferReply.error[QBluetoothTransferReply.TransferError]", &methods_QBluetoothTransferReply[1], 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QBluetoothTransferReply, "\1QBluetoothTransferReply(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtBluetooth_QBluetoothTransferReply = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBluetoothTransferReply,
        {0}
    },
    {
        sipNameNr_QBluetoothTransferReply,
        {0, 0, 1},
        9, methods_QBluetoothTransferReply,
        8, enummembers_QBluetoothTransferReply,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBluetoothTransferReply,
    -1,
    -1,
    supers_QBluetoothTransferReply,
    0,
    init_type_QBluetoothTransferReply,
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
    dealloc_QBluetoothTransferReply,
    0,
    0,
    0,
    release_QBluetoothTransferReply,
    cast_QBluetoothTransferReply,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QBluetoothTransferReply::staticMetaObject,
    0,
    signals_QBluetoothTransferReply,
    0
};
