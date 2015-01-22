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
#line 178 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickitem.sip"
#include <qquickitem.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemUpdatePaintNodeData.cpp"

#line 323 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickItemUpdatePaintNodeData.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQuickItem_UpdatePaintNodeData(void *, const sipTypeDef *);}
static void *cast_QQuickItem_UpdatePaintNodeData(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQuickItem_UpdatePaintNodeData)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQuickItem_UpdatePaintNodeData(void *, int);}
static void release_QQuickItem_UpdatePaintNodeData(void *sipCppV,int)
{
    delete reinterpret_cast<QQuickItem::UpdatePaintNodeData *>(sipCppV);
}


extern "C" {static void dealloc_QQuickItem_UpdatePaintNodeData(sipSimpleWrapper *);}
static void dealloc_QQuickItem_UpdatePaintNodeData(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QQuickItem_UpdatePaintNodeData(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static PyObject *varget_QQuickItem_UpdatePaintNodeData_transformNode(void *, PyObject *, PyObject *);}
static PyObject *varget_QQuickItem_UpdatePaintNodeData_transformNode(void *sipSelf, PyObject *, PyObject *)
{
    QSGTransformNode*sipVal;
    QQuickItem::UpdatePaintNodeData *sipCpp = reinterpret_cast<QQuickItem::UpdatePaintNodeData *>(sipSelf);

    sipVal = sipCpp->transformNode;

    return sipConvertFromType(sipVal, sipType_QSGTransformNode, NULL);
}


extern "C" {static int varset_QQuickItem_UpdatePaintNodeData_transformNode(void *, PyObject *, PyObject *);}
static int varset_QQuickItem_UpdatePaintNodeData_transformNode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSGTransformNode*sipVal;
    QQuickItem::UpdatePaintNodeData *sipCpp = reinterpret_cast<QQuickItem::UpdatePaintNodeData *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSGTransformNode *>(sipForceConvertToType(sipPy,sipType_QSGTransformNode,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->transformNode = sipVal;

    return 0;
}

sipVariableDef variables_QQuickItem_UpdatePaintNodeData[] = {
    {InstanceVariable, sipName_transformNode, (PyMethodDef *)varget_QQuickItem_UpdatePaintNodeData_transformNode, (PyMethodDef *)varset_QQuickItem_UpdatePaintNodeData_transformNode, NULL, NULL},
};


pyqt5ClassTypeDef sipTypeDef_QtQuick_QQuickItem_UpdatePaintNodeData = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQuickItem__UpdatePaintNodeData,
        {0}
    },
    {
        sipNameNr_UpdatePaintNodeData,
        {4, 255, 0},
        0, 0,
        0, 0,
        1, variables_QQuickItem_UpdatePaintNodeData,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
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
    dealloc_QQuickItem_UpdatePaintNodeData,
    0,
    0,
    0,
    release_QQuickItem_UpdatePaintNodeData,
    cast_QQuickItem_UpdatePaintNodeData,
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
