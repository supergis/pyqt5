/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:52:28 2015
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

#include "sipAPIQtGui.h"

#line 58 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qopengltimerquery.sip"
#include <qopengltimerquery.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 339 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qpygui_qvector.sip"
#include <qvector.h>
#include <qopengl.h>
#line 37 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 25 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qpygui_qvector.sip"
#include <qvector.h>
#line 40 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 43 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 46 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 55 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 58 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 61 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 64 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 67 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 70 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 73 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 76 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 79 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 82 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 85 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQOpenGLTimeMonitor.cpp"


class sipQOpenGLTimeMonitor : public QOpenGLTimeMonitor
{
public:
    sipQOpenGLTimeMonitor(QObject*);
    virtual ~sipQOpenGLTimeMonitor();

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
    sipQOpenGLTimeMonitor(const sipQOpenGLTimeMonitor &);
    sipQOpenGLTimeMonitor &operator = (const sipQOpenGLTimeMonitor &);

    char sipPyMethods[7];
};

sipQOpenGLTimeMonitor::sipQOpenGLTimeMonitor(QObject*a0): QOpenGLTimeMonitor(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQOpenGLTimeMonitor::~sipQOpenGLTimeMonitor()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQOpenGLTimeMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QOpenGLTimeMonitor);
}

int sipQOpenGLTimeMonitor::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QOpenGLTimeMonitor::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QOpenGLTimeMonitor,_c,_id,_a);

    return _id;
}

void *sipQOpenGLTimeMonitor::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QOpenGLTimeMonitor, _clname, &sipCpp) ? sipCpp : QOpenGLTimeMonitor::qt_metacast(_clname));
}

