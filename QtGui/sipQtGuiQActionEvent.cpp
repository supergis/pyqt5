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

#line 635 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQActionEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQActionEvent.cpp"


class sipQActionEvent : public QActionEvent
{
public:
    sipQActionEvent(int,QAction*,QAction*);
    sipQActionEvent(const QActionEvent&);
    ~sipQActionEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQActionEvent(const sipQActionEvent &);
    sipQActionEvent &operator = (const sipQActionEvent &);
};

sipQActionEvent::sipQActionEvent(int a0,QAction*a1,QAction*a2): QActionEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQActionEvent::sipQActionEvent(const QActionEvent& a0): QActionEvent(a0), sipPySelf(0)
{
}

sipQActionEvent::~sipQActionEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QActionEvent_action, "QActionEvent.action() -> QAction");

extern "C" {static PyObject *meth_QActionEvent_action(PyObject *, PyObject *);}
static PyObject *meth_QActionEvent_action(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionEvent, &sipCpp))
        {
            QAction*sipRes;

            sipRes = sipCpp->action();

            return sipConvertFromType(sipRes,sipType_QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionEvent, sipName_action, doc_QActionEvent_action);

    return NULL;
}


PyDoc_STRVAR(doc_QActionEvent_before, "QActionEvent.before() -> QAction");

extern "C" {static PyObject *meth_QActionEvent_before(PyObject *, PyObject *);}
static PyObject *meth_QActionEvent_before(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionEvent, &sipCpp))
        {
            QAction*sipRes;

            sipRes = sipCpp->before();

            return sipConvertFromType(sipRes,sipType_QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionEvent, sipName_before, doc_QActionEvent_before);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QActionEvent(void *, const sipTypeDef *);}
static void *cast_QActionEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QActionEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QActionEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QActionEvent(void *, int);}
static void release_QActionEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQActionEvent *>(sipCppV);
    else
        delete reinterpret_cast<QActionEvent *>(sipCppV);
}


extern "C" {static void dealloc_QActionEvent(sipSimpleWrapper *);}
static void dealloc_QActionEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQActionEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QActionEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QActionEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QActionEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQActionEvent *sipCpp = 0;

    {
        int a0;
        QAction* a1;
        QAction* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_before,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iJ8|J8", &a0, sipType_QAction, &a1, sipType_QAction, &a2))
        {
            sipCpp = new sipQActionEvent(a0,a1,a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QActionEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QActionEvent, &a0))
        {
            sipCpp = new sipQActionEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QActionEvent[] = {{53, 0, 1}};


static PyMethodDef methods_QActionEvent[] = {
    {SIP_MLNAME_CAST(sipName_action), meth_QActionEvent_action, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionEvent_action)},
    {SIP_MLNAME_CAST(sipName_before), meth_QActionEvent_before, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionEvent_before)}
};

PyDoc_STRVAR(doc_QActionEvent, "\1QActionEvent(int, QAction, QAction before=None)\n"
    "QActionEvent(QActionEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QActionEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QActionEvent,
        {0}
    },
    {
        sipNameNr_QActionEvent,
        {0, 0, 1},
        2, methods_QActionEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QActionEvent,
    -1,
    -1,
    supers_QActionEvent,
    0,
    init_type_QActionEvent,
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
    dealloc_QActionEvent,
    0,
    0,
    0,
    release_QActionEvent,
    cast_QActionEvent,
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
