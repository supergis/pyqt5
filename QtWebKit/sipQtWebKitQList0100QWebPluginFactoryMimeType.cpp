/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:11 2015
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

#include "sipAPIQtWebKit.h"

#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWebKit/sipQtWebKitQList0100QWebPluginFactoryMimeType.cpp"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 62 "/home/supermap/OpenThings/pyqt5/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtWebKit/sipQtWebKitQList0100QWebPluginFactoryMimeType.cpp"


extern "C" {static void assign_QList_0100QWebPluginFactory_MimeType(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QWebPluginFactory_MimeType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QWebPluginFactory::MimeType> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QWebPluginFactory::MimeType> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QWebPluginFactory_MimeType(SIP_SSIZE_T);}
static void *array_QList_0100QWebPluginFactory_MimeType(SIP_SSIZE_T sipNrElem)
{
    return new QList<QWebPluginFactory::MimeType>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QWebPluginFactory_MimeType(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QWebPluginFactory_MimeType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QWebPluginFactory::MimeType>(reinterpret_cast<const QList<QWebPluginFactory::MimeType> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QWebPluginFactory_MimeType(void *, int);}
static void release_QList_0100QWebPluginFactory_MimeType(void *ptr, int)
{
    delete reinterpret_cast<QList<QWebPluginFactory::MimeType> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QWebPluginFactory_MimeType(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QWebPluginFactory_MimeType(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QWebPluginFactory::MimeType> **sipCppPtr = reinterpret_cast<QList<QWebPluginFactory::MimeType> **>(sipCppPtrV);

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

    QList<QWebPluginFactory::MimeType> *ql = new QList<QWebPluginFactory::MimeType>;
 
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
        QWebPluginFactory::MimeType *t = reinterpret_cast<QWebPluginFactory::MimeType *>(
                sipForceConvertToType(itm, sipType_QWebPluginFactory_MimeType, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QWebPluginFactory::MimeType' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QWebPluginFactory_MimeType, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 144 "/home/supermap/OpenThings/pyqt5/QtWebKit/sipQtWebKitQList0100QWebPluginFactoryMimeType.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QWebPluginFactory_MimeType(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QWebPluginFactory_MimeType(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QWebPluginFactory::MimeType> *sipCpp = reinterpret_cast<QList<QWebPluginFactory::MimeType> *>(sipCppV);

#line 40 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QWebPluginFactory::MimeType *t = new QWebPluginFactory::MimeType(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QWebPluginFactory_MimeType,
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
#line 177 "/home/supermap/OpenThings/pyqt5/QtWebKit/sipQtWebKitQList0100QWebPluginFactoryMimeType.cpp"
}


sipMappedTypeDef sipTypeDef_QtWebKit_QList_0100QWebPluginFactory_MimeType = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_74,
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
    assign_QList_0100QWebPluginFactory_MimeType,
    array_QList_0100QWebPluginFactory_MimeType,
    copy_QList_0100QWebPluginFactory_MimeType,
    release_QList_0100QWebPluginFactory_MimeType,
    convertTo_QList_0100QWebPluginFactory_MimeType,
    convertFrom_QList_0100QWebPluginFactory_MimeType
};
