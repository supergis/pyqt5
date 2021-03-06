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

#line 534 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"

#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"
#line 26 "sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 39 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 51 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 57 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQDropEvent.cpp"


class sipQDropEvent : public QDropEvent
{
public:
    sipQDropEvent(const QPointF&,Qt::DropActions,const QMimeData*,Qt::MouseButtons,Qt::KeyboardModifiers,QEvent::Type);
    sipQDropEvent(const QDropEvent&);
    ~sipQDropEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDropEvent(const sipQDropEvent &);
    sipQDropEvent &operator = (const sipQDropEvent &);
};

sipQDropEvent::sipQDropEvent(const QPointF& a0,Qt::DropActions a1,const QMimeData*a2,Qt::MouseButtons a3,Qt::KeyboardModifiers a4,QEvent::Type a5): QDropEvent(a0,a1,a2,a3,a4,a5), sipPySelf(0)
{
}

sipQDropEvent::sipQDropEvent(const QDropEvent& a0): QDropEvent(a0), sipPySelf(0)
{
}

sipQDropEvent::~sipQDropEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QDropEvent_pos, "QDropEvent.pos() -> QPoint");

extern "C" {static PyObject *meth_QDropEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_pos, doc_QDropEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_posF, "QDropEvent.posF() -> QPointF");

extern "C" {static PyObject *meth_QDropEvent_posF(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_posF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->posF());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_posF, doc_QDropEvent_posF);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_mouseButtons, "QDropEvent.mouseButtons() -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QDropEvent_mouseButtons(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_mouseButtons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::MouseButtons*sipRes;

            sipRes = new Qt::MouseButtons(sipCpp->mouseButtons());

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_mouseButtons, doc_QDropEvent_mouseButtons);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_keyboardModifiers, "QDropEvent.keyboardModifiers() -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QDropEvent_keyboardModifiers(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_keyboardModifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers(sipCpp->keyboardModifiers());

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_keyboardModifiers, doc_QDropEvent_keyboardModifiers);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_possibleActions, "QDropEvent.possibleActions() -> Qt.DropActions");

extern "C" {static PyObject *meth_QDropEvent_possibleActions(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_possibleActions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::DropActions*sipRes;

            sipRes = new Qt::DropActions(sipCpp->possibleActions());

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_possibleActions, doc_QDropEvent_possibleActions);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_proposedAction, "QDropEvent.proposedAction() -> Qt.DropAction");

extern "C" {static PyObject *meth_QDropEvent_proposedAction(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_proposedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::DropAction sipRes;

            sipRes = sipCpp->proposedAction();

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_proposedAction, doc_QDropEvent_proposedAction);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_acceptProposedAction, "QDropEvent.acceptProposedAction()");

extern "C" {static PyObject *meth_QDropEvent_acceptProposedAction(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_acceptProposedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            sipCpp->acceptProposedAction();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_acceptProposedAction, doc_QDropEvent_acceptProposedAction);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_dropAction, "QDropEvent.dropAction() -> Qt.DropAction");

extern "C" {static PyObject *meth_QDropEvent_dropAction(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_dropAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            Qt::DropAction sipRes;

            sipRes = sipCpp->dropAction();

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_dropAction, doc_QDropEvent_dropAction);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_setDropAction, "QDropEvent.setDropAction(Qt.DropAction)");

extern "C" {static PyObject *meth_QDropEvent_setDropAction(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_setDropAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropAction a0;
        QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QDropEvent, &sipCpp, sipType_Qt_DropAction, &a0))
        {
            sipCpp->setDropAction(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_setDropAction, doc_QDropEvent_setDropAction);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_source, "QDropEvent.source() -> QObject");

extern "C" {static PyObject *meth_QDropEvent_source(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->source();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_source, doc_QDropEvent_source);

    return NULL;
}


PyDoc_STRVAR(doc_QDropEvent_mimeData, "QDropEvent.mimeData() -> QMimeData");

