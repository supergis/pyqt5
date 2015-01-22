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

#line 507 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 26 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 36 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 39 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 444 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 42 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 45 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 60 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 48 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 60 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 51 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 533 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 54 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 57 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 427 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 60 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 395 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 63 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 247 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 66 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 350 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 69 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 144 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 72 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 75 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qpen.sip"
#include <qpen.h>
#line 78 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 81 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 84 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQTextTableFormat.cpp"


PyDoc_STRVAR(doc_QTextTableFormat_isValid, "QTextTableFormat.isValid() -> bool");

extern "C" {static PyObject *meth_QTextTableFormat_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableFormat, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_isValid, doc_QTextTableFormat_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_columns, "QTextTableFormat.columns() -> int");

extern "C" {static PyObject *meth_QTextTableFormat_columns(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_columns(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableFormat, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->columns();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_columns, doc_QTextTableFormat_columns);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_setColumnWidthConstraints, "QTextTableFormat.setColumnWidthConstraints(list-of-QTextLength)");

extern "C" {static PyObject *meth_QTextTableFormat_setColumnWidthConstraints(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_setColumnWidthConstraints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector<QTextLength>* a0;
        int a0State = 0;
        QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextTableFormat, &sipCpp, sipType_QVector_0100QTextLength,&a0, &a0State))
        {
            sipCpp->setColumnWidthConstraints(*a0);
            sipReleaseType(const_cast<QVector<QTextLength> *>(a0),sipType_QVector_0100QTextLength,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_setColumnWidthConstraints, doc_QTextTableFormat_setColumnWidthConstraints);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_columnWidthConstraints, "QTextTableFormat.columnWidthConstraints() -> list-of-QTextLength");

extern "C" {static PyObject *meth_QTextTableFormat_columnWidthConstraints(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_columnWidthConstraints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableFormat, &sipCpp))
        {
            QVector<QTextLength>*sipRes;

            sipRes = new QVector<QTextLength>(sipCpp->columnWidthConstraints());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QTextLength,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_columnWidthConstraints, doc_QTextTableFormat_columnWidthConstraints);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_clearColumnWidthConstraints, "QTextTableFormat.clearColumnWidthConstraints()");

extern "C" {static PyObject *meth_QTextTableFormat_clearColumnWidthConstraints(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_clearColumnWidthConstraints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableFormat, &sipCpp))
        {
            sipCpp->clearColumnWidthConstraints();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_clearColumnWidthConstraints, doc_QTextTableFormat_clearColumnWidthConstraints);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_cellSpacing, "QTextTableFormat.cellSpacing() -> float");

extern "C" {static PyObject *meth_QTextTableFormat_cellSpacing(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_cellSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableFormat, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->cellSpacing();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_cellSpacing, doc_QTextTableFormat_cellSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_setCellSpacing, "QTextTableFormat.setCellSpacing(float)");

extern "C" {static PyObject *meth_QTextTableFormat_setCellSpacing(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_setCellSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextTableFormat, &sipCpp, &a0))
        {
            sipCpp->setCellSpacing(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_setCellSpacing, doc_QTextTableFormat_setCellSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_cellPadding, "QTextTableFormat.cellPadding() -> float");

extern "C" {static PyObject *meth_QTextTableFormat_cellPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_cellPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableFormat, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->cellPadding();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_cellPadding, doc_QTextTableFormat_cellPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_alignment, "QTextTableFormat.alignment() -> Qt.Alignment");

extern "C" {static PyObject *meth_QTextTableFormat_alignment(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_alignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableFormat, &sipCpp))
        {
            Qt::Alignment*sipRes;

            sipRes = new Qt::Alignment(sipCpp->alignment());

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_alignment, doc_QTextTableFormat_alignment);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_setColumns, "QTextTableFormat.setColumns(int)");

extern "C" {static PyObject *meth_QTextTableFormat_setColumns(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_setColumns(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextTableFormat, &sipCpp, &a0))
        {
            sipCpp->setColumns(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_setColumns, doc_QTextTableFormat_setColumns);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_setCellPadding, "QTextTableFormat.setCellPadding(float)");

extern "C" {static PyObject *meth_QTextTableFormat_setCellPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_setCellPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextTableFormat, &sipCpp, &a0))
        {
            sipCpp->setCellPadding(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_setCellPadding, doc_QTextTableFormat_setCellPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_setAlignment, "QTextTableFormat.setAlignment(Qt.Alignment)");

extern "C" {static PyObject *meth_QTextTableFormat_setAlignment(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_setAlignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::Alignment* a0;
        int a0State = 0;
        QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextTableFormat, &sipCpp, sipType_Qt_Alignment, &a0, &a0State))
        {
            sipCpp->setAlignment(*a0);
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_setAlignment, doc_QTextTableFormat_setAlignment);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_setHeaderRowCount, "QTextTableFormat.setHeaderRowCount(int)");

extern "C" {static PyObject *meth_QTextTableFormat_setHeaderRowCount(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_setHeaderRowCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextTableFormat, &sipCpp, &a0))
        {
            sipCpp->setHeaderRowCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_setHeaderRowCount, doc_QTextTableFormat_setHeaderRowCount);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableFormat_headerRowCount, "QTextTableFormat.headerRowCount() -> int");

