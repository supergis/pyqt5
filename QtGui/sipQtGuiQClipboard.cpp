/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:52:28 2015
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

#include "sipAPIQtGui.h"

#line 26 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qclipboard.sip"
#include <qclipboard.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 36 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 39 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 26 "sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 42 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 48 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 66 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 75 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 78 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 81 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 84 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 87 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"


PyDoc_STRVAR(doc_QClipboard_clear, "QClipboard.clear(QClipboard.Mode mode=QClipboard.Clipboard)");

extern "C" {static PyObject *meth_QClipboard_clear(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_clear(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QClipboard::Mode a0 = QClipboard::Clipboard;
        QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QClipboard_Mode, &a0))
        {
            sipCpp->clear(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_clear, doc_QClipboard_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_supportsFindBuffer, "QClipboard.supportsFindBuffer() -> bool");

extern "C" {static PyObject *meth_QClipboard_supportsFindBuffer(PyObject *, PyObject *);}
static PyObject *meth_QClipboard_supportsFindBuffer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QClipboard *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QClipboard, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->supportsFindBuffer();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_supportsFindBuffer, doc_QClipboard_supportsFindBuffer);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_supportsSelection, "QClipboard.supportsSelection() -> bool");

extern "C" {static PyObject *meth_QClipboard_supportsSelection(PyObject *, PyObject *);}
static PyObject *meth_QClipboard_supportsSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QClipboard *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QClipboard, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->supportsSelection();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_supportsSelection, doc_QClipboard_supportsSelection);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_ownsClipboard, "QClipboard.ownsClipboard() -> bool");

extern "C" {static PyObject *meth_QClipboard_ownsClipboard(PyObject *, PyObject *);}
static PyObject *meth_QClipboard_ownsClipboard(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QClipboard *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QClipboard, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ownsClipboard();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_ownsClipboard, doc_QClipboard_ownsClipboard);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_ownsFindBuffer, "QClipboard.ownsFindBuffer() -> bool");

extern "C" {static PyObject *meth_QClipboard_ownsFindBuffer(PyObject *, PyObject *);}
static PyObject *meth_QClipboard_ownsFindBuffer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QClipboard *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QClipboard, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ownsFindBuffer();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_ownsFindBuffer, doc_QClipboard_ownsFindBuffer);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_ownsSelection, "QClipboard.ownsSelection() -> bool");

extern "C" {static PyObject *meth_QClipboard_ownsSelection(PyObject *, PyObject *);}
static PyObject *meth_QClipboard_ownsSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QClipboard *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QClipboard, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->ownsSelection();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_ownsSelection, doc_QClipboard_ownsSelection);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_text, "QClipboard.text(QClipboard.Mode mode=QClipboard.Clipboard) -> str\n"
    "QClipboard.text(str, QClipboard.Mode mode=QClipboard.Clipboard) -> (str, str)");

extern "C" {static PyObject *meth_QClipboard_text(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_text(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QClipboard::Mode a0 = QClipboard::Clipboard;
        const QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QClipboard_Mode, &a0))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->text(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QClipboard::Mode a1 = QClipboard::Clipboard;
        const QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QString,&a0, &a0State, sipType_QClipboard_Mode, &a1))
        {
            PyObject * sipRes = 0;

#line 49 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qclipboard.sip"
        QString *text;
        QString *subtype = new QString(*a0);
        
        Py_BEGIN_ALLOW_THREADS
        text = new QString(sipCpp->text(*subtype, a1));
        Py_END_ALLOW_THREADS
        
        PyObject *text_obj = sipConvertFromNewType(text, sipType_QString, NULL);
        PyObject *subtype_obj = sipConvertFromNewType(subtype, sipType_QString, NULL);
        
        if (text_obj && subtype_obj)
            sipRes = PyTuple_Pack(2, text_obj, subtype_obj);
        
        Py_XDECREF(text_obj);
        Py_XDECREF(subtype_obj);
#line 313 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_text, doc_QClipboard_text);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_setText, "QClipboard.setText(str, QClipboard.Mode mode=QClipboard.Clipboard)");

extern "C" {static PyObject *meth_QClipboard_setText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_setText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QClipboard::Mode a1 = QClipboard::Clipboard;
        QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QString,&a0, &a0State, sipType_QClipboard_Mode, &a1))
        {
            sipCpp->setText(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_setText, doc_QClipboard_setText);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_mimeData, "QClipboard.mimeData(QClipboard.Mode mode=QClipboard.Clipboard) -> QMimeData");

