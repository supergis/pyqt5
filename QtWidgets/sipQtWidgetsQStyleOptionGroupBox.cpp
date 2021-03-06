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

#line 967 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionGroupBox.cpp"

#line 212 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionGroupBox.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionGroupBox.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionGroupBox.cpp"
#line 30 "sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionGroupBox.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQStyleOptionGroupBox.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionGroupBox(void *, const sipTypeDef *);}
static void *cast_QStyleOptionGroupBox(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionGroupBox)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionComplex)->ctd_cast((QStyleOptionComplex *)(QStyleOptionGroupBox *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionGroupBox(void *, int);}
static void release_QStyleOptionGroupBox(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionGroupBox *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionGroupBox(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionGroupBox(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionGroupBox *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionGroupBox *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionGroupBox(SIP_SSIZE_T);}
static void *array_QStyleOptionGroupBox(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionGroupBox[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionGroupBox(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionGroupBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionGroupBox(reinterpret_cast<const QStyleOptionGroupBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionGroupBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionGroupBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionGroupBox(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionGroupBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionGroupBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionGroupBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionGroupBox();

            return sipCpp;
        }
    }

    {
        const QStyleOptionGroupBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionGroupBox, &a0))
        {
            sipCpp = new QStyleOptionGroupBox(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionGroupBox[] = {{320, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionGroupBox[] = {
    {sipName_Type, static_cast<int>(QStyleOptionGroupBox::Type), 338},
    {sipName_Version, static_cast<int>(QStyleOptionGroupBox::Version), 339},
};


extern "C" {static PyObject *varget_QStyleOptionGroupBox_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionFrame::FrameFeatures*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionFrame_FrameFeatures, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGroupBox_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionFrame::FrameFeatures*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionFrame::FrameFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionFrame_FrameFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionFrame_FrameFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_lineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_lineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = sipCpp->lineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionGroupBox_lineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_lineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->lineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_midLineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_midLineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = sipCpp->midLineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionGroupBox_midLineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_midLineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->midLineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_text(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionGroupBox_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_textAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_textAlignment(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    Qt::Alignment*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = &sipCpp->textAlignment;

    sipPy = sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGroupBox_textAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_textAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->textAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_textColor(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_textColor(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QColor*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = &sipCpp->textColor;

    sipPy = sipConvertFromType(sipVal, sipType_QColor, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGroupBox_textColor(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_textColor(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QColor*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QColor *>(sipForceConvertToType(sipPy,sipType_QColor,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->textColor = *sipVal;

    sipReleaseType(sipVal, sipType_QColor, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionGroupBox[] = {
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionGroupBox_features, (PyMethodDef *)varset_QStyleOptionGroupBox_features, NULL, NULL},
    {InstanceVariable, sipName_lineWidth, (PyMethodDef *)varget_QStyleOptionGroupBox_lineWidth, (PyMethodDef *)varset_QStyleOptionGroupBox_lineWidth, NULL, NULL},
    {InstanceVariable, sipName_midLineWidth, (PyMethodDef *)varget_QStyleOptionGroupBox_midLineWidth, (PyMethodDef *)varset_QStyleOptionGroupBox_midLineWidth, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionGroupBox_text, (PyMethodDef *)varset_QStyleOptionGroupBox_text, NULL, NULL},
    {InstanceVariable, sipName_textAlignment, (PyMethodDef *)varget_QStyleOptionGroupBox_textAlignment, (PyMethodDef *)varset_QStyleOptionGroupBox_textAlignment, NULL, NULL},
    {InstanceVariable, sipName_textColor, (PyMethodDef *)varget_QStyleOptionGroupBox_textColor, (PyMethodDef *)varset_QStyleOptionGroupBox_textColor, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionGroupBox, "\1QStyleOptionGroupBox()\n"
    "QStyleOptionGroupBox(QStyleOptionGroupBox)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionGroupBox = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionGroupBox,
        {0}
    },
    {
        sipNameNr_QStyleOptionGroupBox,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionGroupBox,
        6, variables_QStyleOptionGroupBox,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionGroupBox,
    -1,
    -1,
    supers_QStyleOptionGroupBox,
    0,
    init_type_QStyleOptionGroupBox,
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
    dealloc_QStyleOptionGroupBox,
    assign_QStyleOptionGroupBox,
    array_QStyleOptionGroupBox,
    copy_QStyleOptionGroupBox,
    release_QStyleOptionGroupBox,
    cast_QStyleOptionGroupBox,
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
