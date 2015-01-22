/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:47 2015
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

#include "sipAPIQtQuick.h"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickrendercontrol.sip"
#include <qquickrendercontrol.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 26 "sip/QtGui/qwindow.sip"
#include <qwindow.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickwindow.sip"
#include <qquickwindow.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 30 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 50 "sip/QtGui/qopenglcontext.sip"
#include <qopenglcontext.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 84 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 87 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 90 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 93 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickRenderControl.cpp"


class sipQQuickRenderControl : public QQuickRenderControl
{
public:
    sipQQuickRenderControl(QObject*);
    virtual ~sipQQuickRenderControl();

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
    QWindow* renderWindow(QPoint*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQuickRenderControl(const sipQQuickRenderControl &);
    sipQQuickRenderControl &operator = (const sipQQuickRenderControl &);

    char sipPyMethods[8];
};

sipQQuickRenderControl::sipQQuickRenderControl(QObject*a0): QQuickRenderControl(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQuickRenderControl::~sipQQuickRenderControl()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQQuickRenderControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtQuick_qt_metaobject(sipPySelf,sipType_QQuickRenderControl);
}

int sipQQuickRenderControl::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QQuickRenderControl::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtQuick_qt_metacall(sipPySelf,sipType_QQuickRenderControl,_c,_id,_a);

    return _id;
}

void *sipQQuickRenderControl::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtQuick_qt_metacast(sipPySelf, sipType_QQuickRenderControl, _clname, &sipCpp) ? sipCpp : QQuickRenderControl::qt_metacast(_clname));
}

void sipQQuickRenderControl::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QQuickRenderControl::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickRenderControl::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QQuickRenderControl::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickRenderControl::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QQuickRenderControl::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickRenderControl::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QQuickRenderControl::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickRenderControl::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QQuickRenderControl::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQQuickRenderControl::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QQuickRenderControl::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQQuickRenderControl::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QQuickRenderControl::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QWindow* sipQQuickRenderControl::renderWindow(QPoint*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_renderWindow);

    if (!sipMeth)
        return QQuickRenderControl::renderWindow(a0);

    extern QWindow* sipVH_QtQuick_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPoint*);

    return sipVH_QtQuick_10(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QQuickRenderControl_initialize, "QQuickRenderControl.initialize(QOpenGLContext)");

extern "C" {static PyObject *meth_QQuickRenderControl_initialize(PyObject *, PyObject *);}
static PyObject *meth_QQuickRenderControl_initialize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLContext* a0;
        QQuickRenderControl *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQuickRenderControl, &sipCpp, sipType_QOpenGLContext, &a0))
        {
            sipCpp->initialize(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickRenderControl, sipName_initialize, doc_QQuickRenderControl_initialize);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickRenderControl_invalidate, "QQuickRenderControl.invalidate()");

extern "C" {static PyObject *meth_QQuickRenderControl_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QQuickRenderControl_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQuickRenderControl *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickRenderControl, &sipCpp))
        {
            sipCpp->invalidate();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickRenderControl, sipName_invalidate, doc_QQuickRenderControl_invalidate);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickRenderControl_polishItems, "QQuickRenderControl.polishItems()");

extern "C" {static PyObject *meth_QQuickRenderControl_polishItems(PyObject *, PyObject *);}
static PyObject *meth_QQuickRenderControl_polishItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQuickRenderControl *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickRenderControl, &sipCpp))
        {
            sipCpp->polishItems();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickRenderControl, sipName_polishItems, doc_QQuickRenderControl_polishItems);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickRenderControl_render, "QQuickRenderControl.render()");

extern "C" {static PyObject *meth_QQuickRenderControl_render(PyObject *, PyObject *);}
static PyObject *meth_QQuickRenderControl_render(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQuickRenderControl *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickRenderControl, &sipCpp))
        {
            sipCpp->render();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickRenderControl, sipName_render, doc_QQuickRenderControl_render);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickRenderControl_sync, "QQuickRenderControl.sync() -> bool");

extern "C" {static PyObject *meth_QQuickRenderControl_sync(PyObject *, PyObject *);}
static PyObject *meth_QQuickRenderControl_sync(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQuickRenderControl *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickRenderControl, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->sync();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickRenderControl, sipName_sync, doc_QQuickRenderControl_sync);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickRenderControl_grab, "QQuickRenderControl.grab() -> QImage");

