/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:47 2015
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

#include "sipAPIQtQuick.h"

#line 41 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickimageprovider.sip"
#include <qquickimageprovider.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickImageProvider.cpp"

#line 30 "sip/QtQml/qqmlengine.sip"
#include <qqmlengine.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickImageProvider.cpp"
#line 30 "sip/QtQml/qqmlengine.sip"
#include <qqmlengine.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickImageProvider.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickimageprovider.sip"
#include <qquickimageprovider.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickImageProvider.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickImageProvider.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickImageProvider.cpp"
#line 30 "sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickImageProvider.cpp"
#line 30 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickImageProvider.cpp"


class sipQQuickImageProvider : public QQuickImageProvider
{
public:
    sipQQuickImageProvider(QQmlImageProviderBase::ImageType,QQmlImageProviderBase::Flags);
    sipQQuickImageProvider(const QQuickImageProvider&);
    virtual ~sipQQuickImageProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QQuickTextureFactory* requestTexture(const QString&,QSize*,const QSize&);
    QPixmap requestPixmap(const QString&,QSize*,const QSize&);
    QImage requestImage(const QString&,QSize*,const QSize&);
    QQmlImageProviderBase::Flags flags() const;
    QQmlImageProviderBase::ImageType imageType() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQuickImageProvider(const sipQQuickImageProvider &);
    sipQQuickImageProvider &operator = (const sipQQuickImageProvider &);

    char sipPyMethods[5];
};

sipQQuickImageProvider::sipQQuickImageProvider(QQmlImageProviderBase::ImageType a0,QQmlImageProviderBase::Flags a1): QQuickImageProvider(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQuickImageProvider::sipQQuickImageProvider(const QQuickImageProvider& a0): QQuickImageProvider(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQuickImageProvider::~sipQQuickImageProvider()
{
    sipCommonDtor(sipPySelf);
}

QQuickTextureFactory* sipQQuickImageProvider::requestTexture(const QString& a0,QSize*a1,const QSize& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_requestTexture);

    if (!sipMeth)
        return QQuickImageProvider::requestTexture(a0,a1,a2);

    extern QQuickTextureFactory* sipVH_QtQuick_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,QSize*,const QSize&);

    return sipVH_QtQuick_25(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1, a2);
}

QPixmap sipQQuickImageProvider::requestPixmap(const QString& a0,QSize*a1,const QSize& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_requestPixmap);

    if (!sipMeth)
        return QQuickImageProvider::requestPixmap(a0,a1,a2);

    extern QPixmap sipVH_QtQuick_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,QSize*,const QSize&);

    return sipVH_QtQuick_26(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1, a2);
}

QImage sipQQuickImageProvider::requestImage(const QString& a0,QSize*a1,const QSize& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_requestImage);

    if (!sipMeth)
        return QQuickImageProvider::requestImage(a0,a1,a2);

    extern QImage sipVH_QtQuick_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,QSize*,const QSize&);

    return sipVH_QtQuick_27(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1, a2);
}

QQmlImageProviderBase::Flags sipQQuickImageProvider::flags() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_flags);

    if (!sipMeth)
        return QQuickImageProvider::flags();

    typedef QQmlImageProviderBase::Flags (*sipVH_QtQml_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtQml_7)(sipModuleAPI_QtQuick_QtQml->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QQmlImageProviderBase::ImageType sipQQuickImageProvider::imageType() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_imageType);

    if (!sipMeth)
        return QQuickImageProvider::imageType();

    typedef QQmlImageProviderBase::ImageType (*sipVH_QtQml_8)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtQml_8)(sipModuleAPI_QtQuick_QtQml->em_virthandlers[8]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QQuickImageProvider_imageType, "QQuickImageProvider.imageType() -> QQmlImageProviderBase.ImageType");

extern "C" {static PyObject *meth_QQuickImageProvider_imageType(PyObject *, PyObject *);}
static PyObject *meth_QQuickImageProvider_imageType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QQuickImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickImageProvider, &sipCpp))
        {
            QQmlImageProviderBase::ImageType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QQuickImageProvider::imageType() : sipCpp->imageType());

            return sipConvertFromEnum(sipRes,sipType_QQmlImageProviderBase_ImageType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickImageProvider, sipName_imageType, doc_QQuickImageProvider_imageType);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickImageProvider_flags, "QQuickImageProvider.flags() -> QQmlImageProviderBase.Flags");

extern "C" {static PyObject *meth_QQuickImageProvider_flags(PyObject *, PyObject *);}
static PyObject *meth_QQuickImageProvider_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QQuickImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQuickImageProvider, &sipCpp))
        {
            QQmlImageProviderBase::Flags*sipRes;

            sipRes = new QQmlImageProviderBase::Flags((sipSelfWasArg ? sipCpp->QQuickImageProvider::flags() : sipCpp->flags()));

            return sipConvertFromNewType(sipRes,sipType_QQmlImageProviderBase_Flags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickImageProvider, sipName_flags, doc_QQuickImageProvider_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickImageProvider_requestImage, "QQuickImageProvider.requestImage(str, QSize) -> (QImage, QSize)");

extern "C" {static PyObject *meth_QQuickImageProvider_requestImage(PyObject *, PyObject *);}
static PyObject *meth_QQuickImageProvider_requestImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        QSize* a1;
        const QSize* a2;
        QQuickImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9", &sipSelf, sipType_QQuickImageProvider, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a2))
        {
            QImage*sipRes;
            a1 = new QSize();

            sipRes = new QImage((sipSelfWasArg ? sipCpp->QQuickImageProvider::requestImage(*a0,a1,*a2) : sipCpp->requestImage(*a0,a1,*a2)));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QImage,NULL);
            return sipBuildResult(0,"(RN)",sipResObj,a1,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickImageProvider, sipName_requestImage, doc_QQuickImageProvider_requestImage);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickImageProvider_requestPixmap, "QQuickImageProvider.requestPixmap(str, QSize) -> (QPixmap, QSize)");

