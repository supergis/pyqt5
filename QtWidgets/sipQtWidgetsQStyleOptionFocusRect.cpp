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

#line 190 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionFocusRect.cpp"

#line 30 "sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionFocusRect.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionFocusRect.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionFocusRect(void *, const sipTypeDef *);}
static void *cast_QStyleOptionFocusRect(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionFocusRect)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionFocusRect *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFocusRect(void *, int);}
static void release_QStyleOptionFocusRect(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionFocusRect *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionFocusRect(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionFocusRect(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionFocusRect *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionFocusRect *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFocusRect(SIP_SSIZE_T);}
static void *array_QStyleOptionFocusRect(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionFocusRect[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFocusRect(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFocusRect(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionFocusRect(reinterpret_cast<const QStyleOptionFocusRect *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFocusRect(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFocusRect(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionFocusRect(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionFocusRect(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionFocusRect(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionFocusRect *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionFocusRect();

            return sipCpp;
        }
    }

    {
        const QStyleOptionFocusRect* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFocusRect, &a0))
        {
            sipCpp = new QStyleOptionFocusRect(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionFocusRect[] = {{308, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionFocusRect[] = {
    {sipName_Type, static_cast<int>(QStyleOptionFocusRect::Type), 327},
    {sipName_Version, static_cast<int>(QStyleOptionFocusRect::Version), 328},
};


extern "C" {static PyObject *varget_QStyleOptionFocusRect_backgroundColor(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFocusRect_backgroundColor(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QColor*sipVal;
    QStyleOptionFocusRect *sipCpp = reinterpret_cast<QStyleOptionFocusRect *>(sipSelf);

    sipVal = &sipCpp->backgroundColor;

    sipPy = sipConvertFromType(sipVal, sipType_QColor, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionFocusRect_backgroundColor(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFocusRect_backgroundColor(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QColor*sipVal;
    QStyleOptionFocusRect *sipCpp = reinterpret_cast<QStyleOptionFocusRect *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QColor *>(sipForceConvertToType(sipPy,sipType_QColor,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->backgroundColor = *sipVal;

    sipReleaseType(sipVal, sipType_QColor, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionFocusRect[] = {
    {InstanceVariable, sipName_backgroundColor, (PyMethodDef *)varget_QStyleOptionFocusRect_backgroundColor, (PyMethodDef *)varset_QStyleOptionFocusRect_backgroundColor, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionFocusRect, "\1QStyleOptionFocusRect()\n"
    "QStyleOptionFocusRect(QStyleOptionFocusRect)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionFocusRect = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFocusRect,
        {0}
    },
    {
        sipNameNr_QStyleOptionFocusRect,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionFocusRect,
        1, variables_QStyleOptionFocusRect,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFocusRect,
    -1,
    -1,
    supers_QStyleOptionFocusRect,
    0,
    init_type_QStyleOptionFocusRect,
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
    dealloc_QStyleOptionFocusRect,
    assign_QStyleOptionFocusRect,
    array_QStyleOptionFocusRect,
    copy_QStyleOptionFocusRect,
    release_QStyleOptionFocusRect,
    cast_QStyleOptionFocusRect,
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
