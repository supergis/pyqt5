/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:21 2015
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

#include "sipAPIQtWebKitWidgets.h"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWebKitWidgets/qwebpage.sip"
#include <qwebpage.h>
#line 222 "/home/supermap/OpenThings/pyqt5/sip/QtWebKitWidgets/qwebpage.sip"
#include <qwebpage.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtWebKitWidgets/sipQtWebKitWidgetsQWebPageExtensionReturn.cpp"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPage_ExtensionReturn(void *, const sipTypeDef *);}
static void *cast_QWebPage_ExtensionReturn(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPage_ExtensionReturn)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ExtensionReturn(void *, int);}
static void release_QWebPage_ExtensionReturn(void *sipCppV,int)
{
    delete reinterpret_cast<QWebPage::ExtensionReturn *>(sipCppV);
}


extern "C" {static void assign_QWebPage_ExtensionReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ExtensionReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ExtensionReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ExtensionReturn *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ExtensionReturn(SIP_SSIZE_T);}
static void *array_QWebPage_ExtensionReturn(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ExtensionReturn[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ExtensionReturn(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ExtensionReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ExtensionReturn(reinterpret_cast<const QWebPage::ExtensionReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ExtensionReturn(sipSimpleWrapper *);}
static void dealloc_QWebPage_ExtensionReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ExtensionReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPage_ExtensionReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPage_ExtensionReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ExtensionReturn *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWebPage::ExtensionReturn();

            return sipCpp;
        }
    }

    {
        const QWebPage::ExtensionReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ExtensionReturn, &a0))
        {
            sipCpp = new QWebPage::ExtensionReturn(*a0);

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QWebPage_ExtensionReturn, "\1QWebPage.ExtensionReturn()\n"
    "QWebPage.ExtensionReturn(QWebPage.ExtensionReturn)");


pyqt5ClassTypeDef sipTypeDef_QtWebKitWidgets_QWebPage_ExtensionReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ExtensionReturn,
        {0}
    },
    {
        sipNameNr_ExtensionReturn,
        {9, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPage_ExtensionReturn,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPage_ExtensionReturn,
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
    dealloc_QWebPage_ExtensionReturn,
    assign_QWebPage_ExtensionReturn,
    array_QWebPage_ExtensionReturn,
    copy_QWebPage_ExtensionReturn,
    release_QWebPage_ExtensionReturn,
    cast_QWebPage_ExtensionReturn,
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
