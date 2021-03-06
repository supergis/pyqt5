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

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qfileselector.sip"
#include <qfileselector.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 27 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 100 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 234 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 222 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 36 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 32 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 144 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileSelector.cpp"


class sipQFileSelector : public QFileSelector
{
public:
    sipQFileSelector(QObject*);
    virtual ~sipQFileSelector();

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
    sipQFileSelector(const sipQFileSelector &);
    sipQFileSelector &operator = (const sipQFileSelector &);

    char sipPyMethods[7];
};

sipQFileSelector::sipQFileSelector(QObject*a0): QFileSelector(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFileSelector::~sipQFileSelector()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQFileSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtCore_qt_metaobject(sipPySelf,sipType_QFileSelector);
}

int sipQFileSelector::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QFileSelector::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QFileSelector,_c,_id,_a);

    return _id;
}

void *sipQFileSelector::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QFileSelector, _clname, &sipCpp) ? sipCpp : QFileSelector::qt_metacast(_clname));
}

void sipQFileSelector::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QFileSelector::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_46(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_46(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQFileSelector::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QFileSelector::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_46(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_46(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQFileSelector::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QFileSelector::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_25(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQFileSelector::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QFileSelector::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_47(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_47(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

void sipQFileSelector::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QFileSelector::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    sipVH_QtCore_9(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}

bool sipQFileSelector::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QFileSelector::eventFilter(a0,a1);

    extern bool sipVH_QtCore_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    return sipVH_QtCore_26(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0, a1);
}

bool sipQFileSelector::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QFileSelector::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);
    extern void sipVEH_QtCore_PyQt5(sipSimpleWrapper *, sip_gilstate_t);

    return sipVH_QtCore_5(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QFileSelector_select, "QFileSelector.select(str) -> str\n"
    "QFileSelector.select(QUrl) -> QUrl");

extern "C" {static PyObject *meth_QFileSelector_select(PyObject *, PyObject *);}
static PyObject *meth_QFileSelector_select(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QFileSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileSelector, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->select(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QUrl* a0;
        const QFileSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFileSelector, &sipCpp, sipType_QUrl, &a0))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->select(*a0));

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSelector, sipName_select, doc_QFileSelector_select);

    return NULL;
}


PyDoc_STRVAR(doc_QFileSelector_extraSelectors, "QFileSelector.extraSelectors() -> list-of-str");

extern "C" {static PyObject *meth_QFileSelector_extraSelectors(PyObject *, PyObject *);}
static PyObject *meth_QFileSelector_extraSelectors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileSelector, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->extraSelectors());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSelector, sipName_extraSelectors, doc_QFileSelector_extraSelectors);

    return NULL;
}


PyDoc_STRVAR(doc_QFileSelector_setExtraSelectors, "QFileSelector.setExtraSelectors(list-of-str)");

extern "C" {static PyObject *meth_QFileSelector_setExtraSelectors(PyObject *, PyObject *);}
static PyObject *meth_QFileSelector_setExtraSelectors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList* a0;
        int a0State = 0;
        QFileSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileSelector, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            sipCpp->setExtraSelectors(*a0);
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSelector, sipName_setExtraSelectors, doc_QFileSelector_setExtraSelectors);

    return NULL;
}


PyDoc_STRVAR(doc_QFileSelector_allSelectors, "QFileSelector.allSelectors() -> list-of-str");

extern "C" {static PyObject *meth_QFileSelector_allSelectors(PyObject *, PyObject *);}
static PyObject *meth_QFileSelector_allSelectors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileSelector, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->allSelectors());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSelector, sipName_allSelectors, doc_QFileSelector_allSelectors);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFileSelector(void *, const sipTypeDef *);}
static void *cast_QFileSelector(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QFileSelector)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QFileSelector *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileSelector(void *, int);}
static void release_QFileSelector(void *sipCppV,int)
{
    QFileSelector *sipCpp = reinterpret_cast<QFileSelector *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QFileSelector(sipSimpleWrapper *);}
static void dealloc_QFileSelector(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQFileSelector *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QFileSelector(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QFileSelector(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileSelector(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQFileSelector *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQFileSelector(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFileSelector[] = {{162, 255, 1}};


static PyMethodDef methods_QFileSelector[] = {
    {SIP_MLNAME_CAST(sipName_allSelectors), meth_QFileSelector_allSelectors, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSelector_allSelectors)},
    {SIP_MLNAME_CAST(sipName_extraSelectors), meth_QFileSelector_extraSelectors, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSelector_extraSelectors)},
    {SIP_MLNAME_CAST(sipName_select), meth_QFileSelector_select, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSelector_select)},
    {SIP_MLNAME_CAST(sipName_setExtraSelectors), meth_QFileSelector_setExtraSelectors, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSelector_setExtraSelectors)}
};

PyDoc_STRVAR(doc_QFileSelector, "\1QFileSelector(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QFileSelector = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QFileSelector,
        {0}
    },
    {
        sipNameNr_QFileSelector,
        {0, 0, 1},
        4, methods_QFileSelector,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFileSelector,
    -1,
    -1,
    supers_QFileSelector,
    0,
    init_type_QFileSelector,
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
    dealloc_QFileSelector,
    0,
    0,
    0,
    release_QFileSelector,
    cast_QFileSelector,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QFileSelector::staticMetaObject,
    0,
    0,
    0
};
