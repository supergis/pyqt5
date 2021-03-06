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

#line 520 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQInputMethodQueryEvent.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQInputMethodQueryEvent.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQInputMethodQueryEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQInputMethodQueryEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQInputMethodQueryEvent.cpp"


class sipQInputMethodQueryEvent : public QInputMethodQueryEvent
{
public:
    sipQInputMethodQueryEvent(Qt::InputMethodQueries);
    sipQInputMethodQueryEvent(const QInputMethodQueryEvent&);
    ~sipQInputMethodQueryEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQInputMethodQueryEvent(const sipQInputMethodQueryEvent &);
    sipQInputMethodQueryEvent &operator = (const sipQInputMethodQueryEvent &);
};

sipQInputMethodQueryEvent::sipQInputMethodQueryEvent(Qt::InputMethodQueries a0): QInputMethodQueryEvent(a0), sipPySelf(0)
{
}

sipQInputMethodQueryEvent::sipQInputMethodQueryEvent(const QInputMethodQueryEvent& a0): QInputMethodQueryEvent(a0), sipPySelf(0)
{
}

sipQInputMethodQueryEvent::~sipQInputMethodQueryEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QInputMethodQueryEvent_queries, "QInputMethodQueryEvent.queries() -> Qt.InputMethodQueries");

extern "C" {static PyObject *meth_QInputMethodQueryEvent_queries(PyObject *, PyObject *);}
static PyObject *meth_QInputMethodQueryEvent_queries(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QInputMethodQueryEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethodQueryEvent, &sipCpp))
        {
            Qt::InputMethodQueries*sipRes;

            sipRes = new Qt::InputMethodQueries(sipCpp->queries());

            return sipConvertFromNewType(sipRes,sipType_Qt_InputMethodQueries,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodQueryEvent, sipName_queries, doc_QInputMethodQueryEvent_queries);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethodQueryEvent_setValue, "QInputMethodQueryEvent.setValue(Qt.InputMethodQuery, QVariant)");

extern "C" {static PyObject *meth_QInputMethodQueryEvent_setValue(PyObject *, PyObject *);}
static PyObject *meth_QInputMethodQueryEvent_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodQuery a0;
        const QVariant* a1;
        int a1State = 0;
        QInputMethodQueryEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QInputMethodQueryEvent, &sipCpp, sipType_Qt_InputMethodQuery, &a0, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setValue(a0,*a1);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodQueryEvent, sipName_setValue, doc_QInputMethodQueryEvent_setValue);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethodQueryEvent_value, "QInputMethodQueryEvent.value(Qt.InputMethodQuery) -> QVariant");

extern "C" {static PyObject *meth_QInputMethodQueryEvent_value(PyObject *, PyObject *);}
static PyObject *meth_QInputMethodQueryEvent_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::InputMethodQuery a0;
        const QInputMethodQueryEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QInputMethodQueryEvent, &sipCpp, sipType_Qt_InputMethodQuery, &a0))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->value(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodQueryEvent, sipName_value, doc_QInputMethodQueryEvent_value);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QInputMethodQueryEvent(void *, const sipTypeDef *);}
static void *cast_QInputMethodQueryEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QInputMethodQueryEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QInputMethodQueryEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QInputMethodQueryEvent(void *, int);}
static void release_QInputMethodQueryEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQInputMethodQueryEvent *>(sipCppV);
    else
        delete reinterpret_cast<QInputMethodQueryEvent *>(sipCppV);
}


extern "C" {static void dealloc_QInputMethodQueryEvent(sipSimpleWrapper *);}
static void dealloc_QInputMethodQueryEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQInputMethodQueryEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QInputMethodQueryEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QInputMethodQueryEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QInputMethodQueryEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQInputMethodQueryEvent *sipCpp = 0;

    {
        Qt::InputMethodQueries* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_InputMethodQueries, &a0, &a0State))
        {
            sipCpp = new sipQInputMethodQueryEvent(*a0);
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QInputMethodQueryEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QInputMethodQueryEvent, &a0))
        {
            sipCpp = new sipQInputMethodQueryEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QInputMethodQueryEvent[] = {{53, 0, 1}};


static PyMethodDef methods_QInputMethodQueryEvent[] = {
    {SIP_MLNAME_CAST(sipName_queries), meth_QInputMethodQueryEvent_queries, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethodQueryEvent_queries)},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QInputMethodQueryEvent_setValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethodQueryEvent_setValue)},
    {SIP_MLNAME_CAST(sipName_value), meth_QInputMethodQueryEvent_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethodQueryEvent_value)}
};

PyDoc_STRVAR(doc_QInputMethodQueryEvent, "\1QInputMethodQueryEvent(Qt.InputMethodQueries)\n"
    "QInputMethodQueryEvent(QInputMethodQueryEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QInputMethodQueryEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QInputMethodQueryEvent,
        {0}
    },
    {
        sipNameNr_QInputMethodQueryEvent,
        {0, 0, 1},
        3, methods_QInputMethodQueryEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QInputMethodQueryEvent,
    -1,
    -1,
    supers_QInputMethodQueryEvent,
    0,
    init_type_QInputMethodQueryEvent,
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
    dealloc_QInputMethodQueryEvent,
    0,
    0,
    0,
    release_QInputMethodQueryEvent,
    cast_QInputMethodQueryEvent,
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
