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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qtreewidgetitemiterator.sip"
#include <qtreewidgetitemiterator.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQTreeWidgetItemIterator.cpp"

#line 129 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qtreewidget.sip"
#include <qtreewidget.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQTreeWidgetItemIterator.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qtreewidgetitemiterator.sip"
#include <qtreewidgetitemiterator.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQTreeWidgetItemIterator.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qtreewidget.sip"
#include <qtreewidget.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQTreeWidgetItemIterator.cpp"


PyDoc_STRVAR(doc_QTreeWidgetItemIterator_value, "QTreeWidgetItemIterator.value() -> QTreeWidgetItem");

extern "C" {static PyObject *meth_QTreeWidgetItemIterator_value(PyObject *, PyObject *);}
static PyObject *meth_QTreeWidgetItemIterator_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTreeWidgetItemIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTreeWidgetItemIterator, &sipCpp))
        {
            QTreeWidgetItem*sipRes = 0;

#line 65 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qtreewidgetitemiterator.sip"
        // SIP doesn't support operator* so this is a thin wrapper around it.
        sipRes = sipCpp->operator*();
#line 59 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQTreeWidgetItemIterator.cpp"

            return sipConvertFromType(sipRes,sipType_QTreeWidgetItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTreeWidgetItemIterator, sipName_value, doc_QTreeWidgetItemIterator_value);

    return NULL;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator___isub__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTreeWidgetItemIterator *sipCpp = reinterpret_cast<QTreeWidgetItemIterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QTreeWidgetItemIterator::operator-=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTreeWidgetItemIterator *sipCpp = reinterpret_cast<QTreeWidgetItemIterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QTreeWidgetItemIterator::operator+=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTreeWidgetItemIterator(void *, const sipTypeDef *);}
static void *cast_QTreeWidgetItemIterator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTreeWidgetItemIterator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTreeWidgetItemIterator(void *, int);}
static void release_QTreeWidgetItemIterator(void *sipCppV,int)
{
    delete reinterpret_cast<QTreeWidgetItemIterator *>(sipCppV);
}


extern "C" {static void dealloc_QTreeWidgetItemIterator(sipSimpleWrapper *);}
static void dealloc_QTreeWidgetItemIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTreeWidgetItemIterator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTreeWidgetItemIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTreeWidgetItemIterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTreeWidgetItemIterator *sipCpp = 0;

    {
        const QTreeWidgetItemIterator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTreeWidgetItemIterator, &a0))
        {
            sipCpp = new QTreeWidgetItemIterator(*a0);

            return sipCpp;
        }
    }

    {
        QTreeWidget* a0;
        QTreeWidgetItemIterator::IteratorFlags a1def = QTreeWidgetItemIterator::All;
        QTreeWidgetItemIterator::IteratorFlags* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|J1", sipType_QTreeWidget, &a0, sipType_QTreeWidgetItemIterator_IteratorFlags, &a1, &a1State))
        {
            sipCpp = new QTreeWidgetItemIterator(a0,*a1);
            sipReleaseType(a1,sipType_QTreeWidgetItemIterator_IteratorFlags,a1State);

            return sipCpp;
        }
    }

    {
        QTreeWidgetItem* a0;
        QTreeWidgetItemIterator::IteratorFlags a1def = QTreeWidgetItemIterator::All;
        QTreeWidgetItemIterator::IteratorFlags* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|J1", sipType_QTreeWidgetItem, &a0, sipType_QTreeWidgetItemIterator_IteratorFlags, &a1, &a1State))
        {
            sipCpp = new QTreeWidgetItemIterator(a0,*a1);
            sipReleaseType(a1,sipType_QTreeWidgetItemIterator_IteratorFlags,a1State);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTreeWidgetItemIterator[] = {
    {(void *)slot_QTreeWidgetItemIterator___isub__, isub_slot},
    {(void *)slot_QTreeWidgetItemIterator___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTreeWidgetItemIterator[] = {
    {SIP_MLNAME_CAST(sipName_value), meth_QTreeWidgetItemIterator_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QTreeWidgetItemIterator_value)}
};

static sipEnumMemberDef enummembers_QTreeWidgetItemIterator[] = {
    {sipName_All, static_cast<int>(QTreeWidgetItemIterator::All), 446},
    {sipName_Checked, static_cast<int>(QTreeWidgetItemIterator::Checked), 446},
    {sipName_Disabled, static_cast<int>(QTreeWidgetItemIterator::Disabled), 446},
    {sipName_DragDisabled, static_cast<int>(QTreeWidgetItemIterator::DragDisabled), 446},
    {sipName_DragEnabled, static_cast<int>(QTreeWidgetItemIterator::DragEnabled), 446},
    {sipName_DropDisabled, static_cast<int>(QTreeWidgetItemIterator::DropDisabled), 446},
    {sipName_DropEnabled, static_cast<int>(QTreeWidgetItemIterator::DropEnabled), 446},
    {sipName_Editable, static_cast<int>(QTreeWidgetItemIterator::Editable), 446},
    {sipName_Enabled, static_cast<int>(QTreeWidgetItemIterator::Enabled), 446},
    {sipName_HasChildren, static_cast<int>(QTreeWidgetItemIterator::HasChildren), 446},
    {sipName_Hidden, static_cast<int>(QTreeWidgetItemIterator::Hidden), 446},
    {sipName_NoChildren, static_cast<int>(QTreeWidgetItemIterator::NoChildren), 446},
    {sipName_NotChecked, static_cast<int>(QTreeWidgetItemIterator::NotChecked), 446},
    {sipName_NotEditable, static_cast<int>(QTreeWidgetItemIterator::NotEditable), 446},
    {sipName_NotHidden, static_cast<int>(QTreeWidgetItemIterator::NotHidden), 446},
    {sipName_NotSelectable, static_cast<int>(QTreeWidgetItemIterator::NotSelectable), 446},
    {sipName_Selectable, static_cast<int>(QTreeWidgetItemIterator::Selectable), 446},
    {sipName_Selected, static_cast<int>(QTreeWidgetItemIterator::Selected), 446},
    {sipName_Unselected, static_cast<int>(QTreeWidgetItemIterator::Unselected), 446},
    {sipName_UserFlag, static_cast<int>(QTreeWidgetItemIterator::UserFlag), 446},
};

PyDoc_STRVAR(doc_QTreeWidgetItemIterator, "\1QTreeWidgetItemIterator(QTreeWidgetItemIterator)\n"
    "QTreeWidgetItemIterator(QTreeWidget, QTreeWidgetItemIterator.IteratorFlags flags=QTreeWidgetItemIterator.All)\n"
    "QTreeWidgetItemIterator(QTreeWidgetItem, QTreeWidgetItemIterator.IteratorFlags flags=QTreeWidgetItemIterator.All)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QTreeWidgetItemIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTreeWidgetItemIterator,
        {0}
    },
    {
        sipNameNr_QTreeWidgetItemIterator,
        {0, 0, 1},
        1, methods_QTreeWidgetItemIterator,
        20, enummembers_QTreeWidgetItemIterator,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTreeWidgetItemIterator,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTreeWidgetItemIterator,
    init_type_QTreeWidgetItemIterator,
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
    dealloc_QTreeWidgetItemIterator,
    0,
    0,
    0,
    release_QTreeWidgetItemIterator,
    cast_QTreeWidgetItemIterator,
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
