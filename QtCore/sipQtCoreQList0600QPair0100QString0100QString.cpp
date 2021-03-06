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

#line 252 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 30 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList0600QPair0100QString0100QString.cpp"



extern "C" {static void assign_QList_0600QPair_0100QString_0100QString(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0600QPair_0100QString_0100QString(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPair<QString,QString> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPair<QString,QString> > *>(sipSrc);
}


extern "C" {static void *array_QList_0600QPair_0100QString_0100QString(SIP_SSIZE_T);}
static void *array_QList_0600QPair_0100QString_0100QString(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPair<QString,QString> >[sipNrElem];
}


extern "C" {static void *copy_QList_0600QPair_0100QString_0100QString(const void *, SIP_SSIZE_T);}
static void *copy_QList_0600QPair_0100QString_0100QString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPair<QString,QString> >(reinterpret_cast<const QList<QPair<QString,QString> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0600QPair_0100QString_0100QString(void *, int);}
static void release_QList_0600QPair_0100QString_0100QString(void *ptr, int)
{
    delete reinterpret_cast<QList<QPair<QString,QString> > *>(ptr);
}



extern "C" {static int convertTo_QList_0600QPair_0100QString_0100QString(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0600QPair_0100QString_0100QString(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QPair<QString,QString> > **sipCppPtr = reinterpret_cast<QList<QPair<QString,QString> > **>(sipCppPtrV);

#line 286 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
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

    QList<QPair<QString, QString> > *ql = new QList<QPair<QString, QString> >;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *seq = PyIter_Next(iter);

        if (!seq)
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

        SIP_SSIZE_T sub_len;

        if (PySequence_Check(seq)
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(seq)
#endif
                && !PyUnicode_Check(seq))
            sub_len = PySequence_Size(seq);
        else
            sub_len = -1;

        if (sub_len != 2)
        {
            if (sub_len < 0)
                PyErr_Format(PyExc_TypeError,
                        "index " SIP_SSIZE_T_FORMAT " has type '%s' but a 2 element non-string sequence is expected",
                        i, Py_TYPE(seq)->tp_name);
            else
                PyErr_Format(PyExc_TypeError,
                        "index " SIP_SSIZE_T_FORMAT " is a sequence of " SIP_SSIZE_T_FORMAT " sub-elements but 2 sub-elements are expected",
                        i, sub_len);

            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        PyObject *itm1 = PySequence_ITEM(seq, 0);

        if (!itm1)
        {
            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        int state1;
        QString *s1 = reinterpret_cast<QString *>(
                sipForceConvertToType(itm1, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &state1, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "the first sub-element of index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QString' is expected",
                    i, Py_TYPE(itm1)->tp_name);

            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        PyObject *itm2 = PySequence_ITEM(seq, 1);

        if (!itm2)
        {
            sipReleaseType(s1, sipType_QString, state1);
            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        int state2;
        QString *s2 = reinterpret_cast<QString *>(
                sipForceConvertToType(itm2, sipType_QString, sipTransferObj,
                        SIP_NOT_NONE, &state2, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "the second sub-element of index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QString' is expected",
                    i, Py_TYPE(itm2)->tp_name);

            Py_DECREF(itm2);
            sipReleaseType(s1, sipType_QString, state1);
            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(QPair<QString, QString>(*s1, *s2));

        sipReleaseType(s2, sipType_QString, state2);
        Py_DECREF(itm2);
        sipReleaseType(s1, sipType_QString, state1);
        Py_DECREF(itm1);
        Py_DECREF(seq);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 221 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList0600QPair0100QString0100QString.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0600QPair_0100QString_0100QString(void *, PyObject *);}
static PyObject *convertFrom_QList_0600QPair_0100QString_0100QString(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QPair<QString,QString> > *sipCpp = reinterpret_cast<QList<QPair<QString,QString> > *>(sipCppV);

#line 257 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<QString, QString> &p = sipCpp->at(i);
        QString *s1 = new QString(p.first);
        QString *s2 = new QString(p.second);
        PyObject *pobj = sipBuildResult(NULL, "(NN)", s1, sipType_QString,
                sipTransferObj, s2, sipType_QString, sipTransferObj);

        if (!pobj)
        {
            delete s1;
            delete s2;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 257 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQList0600QPair0100QString0100QString.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0600QPair_0100QString_0100QString = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1626,
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
    assign_QList_0600QPair_0100QString_0100QString,
    array_QList_0600QPair_0100QString_0100QString,
    copy_QList_0600QPair_0100QString_0100QString,
    release_QList_0600QPair_0100QString_0100QString,
    convertTo_QList_0600QPair_0100QString_0100QString,
    convertFrom_QList_0600QPair_0100QString_0100QString
};
