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

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 46 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"
#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQStateMachineWrappedEvent.cpp"


PyDoc_STRVAR(doc_QStateMachine_WrappedEvent_object, "QStateMachine.WrappedEvent.object() -> QObject");

extern "C" {static PyObject *meth_QStateMachine_WrappedEvent_object(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_WrappedEvent_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStateMachine::WrappedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_WrappedEvent, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->object();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrappedEvent, sipName_object, doc_QStateMachine_WrappedEvent_object);

    return NULL;
}


PyDoc_STRVAR(doc_QStateMachine_WrappedEvent_event, "QStateMachine.WrappedEvent.event() -> QEvent");

extern "C" {static PyObject *meth_QStateMachine_WrappedEvent_event(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_WrappedEvent_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStateMachine::WrappedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_WrappedEvent, &sipCpp))
        {
            QEvent*sipRes;

            sipRes = sipCpp->event();

            return sipConvertFromType(sipRes,sipType_QEvent,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_WrappedEvent, sipName_event, doc_QStateMachine_WrappedEvent_event);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStateMachine_WrappedEvent(void *, const sipTypeDef *);}
static void *cast_QStateMachine_WrappedEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStateMachine_WrappedEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QStateMachine::WrappedEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStateMachine_WrappedEvent(void *, int);}
static void release_QStateMachine_WrappedEvent(void *sipCppV,int)
{
    delete reinterpret_cast<QStateMachine::WrappedEvent *>(sipCppV);
}


extern "C" {static void dealloc_QStateMachine_WrappedEvent(sipSimpleWrapper *);}
static void dealloc_QStateMachine_WrappedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStateMachine_WrappedEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStateMachine_WrappedEvent[] = {{53, 255, 1}};


static PyMethodDef methods_QStateMachine_WrappedEvent[] = {
    {SIP_MLNAME_CAST(sipName_event), meth_QStateMachine_WrappedEvent_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_WrappedEvent_event)},
    {SIP_MLNAME_CAST(sipName_object), meth_QStateMachine_WrappedEvent_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_WrappedEvent_object)}
};


pyqt5ClassTypeDef sipTypeDef_QtCore_QStateMachine_WrappedEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStateMachine__WrappedEvent,
        {0}
    },
    {
        sipNameNr_WrappedEvent,
        {224, 255, 0},
        2, methods_QStateMachine_WrappedEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStateMachine_WrappedEvent,
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
    dealloc_QStateMachine_WrappedEvent,
    0,
    0,
    0,
    release_QStateMachine_WrappedEvent,
    cast_QStateMachine_WrappedEvent,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
