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

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQVector0100QTimeZoneOffsetData.cpp"

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qtimezone.sip"
#include <qtimezone.h>
#line 56 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qtimezone.sip"
#include <qtimezone.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQVector0100QTimeZoneOffsetData.cpp"


extern "C" {static void assign_QVector_0100QTimeZone_OffsetData(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QTimeZone_OffsetData(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QTimeZone::OffsetData> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QTimeZone::OffsetData> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QTimeZone_OffsetData(SIP_SSIZE_T);}
static void *array_QVector_0100QTimeZone_OffsetData(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QTimeZone::OffsetData>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QTimeZone_OffsetData(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QTimeZone_OffsetData(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QTimeZone::OffsetData>(reinterpret_cast<const QVector<QTimeZone::OffsetData> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QTimeZone_OffsetData(void *, int);}
static void release_QVector_0100QTimeZone_OffsetData(void *ptr, int)
{
    delete reinterpret_cast<QVector<QTimeZone::OffsetData> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QTimeZone_OffsetData(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QTimeZone_OffsetData(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QTimeZone::OffsetData> **sipCppPtr = reinterpret_cast<QVector<QTimeZone::OffsetData> **>(sipCppPtrV);

#line 56 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qvector.sip"
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

    QVector<QTimeZone::OffsetData> *qv = new QVector<QTimeZone::OffsetData>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qv;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QTimeZone::OffsetData *t = reinterpret_cast<QTimeZone::OffsetData *>(
                sipForceConvertToType(itm, sipType_QTimeZone_OffsetData, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QTimeZone::OffsetData' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QTimeZone_OffsetData, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 144 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQVector0100QTimeZoneOffsetData.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QTimeZone_OffsetData(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QTimeZone_OffsetData(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QTimeZone::OffsetData> *sipCpp = reinterpret_cast<QVector<QTimeZone::OffsetData> *>(sipCppV);

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QTimeZone::OffsetData *t = new QTimeZone::OffsetData(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QTimeZone_OffsetData,
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
#line 177 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQVector0100QTimeZoneOffsetData.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_0100QTimeZone_OffsetData = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1657,
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
    assign_QVector_0100QTimeZone_OffsetData,
    array_QVector_0100QTimeZone_OffsetData,
    copy_QVector_0100QTimeZone_OffsetData,
    release_QVector_0100QTimeZone_OffsetData,
    convertTo_QVector_0100QTimeZone_OffsetData,
    convertFrom_QVector_0100QTimeZone_OffsetData
};
