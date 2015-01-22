/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:53 2015
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

#include "sipAPIEnginio.h"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/Enginio/enginiooauth2authentication.sip"
#include <enginiooauth2authentication.h>
#line 29 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/supermap/OpenThings/pyqt5/Enginio/sipEnginioEnginioOAuth2Authentication.cpp"


class sipEnginioOAuth2Authentication : public EnginioOAuth2Authentication
{
public:
    sipEnginioOAuth2Authentication(QObject*);
    virtual ~sipEnginioOAuth2Authentication();

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

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipEnginioOAuth2Authentication(const sipEnginioOAuth2Authentication &);
    sipEnginioOAuth2Authentication &operator = (const sipEnginioOAuth2Authentication &);

    char sipPyMethods[7];
};

sipEnginioOAuth2Authentication::sipEnginioOAuth2Authentication(QObject*a0): EnginioOAuth2Authentication(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipEnginioOAuth2Authentication::~sipEnginioOAuth2Authentication()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipEnginioOAuth2Authentication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_Enginio_qt_metaobject(sipPySelf,sipType_EnginioOAuth2Authentication);
}

int sipEnginioOAuth2Authentication::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = EnginioOAuth2Authentication::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_Enginio_qt_metacall(sipPySelf,sipType_EnginioOAuth2Authentication,_c,_id,_a);

    return _id;
}

void *sipEnginioOAuth2Authentication::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_Enginio_qt_metacast(sipPySelf, sipType_EnginioOAuth2Authentication, _clname, &sipCpp) ? sipCpp : EnginioOAuth2Authentication::qt_metacast(_clname));
}

void sipEnginioOAuth2Authentication::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_Enginio_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_Enginio_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipEnginioOAuth2Authentication::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_Enginio_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_Enginio_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipEnginioOAuth2Authentication::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_Enginio_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_Enginio_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipEnginioOAuth2Authentication::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_Enginio_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_Enginio_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipEnginioOAuth2Authentication::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_Enginio_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_Enginio_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipEnginioOAuth2Authentication::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return EnginioOAuth2Authentication::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_Enginio_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_Enginio_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipEnginioOAuth2Authentication::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return EnginioOAuth2Authentication::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_Enginio_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_Enginio_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_user, "EnginioOAuth2Authentication.user() -> str");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_user(PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_user(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioOAuth2Authentication *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->user());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_user, doc_EnginioOAuth2Authentication_user);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_password, "EnginioOAuth2Authentication.password() -> str");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_password(PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_password(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioOAuth2Authentication *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->password());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_password, doc_EnginioOAuth2Authentication_password);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_setUser, "EnginioOAuth2Authentication.setUser(str)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_setUser(PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_setUser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        EnginioOAuth2Authentication *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setUser(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_setUser, doc_EnginioOAuth2Authentication_setUser);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_setPassword, "EnginioOAuth2Authentication.setPassword(str)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_setPassword(PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_setPassword(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        EnginioOAuth2Authentication *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setPassword(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_setPassword, doc_EnginioOAuth2Authentication_setPassword);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_EnginioOAuth2Authentication(void *, const sipTypeDef *);}
static void *cast_EnginioOAuth2Authentication(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_EnginioOAuth2Authentication)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_EnginioIdentity)->ctd_cast((EnginioIdentity *)(EnginioOAuth2Authentication *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_EnginioOAuth2Authentication(void *, int);}
static void release_EnginioOAuth2Authentication(void *sipCppV,int)
{
    EnginioOAuth2Authentication *sipCpp = reinterpret_cast<EnginioOAuth2Authentication *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_EnginioOAuth2Authentication(sipSimpleWrapper *);}
static void dealloc_EnginioOAuth2Authentication(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipEnginioOAuth2Authentication *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_EnginioOAuth2Authentication(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_EnginioOAuth2Authentication(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_EnginioOAuth2Authentication(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipEnginioOAuth2Authentication *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipEnginioOAuth2Authentication(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_EnginioOAuth2Authentication[] = {{7, 255, 1}};


static PyMethodDef methods_EnginioOAuth2Authentication[] = {
    {SIP_MLNAME_CAST(sipName_password), meth_EnginioOAuth2Authentication_password, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioOAuth2Authentication_password)},
    {SIP_MLNAME_CAST(sipName_setPassword), meth_EnginioOAuth2Authentication_setPassword, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioOAuth2Authentication_setPassword)},
    {SIP_MLNAME_CAST(sipName_setUser), meth_EnginioOAuth2Authentication_setUser, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioOAuth2Authentication_setUser)},
    {SIP_MLNAME_CAST(sipName_user), meth_EnginioOAuth2Authentication_user, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioOAuth2Authentication_user)}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_EnginioOAuth2Authentication[] = {
    {"passwordChanged(QString)", "\1EnginioOAuth2Authentication.passwordChanged[str]", 0, 0},
    {"userChanged(QString)", "\1EnginioOAuth2Authentication.userChanged[str]", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_EnginioOAuth2Authentication, "\1EnginioOAuth2Authentication(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_Enginio_EnginioOAuth2Authentication = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_EnginioOAuth2Authentication,
        {0}
    },
    {
        sipNameNr_EnginioOAuth2Authentication,
        {0, 0, 1},
        4, methods_EnginioOAuth2Authentication,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_EnginioOAuth2Authentication,
    -1,
    -1,
    supers_EnginioOAuth2Authentication,
    0,
    init_type_EnginioOAuth2Authentication,
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
    dealloc_EnginioOAuth2Authentication,
    0,
    0,
    0,
    release_EnginioOAuth2Authentication,
    cast_EnginioOAuth2Authentication,
    0,
    0,
    0,
    0,
    0,
    0
},
    &EnginioOAuth2Authentication::staticMetaObject,
    0,
    signals_EnginioOAuth2Authentication,
    0
};
