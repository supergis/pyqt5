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
#line 353 "/home/supermap/OpenThings/pyqt5/sip/QtWebKitWidgets/qwebpage.sip"
#include <qwebpage.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtWebKitWidgets/sipQtWebKitWidgetsQWebPageErrorPageExtensionReturn.cpp"

#line 100 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtWebKitWidgets/sipQtWebKitWidgetsQWebPageErrorPageExtensionReturn.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 38 "/home/supermap/OpenThings/pyqt5/QtWebKitWidgets/sipQtWebKitWidgetsQWebPageErrorPageExtensionReturn.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/home/supermap/OpenThings/pyqt5/QtWebKitWidgets/sipQtWebKitWidgetsQWebPageErrorPageExtensionReturn.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPage_ErrorPageExtensionReturn(void *, const sipTypeDef *);}
static void *cast_QWebPage_ErrorPageExtensionReturn(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWebPage_ErrorPageExtensionReturn)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QWebPage_ExtensionReturn)->ctd_cast((QWebPage::ExtensionReturn *)(QWebPage::ErrorPageExtensionReturn *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ErrorPageExtensionReturn(void *, int);}
static void release_QWebPage_ErrorPageExtensionReturn(void *sipCppV,int)
{
    delete reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipCppV);
}


extern "C" {static void assign_QWebPage_ErrorPageExtensionReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ErrorPageExtensionReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ErrorPageExtensionReturn *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ErrorPageExtensionReturn(SIP_SSIZE_T);}
static void *array_QWebPage_ErrorPageExtensionReturn(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ErrorPageExtensionReturn[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ErrorPageExtensionReturn(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ErrorPageExtensionReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ErrorPageExtensionReturn(reinterpret_cast<const QWebPage::ErrorPageExtensionReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ErrorPageExtensionReturn(sipSimpleWrapper *);}
static void dealloc_QWebPage_ErrorPageExtensionReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ErrorPageExtensionReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPage_ErrorPageExtensionReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPage_ErrorPageExtensionReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ErrorPageExtensionReturn *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWebPage::ErrorPageExtensionReturn();

            return sipCpp;
        }
    }

    {
        const QWebPage::ErrorPageExtensionReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ErrorPageExtensionReturn, &a0))
        {
            sipCpp = new QWebPage::ErrorPageExtensionReturn(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWebPage_ErrorPageExtensionReturn[] = {{17, 255, 1}};


extern "C" {static PyObject *varget_QWebPage_ErrorPageExtensionReturn_baseUrl(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPage_ErrorPageExtensionReturn_baseUrl(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QUrl*sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    sipVal = &sipCpp->baseUrl;

    sipPy = sipConvertFromType(sipVal, sipType_QUrl, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QWebPage_ErrorPageExtensionReturn_baseUrl(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ErrorPageExtensionReturn_baseUrl(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QUrl*sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QUrl *>(sipForceConvertToType(sipPy,sipType_QUrl,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->baseUrl = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QWebPage_ErrorPageExtensionReturn_content(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPage_ErrorPageExtensionReturn_content(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QByteArray*sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    sipVal = &sipCpp->content;

    sipPy = sipConvertFromType(sipVal, sipType_QByteArray, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QWebPage_ErrorPageExtensionReturn_content(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ErrorPageExtensionReturn_content(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QByteArray*sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QByteArray *>(sipForceConvertToType(sipPy,sipType_QByteArray,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->content = *sipVal;

    sipReleaseType(sipVal, sipType_QByteArray, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPage_ErrorPageExtensionReturn_contentType(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPage_ErrorPageExtensionReturn_contentType(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    sipVal = &sipCpp->contentType;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QWebPage_ErrorPageExtensionReturn_contentType(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ErrorPageExtensionReturn_contentType(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->contentType = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPage_ErrorPageExtensionReturn_encoding(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPage_ErrorPageExtensionReturn_encoding(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    sipVal = &sipCpp->encoding;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QWebPage_ErrorPageExtensionReturn_encoding(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ErrorPageExtensionReturn_encoding(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QWebPage::ErrorPageExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ErrorPageExtensionReturn *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->encoding = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QWebPage_ErrorPageExtensionReturn[] = {
    {InstanceVariable, sipName_baseUrl, (PyMethodDef *)varget_QWebPage_ErrorPageExtensionReturn_baseUrl, (PyMethodDef *)varset_QWebPage_ErrorPageExtensionReturn_baseUrl, NULL, NULL},
    {InstanceVariable, sipName_content, (PyMethodDef *)varget_QWebPage_ErrorPageExtensionReturn_content, (PyMethodDef *)varset_QWebPage_ErrorPageExtensionReturn_content, NULL, NULL},
    {InstanceVariable, sipName_contentType, (PyMethodDef *)varget_QWebPage_ErrorPageExtensionReturn_contentType, (PyMethodDef *)varset_QWebPage_ErrorPageExtensionReturn_contentType, NULL, NULL},
    {InstanceVariable, sipName_encoding, (PyMethodDef *)varget_QWebPage_ErrorPageExtensionReturn_encoding, (PyMethodDef *)varset_QWebPage_ErrorPageExtensionReturn_encoding, NULL, NULL},
};

PyDoc_STRVAR(doc_QWebPage_ErrorPageExtensionReturn, "\1QWebPage.ErrorPageExtensionReturn()\n"
    "QWebPage.ErrorPageExtensionReturn(QWebPage.ErrorPageExtensionReturn)");


pyqt5ClassTypeDef sipTypeDef_QtWebKitWidgets_QWebPage_ErrorPageExtensionReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ErrorPageExtensionReturn,
        {0}
    },
    {
        sipNameNr_ErrorPageExtensionReturn,
        {9, 255, 0},
        0, 0,
        0, 0,
        4, variables_QWebPage_ErrorPageExtensionReturn,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPage_ErrorPageExtensionReturn,
    -1,
    -1,
    supers_QWebPage_ErrorPageExtensionReturn,
    0,
    init_type_QWebPage_ErrorPageExtensionReturn,
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
    dealloc_QWebPage_ErrorPageExtensionReturn,
    assign_QWebPage_ErrorPageExtensionReturn,
    array_QWebPage_ErrorPageExtensionReturn,
    copy_QWebPage_ErrorPageExtensionReturn,
    release_QWebPage_ErrorPageExtensionReturn,
    cast_QWebPage_ErrorPageExtensionReturn,
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
