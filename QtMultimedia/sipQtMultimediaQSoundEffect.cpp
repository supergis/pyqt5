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

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qsoundeffect.sip"
#include <qsoundeffect.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 100 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 34 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSoundEffect.cpp"


class sipQSoundEffect : public QSoundEffect
{
public:
    sipQSoundEffect(QObject*);
    virtual ~sipQSoundEffect();

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
    sipQSoundEffect(const sipQSoundEffect &);
    sipQSoundEffect &operator = (const sipQSoundEffect &);

    char sipPyMethods[7];
};

sipQSoundEffect::sipQSoundEffect(QObject*a0): QSoundEffect(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSoundEffect::~sipQSoundEffect()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSoundEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtMultimedia_qt_metaobject(sipPySelf,sipType_QSoundEffect);
}

int sipQSoundEffect::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSoundEffect::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtMultimedia_qt_metacall(sipPySelf,sipType_QSoundEffect,_c,_id,_a);

    return _id;
}

void *sipQSoundEffect::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtMultimedia_qt_metacast(sipPySelf, sipType_QSoundEffect, _clname, &sipCpp) ? sipCpp : QSoundEffect::qt_metacast(_clname));
}

void sipQSoundEffect::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QSoundEffect::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSoundEffect::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QSoundEffect::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSoundEffect::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QSoundEffect::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSoundEffect::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QSoundEffect::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSoundEffect::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QSoundEffect::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQSoundEffect::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QSoundEffect::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQSoundEffect::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QSoundEffect::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSoundEffect_supportedMimeTypes, "QSoundEffect.supportedMimeTypes() -> list-of-str");

extern "C" {static PyObject *meth_QSoundEffect_supportedMimeTypes(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_supportedMimeTypes(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QStringList*sipRes;

            sipRes = new QStringList(QSoundEffect::supportedMimeTypes());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_supportedMimeTypes, doc_QSoundEffect_supportedMimeTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_source, "QSoundEffect.source() -> QUrl");

extern "C" {static PyObject *meth_QSoundEffect_source(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->source());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_source, doc_QSoundEffect_source);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_setSource, "QSoundEffect.setSource(QUrl)");

extern "C" {static PyObject *meth_QSoundEffect_setSource(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_setSource(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSoundEffect, &sipCpp, sipType_QUrl, &a0))
        {
            sipCpp->setSource(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_setSource, doc_QSoundEffect_setSource);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_loopCount, "QSoundEffect.loopCount() -> int");

extern "C" {static PyObject *meth_QSoundEffect_loopCount(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_loopCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->loopCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_loopCount, doc_QSoundEffect_loopCount);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_loopsRemaining, "QSoundEffect.loopsRemaining() -> int");

extern "C" {static PyObject *meth_QSoundEffect_loopsRemaining(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_loopsRemaining(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->loopsRemaining();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_loopsRemaining, doc_QSoundEffect_loopsRemaining);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_setLoopCount, "QSoundEffect.setLoopCount(int)");

extern "C" {static PyObject *meth_QSoundEffect_setLoopCount(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_setLoopCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSoundEffect, &sipCpp, &a0))
        {
            sipCpp->setLoopCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_setLoopCount, doc_QSoundEffect_setLoopCount);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_volume, "QSoundEffect.volume() -> float");

extern "C" {static PyObject *meth_QSoundEffect_volume(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_volume(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->volume();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_volume, doc_QSoundEffect_volume);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_setVolume, "QSoundEffect.setVolume(float)");

extern "C" {static PyObject *meth_QSoundEffect_setVolume(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_setVolume(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QSoundEffect, &sipCpp, &a0))
        {
            sipCpp->setVolume(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_setVolume, doc_QSoundEffect_setVolume);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_isMuted, "QSoundEffect.isMuted() -> bool");

extern "C" {static PyObject *meth_QSoundEffect_isMuted(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_isMuted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isMuted();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_isMuted, doc_QSoundEffect_isMuted);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_setMuted, "QSoundEffect.setMuted(bool)");

extern "C" {static PyObject *meth_QSoundEffect_setMuted(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_setMuted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSoundEffect, &sipCpp, &a0))
        {
            sipCpp->setMuted(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_setMuted, doc_QSoundEffect_setMuted);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_isLoaded, "QSoundEffect.isLoaded() -> bool");

extern "C" {static PyObject *meth_QSoundEffect_isLoaded(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_isLoaded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLoaded();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_isLoaded, doc_QSoundEffect_isLoaded);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_isPlaying, "QSoundEffect.isPlaying() -> bool");

extern "C" {static PyObject *meth_QSoundEffect_isPlaying(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_isPlaying(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isPlaying();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_isPlaying, doc_QSoundEffect_isPlaying);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_status, "QSoundEffect.status() -> QSoundEffect.Status");

extern "C" {static PyObject *meth_QSoundEffect_status(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_status(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            QSoundEffect::Status sipRes;

            sipRes = sipCpp->status();

            return sipConvertFromEnum(sipRes,sipType_QSoundEffect_Status);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_status, doc_QSoundEffect_status);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_category, "QSoundEffect.category() -> str");

extern "C" {static PyObject *meth_QSoundEffect_category(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_category(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->category());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_category, doc_QSoundEffect_category);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_setCategory, "QSoundEffect.setCategory(str)");

extern "C" {static PyObject *meth_QSoundEffect_setCategory(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_setCategory(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSoundEffect, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCategory(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_setCategory, doc_QSoundEffect_setCategory);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_play, "QSoundEffect.play()");

extern "C" {static PyObject *meth_QSoundEffect_play(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_play(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            sipCpp->play();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_play, doc_QSoundEffect_play);

    return NULL;
}


PyDoc_STRVAR(doc_QSoundEffect_stop, "QSoundEffect.stop()");

extern "C" {static PyObject *meth_QSoundEffect_stop(PyObject *, PyObject *);}
static PyObject *meth_QSoundEffect_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSoundEffect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSoundEffect, &sipCpp))
        {
            sipCpp->stop();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSoundEffect, sipName_stop, doc_QSoundEffect_stop);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSoundEffect(void *, const sipTypeDef *);}
static void *cast_QSoundEffect(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSoundEffect)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSoundEffect *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSoundEffect(void *, int);}
static void release_QSoundEffect(void *sipCppV,int)
{
    QSoundEffect *sipCpp = reinterpret_cast<QSoundEffect *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QSoundEffect(sipSimpleWrapper *);}
static void dealloc_QSoundEffect(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSoundEffect *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSoundEffect(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSoundEffect(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSoundEffect(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSoundEffect *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQSoundEffect(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSoundEffect[] = {{162, 0, 1}};


static PyMethodDef methods_QSoundEffect[] = {
    {SIP_MLNAME_CAST(sipName_category), meth_QSoundEffect_category, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_category)},
    {SIP_MLNAME_CAST(sipName_isLoaded), meth_QSoundEffect_isLoaded, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_isLoaded)},
    {SIP_MLNAME_CAST(sipName_isMuted), meth_QSoundEffect_isMuted, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_isMuted)},
    {SIP_MLNAME_CAST(sipName_isPlaying), meth_QSoundEffect_isPlaying, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_isPlaying)},
    {SIP_MLNAME_CAST(sipName_loopCount), meth_QSoundEffect_loopCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_loopCount)},
    {SIP_MLNAME_CAST(sipName_loopsRemaining), meth_QSoundEffect_loopsRemaining, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_loopsRemaining)},
    {SIP_MLNAME_CAST(sipName_play), meth_QSoundEffect_play, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_play)},
    {SIP_MLNAME_CAST(sipName_setCategory), meth_QSoundEffect_setCategory, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_setCategory)},
    {SIP_MLNAME_CAST(sipName_setLoopCount), meth_QSoundEffect_setLoopCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_setLoopCount)},
    {SIP_MLNAME_CAST(sipName_setMuted), meth_QSoundEffect_setMuted, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_setMuted)},
    {SIP_MLNAME_CAST(sipName_setSource), meth_QSoundEffect_setSource, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_setSource)},
    {SIP_MLNAME_CAST(sipName_setVolume), meth_QSoundEffect_setVolume, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_setVolume)},
    {SIP_MLNAME_CAST(sipName_source), meth_QSoundEffect_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_source)},
    {SIP_MLNAME_CAST(sipName_status), meth_QSoundEffect_status, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_status)},
    {SIP_MLNAME_CAST(sipName_stop), meth_QSoundEffect_stop, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_stop)},
    {SIP_MLNAME_CAST(sipName_supportedMimeTypes), meth_QSoundEffect_supportedMimeTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_supportedMimeTypes)},
    {SIP_MLNAME_CAST(sipName_volume), meth_QSoundEffect_volume, METH_VARARGS, SIP_MLDOC_CAST(doc_QSoundEffect_volume)}
};