extern "C" {static PyObject *meth_QDropEvent_mimeData(PyObject *, PyObject *);}
static PyObject *meth_QDropEvent_mimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDropEvent, &sipCpp))
        {
            const QMimeData*sipRes;

            sipRes = sipCpp->mimeData();

            return sipConvertFromType(const_cast<QMimeData *>(sipRes),sipType_QMimeData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDropEvent, sipName_mimeData, doc_QDropEvent_mimeData);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDropEvent(void *, const sipTypeDef *);}
static void *cast_QDropEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDropEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QDropEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDropEvent(void *, int);}
static void release_QDropEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDropEvent *>(sipCppV);
    else
        delete reinterpret_cast<QDropEvent *>(sipCppV);
}


extern "C" {static void dealloc_QDropEvent(sipSimpleWrapper *);}
static void dealloc_QDropEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDropEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDropEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDropEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDropEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDropEvent *sipCpp = 0;

    {
        const QPointF* a0;
        int a0State = 0;
        Qt::DropActions* a1;
        int a1State = 0;
        const QMimeData* a2;
        Qt::MouseButtons* a3;
        int a3State = 0;
        Qt::KeyboardModifiers* a4;
        int a4State = 0;
        QEvent::Type a5 = QEvent::Drop;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1J8J1J1|E", sipType_QPointF, &a0, &a0State, sipType_Qt_DropActions, &a1, &a1State, sipType_QMimeData, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State, sipType_QEvent_Type, &a5))
        {
            sipCpp = new sipQDropEvent(*a0,*a1,a2,*a3,*a4,a5);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(a1,sipType_Qt_DropActions,a1State);
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDropEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDropEvent, &a0))
        {
            sipCpp = new sipQDropEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDropEvent[] = {{53, 0, 1}};


static PyMethodDef methods_QDropEvent[] = {
    {SIP_MLNAME_CAST(sipName_acceptProposedAction), meth_QDropEvent_acceptProposedAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_acceptProposedAction)},
    {SIP_MLNAME_CAST(sipName_dropAction), meth_QDropEvent_dropAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_dropAction)},
    {SIP_MLNAME_CAST(sipName_keyboardModifiers), meth_QDropEvent_keyboardModifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_keyboardModifiers)},
    {SIP_MLNAME_CAST(sipName_mimeData), meth_QDropEvent_mimeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_mimeData)},
    {SIP_MLNAME_CAST(sipName_mouseButtons), meth_QDropEvent_mouseButtons, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_mouseButtons)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QDropEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_pos)},
    {SIP_MLNAME_CAST(sipName_posF), meth_QDropEvent_posF, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_posF)},
    {SIP_MLNAME_CAST(sipName_possibleActions), meth_QDropEvent_possibleActions, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_possibleActions)},
    {SIP_MLNAME_CAST(sipName_proposedAction), meth_QDropEvent_proposedAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_proposedAction)},
    {SIP_MLNAME_CAST(sipName_setDropAction), meth_QDropEvent_setDropAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_setDropAction)},
    {SIP_MLNAME_CAST(sipName_source), meth_QDropEvent_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QDropEvent_source)}
};

PyDoc_STRVAR(doc_QDropEvent, "\1QDropEvent(QPointF, Qt.DropActions, QMimeData, Qt.MouseButtons, Qt.KeyboardModifiers, QEvent.Type type=QEvent.Drop)\n"
    "QDropEvent(QDropEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QDropEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDropEvent,
        {0}
    },
    {
        sipNameNr_QDropEvent,
        {0, 0, 1},
        11, methods_QDropEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDropEvent,
    -1,
    -1,
    supers_QDropEvent,
    0,
    init_type_QDropEvent,
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
    dealloc_QDropEvent,
    0,
    0,
    0,
    release_QDropEvent,
    cast_QDropEvent,
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
