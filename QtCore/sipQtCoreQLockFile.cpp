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

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qlockfile.sip"
#include <qlockfile.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQLockFile.cpp"

#line 27 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQLockFile.cpp"


PyDoc_STRVAR(doc_QLockFile_lock, "QLockFile.lock() -> bool");

extern "C" {static PyObject *meth_QLockFile_lock(PyObject *, PyObject *);}
static PyObject *meth_QLockFile_lock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLockFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLockFile, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_lock, doc_QLockFile_lock);

    return NULL;
}


PyDoc_STRVAR(doc_QLockFile_tryLock, "QLockFile.tryLock(int timeout=0) -> bool");

extern "C" {static PyObject *meth_QLockFile_tryLock(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QLockFile_tryLock(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        QLockFile *sipCpp;

        static const char *sipKwdList[] = {
            sipName_timeout,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QLockFile, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLock(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_tryLock, doc_QLockFile_tryLock);

    return NULL;
}


PyDoc_STRVAR(doc_QLockFile_unlock, "QLockFile.unlock()");

extern "C" {static PyObject *meth_QLockFile_unlock(PyObject *, PyObject *);}
static PyObject *meth_QLockFile_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLockFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLockFile, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unlock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_unlock, doc_QLockFile_unlock);

    return NULL;
}


PyDoc_STRVAR(doc_QLockFile_setStaleLockTime, "QLockFile.setStaleLockTime(int)");

extern "C" {static PyObject *meth_QLockFile_setStaleLockTime(PyObject *, PyObject *);}
static PyObject *meth_QLockFile_setStaleLockTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QLockFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QLockFile, &sipCpp, &a0))
        {
            sipCpp->setStaleLockTime(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_setStaleLockTime, doc_QLockFile_setStaleLockTime);

    return NULL;
}


PyDoc_STRVAR(doc_QLockFile_staleLockTime, "QLockFile.staleLockTime() -> int");

extern "C" {static PyObject *meth_QLockFile_staleLockTime(PyObject *, PyObject *);}
static PyObject *meth_QLockFile_staleLockTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLockFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLockFile, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->staleLockTime();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_staleLockTime, doc_QLockFile_staleLockTime);

    return NULL;
}


PyDoc_STRVAR(doc_QLockFile_isLocked, "QLockFile.isLocked() -> bool");

extern "C" {static PyObject *meth_QLockFile_isLocked(PyObject *, PyObject *);}
static PyObject *meth_QLockFile_isLocked(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLockFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLockFile, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isLocked();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_isLocked, doc_QLockFile_isLocked);

    return NULL;
}


PyDoc_STRVAR(doc_QLockFile_getLockInfo, "QLockFile.getLockInfo() -> (bool, int, str, str)");

extern "C" {static PyObject *meth_QLockFile_getLockInfo(PyObject *, PyObject *);}
static PyObject *meth_QLockFile_getLockInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        QString* a1;
        QString* a2;
        const QLockFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLockFile, &sipCpp))
        {
            bool sipRes;
            a1 = new QString();
            a2 = new QString();

            sipRes = sipCpp->getLockInfo(&a0,a1,a2);

            return sipBuildResult(0,"(bnNN)",sipRes,a0,a1,sipType_QString,NULL,a2,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_getLockInfo, doc_QLockFile_getLockInfo);

    return NULL;
}


PyDoc_STRVAR(doc_QLockFile_removeStaleLockFile, "QLockFile.removeStaleLockFile() -> bool");

extern "C" {static PyObject *meth_QLockFile_removeStaleLockFile(PyObject *, PyObject *);}
static PyObject *meth_QLockFile_removeStaleLockFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLockFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLockFile, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->removeStaleLockFile();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_removeStaleLockFile, doc_QLockFile_removeStaleLockFile);

    return NULL;
}


PyDoc_STRVAR(doc_QLockFile_error, "QLockFile.error() -> QLockFile.LockError");

extern "C" {static PyObject *meth_QLockFile_error(PyObject *, PyObject *);}
static PyObject *meth_QLockFile_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLockFile *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLockFile, &sipCpp))
        {
            QLockFile::LockError sipRes;

            sipRes = sipCpp->error();

            return sipConvertFromEnum(sipRes,sipType_QLockFile_LockError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLockFile, sipName_error, doc_QLockFile_error);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLockFile(void *, const sipTypeDef *);}
static void *cast_QLockFile(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QLockFile)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLockFile(void *, int);}
static void release_QLockFile(void *sipCppV,int)
{
    delete reinterpret_cast<QLockFile *>(sipCppV);
}


extern "C" {static void dealloc_QLockFile(sipSimpleWrapper *);}
static void dealloc_QLockFile(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLockFile(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QLockFile(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLockFile(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLockFile *sipCpp = 0;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QLockFile(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QLockFile[] = {
    {SIP_MLNAME_CAST(sipName_error), meth_QLockFile_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QLockFile_error)},
    {SIP_MLNAME_CAST(sipName_getLockInfo), meth_QLockFile_getLockInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_QLockFile_getLockInfo)},
    {SIP_MLNAME_CAST(sipName_isLocked), meth_QLockFile_isLocked, METH_VARARGS, SIP_MLDOC_CAST(doc_QLockFile_isLocked)},
    {SIP_MLNAME_CAST(sipName_lock), meth_QLockFile_lock, METH_VARARGS, SIP_MLDOC_CAST(doc_QLockFile_lock)},
    {SIP_MLNAME_CAST(sipName_removeStaleLockFile), meth_QLockFile_removeStaleLockFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QLockFile_removeStaleLockFile)},
    {SIP_MLNAME_CAST(sipName_setStaleLockTime), meth_QLockFile_setStaleLockTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QLockFile_setStaleLockTime)},
    {SIP_MLNAME_CAST(sipName_staleLockTime), meth_QLockFile_staleLockTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QLockFile_staleLockTime)},
    {SIP_MLNAME_CAST(sipName_tryLock), (PyCFunction)meth_QLockFile_tryLock, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QLockFile_tryLock)},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QLockFile_unlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QLockFile_unlock)}
};

static sipEnumMemberDef enummembers_QLockFile[] = {
    {sipName_LockFailedError, static_cast<int>(QLockFile::LockFailedError), 135},
    {sipName_NoError, static_cast<int>(QLockFile::NoError), 135},
    {sipName_PermissionError, static_cast<int>(QLockFile::PermissionError), 135},
    {sipName_UnknownError, static_cast<int>(QLockFile::UnknownError), 135},
};

PyDoc_STRVAR(doc_QLockFile, "\1QLockFile(str)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QLockFile = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QLockFile,
        {0}
    },
    {
        sipNameNr_QLockFile,
        {0, 0, 1},
        9, methods_QLockFile,
        4, enummembers_QLockFile,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLockFile,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QLockFile,
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
    dealloc_QLockFile,
    0,
    0,
    0,
    release_QLockFile,
    cast_QLockFile,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
