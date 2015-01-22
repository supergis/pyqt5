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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qdiriterator.sip"
#include <qdiriterator.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQDirIterator.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQDirIterator.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qdiriterator.sip"
#include <qdiriterator.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQDirIterator.cpp"
#line 27 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQDirIterator.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQDirIterator.cpp"
#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQDirIterator.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qfileinfo.sip"
#include <qfileinfo.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQDirIterator.cpp"


PyDoc_STRVAR(doc_QDirIterator_next, "QDirIterator.next() -> str");

extern "C" {static PyObject *meth_QDirIterator_next(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->next());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_next, doc_QDirIterator_next);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_hasNext, "QDirIterator.hasNext() -> bool");

extern "C" {static PyObject *meth_QDirIterator_hasNext(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasNext();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_hasNext, doc_QDirIterator_hasNext);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_fileName, "QDirIterator.fileName() -> str");

extern "C" {static PyObject *meth_QDirIterator_fileName(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->fileName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_fileName, doc_QDirIterator_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_filePath, "QDirIterator.filePath() -> str");

extern "C" {static PyObject *meth_QDirIterator_filePath(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_filePath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->filePath());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_filePath, doc_QDirIterator_filePath);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_fileInfo, "QDirIterator.fileInfo() -> QFileInfo");

extern "C" {static PyObject *meth_QDirIterator_fileInfo(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_fileInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QFileInfo*sipRes;

            sipRes = new QFileInfo(sipCpp->fileInfo());

            return sipConvertFromNewType(sipRes,sipType_QFileInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_fileInfo, doc_QDirIterator_fileInfo);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_path, "QDirIterator.path() -> str");

extern "C" {static PyObject *meth_QDirIterator_path(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->path());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_path, doc_QDirIterator_path);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDirIterator(void *, const sipTypeDef *);}
static void *cast_QDirIterator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDirIterator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDirIterator(void *, int);}
static void release_QDirIterator(void *sipCppV,int)
{
    delete reinterpret_cast<QDirIterator *>(sipCppV);
}


extern "C" {static void dealloc_QDirIterator(sipSimpleWrapper *);}
static void dealloc_QDirIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDirIterator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDirIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDirIterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDirIterator *sipCpp = 0;

    {
        const QDir* a0;
        QDirIterator::IteratorFlags a1def = QDirIterator::NoIteratorFlags;
        QDirIterator::IteratorFlags* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|J1", sipType_QDir, &a0, sipType_QDirIterator_IteratorFlags, &a1, &a1State))
        {
            sipCpp = new QDirIterator(*a0,*a1);
            sipReleaseType(a1,sipType_QDirIterator_IteratorFlags,a1State);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QDirIterator::IteratorFlags a1def = QDirIterator::NoIteratorFlags;
        QDirIterator::IteratorFlags* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1", sipType_QString,&a0, &a0State, sipType_QDirIterator_IteratorFlags, &a1, &a1State))
        {
            sipCpp = new QDirIterator(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QDirIterator_IteratorFlags,a1State);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QDir::Filters* a1;
        int a1State = 0;
        QDirIterator::IteratorFlags a2def = QDirIterator::NoIteratorFlags;
        QDirIterator::IteratorFlags* a2 = &a2def;
        int a2State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1|J1", sipType_QString,&a0, &a0State, sipType_QDir_Filters, &a1, &a1State, sipType_QDirIterator_IteratorFlags, &a2, &a2State))
        {
            sipCpp = new QDirIterator(*a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QDir_Filters,a1State);
            sipReleaseType(a2,sipType_QDirIterator_IteratorFlags,a2State);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QStringList* a1;
        int a1State = 0;
        QDir::Filters a2def = QDir::NoFilter;
        QDir::Filters* a2 = &a2def;
        int a2State = 0;
        QDirIterator::IteratorFlags a3def = QDirIterator::NoIteratorFlags;
        QDirIterator::IteratorFlags* a3 = &a3def;
        int a3State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_filters,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1|J1J1", sipType_QString,&a0, &a0State, sipType_QStringList,&a1, &a1State, sipType_QDir_Filters, &a2, &a2State, sipType_QDirIterator_IteratorFlags, &a3, &a3State))
        {
            sipCpp = new QDirIterator(*a0,*a1,*a2,*a3);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QStringList *>(a1),sipType_QStringList,a1State);
            sipReleaseType(a2,sipType_QDir_Filters,a2State);
            sipReleaseType(a3,sipType_QDirIterator_IteratorFlags,a3State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDirIterator[] = {
    {SIP_MLNAME_CAST(sipName_fileInfo), meth_QDirIterator_fileInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_fileInfo)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QDirIterator_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_fileName)},
    {SIP_MLNAME_CAST(sipName_filePath), meth_QDirIterator_filePath, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_filePath)},
    {SIP_MLNAME_CAST(sipName_hasNext), meth_QDirIterator_hasNext, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_hasNext)},
    {SIP_MLNAME_CAST(sipName_next), meth_QDirIterator_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_next)},
    {SIP_MLNAME_CAST(sipName_path), meth_QDirIterator_path, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_path)}
};

static sipEnumMemberDef enummembers_QDirIterator[] = {
    {sipName_FollowSymlinks, static_cast<int>(QDirIterator::FollowSymlinks), 46},
    {sipName_NoIteratorFlags, static_cast<int>(QDirIterator::NoIteratorFlags), 46},
    {sipName_Subdirectories, static_cast<int>(QDirIterator::Subdirectories), 46},
};

PyDoc_STRVAR(doc_QDirIterator, "\1QDirIterator(QDir, QDirIterator.IteratorFlags flags=QDirIterator.NoIteratorFlags)\n"
    "QDirIterator(str, QDirIterator.IteratorFlags flags=QDirIterator.NoIteratorFlags)\n"
    "QDirIterator(str, QDir.Filters, QDirIterator.IteratorFlags flags=QDirIterator.NoIteratorFlags)\n"
    "QDirIterator(str, list-of-str, QDir.Filters filters=QDir.NoFilter, QDirIterator.IteratorFlags flags=QDirIterator.NoIteratorFlags)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QDirIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDirIterator,
        {0}
    },
    {
        sipNameNr_QDirIterator,
        {0, 0, 1},
        6, methods_QDirIterator,
        3, enummembers_QDirIterator,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDirIterator,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDirIterator,
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
    dealloc_QDirIterator,
    0,
    0,
    0,
    release_QDirIterator,
    cast_QDirIterator,
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
