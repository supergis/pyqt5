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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qfiledevice.sip"
#include <qfiledevice.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qfiledevice.sip"
#include <qfiledevice.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 27 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 32 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 234 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 222 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 36 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 144 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"


PyDoc_STRVAR(doc_QFileDevice_error, "QFileDevice.error() -> QFileDevice.FileError");

extern "C" {static PyObject *meth_QFileDevice_error(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            QFileDevice::FileError sipRes;

            sipRes = sipCpp->error();

            return sipConvertFromEnum(sipRes,sipType_QFileDevice_FileError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_error, doc_QFileDevice_error);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_unsetError, "QFileDevice.unsetError()");

extern "C" {static PyObject *meth_QFileDevice_unsetError(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_unsetError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            sipCpp->unsetError();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_unsetError, doc_QFileDevice_unsetError);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_close, "QFileDevice.close()");

extern "C" {static PyObject *meth_QFileDevice_close(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_close(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QFileDevice::close() : sipCpp->close());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_close, doc_QFileDevice_close);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_isSequential, "QFileDevice.isSequential() -> bool");

extern "C" {static PyObject *meth_QFileDevice_isSequential(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_isSequential(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFileDevice::isSequential() : sipCpp->isSequential());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_isSequential, doc_QFileDevice_isSequential);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_handle, "QFileDevice.handle() -> int");

extern "C" {static PyObject *meth_QFileDevice_handle(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->handle();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_handle, doc_QFileDevice_handle);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_fileName, "QFileDevice.fileName() -> str");

extern "C" {static PyObject *meth_QFileDevice_fileName(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString((sipSelfWasArg ? sipCpp->QFileDevice::fileName() : sipCpp->fileName()));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_fileName, doc_QFileDevice_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_pos, "QFileDevice.pos() -> int");

extern "C" {static PyObject *meth_QFileDevice_pos(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            qint64 sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFileDevice::pos() : sipCpp->pos());

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_pos, doc_QFileDevice_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_seek, "QFileDevice.seek(int) -> bool");

extern "C" {static PyObject *meth_QFileDevice_seek(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_seek(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QFileDevice, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QFileDevice::seek(a0) : sipCpp->seek(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_seek, doc_QFileDevice_seek);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_atEnd, "QFileDevice.atEnd() -> bool");

extern "C" {static PyObject *meth_QFileDevice_atEnd(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_atEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFileDevice::atEnd() : sipCpp->atEnd());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_atEnd, doc_QFileDevice_atEnd);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_flush, "QFileDevice.flush() -> bool");

extern "C" {static PyObject *meth_QFileDevice_flush(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_flush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->flush();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_flush, doc_QFileDevice_flush);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_size, "QFileDevice.size() -> int");

extern "C" {static PyObject *meth_QFileDevice_size(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            qint64 sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFileDevice::size() : sipCpp->size());

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_size, doc_QFileDevice_size);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_resize, "QFileDevice.resize(int) -> bool");

extern "C" {static PyObject *meth_QFileDevice_resize(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_resize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QFileDevice, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFileDevice::resize(a0) : sipCpp->resize(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_resize, doc_QFileDevice_resize);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_permissions, "QFileDevice.permissions() -> QFileDevice.Permissions");

extern "C" {static PyObject *meth_QFileDevice_permissions(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_permissions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            QFileDevice::Permissions*sipRes;

            sipRes = new QFileDevice::Permissions((sipSelfWasArg ? sipCpp->QFileDevice::permissions() : sipCpp->permissions()));

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_Permissions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_permissions, doc_QFileDevice_permissions);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_setPermissions, "QFileDevice.setPermissions(QFileDevice.Permissions) -> bool");

extern "C" {static PyObject *meth_QFileDevice_setPermissions(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_setPermissions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QFileDevice::Permissions* a0;
        int a0State = 0;
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileDevice, &sipCpp, sipType_QFileDevice_Permissions, &a0, &a0State))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QFileDevice::setPermissions(*a0) : sipCpp->setPermissions(*a0));
            sipReleaseType(a0,sipType_QFileDevice_Permissions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_setPermissions, doc_QFileDevice_setPermissions);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_map, "QFileDevice.map(int, int, QFileDevice.MemoryMapFlags flags=QFileDevice.NoOptions) -> sip.voidptr");

extern "C" {static PyObject *meth_QFileDevice_map(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_map(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        qint64 a1;
        QFileDevice::MemoryMapFlags a2 = QFileDevice::NoOptions;
        QFileDevice *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bnn|E", &sipSelf, sipType_QFileDevice, &sipCpp, &a0, &a1, sipType_QFileDevice_MemoryMapFlags, &a2))
        {
            void*sipRes;

            sipRes = sipCpp->map(a0,a1,a2);

            return sipConvertFromVoidPtrAndSize(sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_map, doc_QFileDevice_map);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_unmap, "QFileDevice.unmap(sip.voidptr) -> bool");

extern "C" {static PyObject *meth_QFileDevice_unmap(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_unmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        void* a0;
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bv", &sipSelf, sipType_QFileDevice, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->unmap(reinterpret_cast<uchar *>(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_unmap, doc_QFileDevice_unmap);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_readData, "QFileDevice.readData(int) -> bytes");

extern "C" {static PyObject *meth_QFileDevice_readData(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_readData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pn", &sipSelf, sipType_QFileDevice, &sipCpp, &a0))
        {
            PyObject * sipRes = 0;
            int sipIsErr = 0;

#line 108 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qfiledevice.sip"
        // Return the data read or None if there was an error.
        if (a0 < 0)
        {
            PyErr_SetString(PyExc_ValueError, "maximum length of data to be read cannot be negative");
            sipIsErr = 1;
        }
        else
        {
            char *s = new char[a0];
            qint64 len;
        
            Py_BEGIN_ALLOW_THREADS
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            len = sipSelfWasArg ? sipCpp->QFileDevice::readData(s, a0) : sipCpp->readData(s, a0);
        #else
            len = sipCpp->sipProtectVirt_readData(sipSelfWasArg, s, a0);
        #endif
            Py_END_ALLOW_THREADS
        
            if (len < 0)
            {
                Py_INCREF(Py_None);
                sipRes = Py_None;
            }
            else
            {
                sipRes = SIPBytes_FromStringAndSize(s, len);
        
                if (!sipRes)
                    sipIsErr = 1;
            }
        
            delete[] s;
        }
#line 600 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_readData, doc_QFileDevice_readData);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_writeData, "QFileDevice.writeData(str) -> int");

extern "C" {static PyObject *meth_QFileDevice_writeData(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_writeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char* a0;
        SIP_SSIZE_T a1;
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pk", &sipSelf, sipType_QFileDevice, &sipCpp, &a0, &a1))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QFileDevice::writeData(a0,(PY_LONG_LONG)a1) : sipCpp->writeData(a0,(PY_LONG_LONG)a1));
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_writeData, doc_QFileDevice_writeData);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_readLineData, "QFileDevice.readLineData(int) -> bytes");

extern "C" {static PyObject *meth_QFileDevice_readLineData(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_readLineData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pn", &sipSelf, sipType_QFileDevice, &sipCpp, &a0))
        {
            PyObject * sipRes = 0;
            int sipIsErr = 0;

#line 147 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qfiledevice.sip"
        // Return the data read or None if there was an error.
        if (a0 < 0)
        {
            PyErr_SetString(PyExc_ValueError, "maximum length of data to be read cannot be negative");
            sipIsErr = 1;
        }
        else
        {
            char *s = new char[a0];
            qint64 len;
        
            Py_BEGIN_ALLOW_THREADS
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            len = sipSelfWasArg ? sipCpp->QFileDevice::readLineData(s, a0) : sipCpp->readLineData(s, a0);
        #else
            len = sipCpp->sipProtectVirt_readLineData(sipSelfWasArg, s, a0);
        #endif
            Py_END_ALLOW_THREADS
        
            if (len < 0)
            {
                Py_INCREF(Py_None);
                sipRes = Py_None;
            }
            else
            {
                sipRes = SIPBytes_FromStringAndSize(s, len);
        
                if (!sipRes)
                    sipIsErr = 1;
            }
        
            delete[] s;
        }
#line 700 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQFileDevice.cpp"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_readLineData, doc_QFileDevice_readLineData);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFileDevice(void *, const sipTypeDef *);}
static void *cast_QFileDevice(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QFileDevice)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QIODevice)->ctd_cast((QIODevice *)(QFileDevice *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileDevice(void *, int);}
static void release_QFileDevice(void *sipCppV,int)
{
    QFileDevice *sipCpp = reinterpret_cast<QFileDevice *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QFileDevice(sipSimpleWrapper *);}
static void dealloc_QFileDevice(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFileDevice(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFileDevice[] = {{78, 255, 1}};


static PyMethodDef methods_QFileDevice[] = {
    {SIP_MLNAME_CAST(sipName_atEnd), meth_QFileDevice_atEnd, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_atEnd)},
    {SIP_MLNAME_CAST(sipName_close), meth_QFileDevice_close, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_close)},
    {SIP_MLNAME_CAST(sipName_error), meth_QFileDevice_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_error)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QFileDevice_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_fileName)},
    {SIP_MLNAME_CAST(sipName_flush), meth_QFileDevice_flush, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_flush)},
    {SIP_MLNAME_CAST(sipName_handle), meth_QFileDevice_handle, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_handle)},
    {SIP_MLNAME_CAST(sipName_isSequential), meth_QFileDevice_isSequential, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_isSequential)},
    {SIP_MLNAME_CAST(sipName_map), (PyCFunction)meth_QFileDevice_map, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFileDevice_map)},
    {SIP_MLNAME_CAST(sipName_permissions), meth_QFileDevice_permissions, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_permissions)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QFileDevice_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_pos)},
    {SIP_MLNAME_CAST(sipName_readData), meth_QFileDevice_readData, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_readData)},
    {SIP_MLNAME_CAST(sipName_readLineData), meth_QFileDevice_readLineData, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_readLineData)},
    {SIP_MLNAME_CAST(sipName_resize), meth_QFileDevice_resize, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_resize)},
    {SIP_MLNAME_CAST(sipName_seek), meth_QFileDevice_seek, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_seek)},
    {SIP_MLNAME_CAST(sipName_setPermissions), meth_QFileDevice_setPermissions, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_setPermissions)},
    {SIP_MLNAME_CAST(sipName_size), meth_QFileDevice_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_size)},
    {SIP_MLNAME_CAST(sipName_unmap), meth_QFileDevice_unmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_unmap)},
    {SIP_MLNAME_CAST(sipName_unsetError), meth_QFileDevice_unsetError, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_unsetError)},
    {SIP_MLNAME_CAST(sipName_writeData), meth_QFileDevice_writeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_writeData)}
};

