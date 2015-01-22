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

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qsound.sip"
#include <qsound.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQSound.cpp"


class sipQSound : public QSound
{
public:
    sipQSound(const QString&,QObject*);
    virtual ~sipQSound();

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
    sipQSound(const sipQSound &);
    sipQSound &operator = (const sipQSound &);

    char sipPyMethods[7];
};

sipQSound::sipQSound(const QString& a0,QObject*a1): QSound(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSound::~sipQSound()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtMultimedia_qt_metaobject(sipPySelf,sipType_QSound);
}

int sipQSound::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSound::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtMultimedia_qt_metacall(sipPySelf,sipType_QSound,_c,_id,_a);

    return _id;
}

void *sipQSound::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtMultimedia_qt_metacast(sipPySelf, sipType_QSound, _clname, &sipCpp) ? sipCpp : QSound::qt_metacast(_clname));
}

void sipQSound::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QSound::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSound::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QSound::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSound::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QSound::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSound::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QSound::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQSound::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QSound::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQSound::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QSound::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQSound::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QSound::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSound_play, "QSound.play(str)\n"
    "QSound.play()");

extern "C" {static PyObject *meth_QSound_play(PyObject *, PyObject *);}
static PyObject *meth_QSound_play(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QSound::play(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            sipCpp->play();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_play, doc_QSound_play);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_loops, "QSound.loops() -> int");

extern "C" {static PyObject *meth_QSound_loops(PyObject *, PyObject *);}
static PyObject *meth_QSound_loops(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->loops();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_loops, doc_QSound_loops);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_loopsRemaining, "QSound.loopsRemaining() -> int");

extern "C" {static PyObject *meth_QSound_loopsRemaining(PyObject *, PyObject *);}
static PyObject *meth_QSound_loopsRemaining(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->loopsRemaining();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_loopsRemaining, doc_QSound_loopsRemaining);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_setLoops, "QSound.setLoops(int)");

extern "C" {static PyObject *meth_QSound_setLoops(PyObject *, PyObject *);}
static PyObject *meth_QSound_setLoops(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSound, &sipCpp, &a0))
        {
            sipCpp->setLoops(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_setLoops, doc_QSound_setLoops);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_fileName, "QSound.fileName() -> str");

extern "C" {static PyObject *meth_QSound_fileName(PyObject *, PyObject *);}
static PyObject *meth_QSound_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->fileName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_fileName, doc_QSound_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_isFinished, "QSound.isFinished() -> bool");

extern "C" {static PyObject *meth_QSound_isFinished(PyObject *, PyObject *);}
static PyObject *meth_QSound_isFinished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isFinished();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_isFinished, doc_QSound_isFinished);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_stop, "QSound.stop()");

extern "C" {static PyObject *meth_QSound_stop(PyObject *, PyObject *);}
static PyObject *meth_QSound_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            sipCpp->stop();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_stop, doc_QSound_stop);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSound(void *, const sipTypeDef *);}
static void *cast_QSound(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSound)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSound *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSound(void *, int);}
static void release_QSound(void *sipCppV,int)
{
    QSound *sipCpp = reinterpret_cast<QSound *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QSound(sipSimpleWrapper *);}
static void dealloc_QSound(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSound *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSound(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSound(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSound(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSound *sipCpp = 0;

    {
        const QString* a0;
        int a0State = 0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QString,&a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQSound(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSound[] = {{162, 0, 1}};


static PyMethodDef methods_QSound[] = {
    {SIP_MLNAME_CAST(sipName_fileName), meth_QSound_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_fileName)},
    {SIP_MLNAME_CAST(sipName_isFinished), meth_QSound_isFinished, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_isFinished)},
    {SIP_MLNAME_CAST(sipName_loops), meth_QSound_loops, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_loops)},
    {SIP_MLNAME_CAST(sipName_loopsRemaining), meth_QSound_loopsRemaining, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_loopsRemaining)},
    {SIP_MLNAME_CAST(sipName_play), meth_QSound_play, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_play)},
    {SIP_MLNAME_CAST(sipName_setLoops), meth_QSound_setLoops, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_setLoops)},
    {SIP_MLNAME_CAST(sipName_stop), meth_QSound_stop, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_stop)}
};

static sipEnumMemberDef enummembers_QSound[] = {
    {sipName_Infinite, static_cast<int>(QSound::Infinite), 100},
};

PyDoc_STRVAR(doc_QSound, "\1QSound(str, QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QSound = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSound,
        {0}
    },
    {
        sipNameNr_QSound,
        {0, 0, 1},
        7, methods_QSound,
        1, enummembers_QSound,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSound,
    -1,
    -1,
    supers_QSound,
    0,
    init_type_QSound,
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
    dealloc_QSound,
    0,
    0,
    0,
    release_QSound,
    cast_QSound,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QSound::staticMetaObject,
    0,
    0,
    0
};
