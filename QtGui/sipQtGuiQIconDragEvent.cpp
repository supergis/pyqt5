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

#line 419 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQIconDragEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQIconDragEvent.cpp"


class sipQIconDragEvent : public QIconDragEvent
{
public:
    sipQIconDragEvent();
    sipQIconDragEvent(const QIconDragEvent&);
    ~sipQIconDragEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQIconDragEvent(const sipQIconDragEvent &);
    sipQIconDragEvent &operator = (const sipQIconDragEvent &);
};

sipQIconDragEvent::sipQIconDragEvent(): QIconDragEvent(), sipPySelf(0)
{
}

sipQIconDragEvent::sipQIconDragEvent(const QIconDragEvent& a0): QIconDragEvent(a0), sipPySelf(0)
{
}

sipQIconDragEvent::~sipQIconDragEvent()
{
    sipCommonDtor(sipPySelf);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QIconDragEvent(void *, const sipTypeDef *);}
static void *cast_QIconDragEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QIconDragEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QIconDragEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIconDragEvent(void *, int);}
static void release_QIconDragEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQIconDragEvent *>(sipCppV);
    else
        delete reinterpret_cast<QIconDragEvent *>(sipCppV);
}


extern "C" {static void assign_QIconDragEvent(void *, SIP_SSIZE_T, const void *);}
static void assign_QIconDragEvent(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QIconDragEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QIconDragEvent *>(sipSrc);
}


extern "C" {static void *array_QIconDragEvent(SIP_SSIZE_T);}
static void *array_QIconDragEvent(SIP_SSIZE_T sipNrElem)
{
    return new QIconDragEvent[sipNrElem];
}


extern "C" {static void *copy_QIconDragEvent(const void *, SIP_SSIZE_T);}
static void *copy_QIconDragEvent(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QIconDragEvent(reinterpret_cast<const QIconDragEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QIconDragEvent(sipSimpleWrapper *);}
static void dealloc_QIconDragEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQIconDragEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QIconDragEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QIconDragEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIconDragEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQIconDragEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQIconDragEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QIconDragEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconDragEvent, &a0))
        {
            sipCpp = new sipQIconDragEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QIconDragEvent[] = {{53, 0, 1}};

PyDoc_STRVAR(doc_QIconDragEvent, "\1QIconDragEvent()\n"
    "QIconDragEvent(QIconDragEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QIconDragEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QIconDragEvent,
        {0}
    },
    {
        sipNameNr_QIconDragEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIconDragEvent,
    -1,
    -1,
    supers_QIconDragEvent,
    0,
    init_type_QIconDragEvent,
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
    dealloc_QIconDragEvent,
    assign_QIconDragEvent,
    array_QIconDragEvent,
    copy_QIconDragEvent,
    release_QIconDragEvent,
    cast_QIconDragEvent,
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
