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

#line 26 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qimageiohandler.sip"
#include <qimageiohandler.h>
#line 29 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQImageIOHandler.cpp"

#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQImageIOHandler.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQImageIOHandler.cpp"
#line 30 "/home/supermap/OpenThings/PyQt-gpl-5.4/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 39 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQImageIOHandler.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 42 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQImageIOHandler.cpp"
#line 30 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 45 "/home/supermap/OpenThings/PyQt-gpl-5.4/QtGui/sipQtGuiQImageIOHandler.cpp"


class sipQImageIOHandler : public QImageIOHandler
{
public:
    sipQImageIOHandler();
    virtual ~sipQImageIOHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QRect currentImageRect() const;
    int currentImageNumber() const;
    int nextImageDelay() const;
    int imageCount() const;
    int loopCount() const;
    bool jumpToImage(int);
    bool jumpToNextImage();
    bool supportsOption(QImageIOHandler::ImageOption) const;
    void setOption(QImageIOHandler::ImageOption,const QVariant&);
    QVariant option(QImageIOHandler::ImageOption) const;
    bool write(const QImage&);
    bool read(QImage*);
    bool canRead() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQImageIOHandler(const sipQImageIOHandler &);
    sipQImageIOHandler &operator = (const sipQImageIOHandler &);

    char sipPyMethods[13];
};

sipQImageIOHandler::sipQImageIOHandler(): QImageIOHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQImageIOHandler::~sipQImageIOHandler()
{
    sipCommonDtor(sipPySelf);
}

QRect sipQImageIOHandler::currentImageRect() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_currentImageRect);

    if (!sipMeth)
        return QImageIOHandler::currentImageRect();

    extern QRect sipVH_QtGui_53(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_53(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

int sipQImageIOHandler::currentImageNumber() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_currentImageNumber);

    if (!sipMeth)
        return QImageIOHandler::currentImageNumber();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

int sipQImageIOHandler::nextImageDelay() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_nextImageDelay);

    if (!sipMeth)
        return QImageIOHandler::nextImageDelay();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

int sipQImageIOHandler::imageCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_imageCount);

    if (!sipMeth)
        return QImageIOHandler::imageCount();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