void sipQOpenGLTimeMonitor::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QOpenGLTimeMonitor::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimeMonitor::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QOpenGLTimeMonitor::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtGui_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimeMonitor::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QOpenGLTimeMonitor::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimeMonitor::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QOpenGLTimeMonitor::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtGui_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimeMonitor::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QOpenGLTimeMonitor::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQOpenGLTimeMonitor::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QOpenGLTimeMonitor::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtGui_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQOpenGLTimeMonitor::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QOpenGLTimeMonitor::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_setSampleCount, "QOpenGLTimeMonitor.setSampleCount(int)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_setSampleCount(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_setSampleCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, &a0))
        {
            sipCpp->setSampleCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_setSampleCount, doc_QOpenGLTimeMonitor_setSampleCount);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_sampleCount, "QOpenGLTimeMonitor.sampleCount() -> int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_sampleCount(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_sampleCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sampleCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_sampleCount, doc_QOpenGLTimeMonitor_sampleCount);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_create, "QOpenGLTimeMonitor.create() -> bool");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_create(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->create();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_create, doc_QOpenGLTimeMonitor_create);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_destroy, "QOpenGLTimeMonitor.destroy()");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_destroy(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            sipCpp->destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_destroy, doc_QOpenGLTimeMonitor_destroy);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_isCreated, "QOpenGLTimeMonitor.isCreated() -> bool");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_isCreated(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_isCreated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCreated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_isCreated, doc_QOpenGLTimeMonitor_isCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_objectIds, "QOpenGLTimeMonitor.objectIds() -> list-of-int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_objectIds(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_objectIds(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            QVector<GLuint>*sipRes;

            sipRes = new QVector<GLuint>(sipCpp->objectIds());

            return sipConvertFromNewType(sipRes,sipType_QVector_1900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_objectIds, doc_QOpenGLTimeMonitor_objectIds);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_recordSample, "QOpenGLTimeMonitor.recordSample() -> int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_recordSample(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_recordSample(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->recordSample();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_recordSample, doc_QOpenGLTimeMonitor_recordSample);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_isResultAvailable, "QOpenGLTimeMonitor.isResultAvailable() -> bool");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_isResultAvailable(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_isResultAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isResultAvailable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_isResultAvailable, doc_QOpenGLTimeMonitor_isResultAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_waitForSamples, "QOpenGLTimeMonitor.waitForSamples() -> list-of-int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_waitForSamples(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_waitForSamples(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            QVector<GLuint64>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<GLuint64>(sipCpp->waitForSamples());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_3900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_waitForSamples, doc_QOpenGLTimeMonitor_waitForSamples);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_waitForIntervals, "QOpenGLTimeMonitor.waitForIntervals() -> list-of-int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_waitForIntervals(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_waitForIntervals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            QVector<GLuint64>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<GLuint64>(sipCpp->waitForIntervals());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_3900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_waitForIntervals, doc_QOpenGLTimeMonitor_waitForIntervals);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_reset, "QOpenGLTimeMonitor.reset()");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_reset(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            sipCpp->reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_reset, doc_QOpenGLTimeMonitor_reset);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QOpenGLTimeMonitor(void *, const sipTypeDef *);}
static void *cast_QOpenGLTimeMonitor(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QOpenGLTimeMonitor)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QOpenGLTimeMonitor *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLTimeMonitor(void *, int);}
static void release_QOpenGLTimeMonitor(void *sipCppV,int)
{
    QOpenGLTimeMonitor *sipCpp = reinterpret_cast<QOpenGLTimeMonitor *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QOpenGLTimeMonitor(sipSimpleWrapper *);}
static void dealloc_QOpenGLTimeMonitor(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQOpenGLTimeMonitor *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLTimeMonitor(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QOpenGLTimeMonitor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLTimeMonitor(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQOpenGLTimeMonitor *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQOpenGLTimeMonitor(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QOpenGLTimeMonitor[] = {{162, 0, 1}};


static PyMethodDef methods_QOpenGLTimeMonitor[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_QOpenGLTimeMonitor_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_create)},
    {SIP_MLNAME_CAST(sipName_destroy), meth_QOpenGLTimeMonitor_destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_destroy)},
    {SIP_MLNAME_CAST(sipName_isCreated), meth_QOpenGLTimeMonitor_isCreated, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_isCreated)},
    {SIP_MLNAME_CAST(sipName_isResultAvailable), meth_QOpenGLTimeMonitor_isResultAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_isResultAvailable)},
    {SIP_MLNAME_CAST(sipName_objectIds), meth_QOpenGLTimeMonitor_objectIds, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_objectIds)},
    {SIP_MLNAME_CAST(sipName_recordSample), meth_QOpenGLTimeMonitor_recordSample, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_recordSample)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QOpenGLTimeMonitor_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_reset)},
    {SIP_MLNAME_CAST(sipName_sampleCount), meth_QOpenGLTimeMonitor_sampleCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_sampleCount)},
    {SIP_MLNAME_CAST(sipName_setSampleCount), meth_QOpenGLTimeMonitor_setSampleCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_setSampleCount)},
    {SIP_MLNAME_CAST(sipName_waitForIntervals), meth_QOpenGLTimeMonitor_waitForIntervals, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_waitForIntervals)},
    {SIP_MLNAME_CAST(sipName_waitForSamples), meth_QOpenGLTimeMonitor_waitForSamples, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_waitForSamples)}
};

PyDoc_STRVAR(doc_QOpenGLTimeMonitor, "\1QOpenGLTimeMonitor(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLTimeMonitor = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLTimeMonitor,
        {0}
    },
    {
        sipNameNr_QOpenGLTimeMonitor,
        {0, 0, 1},
        11, methods_QOpenGLTimeMonitor,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLTimeMonitor,
    -1,
    -1,
    supers_QOpenGLTimeMonitor,
    0,
    init_type_QOpenGLTimeMonitor,
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
    dealloc_QOpenGLTimeMonitor,
    0,
    0,
    0,
    release_QOpenGLTimeMonitor,
    cast_QOpenGLTimeMonitor,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QOpenGLTimeMonitor::staticMetaObject,
    0,
    0,
    0
};