extern "C" {static PyObject *meth_QTextTableFormat_headerRowCount(PyObject *, PyObject *);}
static PyObject *meth_QTextTableFormat_headerRowCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableFormat, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->headerRowCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableFormat, sipName_headerRowCount, doc_QTextTableFormat_headerRowCount);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextTableFormat(void *, const sipTypeDef *);}
static void *cast_QTextTableFormat(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTextTableFormat)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QTextFrameFormat)->ctd_cast((QTextFrameFormat *)(QTextTableFormat *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextTableFormat(void *, int);}
static void release_QTextTableFormat(void *sipCppV,int)
{
    delete reinterpret_cast<QTextTableFormat *>(sipCppV);
}


extern "C" {static void assign_QTextTableFormat(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextTableFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextTableFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextTableFormat *>(sipSrc);
}


extern "C" {static void *array_QTextTableFormat(SIP_SSIZE_T);}
static void *array_QTextTableFormat(SIP_SSIZE_T sipNrElem)
{
    return new QTextTableFormat[sipNrElem];
}


extern "C" {static void *copy_QTextTableFormat(const void *, SIP_SSIZE_T);}
static void *copy_QTextTableFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextTableFormat(reinterpret_cast<const QTextTableFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextTableFormat(sipSimpleWrapper *);}
static void dealloc_QTextTableFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextTableFormat(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextTableFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextTableFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextTableFormat *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTextTableFormat();

            return sipCpp;
        }
    }

    {
        const QTextTableFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextTableFormat, &a0))
        {
            sipCpp = new QTextTableFormat(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextTableFormat[] = {{300, 255, 1}};


static PyMethodDef methods_QTextTableFormat[] = {
    {SIP_MLNAME_CAST(sipName_alignment), meth_QTextTableFormat_alignment, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_alignment)},
    {SIP_MLNAME_CAST(sipName_cellPadding), meth_QTextTableFormat_cellPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_cellPadding)},
    {SIP_MLNAME_CAST(sipName_cellSpacing), meth_QTextTableFormat_cellSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_cellSpacing)},
    {SIP_MLNAME_CAST(sipName_clearColumnWidthConstraints), meth_QTextTableFormat_clearColumnWidthConstraints, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_clearColumnWidthConstraints)},
    {SIP_MLNAME_CAST(sipName_columnWidthConstraints), meth_QTextTableFormat_columnWidthConstraints, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_columnWidthConstraints)},
    {SIP_MLNAME_CAST(sipName_columns), meth_QTextTableFormat_columns, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_columns)},
    {SIP_MLNAME_CAST(sipName_headerRowCount), meth_QTextTableFormat_headerRowCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_headerRowCount)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextTableFormat_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_isValid)},
    {SIP_MLNAME_CAST(sipName_setAlignment), meth_QTextTableFormat_setAlignment, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_setAlignment)},
    {SIP_MLNAME_CAST(sipName_setCellPadding), meth_QTextTableFormat_setCellPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_setCellPadding)},
    {SIP_MLNAME_CAST(sipName_setCellSpacing), meth_QTextTableFormat_setCellSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_setCellSpacing)},
    {SIP_MLNAME_CAST(sipName_setColumnWidthConstraints), meth_QTextTableFormat_setColumnWidthConstraints, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_setColumnWidthConstraints)},
    {SIP_MLNAME_CAST(sipName_setColumns), meth_QTextTableFormat_setColumns, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_setColumns)},
    {SIP_MLNAME_CAST(sipName_setHeaderRowCount), meth_QTextTableFormat_setHeaderRowCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableFormat_setHeaderRowCount)}
};

PyDoc_STRVAR(doc_QTextTableFormat, "\1QTextTableFormat()\n"
    "QTextTableFormat(QTextTableFormat)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QTextTableFormat = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextTableFormat,
        {0}
    },
    {
        sipNameNr_QTextTableFormat,
        {0, 0, 1},
        14, methods_QTextTableFormat,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextTableFormat,
    -1,
    -1,
    supers_QTextTableFormat,
    0,
    init_type_QTextTableFormat,
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
    dealloc_QTextTableFormat,
    assign_QTextTableFormat,
    array_QTextTableFormat,
    copy_QTextTableFormat,
    release_QTextTableFormat,
    cast_QTextTableFormat,
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
