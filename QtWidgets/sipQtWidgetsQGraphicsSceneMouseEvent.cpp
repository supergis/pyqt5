/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:28 2015
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

#include "sipAPIQtWidgets.h"

#line 89 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsSceneMouseEvent.cpp"


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_pos, "QGraphicsSceneMouseEvent.pos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_pos, doc_QGraphicsSceneMouseEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_scenePos, "QGraphicsSceneMouseEvent.scenePos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->scenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_scenePos, doc_QGraphicsSceneMouseEvent_scenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_screenPos, "QGraphicsSceneMouseEvent.screenPos() -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_screenPos, doc_QGraphicsSceneMouseEvent_screenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_buttonDownPos, "QGraphicsSceneMouseEvent.buttonDownPos(Qt.MouseButton) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->buttonDownPos(a0));

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownPos, doc_QGraphicsSceneMouseEvent_buttonDownPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_buttonDownScenePos, "QGraphicsSceneMouseEvent.buttonDownScenePos(Qt.MouseButton) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->buttonDownScenePos(a0));

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownScenePos, doc_QGraphicsSceneMouseEvent_buttonDownScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_buttonDownScreenPos, "QGraphicsSceneMouseEvent.buttonDownScreenPos(Qt.MouseButton) -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->buttonDownScreenPos(a0));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownScreenPos, doc_QGraphicsSceneMouseEvent_buttonDownScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_lastPos, "QGraphicsSceneMouseEvent.lastPos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->lastPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastPos, doc_QGraphicsSceneMouseEvent_lastPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_lastScenePos, "QGraphicsSceneMouseEvent.lastScenePos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->lastScenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastScenePos, doc_QGraphicsSceneMouseEvent_lastScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_lastScreenPos, "QGraphicsSceneMouseEvent.lastScreenPos() -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->lastScreenPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastScreenPos, doc_QGraphicsSceneMouseEvent_lastScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_buttons, "QGraphicsSceneMouseEvent.buttons() -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::MouseButtons*sipRes;

            sipRes = new Qt::MouseButtons(sipCpp->buttons());

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttons, doc_QGraphicsSceneMouseEvent_buttons);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_button, "QGraphicsSceneMouseEvent.button() -> Qt.MouseButton");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_button(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::MouseButton sipRes;

            sipRes = sipCpp->button();

            return sipConvertFromEnum(sipRes,sipType_Qt_MouseButton);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_button, doc_QGraphicsSceneMouseEvent_button);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_modifiers, "QGraphicsSceneMouseEvent.modifiers() -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_modifiers, doc_QGraphicsSceneMouseEvent_modifiers);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_source, "QGraphicsSceneMouseEvent.source() -> Qt.MouseEventSource");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_source(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::MouseEventSource sipRes;

            sipRes = sipCpp->source();

            return sipConvertFromEnum(sipRes,sipType_Qt_MouseEventSource);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_source, doc_QGraphicsSceneMouseEvent_source);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneMouseEvent_flags, "QGraphicsSceneMouseEvent.flags() -> Qt.MouseEventFlags");

extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_flags(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::MouseEventFlags*sipRes;

            sipRes = new Qt::MouseEventFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseEventFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_flags, doc_QGraphicsSceneMouseEvent_flags);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsSceneMouseEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneMouseEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsSceneMouseEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsSceneEvent)->ctd_cast((QGraphicsSceneEvent *)(QGraphicsSceneMouseEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneMouseEvent(void *, int);}
static void release_QGraphicsSceneMouseEvent(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsSceneMouseEvent *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsSceneMouseEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneMouseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneMouseEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneMouseEvent[] = {{149, 255, 1}};


static PyMethodDef methods_QGraphicsSceneMouseEvent[] = {
    {SIP_MLNAME_CAST(sipName_button), meth_QGraphicsSceneMouseEvent_button, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_button)},
    {SIP_MLNAME_CAST(sipName_buttonDownPos), meth_QGraphicsSceneMouseEvent_buttonDownPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_buttonDownPos)},
    {SIP_MLNAME_CAST(sipName_buttonDownScenePos), meth_QGraphicsSceneMouseEvent_buttonDownScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_buttonDownScenePos)},
    {SIP_MLNAME_CAST(sipName_buttonDownScreenPos), meth_QGraphicsSceneMouseEvent_buttonDownScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_buttonDownScreenPos)},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QGraphicsSceneMouseEvent_buttons, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_buttons)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QGraphicsSceneMouseEvent_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_flags)},
    {SIP_MLNAME_CAST(sipName_lastPos), meth_QGraphicsSceneMouseEvent_lastPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_lastPos)},
    {SIP_MLNAME_CAST(sipName_lastScenePos), meth_QGraphicsSceneMouseEvent_lastScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_lastScenePos)},
    {SIP_MLNAME_CAST(sipName_lastScreenPos), meth_QGraphicsSceneMouseEvent_lastScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_lastScreenPos)},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QGraphicsSceneMouseEvent_modifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_modifiers)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QGraphicsSceneMouseEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_pos)},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneMouseEvent_scenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_scenePos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneMouseEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_screenPos)},
    {SIP_MLNAME_CAST(sipName_source), meth_QGraphicsSceneMouseEvent_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneMouseEvent_source)}
};


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneMouseEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneMouseEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneMouseEvent,
        {0, 0, 1},
        14, methods_QGraphicsSceneMouseEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneMouseEvent,
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
    dealloc_QGraphicsSceneMouseEvent,
    0,
    0,
    0,
    release_QGraphicsSceneMouseEvent,
    cast_QGraphicsSceneMouseEvent,
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
