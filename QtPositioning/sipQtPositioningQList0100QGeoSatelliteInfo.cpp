/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:42 2015
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

#include "sipAPIQtPositioning.h"

#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtPositioning/sipQtPositioningQList0100QGeoSatelliteInfo.cpp"

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtPositioning/qgeosatelliteinfo.sip"
#include <qgeosatelliteinfo.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtPositioning/sipQtPositioningQList0100QGeoSatelliteInfo.cpp"


extern "C" {static void assign_QList_0100QGeoSatelliteInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QGeoSatelliteInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QGeoSatelliteInfo> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QGeoSatelliteInfo> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QGeoSatelliteInfo(SIP_SSIZE_T);}
static void *array_QList_0100QGeoSatelliteInfo(SIP_SSIZE_T sipNrElem)
{
    return new QList<QGeoSatelliteInfo>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QGeoSatelliteInfo(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QGeoSatelliteInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QGeoSatelliteInfo>(reinterpret_cast<const QList<QGeoSatelliteInfo> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QGeoSatelliteInfo(void *, int);}
static void release_QList_0100QGeoSatelliteInfo(void *ptr, int)
{
    delete reinterpret_cast<QList<QGeoSatelliteInfo> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QGeoSatelliteInfo(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QGeoSatelliteInfo(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QGeoSatelliteInfo> **sipCppPtr = reinterpret_cast<QList<QGeoSatelliteInfo> **>(sipCppPtrV);

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

    QList<QGeoSatelliteInfo> *ql = new QList<QGeoSatelliteInfo>;
 
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
        QGeoSatelliteInfo *t = reinterpret_cast<QGeoSatelliteInfo *>(
                sipForceConvertToType(itm, sipType_QGeoSatelliteInfo, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QGeoSatelliteInfo' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QGeoSatelliteInfo, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "/home/supermap/OpenThings/pyqt5/QtPositioning/sipQtPositioningQList0100QGeoSatelliteInfo.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QGeoSatelliteInfo(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QGeoSatelliteInfo(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QGeoSatelliteInfo> *sipCpp = reinterpret_cast<QList<QGeoSatelliteInfo> *>(sipCppV);

#line 40 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGeoSatelliteInfo *t = new QGeoSatelliteInfo(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QGeoSatelliteInfo,
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
#line 175 "/home/supermap/OpenThings/pyqt5/QtPositioning/sipQtPositioningQList0100QGeoSatelliteInfo.cpp"
}


sipMappedTypeDef sipTypeDef_QtPositioning_QList_0100QGeoSatelliteInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_839,
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
    assign_QList_0100QGeoSatelliteInfo,
    array_QList_0100QGeoSatelliteInfo,
    copy_QList_0100QGeoSatelliteInfo,
    release_QList_0100QGeoSatelliteInfo,
    convertTo_QList_0100QGeoSatelliteInfo,
    convertFrom_QList_0100QGeoSatelliteInfo
};
