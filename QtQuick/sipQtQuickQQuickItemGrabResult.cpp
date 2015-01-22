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

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickitemgrabresult.sip"
#include <qquickitemgrabresult.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 100 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 30 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemGrabResult.cpp"


PyDoc_STRVAR(doc_QQuickItemGrabResult_image, "QQuickItemGrabResult.image() -> QImage");

extern "C" {static PyObject *meth_QQuickItemGrabResult_image(PyObject *, PyObject *);}
static PyObject *meth_QQuickItemGrabResult_image(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQuickItemGrabResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickItemGrabResult, &sipCpp))
        {
            QImage*sipRes;

            sipRes = new QImage(sipCpp->image());

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickItemGrabResult, sipName_image, doc_QQuickItemGrabResult_image);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickItemGrabResult_url, "QQuickItemGrabResult.url() -> QUrl");

extern "C" {static PyObject *meth_QQuickItemGrabResult_url(PyObject *, PyObject *);}
static PyObject *meth_QQuickItemGrabResult_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQuickItemGrabResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickItemGrabResult, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->url());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickItemGrabResult, sipName_url, doc_QQuickItemGrabResult_url);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickItemGrabResult_saveToFile, "QQuickItemGrabResult.saveToFile(str) -> bool");

extern "C" {static PyObject *meth_QQuickItemGrabResult_saveToFile(PyObject *, PyObject *);}
static PyObject *meth_QQuickItemGrabResult_saveToFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QQuickItemGrabResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQuickItemGrabResult, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->saveToFile(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickItemGrabResult, sipName_saveToFile, doc_QQuickItemGrabResult_saveToFile);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickItemGrabResult_event, "QQuickItemGrabResult.event(QEvent) -> bool");

extern "C" {static PyObject *meth_QQuickItemGrabResult_event(PyObject *, PyObject *);}
static PyObject *meth_QQuickItemGrabResult_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        QQuickItemGrabResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QQuickItemGrabResult, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QQuickItemGrabResult::event(a0) : sipCpp->event(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickItemGrabResult, sipName_event, doc_QQuickItemGrabResult_event);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQuickItemGrabResult(void *, const sipTypeDef *);}
static void *cast_QQuickItemGrabResult(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QQuickItemGrabResult)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QQuickItemGrabResult *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQuickItemGrabResult(void *, int);}
static void release_QQuickItemGrabResult(void *sipCppV,int)
{
    QQuickItemGrabResult *sipCpp = reinterpret_cast<QQuickItemGrabResult *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QQuickItemGrabResult(sipSimpleWrapper *);}
static void dealloc_QQuickItemGrabResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QQuickItemGrabResult(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQuickItemGrabResult[] = {{162, 0, 1}};


static PyMethodDef methods_QQuickItemGrabResult[] = {
    {SIP_MLNAME_CAST(sipName_event), meth_QQuickItemGrabResult_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickItemGrabResult_event)},
    {SIP_MLNAME_CAST(sipName_image), meth_QQuickItemGrabResult_image, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickItemGrabResult_image)},
    {SIP_MLNAME_CAST(sipName_saveToFile), meth_QQuickItemGrabResult_saveToFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickItemGrabResult_saveToFile)},
    {SIP_MLNAME_CAST(sipName_url), meth_QQuickItemGrabResult_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickItemGrabResult_url)}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QQuickItemGrabResult[] = {
    {"ready()", "\1QQuickItemGrabResult.ready", 0, 0},
    {0, 0, 0, 0}
};


pyqt5ClassTypeDef sipTypeDef_QtQuick_QQuickItemGrabResult = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQuickItemGrabResult,
        {0}
    },
    {
        sipNameNr_QQuickItemGrabResult,
        {0, 0, 1},
        4, methods_QQuickItemGrabResult,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QQuickItemGrabResult,
    0,
    0,
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
    dealloc_QQuickItemGrabResult,
    0,
    0,
    0,
    release_QQuickItemGrabResult,
    cast_QQuickItemGrabResult,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QQuickItemGrabResult::staticMetaObject,
    0,
    signals_QQuickItemGrabResult,
    0
};