static sipEnumMemberDef enummembers_QFileDevice[] = {
    {sipName_AbortError, static_cast<int>(QFileDevice::AbortError), 62},
    {sipName_AutoCloseHandle, static_cast<int>(QFileDevice::AutoCloseHandle), 63},
    {sipName_CopyError, static_cast<int>(QFileDevice::CopyError), 62},
    {sipName_DontCloseHandle, static_cast<int>(QFileDevice::DontCloseHandle), 63},
    {sipName_ExeGroup, static_cast<int>(QFileDevice::ExeGroup), 66},
    {sipName_ExeOther, static_cast<int>(QFileDevice::ExeOther), 66},
    {sipName_ExeOwner, static_cast<int>(QFileDevice::ExeOwner), 66},
    {sipName_ExeUser, static_cast<int>(QFileDevice::ExeUser), 66},
    {sipName_FatalError, static_cast<int>(QFileDevice::FatalError), 62},
    {sipName_MapPrivateOption, static_cast<int>(QFileDevice::MapPrivateOption), 65},
    {sipName_NoError, static_cast<int>(QFileDevice::NoError), 62},
    {sipName_NoOptions, static_cast<int>(QFileDevice::NoOptions), 65},
    {sipName_OpenError, static_cast<int>(QFileDevice::OpenError), 62},
    {sipName_PermissionsError, static_cast<int>(QFileDevice::PermissionsError), 62},
    {sipName_PositionError, static_cast<int>(QFileDevice::PositionError), 62},
    {sipName_ReadError, static_cast<int>(QFileDevice::ReadError), 62},
    {sipName_ReadGroup, static_cast<int>(QFileDevice::ReadGroup), 66},
    {sipName_ReadOther, static_cast<int>(QFileDevice::ReadOther), 66},
    {sipName_ReadOwner, static_cast<int>(QFileDevice::ReadOwner), 66},
    {sipName_ReadUser, static_cast<int>(QFileDevice::ReadUser), 66},
    {sipName_RemoveError, static_cast<int>(QFileDevice::RemoveError), 62},
    {sipName_RenameError, static_cast<int>(QFileDevice::RenameError), 62},
    {sipName_ResizeError, static_cast<int>(QFileDevice::ResizeError), 62},
    {sipName_ResourceError, static_cast<int>(QFileDevice::ResourceError), 62},
    {sipName_TimeOutError, static_cast<int>(QFileDevice::TimeOutError), 62},
    {sipName_UnspecifiedError, static_cast<int>(QFileDevice::UnspecifiedError), 62},
    {sipName_WriteError, static_cast<int>(QFileDevice::WriteError), 62},
    {sipName_WriteGroup, static_cast<int>(QFileDevice::WriteGroup), 66},
    {sipName_WriteOther, static_cast<int>(QFileDevice::WriteOther), 66},
    {sipName_WriteOwner, static_cast<int>(QFileDevice::WriteOwner), 66},
    {sipName_WriteUser, static_cast<int>(QFileDevice::WriteUser), 66},
};


pyqt5ClassTypeDef sipTypeDef_QtCore_QFileDevice = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QFileDevice,
        {0}
    },
    {
        sipNameNr_QFileDevice,
        {0, 0, 1},
        19, methods_QFileDevice,
        31, enummembers_QFileDevice,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QFileDevice,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QFileDevice,
    0,
    0,
    0,
    release_QFileDevice,
    cast_QFileDevice,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QFileDevice::staticMetaObject,
    0,
    0,
    0
};
