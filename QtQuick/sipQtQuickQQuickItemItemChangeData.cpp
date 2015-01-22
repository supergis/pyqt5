/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:47 2015
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

#include "sipAPIQtQuick.h"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickitem.sip"
#include <qquickitem.h>
#line 63 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickitem.sip"
#include <qquickitem.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemItemChangeData.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickitem.sip"
#include <qquickitem.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemItemChangeData.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickwindow.sip"
#include <qquickwindow.h>
#line 38 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemItemChangeData.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQuickItem_ItemChangeData(void *, const sipTypeDef *);}
static void *cast_QQuickItem_ItemChangeData(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQuickItem_ItemChangeData)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQuickItem_ItemChangeData(void *, int);}
static void release_QQuickItem_ItemChangeData(void *sipCppV,int)
{
    delete reinterpret_cast<QQuickItem::ItemChangeData *>(sipCppV);
}


extern "C" {static void dealloc_QQuickItem_ItemChangeData(sipSimpleWrapper *);}
static void dealloc_QQuickItem_ItemChangeData(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QQuickItem_ItemChangeData(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QQuickItem_ItemChangeData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQuickItem_ItemChangeData(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QQuickItem::ItemChangeData *sipCpp = 0;

    {
        QQuickItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QQuickItem, &a0))
        {
            sipCpp = new QQuickItem::ItemChangeData(a0);

            return sipCpp;
        }
    }

    {
        QQuickWindow* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QQuickWindow, &a0))
        {
            sipCpp = new QQuickItem::ItemChangeData(a0);

            return sipCpp;
        }
    }

    {
        qreal a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "Xd", &a0))
        {
            sipCpp = new QQuickItem::ItemChangeData(a0);

            return sipCpp;
        }
    }

    {
        bool a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "Xb", &a0))
        {
            sipCpp = new QQuickItem::ItemChangeData(a0);

            return sipCpp;
        }
    }

    {
        const QQuickItem::ItemChangeData* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQuickItem_ItemChangeData, &a0))
        {
            sipCpp = new QQuickItem::ItemChangeData(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QQuickItem_ItemChangeData_boolValue(void *, PyObject *, PyObject *);}
static PyObject *varget_QQuickItem_ItemChangeData_boolValue(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QQuickItem::ItemChangeData *sipCpp = reinterpret_cast<QQuickItem::ItemChangeData *>(sipSelf);

    sipVal = sipCpp->boolValue;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QQuickItem_ItemChangeData_boolValue(void *, PyObject *, PyObject *);}
static int varset_QQuickItem_ItemChangeData_boolValue(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QQuickItem::ItemChangeData *sipCpp = reinterpret_cast<QQuickItem::ItemChangeData *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->boolValue = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QQuickItem_ItemChangeData_item(void *, PyObject *, PyObject *);}
static PyObject *varget_QQuickItem_ItemChangeData_item(void *sipSelf, PyObject *, PyObject *)
{
    QQuickItem*sipVal;
    QQuickItem::ItemChangeData *sipCpp = reinterpret_cast<QQuickItem::ItemChangeData *>(sipSelf);

    sipVal = sipCpp->item;

    return sipConvertFromType(sipVal, sipType_QQuickItem, NULL);
}


extern "C" {static int varset_QQuickItem_ItemChangeData_item(void *, PyObject *, PyObject *);}
static int varset_QQuickItem_ItemChangeData_item(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QQuickItem*sipVal;
    QQuickItem::ItemChangeData *sipCpp = reinterpret_cast<QQuickItem::ItemChangeData *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QQuickItem *>(sipForceConvertToType(sipPy,sipType_QQuickItem,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->item = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QQuickItem_ItemChangeData_realValue(void *, PyObject *, PyObject *);}
static PyObject *varget_QQuickItem_ItemChangeData_realValue(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QQuickItem::ItemChangeData *sipCpp = reinterpret_cast<QQuickItem::ItemChangeData *>(sipSelf);

    sipVal = sipCpp->realValue;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QQuickItem_ItemChangeData_realValue(void *, PyObject *, PyObject *);}
static int varset_QQuickItem_ItemChangeData_realValue(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QQuickItem::ItemChangeData *sipCpp = reinterpret_cast<QQuickItem::ItemChangeData *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->realValue = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QQuickItem_ItemChangeData_window(void *, PyObject *, PyObject *);}
static PyObject *varget_QQuickItem_ItemChangeData_window(void *sipSelf, PyObject *, PyObject *)
{
    QQuickWindow*sipVal;
    QQuickItem::ItemChangeData *sipCpp = reinterpret_cast<QQuickItem::ItemChangeData *>(sipSelf);

    sipVal = sipCpp->window;

    return sipConvertFromType(sipVal, sipType_QQuickWindow, NULL);
}


extern "C" {static int varset_QQuickItem_ItemChangeData_window(void *, PyObject *, PyObject *);}
static int varset_QQuickItem_ItemChangeData_window(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QQuickWindow*sipVal;
    QQuickItem::ItemChangeData *sipCpp = reinterpret_cast<QQuickItem::ItemChangeData *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QQuickWindow *>(sipForceConvertToType(sipPy,sipType_QQuickWindow,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->window = sipVal;

    return 0;
}

sipVariableDef variables_QQuickItem_ItemChangeData[] = {
    {InstanceVariable, sipName_boolValue, (PyMethodDef *)varget_QQuickItem_ItemChangeData_boolValue, (PyMethodDef *)varset_QQuickItem_ItemChangeData_boolValue, NULL, NULL},
    {InstanceVariable, sipName_item, (PyMethodDef *)varget_QQuickItem_ItemChangeData_item, (PyMethodDef *)varset_QQuickItem_ItemChangeData_item, NULL, NULL},
    {InstanceVariable, sipName_realValue, (PyMethodDef *)varget_QQuickItem_ItemChangeData_realValue, (PyMethodDef *)varset_QQuickItem_ItemChangeData_realValue, NULL, NULL},
    {InstanceVariable, sipName_window, (PyMethodDef *)varget_QQuickItem_ItemChangeData_window, (PyMethodDef *)varset_QQuickItem_ItemChangeData_window, NULL, NULL},
};

PyDoc_STRVAR(doc_QQuickItem_ItemChangeData, "\1QQuickItem.ItemChangeData(QQuickItem)\n"
    "QQuickItem.ItemChangeData(QQuickWindow)\n"
    "QQuickItem.ItemChangeData(float)\n"
    "QQuickItem.ItemChangeData(bool)\n"
    "QQuickItem.ItemChangeData(QQuickItem.ItemChangeData)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QQuickItem_ItemChangeData = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQuickItem__ItemChangeData,
        {0}
    },
    {
        sipNameNr_ItemChangeData,
        {4, 255, 0},
        0, 0,
        0, 0,
        4, variables_QQuickItem_ItemChangeData,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQuickItem_ItemChangeData,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQuickItem_ItemChangeData,
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
    dealloc_QQuickItem_ItemChangeData,
    0,
    0,
    0,
    release_QQuickItem_ItemChangeData,
    cast_QQuickItem_ItemChangeData,
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