extern "C" {static PyObject *meth_QQuickImageProvider_requestPixmap(PyObject *, PyObject *);}
static PyObject *meth_QQuickImageProvider_requestPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        QSize* a1;
        const QSize* a2;
        QQuickImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9", &sipSelf, sipType_QQuickImageProvider, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a2))
        {
            QPixmap*sipRes;
            a1 = new QSize();

            sipRes = new QPixmap((sipSelfWasArg ? sipCpp->QQuickImageProvider::requestPixmap(*a0,a1,*a2) : sipCpp->requestPixmap(*a0,a1,*a2)));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
            return sipBuildResult(0,"(RN)",sipResObj,a1,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickImageProvider, sipName_requestPixmap, doc_QQuickImageProvider_requestPixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickImageProvider_requestTexture, "QQuickImageProvider.requestTexture(str, QSize) -> (QQuickTextureFactory, QSize)");

extern "C" {static PyObject *meth_QQuickImageProvider_requestTexture(PyObject *, PyObject *);}
static PyObject *meth_QQuickImageProvider_requestTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        QSize* a1;
        const QSize* a2;
        QQuickImageProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9", &sipSelf, sipType_QQuickImageProvider, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a2))
        {
            QQuickTextureFactory*sipRes;
            a1 = new QSize();

            sipRes = (sipSelfWasArg ? sipCpp->QQuickImageProvider::requestTexture(*a0,a1,*a2) : sipCpp->requestTexture(*a0,a1,*a2));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QQuickTextureFactory,NULL);
            return sipBuildResult(0,"(RN)",sipResObj,a1,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQuickImageProvider, sipName_requestTexture, doc_QQuickImageProvider_requestTexture);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQuickImageProvider(void *, const sipTypeDef *);}
static void *cast_QQuickImageProvider(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QQuickImageProvider)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QQmlImageProviderBase)->ctd_cast((QQmlImageProviderBase *)(QQuickImageProvider *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQuickImageProvider(void *, int);}
static void release_QQuickImageProvider(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQQuickImageProvider *>(sipCppV);
    else
        delete reinterpret_cast<QQuickImageProvider *>(sipCppV);
}


extern "C" {static void dealloc_QQuickImageProvider(sipSimpleWrapper *);}
static void dealloc_QQuickImageProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQuickImageProvider *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQuickImageProvider(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQuickImageProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQuickImageProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQQuickImageProvider *sipCpp = 0;

    {
        QQmlImageProviderBase::ImageType a0;
        QQmlImageProviderBase::Flags a1def = 0;
        QQmlImageProviderBase::Flags* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E|J1", sipType_QQmlImageProviderBase_ImageType, &a0, sipType_QQmlImageProviderBase_Flags, &a1, &a1State))
        {
            sipCpp = new sipQQuickImageProvider(a0,*a1);
            sipReleaseType(a1,sipType_QQmlImageProviderBase_Flags,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QQuickImageProvider* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQuickImageProvider, &a0))
        {
            sipCpp = new sipQQuickImageProvider(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QQuickImageProvider[] = {{20, 2, 1}};


static PyMethodDef methods_QQuickImageProvider[] = {
    {SIP_MLNAME_CAST(sipName_flags), meth_QQuickImageProvider_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickImageProvider_flags)},
    {SIP_MLNAME_CAST(sipName_imageType), meth_QQuickImageProvider_imageType, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickImageProvider_imageType)},
    {SIP_MLNAME_CAST(sipName_requestImage), meth_QQuickImageProvider_requestImage, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickImageProvider_requestImage)},
    {SIP_MLNAME_CAST(sipName_requestPixmap), meth_QQuickImageProvider_requestPixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickImageProvider_requestPixmap)},
    {SIP_MLNAME_CAST(sipName_requestTexture), meth_QQuickImageProvider_requestTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickImageProvider_requestTexture)}
};

PyDoc_STRVAR(doc_QQuickImageProvider, "\1QQuickImageProvider(QQmlImageProviderBase.ImageType, QQmlImageProviderBase.Flags flags=0)\n"
    "QQuickImageProvider(QQuickImageProvider)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QQuickImageProvider = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQuickImageProvider,
        {0}
    },
    {
        sipNameNr_QQuickImageProvider,
        {0, 0, 1},
        5, methods_QQuickImageProvider,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQuickImageProvider,
    -1,
    -1,
    supers_QQuickImageProvider,
    0,
    init_type_QQuickImageProvider,
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
    dealloc_QQuickImageProvider,
    0,
    0,
    0,
    release_QQuickImageProvider,
    cast_QQuickImageProvider,
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
