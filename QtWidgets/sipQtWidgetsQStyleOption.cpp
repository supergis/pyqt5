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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOption.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 26 "sip/QtGui/qfontmetrics.sip"
#include <qfontmetrics.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 30 "sip/QtGui/qpalette.sip"
#include <qpalette.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyle.sip"
#include <qstyle.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOption.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOption.cpp"


PyDoc_STRVAR(doc_QStyleOption_initFrom, "QStyleOption.initFrom(QWidget)");

extern "C" {static PyObject *meth_QStyleOption_initFrom(PyObject *, PyObject *);}
static PyObject *meth_QStyleOption_initFrom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWidget* a0;
        QStyleOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QStyleOption, &sipCpp, sipType_QWidget, &a0))
        {
            sipCpp->initFrom(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStyleOption, sipName_initFrom, doc_QStyleOption_initFrom);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOption(void *, const sipTypeDef *);}
static void *cast_QStyleOption(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyleOption)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOption(void *, int);}
static void release_QStyleOption(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOption *>(sipCppV);
}


extern "C" {static void assign_QStyleOption(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOption(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOption *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOption *>(sipSrc);
}


extern "C" {static void *array_QStyleOption(SIP_SSIZE_T);}
static void *array_QStyleOption(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOption[sipNrElem];
}


extern "C" {static void *copy_QStyleOption(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOption(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOption(reinterpret_cast<const QStyleOption *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOption(sipSimpleWrapper *);}
static void dealloc_QStyleOption(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOption(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOption(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOption(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOption *sipCpp = 0;

    {
        int a0 = QStyleOption::Version;
        int a1 = QStyleOption::SO_Default;

        static const char *sipKwdList[] = {
            sipName_version,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &a0, &a1))
        {
            sipCpp = new QStyleOption(a0,a1);

            return sipCpp;
        }
    }

    {
        const QStyleOption* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOption, &a0))
        {
            sipCpp = new QStyleOption(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QStyleOption[] = {
    {SIP_MLNAME_CAST(sipName_initFrom), meth_QStyleOption_initFrom, METH_VARARGS, SIP_MLDOC_CAST(doc_QStyleOption_initFrom)}
};

static sipEnumMemberDef enummembers_QStyleOption[] = {
    {sipName_SO_Button, static_cast<int>(QStyleOption::SO_Button), 309},
    {sipName_SO_ComboBox, static_cast<int>(QStyleOption::SO_ComboBox), 309},
    {sipName_SO_Complex, static_cast<int>(QStyleOption::SO_Complex), 309},
    {sipName_SO_ComplexCustomBase, static_cast<int>(QStyleOption::SO_ComplexCustomBase), 309},
    {sipName_SO_CustomBase, static_cast<int>(QStyleOption::SO_CustomBase), 309},
    {sipName_SO_Default, static_cast<int>(QStyleOption::SO_Default), 309},
    {sipName_SO_DockWidget, static_cast<int>(QStyleOption::SO_DockWidget), 309},
    {sipName_SO_FocusRect, static_cast<int>(QStyleOption::SO_FocusRect), 309},
    {sipName_SO_Frame, static_cast<int>(QStyleOption::SO_Frame), 309},
    {sipName_SO_GraphicsItem, static_cast<int>(QStyleOption::SO_GraphicsItem), 309},
    {sipName_SO_GroupBox, static_cast<int>(QStyleOption::SO_GroupBox), 309},
    {sipName_SO_Header, static_cast<int>(QStyleOption::SO_Header), 309},
    {sipName_SO_MenuItem, static_cast<int>(QStyleOption::SO_MenuItem), 309},
    {sipName_SO_ProgressBar, static_cast<int>(QStyleOption::SO_ProgressBar), 309},
    {sipName_SO_RubberBand, static_cast<int>(QStyleOption::SO_RubberBand), 309},
    {sipName_SO_SizeGrip, static_cast<int>(QStyleOption::SO_SizeGrip), 309},
    {sipName_SO_Slider, static_cast<int>(QStyleOption::SO_Slider), 309},
    {sipName_SO_SpinBox, static_cast<int>(QStyleOption::SO_SpinBox), 309},
    {sipName_SO_Tab, static_cast<int>(QStyleOption::SO_Tab), 309},
    {sipName_SO_TabBarBase, static_cast<int>(QStyleOption::SO_TabBarBase), 309},
    {sipName_SO_TabWidgetFrame, static_cast<int>(QStyleOption::SO_TabWidgetFrame), 309},
    {sipName_SO_TitleBar, static_cast<int>(QStyleOption::SO_TitleBar), 309},
    {sipName_SO_ToolBar, static_cast<int>(QStyleOption::SO_ToolBar), 309},
    {sipName_SO_ToolBox, static_cast<int>(QStyleOption::SO_ToolBox), 309},
    {sipName_SO_ToolButton, static_cast<int>(QStyleOption::SO_ToolButton), 309},
    {sipName_SO_ViewItem, static_cast<int>(QStyleOption::SO_ViewItem), 309},
    {sipName_Type, static_cast<int>(QStyleOption::Type), 310},
    {sipName_Version, static_cast<int>(QStyleOption::Version), 311},
};


extern "C" {static PyObject *varget_QStyleOption_direction(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_direction(void *sipSelf, PyObject *, PyObject *)
{
    Qt::LayoutDirection sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = sipCpp->direction;

    return sipConvertFromEnum(sipVal, sipType_Qt_LayoutDirection);
}


extern "C" {static int varset_QStyleOption_direction(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_direction(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::LayoutDirection sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = (Qt::LayoutDirection)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->direction = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_fontMetrics(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_fontMetrics(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QFontMetrics*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = &sipCpp->fontMetrics;

    sipPy = sipConvertFromType(sipVal, sipType_QFontMetrics, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOption_fontMetrics(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_fontMetrics(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFontMetrics*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QFontMetrics *>(sipForceConvertToType(sipPy,sipType_QFontMetrics,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->fontMetrics = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_palette(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_palette(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QPalette*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = &sipCpp->palette;

    sipPy = sipConvertFromType(sipVal, sipType_QPalette, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOption_palette(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_palette(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QPalette*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QPalette *>(sipForceConvertToType(sipPy,sipType_QPalette,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->palette = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_rect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_rect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QRect*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = &sipCpp->rect;

    sipPy = sipConvertFromType(sipVal, sipType_QRect, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOption_rect(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_rect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRect*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->rect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_state(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_state(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyle::State*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = &sipCpp->state;

    sipPy = sipConvertFromType(sipVal, sipType_QStyle_State, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOption_state(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_state(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyle::State*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyle::State *>(sipForceConvertToType(sipPy,sipType_QStyle_State,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->state = *sipVal;

    sipReleaseType(sipVal, sipType_QStyle_State, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_styleObject(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_styleObject(void *sipSelf, PyObject *, PyObject *)
{
    QObject*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = sipCpp->styleObject;

    return sipConvertFromType(sipVal, sipType_QObject, NULL);
}


extern "C" {static int varset_QStyleOption_styleObject(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_styleObject(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QObject*sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QObject *>(sipForceConvertToType(sipPy,sipType_QObject,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->styleObject = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_type(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_type(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = sipCpp->type;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOption_type(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOption_version(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOption_version(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = sipCpp->version;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOption_version(void *, PyObject *, PyObject *);}
static int varset_QStyleOption_version(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOption *sipCpp = reinterpret_cast<QStyleOption *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->version = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOption[] = {
    {InstanceVariable, sipName_direction, (PyMethodDef *)varget_QStyleOption_direction, (PyMethodDef *)varset_QStyleOption_direction, NULL, NULL},
    {InstanceVariable, sipName_fontMetrics, (PyMethodDef *)varget_QStyleOption_fontMetrics, (PyMethodDef *)varset_QStyleOption_fontMetrics, NULL, NULL},
    {InstanceVariable, sipName_palette, (PyMethodDef *)varget_QStyleOption_palette, (PyMethodDef *)varset_QStyleOption_palette, NULL, NULL},
    {InstanceVariable, sipName_rect, (PyMethodDef *)varget_QStyleOption_rect, (PyMethodDef *)varset_QStyleOption_rect, NULL, NULL},
    {InstanceVariable, sipName_state, (PyMethodDef *)varget_QStyleOption_state, (PyMethodDef *)varset_QStyleOption_state, NULL, NULL},
    {InstanceVariable, sipName_styleObject, (PyMethodDef *)varget_QStyleOption_styleObject, (PyMethodDef *)varset_QStyleOption_styleObject, NULL, NULL},
    {InstanceVariable, sipName_type, (PyMethodDef *)varget_QStyleOption_type, (PyMethodDef *)varset_QStyleOption_type, NULL, NULL},
    {InstanceVariable, sipName_version, (PyMethodDef *)varget_QStyleOption_version, (PyMethodDef *)varset_QStyleOption_version, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOption, "\1QStyleOption(int version=QStyleOption.Version, int type=QStyleOption.SO_Default)\n"
    "QStyleOption(QStyleOption)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOption = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOption,
        {0}
    },
    {
        sipNameNr_QStyleOption,
        {0, 0, 1},
        1, methods_QStyleOption,
        28, enummembers_QStyleOption,
        8, variables_QStyleOption,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOption,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QStyleOption,
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
    dealloc_QStyleOption,
    assign_QStyleOption,
    array_QStyleOption,
    copy_QStyleOption,
    release_QStyleOption,
    cast_QStyleOption,
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
