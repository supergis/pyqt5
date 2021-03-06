/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:37 2015
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

#include "sipAPIQtDBus.h"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtDBus/qdbusinterface.sip"
#include <qdbusinterface.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 45 "/home/supermap/OpenThings/pyqt5/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtDBus/qdbuspendingcall.sip"
#include <qdbuspendingcall.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtDBus/qdbusmessage.sip"
#include <qdbusmessage.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtDBus/qdbusconnection.sip"
#include <qdbusconnection.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtDBus/qdbuserror.sip"
#include <qdbuserror.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 84 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 87 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 90 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 93 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 96 "/home/supermap/OpenThings/pyqt5/QtDBus/sipQtDBusQDBusInterface.cpp"


class sipQDBusInterface : public QDBusInterface
{
public:
    sipQDBusInterface(const QString&,const QString&,const QString&,const QDBusConnection&,QObject*);
    virtual ~sipQDBusInterface();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDBusInterface(const sipQDBusInterface &);
    sipQDBusInterface &operator = (const sipQDBusInterface &);

    char sipPyMethods[7];
};

sipQDBusInterface::sipQDBusInterface(const QString& a0,const QString& a1,const QString& a2,const QDBusConnection& a3,QObject*a4): QDBusInterface(a0,a1,a2,a3,a4), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDBusInterface::~sipQDBusInterface()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDBusInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtDBus_qt_metaobject(sipPySelf,sipType_QDBusInterface);
}

int sipQDBusInterface::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QDBusInterface::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDBus_qt_metacall(sipPySelf,sipType_QDBusInterface,_c,_id,_a);

    return _id;
}

void *sipQDBusInterface::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtDBus_qt_metacast(sipPySelf, sipType_QDBusInterface, _clname, &sipCpp) ? sipCpp : QDBusInterface::qt_metacast(_clname));
}

void sipQDBusInterface::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QDBusInterface::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDBus_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtDBus_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDBusInterface::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QDBusInterface::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtDBus_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtDBus_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDBusInterface::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QDBusInterface::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDBus_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtDBus_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQDBusInterface::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QDBusInterface::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtDBus_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtDBus_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQDBusInterface::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QDBusInterface::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDBus_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtDBus_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDBusInterface::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QDBusInterface::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtDBus_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtDBus_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDBusInterface::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QDBusInterface::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtDBus_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtDBus_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDBusInterface(void *, const sipTypeDef *);}
static void *cast_QDBusInterface(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDBusInterface)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QDBusAbstractInterface)->ctd_cast((QDBusAbstractInterface *)(QDBusInterface *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDBusInterface(void *, int);}
static void release_QDBusInterface(void *sipCppV,int)
{
    QDBusInterface *sipCpp = reinterpret_cast<QDBusInterface *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QDBusInterface(sipSimpleWrapper *);}
static void dealloc_QDBusInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDBusInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDBusInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDBusInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDBusInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDBusInterface *sipCpp = 0;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString& a2def = QString();
        const QString* a2 = &a2def;
        int a2State = 0;
        const QDBusConnection& a3def = QDBusConnection::sessionBus();
        const QDBusConnection* a3 = &a3def;
        QObject* a4 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_interface,
            sipName_connection,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1|J1J9J8", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QDBusConnection, &a3, sipType_QObject, &a4))
        {
            sipCpp = new sipQDBusInterface(*a0,*a1,*a2,*a3,a4);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDBusInterface[] = {{3, 255, 1}};

PyDoc_STRVAR(doc_QDBusInterface, "\1QDBusInterface(str, str, str interface=QString(), QDBusConnection connection=QDBusConnection.sessionBus(), QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtDBus_QDBusInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDBusInterface,
        {0}
    },
    {
        sipNameNr_QDBusInterface,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDBusInterface,
    -1,
    -1,
    supers_QDBusInterface,
    0,
    init_type_QDBusInterface,
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
    dealloc_QDBusInterface,
    0,
    0,
    0,
    release_QDBusInterface,
    cast_QDBusInterface,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QDBusInterface::staticMetaObject,
    0,
    0,
    0
};
