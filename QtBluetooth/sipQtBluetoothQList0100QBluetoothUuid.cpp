/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:41 2015
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

#include "sipAPIQtBluetooth.h"

#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQList0100QBluetoothUuid.cpp"

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtBluetooth/qbluetoothuuid.sip"
#include <qbluetoothuuid.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQList0100QBluetoothUuid.cpp"


extern "C" {static void assign_QList_0100QBluetoothUuid(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QBluetoothUuid(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QBluetoothUuid> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QBluetoothUuid> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QBluetoothUuid(SIP_SSIZE_T);}
static void *array_QList_0100QBluetoothUuid(SIP_SSIZE_T sipNrElem)
{
    return new QList<QBluetoothUuid>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QBluetoothUuid(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QBluetoothUuid(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QBluetoothUuid>(reinterpret_cast<const QList<QBluetoothUuid> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QBluetoothUuid(void *, int);}
static void release_QList_0100QBluetoothUuid(void *ptr, int)
{
    delete reinterpret_cast<QList<QBluetoothUuid> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QBluetoothUuid(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QBluetoothUuid(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QBluetoothUuid> **sipCppPtr = reinterpret_cast<QList<QBluetoothUuid> **>(sipCppPtrV);

#line 66 "sip/QtCore/qpycore_qlist.sip"
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

    QList<QBluetoothUuid> *ql = new QList<QBluetoothUuid>;
 
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
        QBluetoothUuid *t = reinterpret_cast<QBluetoothUuid *>(
                sipForceConvertToType(itm, sipType_QBluetoothUuid, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QBluetoothUuid' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QBluetoothUuid, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQList0100QBluetoothUuid.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QBluetoothUuid(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QBluetoothUuid(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QBluetoothUuid> *sipCpp = reinterpret_cast<QList<QBluetoothUuid> *>(sipCppV);

#line 40 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QBluetoothUuid *t = new QBluetoothUuid(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QBluetoothUuid,
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
#line 175 "/home/supermap/OpenThings/pyqt5/QtBluetooth/sipQtBluetoothQList0100QBluetoothUuid.cpp"
}


sipMappedTypeDef sipTypeDef_QtBluetooth_QList_0100QBluetoothUuid = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4197,
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
    assign_QList_0100QBluetoothUuid,
    array_QList_0100QBluetoothUuid,
    copy_QList_0100QBluetoothUuid,
    release_QList_0100QBluetoothUuid,
    convertTo_QList_0100QBluetoothUuid,
    convertFrom_QList_0100QBluetoothUuid
};
