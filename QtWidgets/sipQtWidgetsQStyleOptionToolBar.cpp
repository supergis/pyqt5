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

#line 923 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionToolBar.cpp"

#line 923 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionToolBar.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionToolBar.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionToolBar.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionToolBar(void *, const sipTypeDef *);}
static void *cast_QStyleOptionToolBar(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionToolBar)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionToolBar *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolBar(void *, int);}
static void release_QStyleOptionToolBar(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionToolBar *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionToolBar(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolBar(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolBar *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolBar *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolBar(SIP_SSIZE_T);}
static void *array_QStyleOptionToolBar(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolBar[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolBar(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolBar(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolBar(reinterpret_cast<const QStyleOptionToolBar *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolBar(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolBar(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolBar(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionToolBar(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionToolBar(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionToolBar *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionToolBar();

            return sipCpp;
        }
    }

    {
        const QStyleOptionToolBar* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionToolBar, &a0))
        {
            sipCpp = new QStyleOptionToolBar(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionToolBar[] = {{308, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionToolBar[] = {
    {sipName_Beginning, static_cast<int>(QStyleOptionToolBar::Beginning), 389},
    {sipName_End, static_cast<int>(QStyleOptionToolBar::End), 389},
    {sipName_Middle, static_cast<int>(QStyleOptionToolBar::Middle), 389},
    {sipName_Movable, static_cast<int>(QStyleOptionToolBar::Movable), 387},
    {sipName_None, static_cast<int>(QStyleOptionToolBar::None), 387},
    {sipName_OnlyOne, static_cast<int>(QStyleOptionToolBar::OnlyOne), 389},
    {sipName_Type, static_cast<int>(QStyleOptionToolBar::Type), 385},
    {sipName_Version, static_cast<int>(QStyleOptionToolBar::Version), 386},
};


extern "C" {static PyObject *varget_QStyleOptionToolBar_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBar_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionToolBar::ToolBarFeatures*sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionToolBar_ToolBarFeatures, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolBar_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBar_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolBar::ToolBarFeatures*sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionToolBar::ToolBarFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionToolBar_ToolBarFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionToolBar_ToolBarFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBar_lineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBar_lineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = sipCpp->lineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionToolBar_lineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBar_lineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->lineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBar_midLineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBar_midLineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = sipCpp->midLineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionToolBar_midLineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBar_midLineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->midLineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBar_positionOfLine(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBar_positionOfLine(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionToolBar::ToolBarPosition sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = sipCpp->positionOfLine;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionToolBar_ToolBarPosition);
}


extern "C" {static int varset_QStyleOptionToolBar_positionOfLine(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBar_positionOfLine(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolBar::ToolBarPosition sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = (QStyleOptionToolBar::ToolBarPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->positionOfLine = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBar_positionWithinLine(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBar_positionWithinLine(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionToolBar::ToolBarPosition sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = sipCpp->positionWithinLine;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionToolBar_ToolBarPosition);
}


extern "C" {static int varset_QStyleOptionToolBar_positionWithinLine(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBar_positionWithinLine(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionToolBar::ToolBarPosition sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = (QStyleOptionToolBar::ToolBarPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->positionWithinLine = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBar_toolBarArea(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBar_toolBarArea(void *sipSelf, PyObject *, PyObject *)
{
    Qt::ToolBarArea sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = sipCpp->toolBarArea;

    return sipConvertFromEnum(sipVal, sipType_Qt_ToolBarArea);
}


extern "C" {static int varset_QStyleOptionToolBar_toolBarArea(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBar_toolBarArea(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::ToolBarArea sipVal;
    QStyleOptionToolBar *sipCpp = reinterpret_cast<QStyleOptionToolBar *>(sipSelf);

    sipVal = (Qt::ToolBarArea)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->toolBarArea = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionToolBar[] = {
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionToolBar_features, (PyMethodDef *)varset_QStyleOptionToolBar_features, NULL, NULL},
    {InstanceVariable, sipName_lineWidth, (PyMethodDef *)varget_QStyleOptionToolBar_lineWidth, (PyMethodDef *)varset_QStyleOptionToolBar_lineWidth, NULL, NULL},
    {InstanceVariable, sipName_midLineWidth, (PyMethodDef *)varget_QStyleOptionToolBar_midLineWidth, (PyMethodDef *)varset_QStyleOptionToolBar_midLineWidth, NULL, NULL},
    {InstanceVariable, sipName_positionOfLine, (PyMethodDef *)varget_QStyleOptionToolBar_positionOfLine, (PyMethodDef *)varset_QStyleOptionToolBar_positionOfLine, NULL, NULL},
    {InstanceVariable, sipName_positionWithinLine, (PyMethodDef *)varget_QStyleOptionToolBar_positionWithinLine, (PyMethodDef *)varset_QStyleOptionToolBar_positionWithinLine, NULL, NULL},
    {InstanceVariable, sipName_toolBarArea, (PyMethodDef *)varget_QStyleOptionToolBar_toolBarArea, (PyMethodDef *)varset_QStyleOptionToolBar_toolBarArea, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionToolBar, "\1QStyleOptionToolBar()\n"
    "QStyleOptionToolBar(QStyleOptionToolBar)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionToolBar = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolBar,
        {0}
    },
    {
        sipNameNr_QStyleOptionToolBar,
        {0, 0, 1},
        0, 0,
        8, enummembers_QStyleOptionToolBar,
        6, variables_QStyleOptionToolBar,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionToolBar,
    -1,
    -1,
    supers_QStyleOptionToolBar,
    0,
    init_type_QStyleOptionToolBar,
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
    dealloc_QStyleOptionToolBar,
    assign_QStyleOptionToolBar,
    array_QStyleOptionToolBar,
    copy_QStyleOptionToolBar,
    release_QStyleOptionToolBar,
    cast_QStyleOptionToolBar,
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
