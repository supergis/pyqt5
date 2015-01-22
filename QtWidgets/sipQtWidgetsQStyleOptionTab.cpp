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

#line 392 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionTab.cpp"

#line 392 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionTab.cpp"
#line 392 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionTab.cpp"
#line 30 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionTab.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionTab.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qtabbar.sip"
#include <qtabbar.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionTab.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionTab.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionTab.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionTab(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTab(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionTab)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOption)->ctd_cast((QStyleOption *)(QStyleOptionTab *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTab(void *, int);}
static void release_QStyleOptionTab(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionTab *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionTab(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTab(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTab *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTab *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTab(SIP_SSIZE_T);}
static void *array_QStyleOptionTab(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTab[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTab(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTab(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTab(reinterpret_cast<const QStyleOptionTab *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTab(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTab(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTab(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionTab(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTab(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTab *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionTab();

            return sipCpp;
        }
    }

    {
        const QStyleOptionTab* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTab, &a0))
        {
            sipCpp = new QStyleOptionTab(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTab[] = {{308, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTab[] = {
    {sipName_Beginning, static_cast<int>(QStyleOptionTab::Beginning), 374},
    {sipName_End, static_cast<int>(QStyleOptionTab::End), 374},
    {sipName_HasFrame, static_cast<int>(QStyleOptionTab::HasFrame), 372},
    {sipName_LeftCornerWidget, static_cast<int>(QStyleOptionTab::LeftCornerWidget), 367},
    {sipName_Middle, static_cast<int>(QStyleOptionTab::Middle), 374},
    {sipName_NextIsSelected, static_cast<int>(QStyleOptionTab::NextIsSelected), 369},
    {sipName_NoCornerWidgets, static_cast<int>(QStyleOptionTab::NoCornerWidgets), 367},
    {sipName_None, static_cast<int>(QStyleOptionTab::None), 372},
    {sipName_NotAdjacent, static_cast<int>(QStyleOptionTab::NotAdjacent), 369},
    {sipName_OnlyOneTab, static_cast<int>(QStyleOptionTab::OnlyOneTab), 374},
    {sipName_PreviousIsSelected, static_cast<int>(QStyleOptionTab::PreviousIsSelected), 369},
    {sipName_RightCornerWidget, static_cast<int>(QStyleOptionTab::RightCornerWidget), 367},
    {sipName_Type, static_cast<int>(QStyleOptionTab::Type), 370},
    {sipName_Version, static_cast<int>(QStyleOptionTab::Version), 371},
};


extern "C" {static PyObject *varget_QStyleOptionTab_cornerWidgets(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_cornerWidgets(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionTab::CornerWidgets*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->cornerWidgets;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionTab_CornerWidgets, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTab_cornerWidgets(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_cornerWidgets(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionTab::CornerWidgets*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipForceConvertToType(sipPy,sipType_QStyleOptionTab_CornerWidgets,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->cornerWidgets = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionTab_CornerWidgets, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_documentMode(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_documentMode(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->documentMode;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTab_documentMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_documentMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->documentMode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionTab::TabFeatures*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionTab_TabFeatures, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTab_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionTab::TabFeatures*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionTab::TabFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionTab_TabFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionTab_TabFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTab_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_iconSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_iconSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->iconSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTab_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_leftButtonSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_leftButtonSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->leftButtonSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTab_leftButtonSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_leftButtonSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->leftButtonSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_position(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_position(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionTab::TabPosition sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->position;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionTab_TabPosition);
}


extern "C" {static int varset_QStyleOptionTab_position(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_position(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionTab::TabPosition sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = (QStyleOptionTab::TabPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->position = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_rightButtonSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_rightButtonSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QSize*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->rightButtonSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionTab_rightButtonSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_rightButtonSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->rightButtonSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_row(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_row(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->row;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTab_row(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_row(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->row = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_selectedPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_selectedPosition(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionTab::SelectedPosition sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->selectedPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionTab_SelectedPosition);
}


extern "C" {static int varset_QStyleOptionTab_selectedPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_selectedPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionTab::SelectedPosition sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = (QStyleOptionTab::SelectedPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->selectedPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_shape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_shape(void *sipSelf, PyObject *, PyObject *)
{
    QTabBar::Shape sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = sipCpp->shape;

    return sipConvertFromEnum(sipVal, sipType_QTabBar_Shape);
}


extern "C" {static int varset_QStyleOptionTab_shape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_shape(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QTabBar::Shape sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = (QTabBar::Shape)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->shape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTab_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionTab_text(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionTab_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTab_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionTab *sipCpp = reinterpret_cast<QStyleOptionTab *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionTab[] = {
    {InstanceVariable, sipName_cornerWidgets, (PyMethodDef *)varget_QStyleOptionTab_cornerWidgets, (PyMethodDef *)varset_QStyleOptionTab_cornerWidgets, NULL, NULL},
    {InstanceVariable, sipName_documentMode, (PyMethodDef *)varget_QStyleOptionTab_documentMode, (PyMethodDef *)varset_QStyleOptionTab_documentMode, NULL, NULL},
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionTab_features, (PyMethodDef *)varset_QStyleOptionTab_features, NULL, NULL},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionTab_icon, (PyMethodDef *)varset_QStyleOptionTab_icon, NULL, NULL},
    {InstanceVariable, sipName_iconSize, (PyMethodDef *)varget_QStyleOptionTab_iconSize, (PyMethodDef *)varset_QStyleOptionTab_iconSize, NULL, NULL},
    {InstanceVariable, sipName_leftButtonSize, (PyMethodDef *)varget_QStyleOptionTab_leftButtonSize, (PyMethodDef *)varset_QStyleOptionTab_leftButtonSize, NULL, NULL},
    {InstanceVariable, sipName_position, (PyMethodDef *)varget_QStyleOptionTab_position, (PyMethodDef *)varset_QStyleOptionTab_position, NULL, NULL},
    {InstanceVariable, sipName_rightButtonSize, (PyMethodDef *)varget_QStyleOptionTab_rightButtonSize, (PyMethodDef *)varset_QStyleOptionTab_rightButtonSize, NULL, NULL},
    {InstanceVariable, sipName_row, (PyMethodDef *)varget_QStyleOptionTab_row, (PyMethodDef *)varset_QStyleOptionTab_row, NULL, NULL},
    {InstanceVariable, sipName_selectedPosition, (PyMethodDef *)varget_QStyleOptionTab_selectedPosition, (PyMethodDef *)varset_QStyleOptionTab_selectedPosition, NULL, NULL},
    {InstanceVariable, sipName_shape, (PyMethodDef *)varget_QStyleOptionTab_shape, (PyMethodDef *)varset_QStyleOptionTab_shape, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionTab_text, (PyMethodDef *)varset_QStyleOptionTab_text, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionTab, "\1QStyleOptionTab()\n"
    "QStyleOptionTab(QStyleOptionTab)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionTab = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTab,
        {0}
    },
    {
        sipNameNr_QStyleOptionTab,
        {0, 0, 1},
        0, 0,
        14, enummembers_QStyleOptionTab,
        12, variables_QStyleOptionTab,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTab,
    -1,
    -1,
    supers_QStyleOptionTab,
    0,
    init_type_QStyleOptionTab,
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
    dealloc_QStyleOptionTab,
    assign_QStyleOptionTab,
    array_QStyleOptionTab,
    copy_QStyleOptionTab,
    release_QStyleOptionTab,
    cast_QStyleOptionTab,
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
