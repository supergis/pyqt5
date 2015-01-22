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
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQList0101QGraphicsTransform.cpp"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qgraphicstransform.sip"
#include <qgraphicstransform.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQList0101QGraphicsTransform.cpp"


extern "C" {static void assign_QList_0101QGraphicsTransform(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QGraphicsTransform(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QGraphicsTransform*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QGraphicsTransform*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QGraphicsTransform(SIP_SSIZE_T);}
static void *array_QList_0101QGraphicsTransform(SIP_SSIZE_T sipNrElem)
{
    return new QList<QGraphicsTransform*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QGraphicsTransform(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QGraphicsTransform(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QGraphicsTransform*>(reinterpret_cast<const QList<QGraphicsTransform*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QGraphicsTransform(void *, int);}
static void release_QList_0101QGraphicsTransform(void *ptr, int)
{
    delete reinterpret_cast<QList<QGraphicsTransform*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QGraphicsTransform(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QGraphicsTransform(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QGraphicsTransform*> **sipCppPtr = reinterpret_cast<QList<QGraphicsTransform*> **>(sipCppPtrV);

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

    QList<QGraphicsTransform *> *ql = new QList<QGraphicsTransform *>;
 
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

        QGraphicsTransform *t = reinterpret_cast<QGraphicsTransform *>(
                sipForceConvertToType(itm, sipType_QGraphicsTransform, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QGraphicsTransform' is expected",
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
#line 140 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQList0101QGraphicsTransform.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QGraphicsTransform(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QGraphicsTransform(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QGraphicsTransform*> *sipCpp = reinterpret_cast<QList<QGraphicsTransform*> *>(sipCppV);

#line 148 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGraphicsTransform *t = sipCpp->at(i);

        // The explicit (void *) cast allows QGraphicsTransform to be const.
        PyObject *tobj = sipConvertFromType((void *)t, sipType_QGraphicsTransform,
                sipTransferObj);

        if (!tobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 174 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQList0101QGraphicsTransform.cpp"
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0101QGraphicsTransform = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_9221,
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
    assign_QList_0101QGraphicsTransform,
    array_QList_0101QGraphicsTransform,
    copy_QList_0101QGraphicsTransform,
    release_QList_0101QGraphicsTransform,
    convertTo_QList_0101QGraphicsTransform,
    convertFrom_QList_0101QGraphicsTransform
};