extern "C" {static PyObject *meth_QClipboard_mimeData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_mimeData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QClipboard::Mode a0 = QClipboard::Clipboard;
        const QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QClipboard_Mode, &a0))
        {
            const QMimeData*sipRes;

            sipRes = sipCpp->mimeData(a0);

            return sipConvertFromType(const_cast<QMimeData *>(sipRes),sipType_QMimeData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_mimeData, doc_QClipboard_mimeData);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_setMimeData, "QClipboard.setMimeData(QMimeData, QClipboard.Mode mode=QClipboard.Clipboard)");

extern "C" {static PyObject *meth_QClipboard_setMimeData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_setMimeData(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QMimeData* a0;
        PyObject *a0Wrapper;
        QClipboard::Mode a1 = QClipboard::Clipboard;
        QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B@J8|E", &sipSelf, sipType_QClipboard, &sipCpp, &a0Wrapper, sipType_QMimeData, &a0, sipType_QClipboard_Mode, &a1))
        {
#line 70 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qclipboard.sip"
        Py_BEGIN_ALLOW_THREADS
        sipCpp->setMimeData(a0, a1);
        Py_END_ALLOW_THREADS
        
        // Transfer ownership to C++ and make sure the Python object stays alive by
        // giving it a reference to itself.  The cycle will be broken by QMimeData's
        // virtual dtor.  The reason we don't do the obvious and just use /Transfer/ is
        // that the QClipboard Python object we would transfer ownership to is likely
        // to be garbage collected immediately afterwards.
        sipTransferTo(a0Wrapper, a0Wrapper);
#line 425 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQClipboard.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_setMimeData, doc_QClipboard_setMimeData);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_image, "QClipboard.image(QClipboard.Mode mode=QClipboard.Clipboard) -> QImage");

extern "C" {static PyObject *meth_QClipboard_image(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_image(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QClipboard::Mode a0 = QClipboard::Clipboard;
        const QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QClipboard_Mode, &a0))
        {
            QImage*sipRes;

            sipRes = new QImage(sipCpp->image(a0));

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_image, doc_QClipboard_image);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_pixmap, "QClipboard.pixmap(QClipboard.Mode mode=QClipboard.Clipboard) -> QPixmap");

extern "C" {static PyObject *meth_QClipboard_pixmap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_pixmap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QClipboard::Mode a0 = QClipboard::Clipboard;
        const QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QClipboard_Mode, &a0))
        {
            QPixmap*sipRes;

            sipRes = new QPixmap(sipCpp->pixmap(a0));

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_pixmap, doc_QClipboard_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_setImage, "QClipboard.setImage(QImage, QClipboard.Mode mode=QClipboard.Clipboard)");

extern "C" {static PyObject *meth_QClipboard_setImage(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_setImage(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QImage* a0;
        QClipboard::Mode a1 = QClipboard::Clipboard;
        QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QImage, &a0, sipType_QClipboard_Mode, &a1))
        {
            sipCpp->setImage(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_setImage, doc_QClipboard_setImage);

    return NULL;
}


PyDoc_STRVAR(doc_QClipboard_setPixmap, "QClipboard.setPixmap(QPixmap, QClipboard.Mode mode=QClipboard.Clipboard)");

extern "C" {static PyObject *meth_QClipboard_setPixmap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QClipboard_setPixmap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        QClipboard::Mode a1 = QClipboard::Clipboard;
        QClipboard *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|E", &sipSelf, sipType_QClipboard, &sipCpp, sipType_QPixmap, &a0, sipType_QClipboard_Mode, &a1))
        {
            sipCpp->setPixmap(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QClipboard, sipName_setPixmap, doc_QClipboard_setPixmap);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QClipboard(void *, const sipTypeDef *);}
static void *cast_QClipboard(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QClipboard)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QClipboard *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QClipboard(void *, int);}
static void release_QClipboard(void *,int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QClipboard[] = {{162, 0, 1}};


static PyMethodDef methods_QClipboard[] = {
    {SIP_MLNAME_CAST(sipName_clear), (PyCFunction)meth_QClipboard_clear, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_clear)},
    {SIP_MLNAME_CAST(sipName_image), (PyCFunction)meth_QClipboard_image, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_image)},
    {SIP_MLNAME_CAST(sipName_mimeData), (PyCFunction)meth_QClipboard_mimeData, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_mimeData)},
    {SIP_MLNAME_CAST(sipName_ownsClipboard), meth_QClipboard_ownsClipboard, METH_VARARGS, SIP_MLDOC_CAST(doc_QClipboard_ownsClipboard)},
    {SIP_MLNAME_CAST(sipName_ownsFindBuffer), meth_QClipboard_ownsFindBuffer, METH_VARARGS, SIP_MLDOC_CAST(doc_QClipboard_ownsFindBuffer)},
    {SIP_MLNAME_CAST(sipName_ownsSelection), meth_QClipboard_ownsSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_QClipboard_ownsSelection)},
    {SIP_MLNAME_CAST(sipName_pixmap), (PyCFunction)meth_QClipboard_pixmap, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_pixmap)},
    {SIP_MLNAME_CAST(sipName_setImage), (PyCFunction)meth_QClipboard_setImage, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_setImage)},
    {SIP_MLNAME_CAST(sipName_setMimeData), (PyCFunction)meth_QClipboard_setMimeData, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_setMimeData)},
    {SIP_MLNAME_CAST(sipName_setPixmap), (PyCFunction)meth_QClipboard_setPixmap, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_setPixmap)},
    {SIP_MLNAME_CAST(sipName_setText), (PyCFunction)meth_QClipboard_setText, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_setText)},
    {SIP_MLNAME_CAST(sipName_supportsFindBuffer), meth_QClipboard_supportsFindBuffer, METH_VARARGS, SIP_MLDOC_CAST(doc_QClipboard_supportsFindBuffer)},
    {SIP_MLNAME_CAST(sipName_supportsSelection), meth_QClipboard_supportsSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_QClipboard_supportsSelection)},
    {SIP_MLNAME_CAST(sipName_text), (PyCFunction)meth_QClipboard_text, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QClipboard_text)}
};

static sipEnumMemberDef enummembers_QClipboard[] = {
    {sipName_Clipboard, static_cast<int>(QClipboard::Clipboard), 10},
    {sipName_FindBuffer, static_cast<int>(QClipboard::FindBuffer), 10},
    {sipName_Selection, static_cast<int>(QClipboard::Selection), 10},
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QClipboard[] = {
    {"selectionChanged()", "\1QClipboard.selectionChanged", 0, 0},
    {"findBufferChanged()", "\1QClipboard.findBufferChanged", 0, 0},
    {"dataChanged()", "\1QClipboard.dataChanged", 0, 0},
    {"changed(QClipboard::Mode)", "\1QClipboard.changed[QClipboard.Mode]", 0, 0},
    {0, 0, 0, 0}
};


pyqt5ClassTypeDef sipTypeDef_QtGui_QClipboard = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QClipboard,
        {0}
    },
    {
        sipNameNr_QClipboard,
        {0, 0, 1},
        14, methods_QClipboard,
        3, enummembers_QClipboard,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QClipboard,
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
    0,
    0,
    0,
    0,
    release_QClipboard,
    cast_QClipboard,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QClipboard::staticMetaObject,
    0,
    signals_QClipboard,
    0
};
