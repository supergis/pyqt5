/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:03 2015
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

#include "sipAPIQtCore.h"

#line 36 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList0100QModelIndex.cpp"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList0100QModelIndex.cpp"


extern "C" {static void assign_QList_0100QModelIndex(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QModelIndex> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QModelIndex> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QModelIndex(SIP_SSIZE_T);}
static void *array_QList_0100QModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QList<QModelIndex>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QModelIndex>(reinterpret_cast<const QList<QModelIndex> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QModelIndex(void *, int);}
static void release_QList_0100QModelIndex(void *ptr, int)
{
    delete reinterpret_cast<QList<QModelIndex> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QModelIndex(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QModelIndex(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QModelIndex> **sipCppPtr = reinterpret_cast<QList<QModelIndex> **>(sipCppPtrV);

#line 66 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
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

    QList<QModelIndex> *ql = new QList<QModelIndex>;
 
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

        int state;
        QModelIndex *t = reinterpret_cast<QModelIndex *>(
                sipForceConvertToType(itm, sipType_QModelIndex, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QModelIndex' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QModelIndex, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList0100QModelIndex.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QModelIndex(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QModelIndex(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QModelIndex> *sipCpp = reinterpret_cast<QList<QModelIndex> *>(sipCppV);

#line 40 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QModelIndex *t = new QModelIndex(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QModelIndex,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 175 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList0100QModelIndex.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100QModelIndex = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_14694,
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
    assign_QList_0100QModelIndex,
    array_QList_0100QModelIndex,
    copy_QList_0100QModelIndex,
    release_QList_0100QModelIndex,
    convertTo_QList_0100QModelIndex,
    convertFrom_QList_0100QModelIndex
};
