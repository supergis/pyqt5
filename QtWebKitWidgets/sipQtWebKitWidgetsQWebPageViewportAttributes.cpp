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
#line 382 "/home/supermap/OpenThings/pyqt5/sip/QtWebKitWidgets/qwebpage.sip"
#include <qwebpage.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtWebKitWidgets/sipQtWebKitWidgetsQWebPageViewportAttributes.cpp"

#line 101 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtWebKitWidgets/sipQtWebKitWidgetsQWebPageViewportAttributes.cpp"


PyDoc_STRVAR(doc_QWebPage_ViewportAttributes_initialScaleFactor, "QWebPage.ViewportAttributes.initialScaleFactor() -> float");

extern "C" {static PyObject *meth_QWebPage_ViewportAttributes_initialScaleFactor(PyObject *, PyObject *);}
static PyObject *meth_QWebPage_ViewportAttributes_initialScaleFactor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebPage::ViewportAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebPage_ViewportAttributes, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->initialScaleFactor();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ViewportAttributes, sipName_initialScaleFactor, doc_QWebPage_ViewportAttributes_initialScaleFactor);

    return NULL;
}


PyDoc_STRVAR(doc_QWebPage_ViewportAttributes_minimumScaleFactor, "QWebPage.ViewportAttributes.minimumScaleFactor() -> float");

extern "C" {static PyObject *meth_QWebPage_ViewportAttributes_minimumScaleFactor(PyObject *, PyObject *);}
static PyObject *meth_QWebPage_ViewportAttributes_minimumScaleFactor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebPage::ViewportAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebPage_ViewportAttributes, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->minimumScaleFactor();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ViewportAttributes, sipName_minimumScaleFactor, doc_QWebPage_ViewportAttributes_minimumScaleFactor);

    return NULL;
}


PyDoc_STRVAR(doc_QWebPage_ViewportAttributes_maximumScaleFactor, "QWebPage.ViewportAttributes.maximumScaleFactor() -> float");

extern "C" {static PyObject *meth_QWebPage_ViewportAttributes_maximumScaleFactor(PyObject *, PyObject *);}
static PyObject *meth_QWebPage_ViewportAttributes_maximumScaleFactor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebPage::ViewportAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebPage_ViewportAttributes, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->maximumScaleFactor();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ViewportAttributes, sipName_maximumScaleFactor, doc_QWebPage_ViewportAttributes_maximumScaleFactor);

    return NULL;
}


PyDoc_STRVAR(doc_QWebPage_ViewportAttributes_devicePixelRatio, "QWebPage.ViewportAttributes.devicePixelRatio() -> float");

extern "C" {static PyObject *meth_QWebPage_ViewportAttributes_devicePixelRatio(PyObject *, PyObject *);}
static PyObject *meth_QWebPage_ViewportAttributes_devicePixelRatio(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebPage::ViewportAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebPage_ViewportAttributes, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->devicePixelRatio();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ViewportAttributes, sipName_devicePixelRatio, doc_QWebPage_ViewportAttributes_devicePixelRatio);

    return NULL;
}


PyDoc_STRVAR(doc_QWebPage_ViewportAttributes_isUserScalable, "QWebPage.ViewportAttributes.isUserScalable() -> bool");

extern "C" {static PyObject *meth_QWebPage_ViewportAttributes_isUserScalable(PyObject *, PyObject *);}
static PyObject *meth_QWebPage_ViewportAttributes_isUserScalable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebPage::ViewportAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebPage_ViewportAttributes, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isUserScalable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ViewportAttributes, sipName_isUserScalable, doc_QWebPage_ViewportAttributes_isUserScalable);

    return NULL;
}


PyDoc_STRVAR(doc_QWebPage_ViewportAttributes_isValid, "QWebPage.ViewportAttributes.isValid() -> bool");

