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

#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQList0101QUndoStack.cpp"

#line 50 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qundostack.sip"
#include <qundostack.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQList0101QUndoStack.cpp"


extern "C" {static void assign_QList_0101QUndoStack(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QUndoStack(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QUndoStack*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QUndoStack*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QUndoStack(SIP_SSIZE_T);}
static void *array_QList_0101QUndoStack(SIP_SSIZE_T sipNrElem)
{
    return new QList<QUndoStack*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QUndoStack(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QUndoStack(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QUndoStack*>(reinterpret_cast<const QList<QUndoStack*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QUndoStack(void *, int);}
static void release_QList_0101QUndoStack(void *ptr, int)
{
    delete reinterpret_cast<QList<QUndoStack*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QUndoStack(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QUndoStack(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QUndoStack*> **sipCppPtr = reinterpret_cast<QList<QUndoStack*> **>(sipCppPtrV);

#line 175 "sip/QtCore/qpycore_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QUndoStack *> *ql = new QList<QUndoStack *>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        QUndoStack *t = reinterpret_cast<QUndoStack *>(
                sipForceConvertToType(itm, sipType_QUndoStack, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QUndoStack' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(t);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 140 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQList0101QUndoStack.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QUndoStack(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QUndoStack(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QUndoStack*> *sipCpp = reinterpret_cast<QList<QUndoStack*> *>(sipCppV);

#line 148 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QUndoStack *t = sipCpp->at(i);

        // The explicit (void *) cast allows QUndoStack to be const.
        PyObject *tobj = sipConvertFromType((void *)t, sipType_QUndoStack,
                sipTransferObj);

        if (!tobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 174 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQList0101QUndoStack.cpp"
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0101QUndoStack = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_25629,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101QUndoStack,
    array_QList_0101QUndoStack,
    copy_QList_0101QUndoStack,
    release_QList_0101QUndoStack,
    convertTo_QList_0101QUndoStack,
    convertFrom_QList_0101QUndoStack
};