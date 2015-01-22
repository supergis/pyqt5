/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:52:28 2015
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

#include "sipAPIQtGui.h"

#line 26 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 36 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 31 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQAbstractTextDocumentLayoutSelection.cpp"

#line 26 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextcursor.sip"
#include <qtextcursor.h>
#line 35 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQAbstractTextDocumentLayoutSelection.cpp"
#line 247 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 38 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQAbstractTextDocumentLayoutSelection.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractTextDocumentLayout_Selection(void *, const sipTypeDef *);}
static void *cast_QAbstractTextDocumentLayout_Selection(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractTextDocumentLayout_Selection)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractTextDocumentLayout_Selection(void *, int);}
static void release_QAbstractTextDocumentLayout_Selection(void *sipCppV,int)
{
    delete reinterpret_cast<QAbstractTextDocumentLayout::Selection *>(sipCppV);
}


extern "C" {static void assign_QAbstractTextDocumentLayout_Selection(void *, SIP_SSIZE_T, const void *);}
static void assign_QAbstractTextDocumentLayout_Selection(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAbstractTextDocumentLayout::Selection *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAbstractTextDocumentLayout::Selection *>(sipSrc);
}


extern "C" {static void *array_QAbstractTextDocumentLayout_Selection(SIP_SSIZE_T);}
static void *array_QAbstractTextDocumentLayout_Selection(SIP_SSIZE_T sipNrElem)
{
    return new QAbstractTextDocumentLayout::Selection[sipNrElem];
}


extern "C" {static void *copy_QAbstractTextDocumentLayout_Selection(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractTextDocumentLayout_Selection(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAbstractTextDocumentLayout::Selection(reinterpret_cast<const QAbstractTextDocumentLayout::Selection *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractTextDocumentLayout_Selection(sipSimpleWrapper *);}
static void dealloc_QAbstractTextDocumentLayout_Selection(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractTextDocumentLayout_Selection(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAbstractTextDocumentLayout_Selection(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractTextDocumentLayout_Selection(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAbstractTextDocumentLayout::Selection *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QAbstractTextDocumentLayout::Selection();

            return sipCpp;
        }
    }

    {
        const QAbstractTextDocumentLayout::Selection* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAbstractTextDocumentLayout_Selection, &a0))
        {
            sipCpp = new QAbstractTextDocumentLayout::Selection(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_Selection_cursor(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_Selection_cursor(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QTextCursor*sipVal;
    QAbstractTextDocumentLayout::Selection *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::Selection *>(sipSelf);

    sipVal = &sipCpp->cursor;

    sipPy = sipConvertFromType(sipVal, sipType_QTextCursor, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QAbstractTextDocumentLayout_Selection_cursor(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_Selection_cursor(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QTextCursor*sipVal;
    QAbstractTextDocumentLayout::Selection *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::Selection *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QTextCursor *>(sipForceConvertToType(sipPy,sipType_QTextCursor,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->cursor = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_Selection_format(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_Selection_format(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QTextCharFormat*sipVal;
    QAbstractTextDocumentLayout::Selection *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::Selection *>(sipSelf);

    sipVal = &sipCpp->format;

    sipPy = sipConvertFromType(sipVal, sipType_QTextCharFormat, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QAbstractTextDocumentLayout_Selection_format(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_Selection_format(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QTextCharFormat*sipVal;
    QAbstractTextDocumentLayout::Selection *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::Selection *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QTextCharFormat *>(sipForceConvertToType(sipPy,sipType_QTextCharFormat,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->format = *sipVal;

    return 0;
}

sipVariableDef variables_QAbstractTextDocumentLayout_Selection[] = {
    {InstanceVariable, sipName_cursor, (PyMethodDef *)varget_QAbstractTextDocumentLayout_Selection_cursor, (PyMethodDef *)varset_QAbstractTextDocumentLayout_Selection_cursor, NULL, NULL},
    {InstanceVariable, sipName_format, (PyMethodDef *)varget_QAbstractTextDocumentLayout_Selection_format, (PyMethodDef *)varset_QAbstractTextDocumentLayout_Selection_format, NULL, NULL},
};

PyDoc_STRVAR(doc_QAbstractTextDocumentLayout_Selection, "\1QAbstractTextDocumentLayout.Selection()\n"
    "QAbstractTextDocumentLayout.Selection(QAbstractTextDocumentLayout.Selection)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QAbstractTextDocumentLayout_Selection = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractTextDocumentLayout__Selection,
        {0}
    },
    {
        sipNameNr_Selection,
        {1, 255, 0},
        0, 0,
        0, 0,
        2, variables_QAbstractTextDocumentLayout_Selection,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractTextDocumentLayout_Selection,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractTextDocumentLayout_Selection,
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
    dealloc_QAbstractTextDocumentLayout_Selection,
    assign_QAbstractTextDocumentLayout_Selection,
    array_QAbstractTextDocumentLayout_Selection,
    copy_QAbstractTextDocumentLayout_Selection,
    release_QAbstractTextDocumentLayout_Selection,
    cast_QAbstractTextDocumentLayout_Selection,
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