int sipQImageIOHandler::loopCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_loopCount);

    if (!sipMeth)
        return QImageIOHandler::loopCount();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQImageIOHandler::jumpToImage(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_jumpToImage);

    if (!sipMeth)
        return QImageIOHandler::jumpToImage(a0);

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtGui_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQImageIOHandler::jumpToNextImage()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_jumpToNextImage);

    if (!sipMeth)
        return QImageIOHandler::jumpToNextImage();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQImageIOHandler::supportsOption(QImageIOHandler::ImageOption a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_supportsOption);

    if (!sipMeth)
        return QImageIOHandler::supportsOption(a0);

    extern bool sipVH_QtGui_54(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QImageIOHandler::ImageOption);

    return sipVH_QtGui_54(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQImageIOHandler::setOption(QImageIOHandler::ImageOption a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_setOption);

    if (!sipMeth)
    {
        QImageIOHandler::setOption(a0,a1);
        return;
    }

    extern void sipVH_QtGui_55(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QImageIOHandler::ImageOption,const QVariant&);

    sipVH_QtGui_55(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

QVariant sipQImageIOHandler::option(QImageIOHandler::ImageOption a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_option);

    if (!sipMeth)
        return QImageIOHandler::option(a0);

    extern QVariant sipVH_QtGui_56(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QImageIOHandler::ImageOption);

    return sipVH_QtGui_56(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQImageIOHandler::write(const QImage& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_write);

    if (!sipMeth)
        return QImageIOHandler::write(a0);

    extern bool sipVH_QtGui_57(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QImage&);

    return sipVH_QtGui_57(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQImageIOHandler::read(QImage*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QImageIOHandler,sipName_read);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtGui_58(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QImage*);

    return sipVH_QtGui_58(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQImageIOHandler::canRead() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QImageIOHandler,sipName_canRead);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtGui_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QImageIOHandler_setDevice, "QImageIOHandler.setDevice(QIODevice)");

extern "C" {static PyObject *meth_QImageIOHandler_setDevice(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_setDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice* a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QImageIOHandler, &sipCpp, sipType_QIODevice, &a0))
        {
            sipCpp->setDevice(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_setDevice, doc_QImageIOHandler_setDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_device, "QImageIOHandler.device() -> QIODevice");

extern "C" {static PyObject *meth_QImageIOHandler_device(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_device(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            QIODevice*sipRes;

            sipRes = sipCpp->device();

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_device, doc_QImageIOHandler_device);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_setFormat, "QImageIOHandler.setFormat(QByteArray)");

extern "C" {static PyObject *meth_QImageIOHandler_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QImageIOHandler, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setFormat(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_setFormat, doc_QImageIOHandler_setFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_format, "QImageIOHandler.format() -> QByteArray");

extern "C" {static PyObject *meth_QImageIOHandler_format(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_format, doc_QImageIOHandler_format);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_canRead, "QImageIOHandler.canRead() -> bool");

extern "C" {static PyObject *meth_QImageIOHandler_canRead(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_canRead(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QImageIOHandler, sipName_canRead);
                return NULL;
            }

            sipRes = sipCpp->canRead();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_canRead, doc_QImageIOHandler_canRead);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_read, "QImageIOHandler.read(QImage) -> bool");

extern "C" {static PyObject *meth_QImageIOHandler_read(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QImage* a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QImageIOHandler, &sipCpp, sipType_QImage, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QImageIOHandler, sipName_read);
                return NULL;
            }

            sipRes = sipCpp->read(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_read, doc_QImageIOHandler_read);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_write, "QImageIOHandler.write(QImage) -> bool");

extern "C" {static PyObject *meth_QImageIOHandler_write(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QImage* a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QImageIOHandler, &sipCpp, sipType_QImage, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::write(*a0) : sipCpp->write(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_write, doc_QImageIOHandler_write);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_option, "QImageIOHandler.option(QImageIOHandler.ImageOption) -> QVariant");

extern "C" {static PyObject *meth_QImageIOHandler_option(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_option(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler::ImageOption a0;
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QImageIOHandler, &sipCpp, sipType_QImageIOHandler_ImageOption, &a0))
        {
            QVariant*sipRes;

            sipRes = new QVariant((sipSelfWasArg ? sipCpp->QImageIOHandler::option(a0) : sipCpp->option(a0)));

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_option, doc_QImageIOHandler_option);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_setOption, "QImageIOHandler.setOption(QImageIOHandler.ImageOption, QVariant)");

extern "C" {static PyObject *meth_QImageIOHandler_setOption(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_setOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler::ImageOption a0;
        const QVariant* a1;
        int a1State = 0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QImageIOHandler, &sipCpp, sipType_QImageIOHandler_ImageOption, &a0, sipType_QVariant, &a1, &a1State))
        {
            (sipSelfWasArg ? sipCpp->QImageIOHandler::setOption(a0,*a1) : sipCpp->setOption(a0,*a1));
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_setOption, doc_QImageIOHandler_setOption);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_supportsOption, "QImageIOHandler.supportsOption(QImageIOHandler.ImageOption) -> bool");

extern "C" {static PyObject *meth_QImageIOHandler_supportsOption(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_supportsOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler::ImageOption a0;
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QImageIOHandler, &sipCpp, sipType_QImageIOHandler_ImageOption, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::supportsOption(a0) : sipCpp->supportsOption(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_supportsOption, doc_QImageIOHandler_supportsOption);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_jumpToNextImage, "QImageIOHandler.jumpToNextImage() -> bool");

extern "C" {static PyObject *meth_QImageIOHandler_jumpToNextImage(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_jumpToNextImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::jumpToNextImage() : sipCpp->jumpToNextImage());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_jumpToNextImage, doc_QImageIOHandler_jumpToNextImage);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_jumpToImage, "QImageIOHandler.jumpToImage(int) -> bool");

extern "C" {static PyObject *meth_QImageIOHandler_jumpToImage(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_jumpToImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QImageIOHandler, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::jumpToImage(a0) : sipCpp->jumpToImage(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_jumpToImage, doc_QImageIOHandler_jumpToImage);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_loopCount, "QImageIOHandler.loopCount() -> int");

extern "C" {static PyObject *meth_QImageIOHandler_loopCount(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_loopCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::loopCount() : sipCpp->loopCount());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_loopCount, doc_QImageIOHandler_loopCount);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_imageCount, "QImageIOHandler.imageCount() -> int");

extern "C" {static PyObject *meth_QImageIOHandler_imageCount(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_imageCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::imageCount() : sipCpp->imageCount());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_imageCount, doc_QImageIOHandler_imageCount);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_nextImageDelay, "QImageIOHandler.nextImageDelay() -> int");

extern "C" {static PyObject *meth_QImageIOHandler_nextImageDelay(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_nextImageDelay(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::nextImageDelay() : sipCpp->nextImageDelay());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_nextImageDelay, doc_QImageIOHandler_nextImageDelay);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_currentImageNumber, "QImageIOHandler.currentImageNumber() -> int");

extern "C" {static PyObject *meth_QImageIOHandler_currentImageNumber(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_currentImageNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::currentImageNumber() : sipCpp->currentImageNumber());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_currentImageNumber, doc_QImageIOHandler_currentImageNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QImageIOHandler_currentImageRect, "QImageIOHandler.currentImageRect() -> QRect");

extern "C" {static PyObject *meth_QImageIOHandler_currentImageRect(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_currentImageRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QImageIOHandler, &sipCpp))
        {
            QRect*sipRes;

            sipRes = new QRect((sipSelfWasArg ? sipCpp->QImageIOHandler::currentImageRect() : sipCpp->currentImageRect()));

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QImageIOHandler, sipName_currentImageRect, doc_QImageIOHandler_currentImageRect);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QImageIOHandler(void *, const sipTypeDef *);}
static void *cast_QImageIOHandler(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QImageIOHandler)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QImageIOHandler(void *, int);}
static void release_QImageIOHandler(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQImageIOHandler *>(sipCppV);
    else
        delete reinterpret_cast<QImageIOHandler *>(sipCppV);
}


extern "C" {static void dealloc_QImageIOHandler(sipSimpleWrapper *);}
static void dealloc_QImageIOHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQImageIOHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QImageIOHandler(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QImageIOHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QImageIOHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQImageIOHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQImageIOHandler();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QImageIOHandler[] = {
    {SIP_MLNAME_CAST(sipName_canRead), meth_QImageIOHandler_canRead, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_canRead)},
    {SIP_MLNAME_CAST(sipName_currentImageNumber), meth_QImageIOHandler_currentImageNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_currentImageNumber)},
    {SIP_MLNAME_CAST(sipName_currentImageRect), meth_QImageIOHandler_currentImageRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_currentImageRect)},
    {SIP_MLNAME_CAST(sipName_device), meth_QImageIOHandler_device, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_device)},
    {SIP_MLNAME_CAST(sipName_format), meth_QImageIOHandler_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_format)},
    {SIP_MLNAME_CAST(sipName_imageCount), meth_QImageIOHandler_imageCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_imageCount)},
    {SIP_MLNAME_CAST(sipName_jumpToImage), meth_QImageIOHandler_jumpToImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_jumpToImage)},
    {SIP_MLNAME_CAST(sipName_jumpToNextImage), meth_QImageIOHandler_jumpToNextImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_jumpToNextImage)},
    {SIP_MLNAME_CAST(sipName_loopCount), meth_QImageIOHandler_loopCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_loopCount)},
    {SIP_MLNAME_CAST(sipName_nextImageDelay), meth_QImageIOHandler_nextImageDelay, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_nextImageDelay)},
    {SIP_MLNAME_CAST(sipName_option), meth_QImageIOHandler_option, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_option)},
    {SIP_MLNAME_CAST(sipName_read), meth_QImageIOHandler_read, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_read)},
    {SIP_MLNAME_CAST(sipName_setDevice), meth_QImageIOHandler_setDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_setDevice)},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QImageIOHandler_setFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_setFormat)},
    {SIP_MLNAME_CAST(sipName_setOption), meth_QImageIOHandler_setOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_setOption)},
    {SIP_MLNAME_CAST(sipName_supportsOption), meth_QImageIOHandler_supportsOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_supportsOption)},
    {SIP_MLNAME_CAST(sipName_write), meth_QImageIOHandler_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QImageIOHandler_write)}
};

