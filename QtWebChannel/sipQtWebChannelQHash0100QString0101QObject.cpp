/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:54 2015
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

#include "sipAPIQtWebChannel.h"

#line 149 "sip/QtCore/qpycore_qhash.sip"
#include <qhash.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWebChannel/sipQtWebChannelQHash0100QString0101QObject.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWebChannel/sipQtWebChannelQHash0100QString0101QObject.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWebChannel/sipQtWebChannelQHash0100QString0101QObject.cpp"


extern "C" {static void assign_QHash_0100QString_0101QObject(void *, SIP_SSIZE_T, const void *);}
static void assign_QHash_0100QString_0101QObject(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHash<QString,QObject*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHash<QString,QObject*> *>(sipSrc);
}


extern "C" {static void *array_QHash_0100QString_0101QObject(SIP_SSIZE_T);}
static void *array_QHash_0100QString_0101QObject(SIP_SSIZE_T sipNrElem)
{
    return new QHash<QString,QObject*>[sipNrElem];
}


extern "C" {static void *copy_QHash_0100QString_0101QObject(const void *, SIP_SSIZE_T);}
static void *copy_QHash_0100QString_0101QObject(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHash<QString,QObject*>(reinterpret_cast<const QHash<QString,QObject*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QHash_0100QString_0101QObject(void *, int);}
static void release_QHash_0100QString_0101QObject(void *ptr, int)
{
    delete reinterpret_cast<QHash<QString,QObject*> *>(ptr);
}



extern "C" {static int convertTo_QHash_0100QString_0101QObject(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHash_0100QString_0101QObject(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QHash<QString,QObject*> **sipCppPtr = reinterpret_cast<QHash<QString,QObject*> **>(sipCppPtrV);

#line 206 "sip/QtCore/qpycore_qhash.sip"
    if (!sipIsErr)
        return PyDict_Check(sipPy);

    QHash<QString, QObject *> *qh = new QHash<QString, QObject *>;

    SIP_SSIZE_T pos = 0;
    PyObject *kobj, *vobj;
 
    while (PyDict_Next(sipPy, &pos, &kobj, &vobj))
    {
        int kstate;
        QString *k = reinterpret_cast<QString *>(
                sipForceConvertToType(kobj, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &kstate, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a key has type '%s' but 'QString' is expected",
                    Py_TYPE(kobj)->tp_name);

            delete qh;

            return 0;
        }

        QObject *v = reinterpret_cast<QObject *>(
                sipForceConvertToType(vobj, sipType_QObject, sipTransferObj, 0,
                        0, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "a value has type '%s' but 'QObject' is expected",
                    Py_TYPE(vobj)->tp_name);

            sipReleaseType(k, sipType_QString, kstate);
            delete qh;

            return 0;
        }

        qh->insert(*k, v);

        sipReleaseType(k, sipType_QString, kstate);
    }
 
    *sipCppPtr = qh;
 
    return sipGetState(sipTransferObj);
#line 125 "/home/supermap/OpenThings/pyqt5/QtWebChannel/sipQtWebChannelQHash0100QString0101QObject.cpp"
}


extern "C" {static PyObject *convertFrom_QHash_0100QString_0101QObject(void *, PyObject *);}
static PyObject *convertFrom_QHash_0100QString_0101QObject(void *sipCppV, PyObject *sipTransferObj)
{
   QHash<QString,QObject*> *sipCpp = reinterpret_cast<QHash<QString,QObject*> *>(sipCppV);

#line 153 "sip/QtCore/qpycore_qhash.sip"
    PyObject *d = PyDict_New();

    if (!d)
        return 0;

    QHash<QString, QObject *>::const_iterator it = sipCpp->constBegin();
    QHash<QString, QObject *>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        QString *k = new QString(it.key());
        PyObject *kobj = sipConvertFromNewType(k, sipType_QString,
                sipTransferObj);

        if (!kobj)
        {
            delete k;
            Py_DECREF(d);

            return 0;
        }

        QObject *v = it.value();
        PyObject *vobj = sipConvertFromNewType(v, sipType_QObject,
                sipTransferObj);

        if (!vobj)
        {
            Py_DECREF(kobj);
            Py_DECREF(d);

            return 0;
        }

        int rc = PyDict_SetItem(d, kobj, vobj);

        Py_DECREF(vobj);
        Py_DECREF(kobj);

        if (rc < 0)
        {
            Py_DECREF(d);

            return 0;
        }

        ++it;
    }

    return d;
#line 185 "/home/supermap/OpenThings/pyqt5/QtWebChannel/sipQtWebChannelQHash0100QString0101QObject.cpp"
}


sipMappedTypeDef sipTypeDef_QtWebChannel_QHash_0100QString_0101QObject = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_29,
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
    assign_QHash_0100QString_0101QObject,
    array_QHash_0100QString_0101QObject,
    copy_QHash_0100QString_0101QObject,
    release_QHash_0100QString_0101QObject,
    convertTo_QHash_0100QString_0101QObject,
    convertFrom_QHash_0100QString_0101QObject
};