extern "C" {static PyObject *meth_QWebPage_ViewportAttributes_isValid(PyObject *, PyObject *);}
static PyObject *meth_QWebPage_ViewportAttributes_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebPage::ViewportAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebPage_ViewportAttributes, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ViewportAttributes, sipName_isValid, doc_QWebPage_ViewportAttributes_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QWebPage_ViewportAttributes_size, "QWebPage.ViewportAttributes.size() -> QSizeF");

extern "C" {static PyObject *meth_QWebPage_ViewportAttributes_size(PyObject *, PyObject *);}
static PyObject *meth_QWebPage_ViewportAttributes_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebPage::ViewportAttributes *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebPage_ViewportAttributes, &sipCpp))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->size());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ViewportAttributes, sipName_size, doc_QWebPage_ViewportAttributes_size);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPage_ViewportAttributes(void *, const sipTypeDef *);}
static void *cast_QWebPage_ViewportAttributes(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPage_ViewportAttributes)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ViewportAttributes(void *, int);}
static void release_QWebPage_ViewportAttributes(void *sipCppV,int)
{
    delete reinterpret_cast<QWebPage::ViewportAttributes *>(sipCppV);
}


extern "C" {static void assign_QWebPage_ViewportAttributes(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ViewportAttributes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ViewportAttributes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ViewportAttributes *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ViewportAttributes(SIP_SSIZE_T);}
static void *array_QWebPage_ViewportAttributes(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ViewportAttributes[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ViewportAttributes(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ViewportAttributes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ViewportAttributes(reinterpret_cast<const QWebPage::ViewportAttributes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ViewportAttributes(sipSimpleWrapper *);}
static void dealloc_QWebPage_ViewportAttributes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ViewportAttributes(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPage_ViewportAttributes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPage_ViewportAttributes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ViewportAttributes *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWebPage::ViewportAttributes();

            return sipCpp;
        }
    }

    {
        const QWebPage::ViewportAttributes* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ViewportAttributes, &a0))
        {
            sipCpp = new QWebPage::ViewportAttributes(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWebPage_ViewportAttributes[] = {
    {SIP_MLNAME_CAST(sipName_devicePixelRatio), meth_QWebPage_ViewportAttributes_devicePixelRatio, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebPage_ViewportAttributes_devicePixelRatio)},
    {SIP_MLNAME_CAST(sipName_initialScaleFactor), meth_QWebPage_ViewportAttributes_initialScaleFactor, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebPage_ViewportAttributes_initialScaleFactor)},
    {SIP_MLNAME_CAST(sipName_isUserScalable), meth_QWebPage_ViewportAttributes_isUserScalable, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebPage_ViewportAttributes_isUserScalable)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QWebPage_ViewportAttributes_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebPage_ViewportAttributes_isValid)},
    {SIP_MLNAME_CAST(sipName_maximumScaleFactor), meth_QWebPage_ViewportAttributes_maximumScaleFactor, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebPage_ViewportAttributes_maximumScaleFactor)},
    {SIP_MLNAME_CAST(sipName_minimumScaleFactor), meth_QWebPage_ViewportAttributes_minimumScaleFactor, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebPage_ViewportAttributes_minimumScaleFactor)},
    {SIP_MLNAME_CAST(sipName_size), meth_QWebPage_ViewportAttributes_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebPage_ViewportAttributes_size)}
};

PyDoc_STRVAR(doc_QWebPage_ViewportAttributes, "\1QWebPage.ViewportAttributes()\n"
    "QWebPage.ViewportAttributes(QWebPage.ViewportAttributes)");


pyqt5ClassTypeDef sipTypeDef_QtWebKitWidgets_QWebPage_ViewportAttributes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ViewportAttributes,
        {0}
    },
    {
        sipNameNr_ViewportAttributes,
        {9, 255, 0},
        7, methods_QWebPage_ViewportAttributes,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPage_ViewportAttributes,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPage_ViewportAttributes,
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
    dealloc_QWebPage_ViewportAttributes,
    assign_QWebPage_ViewportAttributes,
    array_QWebPage_ViewportAttributes,
    copy_QWebPage_ViewportAttributes,
    release_QWebPage_ViewportAttributes,
    cast_QWebPage_ViewportAttributes,
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
