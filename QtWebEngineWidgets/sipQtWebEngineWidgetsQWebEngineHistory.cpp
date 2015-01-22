/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:36:02 2015
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

#include "sipAPIQtWebEngineWidgets.h"

#line 54 "/home/supermap/OpenThings/pyqt5/sip/QtWebEngineWidgets/qwebenginehistory.sip"
#include <qwebenginehistory.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineHistory.cpp"

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtWebEngineWidgets/qwebenginehistory.sip"
#include <qwebenginehistory.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineHistory.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineHistory.cpp"


PyDoc_STRVAR(doc_QWebEngineHistory_clear, "QWebEngineHistory.clear()");

extern "C" {static PyObject *meth_QWebEngineHistory_clear(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_clear, doc_QWebEngineHistory_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_items, "QWebEngineHistory.items() -> list-of-QWebEngineHistoryItem");

extern "C" {static PyObject *meth_QWebEngineHistory_items(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_items(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            QList<QWebEngineHistoryItem>*sipRes;

            sipRes = new QList<QWebEngineHistoryItem>(sipCpp->items());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebEngineHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_items, doc_QWebEngineHistory_items);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_backItems, "QWebEngineHistory.backItems(int) -> list-of-QWebEngineHistoryItem");

extern "C" {static PyObject *meth_QWebEngineHistory_backItems(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_backItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebEngineHistory, &sipCpp, &a0))
        {
            QList<QWebEngineHistoryItem>*sipRes;

            sipRes = new QList<QWebEngineHistoryItem>(sipCpp->backItems(a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebEngineHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_backItems, doc_QWebEngineHistory_backItems);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_forwardItems, "QWebEngineHistory.forwardItems(int) -> list-of-QWebEngineHistoryItem");

extern "C" {static PyObject *meth_QWebEngineHistory_forwardItems(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_forwardItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebEngineHistory, &sipCpp, &a0))
        {
            QList<QWebEngineHistoryItem>*sipRes;

            sipRes = new QList<QWebEngineHistoryItem>(sipCpp->forwardItems(a0));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebEngineHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_forwardItems, doc_QWebEngineHistory_forwardItems);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_canGoBack, "QWebEngineHistory.canGoBack() -> bool");

extern "C" {static PyObject *meth_QWebEngineHistory_canGoBack(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_canGoBack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canGoBack();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_canGoBack, doc_QWebEngineHistory_canGoBack);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_canGoForward, "QWebEngineHistory.canGoForward() -> bool");

extern "C" {static PyObject *meth_QWebEngineHistory_canGoForward(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_canGoForward(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->canGoForward();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_canGoForward, doc_QWebEngineHistory_canGoForward);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_back, "QWebEngineHistory.back()");

extern "C" {static PyObject *meth_QWebEngineHistory_back(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_back(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            sipCpp->back();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_back, doc_QWebEngineHistory_back);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_forward, "QWebEngineHistory.forward()");

extern "C" {static PyObject *meth_QWebEngineHistory_forward(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_forward(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            sipCpp->forward();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_forward, doc_QWebEngineHistory_forward);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_goToItem, "QWebEngineHistory.goToItem(QWebEngineHistoryItem)");

extern "C" {static PyObject *meth_QWebEngineHistory_goToItem(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_goToItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistoryItem* a0;
        QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWebEngineHistory, &sipCpp, sipType_QWebEngineHistoryItem, &a0))
        {
            sipCpp->goToItem(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_goToItem, doc_QWebEngineHistory_goToItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_backItem, "QWebEngineHistory.backItem() -> QWebEngineHistoryItem");

extern "C" {static PyObject *meth_QWebEngineHistory_backItem(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_backItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            QWebEngineHistoryItem*sipRes;

            sipRes = new QWebEngineHistoryItem(sipCpp->backItem());

            return sipConvertFromNewType(sipRes,sipType_QWebEngineHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_backItem, doc_QWebEngineHistory_backItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_currentItem, "QWebEngineHistory.currentItem() -> QWebEngineHistoryItem");

extern "C" {static PyObject *meth_QWebEngineHistory_currentItem(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_currentItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            QWebEngineHistoryItem*sipRes;

            sipRes = new QWebEngineHistoryItem(sipCpp->currentItem());

            return sipConvertFromNewType(sipRes,sipType_QWebEngineHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_currentItem, doc_QWebEngineHistory_currentItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_forwardItem, "QWebEngineHistory.forwardItem() -> QWebEngineHistoryItem");

extern "C" {static PyObject *meth_QWebEngineHistory_forwardItem(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_forwardItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            QWebEngineHistoryItem*sipRes;

            sipRes = new QWebEngineHistoryItem(sipCpp->forwardItem());

            return sipConvertFromNewType(sipRes,sipType_QWebEngineHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_forwardItem, doc_QWebEngineHistory_forwardItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_itemAt, "QWebEngineHistory.itemAt(int) -> QWebEngineHistoryItem");

extern "C" {static PyObject *meth_QWebEngineHistory_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebEngineHistory, &sipCpp, &a0))
        {
            QWebEngineHistoryItem*sipRes;

            sipRes = new QWebEngineHistoryItem(sipCpp->itemAt(a0));

            return sipConvertFromNewType(sipRes,sipType_QWebEngineHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_itemAt, doc_QWebEngineHistory_itemAt);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_currentItemIndex, "QWebEngineHistory.currentItemIndex() -> int");

extern "C" {static PyObject *meth_QWebEngineHistory_currentItemIndex(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_currentItemIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->currentItemIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_currentItemIndex, doc_QWebEngineHistory_currentItemIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QWebEngineHistory_count, "QWebEngineHistory.count() -> int");

extern "C" {static PyObject *meth_QWebEngineHistory_count(PyObject *, PyObject *);}
static PyObject *meth_QWebEngineHistory_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebEngineHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebEngineHistory, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebEngineHistory, sipName_count, doc_QWebEngineHistory_count);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QWebEngineHistory___len__(PyObject *);}
static SIP_SSIZE_T slot_QWebEngineHistory___len__(PyObject *sipSelf)
{
    QWebEngineHistory *sipCpp = reinterpret_cast<QWebEngineHistory *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebEngineHistory));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 459 "/home/supermap/OpenThings/pyqt5/QtWebEngineWidgets/sipQtWebEngineWidgetsQWebEngineHistory.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebEngineHistory(void *, const sipTypeDef *);}
static void *cast_QWebEngineHistory(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebEngineHistory)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebEngineHistory(void *, int);}
static void release_QWebEngineHistory(void *,int)
{
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebEngineHistory[] = {
    {(void *)slot_QWebEngineHistory___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QWebEngineHistory[] = {
    {SIP_MLNAME_CAST(sipName_back), meth_QWebEngineHistory_back, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_back)},
    {SIP_MLNAME_CAST(sipName_backItem), meth_QWebEngineHistory_backItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_backItem)},
    {SIP_MLNAME_CAST(sipName_backItems), meth_QWebEngineHistory_backItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_backItems)},
    {SIP_MLNAME_CAST(sipName_canGoBack), meth_QWebEngineHistory_canGoBack, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_canGoBack)},
    {SIP_MLNAME_CAST(sipName_canGoForward), meth_QWebEngineHistory_canGoForward, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_canGoForward)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QWebEngineHistory_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_clear)},
    {SIP_MLNAME_CAST(sipName_count), meth_QWebEngineHistory_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_count)},
    {SIP_MLNAME_CAST(sipName_currentItem), meth_QWebEngineHistory_currentItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_currentItem)},
    {SIP_MLNAME_CAST(sipName_currentItemIndex), meth_QWebEngineHistory_currentItemIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_currentItemIndex)},
    {SIP_MLNAME_CAST(sipName_forward), meth_QWebEngineHistory_forward, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_forward)},
    {SIP_MLNAME_CAST(sipName_forwardItem), meth_QWebEngineHistory_forwardItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_forwardItem)},
    {SIP_MLNAME_CAST(sipName_forwardItems), meth_QWebEngineHistory_forwardItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_forwardItems)},
    {SIP_MLNAME_CAST(sipName_goToItem), meth_QWebEngineHistory_goToItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_goToItem)},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QWebEngineHistory_itemAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_itemAt)},
    {SIP_MLNAME_CAST(sipName_items), meth_QWebEngineHistory_items, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebEngineHistory_items)}
};


pyqt5ClassTypeDef sipTypeDef_QtWebEngineWidgets_QWebEngineHistory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebEngineHistory,
        {0}
    },
    {
        sipNameNr_QWebEngineHistory,
        {0, 0, 1},
        15, methods_QWebEngineHistory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebEngineHistory,
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
    0,
    0,
    0,
    0,
    release_QWebEngineHistory,
    cast_QWebEngineHistory,
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