static sipEnumMemberDef enummembers_QSoundEffect[] = {
    {sipName_Error, static_cast<int>(QSoundEffect::Error), 103},
    {sipName_Infinite, static_cast<int>(QSoundEffect::Infinite), 102},
    {sipName_Loading, static_cast<int>(QSoundEffect::Loading), 103},
    {sipName_Null, static_cast<int>(QSoundEffect::Null), 103},
    {sipName_Ready, static_cast<int>(QSoundEffect::Ready), 103},
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QSoundEffect[] = {
    {"categoryChanged()", "\1QSoundEffect.categoryChanged", 0, 0},
    {"statusChanged()", "\1QSoundEffect.statusChanged", 0, 0},
    {"playingChanged()", "\1QSoundEffect.playingChanged", 0, 0},
    {"loadedChanged()", "\1QSoundEffect.loadedChanged", 0, 0},
    {"mutedChanged()", "\1QSoundEffect.mutedChanged", 0, 0},
    {"volumeChanged()", "\1QSoundEffect.volumeChanged", 0, 0},
    {"loopsRemainingChanged()", "\1QSoundEffect.loopsRemainingChanged", 0, 0},
    {"loopCountChanged()", "\1QSoundEffect.loopCountChanged", 0, 0},
    {"sourceChanged()", "\1QSoundEffect.sourceChanged", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QSoundEffect, "\1QSoundEffect(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QSoundEffect = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSoundEffect,
        {0}
    },
    {
        sipNameNr_QSoundEffect,
        {0, 0, 1},
        17, methods_QSoundEffect,
        5, enummembers_QSoundEffect,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSoundEffect,
    -1,
    -1,
    supers_QSoundEffect,
    0,
    init_type_QSoundEffect,
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
    dealloc_QSoundEffect,
    0,
    0,
    0,
    release_QSoundEffect,
    cast_QSoundEffect,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QSoundEffect::staticMetaObject,
    0,
    signals_QSoundEffect,
    0
};
