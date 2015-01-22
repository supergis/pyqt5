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

#line 731 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList2400.cpp"



extern "C" {static void assign_QList_2400(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_2400(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<qreal> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<qreal> *>(sipSrc);
}


extern "C" {static void *array_QList_2400(SIP_SSIZE_T);}
static void *array_QList_2400(SIP_SSIZE_T sipNrElem)
{
    return new QList<qreal>[sipNrElem];
}


extern "C" {static void *copy_QList_2400(const void *, SIP_SSIZE_T);}
static void *copy_QList_2400(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<qreal>(reinterpret_cast<const QList<qreal> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_2400(void *, int);}
static void release_QList_2400(void *ptr, int)
{
    delete reinterpret_cast<QList<qreal> *>(ptr);
}



extern "C" {static int convertTo_QList_2400(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_2400(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<qreal> **sipCppPtr = reinterpret_cast<QList<qreal> **>(sipCppPtrV);

#line 758 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
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

    QList<qreal> *ql = new QList<qreal>;
 
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

        PyErr_Clear();
        double val = PyFloat_AsDouble(itm);
        
        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'float' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        ql->append(val);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 137 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList2400.cpp"
}


extern "C" {static PyObject *convertFrom_QList_2400(void *, PyObject *);}
static PyObject *convertFrom_QList_2400(void *sipCppV, PyObject *)
{
   QList<qreal> *sipCpp = reinterpret_cast<QList<qreal> *>(sipCppV);

#line 735 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *pobj = PyFloat_FromDouble(sipCpp->value(i));

        if (!pobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 167 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList2400.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_2400 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_33434,
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
    assign_QList_2400,
    array_QList_2400,
    copy_QList_2400,
    release_QList_2400,
    convertTo_QList_2400,
    convertFrom_QList_2400
};