extern "C" {static PyObject *meth_QQuickRenderControl_grab(PyObject *, PyObject *);}
static PyObject *meth_QQuickRenderControl_grab(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQuickRenderControl *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickRenderControl, &sipCpp))
        {
            QImage*sipRes;

            sipRes = new QImage(sipCpp->grab());

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickRenderControl, sipName_grab, doc_QQuickRenderControl_grab);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickRenderControl_renderWindowFor, "QQuickRenderControl.renderWindowFor(QQuickWindow, QPoint offset=None) -> QWindow");

extern "C" {static PyObject *meth_QQuickRenderControl_renderWindowFor(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QQuickRenderControl_renderWindowFor(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QQuickWindow* a0;
        QPoint* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_offset,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J8|J8", sipType_QQuickWindow, &a0, sipType_QPoint, &a1))
        {
            QWindow*sipRes;

            sipRes = QQuickRenderControl::renderWindowFor(a0,a1);

            return sipConvertFromType(sipRes,sipType_QWindow,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickRenderControl, sipName_renderWindowFor, doc_QQuickRenderControl_renderWindowFor);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickRenderControl_renderWindow, "QQuickRenderControl.renderWindow(QPoint) -> QWindow");

extern "C" {static PyObject *meth_QQuickRenderControl_renderWindow(PyObject *, PyObject *);}
static PyObject *meth_QQuickRenderControl_renderWindow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPoint* a0;
        QQuickRenderControl *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQuickRenderControl, &sipCpp, sipType_QPoint, &a0))
        {
            QWindow*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QQuickRenderControl::renderWindow(a0) : sipCpp->renderWindow(a0));

            return sipConvertFromType(sipRes,sipType_QWindow,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickRenderControl, sipName_renderWindow, doc_QQuickRenderControl_renderWindow);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQuickRenderControl(void *, const sipTypeDef *);}
static void *cast_QQuickRenderControl(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QQuickRenderControl)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QQuickRenderControl *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQuickRenderControl(void *, int);}
static void release_QQuickRenderControl(void *sipCppV,int)
{
    QQuickRenderControl *sipCpp = reinterpret_cast<QQuickRenderControl *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QQuickRenderControl(sipSimpleWrapper *);}
static void dealloc_QQuickRenderControl(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQuickRenderControl *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQuickRenderControl(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQuickRenderControl(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQuickRenderControl(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQQuickRenderControl *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQQuickRenderControl(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQuickRenderControl[] = {{162, 0, 1}};


static PyMethodDef methods_QQuickRenderControl[] = {
    {SIP_MLNAME_CAST(sipName_grab), meth_QQuickRenderControl_grab, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickRenderControl_grab)},
    {SIP_MLNAME_CAST(sipName_initialize), meth_QQuickRenderControl_initialize, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickRenderControl_initialize)},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QQuickRenderControl_invalidate, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickRenderControl_invalidate)},
    {SIP_MLNAME_CAST(sipName_polishItems), meth_QQuickRenderControl_polishItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickRenderControl_polishItems)},
    {SIP_MLNAME_CAST(sipName_render), meth_QQuickRenderControl_render, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickRenderControl_render)},
    {SIP_MLNAME_CAST(sipName_renderWindow), meth_QQuickRenderControl_renderWindow, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickRenderControl_renderWindow)},
    {SIP_MLNAME_CAST(sipName_renderWindowFor), (PyCFunction)meth_QQuickRenderControl_renderWindowFor, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QQuickRenderControl_renderWindowFor)},
    {SIP_MLNAME_CAST(sipName_sync), meth_QQuickRenderControl_sync, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickRenderControl_sync)}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QQuickRenderControl[] = {
    {"sceneChanged()", "\1QQuickRenderControl.sceneChanged", 0, 0},
    {"renderRequested()", "\1QQuickRenderControl.renderRequested", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QQuickRenderControl, "\1QQuickRenderControl(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QQuickRenderControl = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQuickRenderControl,
        {0}
    },
    {
        sipNameNr_QQuickRenderControl,
        {0, 0, 1},
        8, methods_QQuickRenderControl,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQuickRenderControl,
    -1,
    -1,
    supers_QQuickRenderControl,
    0,
    init_type_QQuickRenderControl,
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
    dealloc_QQuickRenderControl,
    0,
    0,
    0,
    release_QQuickRenderControl,
    cast_QQuickRenderControl,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QQuickRenderControl::staticMetaObject,
    0,
    signals_QQuickRenderControl,
    0
};