static sipEnumMemberDef enummembers_QImageIOHandler[] = {
    {sipName_Animation, static_cast<int>(QImageIOHandler::Animation), 68},
    {sipName_BackgroundColor, static_cast<int>(QImageIOHandler::BackgroundColor), 68},
    {sipName_ClipRect, static_cast<int>(QImageIOHandler::ClipRect), 68},
    {sipName_CompressionRatio, static_cast<int>(QImageIOHandler::CompressionRatio), 68},
    {sipName_Description, static_cast<int>(QImageIOHandler::Description), 68},
    {sipName_Endianness, static_cast<int>(QImageIOHandler::Endianness), 68},
    {sipName_Gamma, static_cast<int>(QImageIOHandler::Gamma), 68},
    {sipName_IncrementalReading, static_cast<int>(QImageIOHandler::IncrementalReading), 68},
    {sipName_Name, static_cast<int>(QImageIOHandler::Name), 68},
    {sipName_Quality, static_cast<int>(QImageIOHandler::Quality), 68},
    {sipName_ScaledClipRect, static_cast<int>(QImageIOHandler::ScaledClipRect), 68},
    {sipName_ScaledSize, static_cast<int>(QImageIOHandler::ScaledSize), 68},
    {sipName_Size, static_cast<int>(QImageIOHandler::Size), 68},
    {sipName_SubType, static_cast<int>(QImageIOHandler::SubType), 68},
    {sipName_SupportedSubTypes, static_cast<int>(QImageIOHandler::SupportedSubTypes), 68},
};

PyDoc_STRVAR(doc_QImageIOHandler, "\1QImageIOHandler()");


pyqt5ClassTypeDef sipTypeDef_QtGui_QImageIOHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QImageIOHandler,
        {0}
    },
    {
        sipNameNr_QImageIOHandler,
        {0, 0, 1},
        17, methods_QImageIOHandler,
        15, enummembers_QImageIOHandler,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QImageIOHandler,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QImageIOHandler,
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
    dealloc_QImageIOHandler,
    0,
    0,
    0,
    release_QImageIOHandler,
    cast_QImageIOHandler,
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
