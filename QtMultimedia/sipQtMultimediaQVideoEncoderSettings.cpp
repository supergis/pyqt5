/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:18 2015
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

#include "sipAPIQtMultimedia.h"

#line 57 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qmediaencodersettings.sip"
#include <qmediaencodersettings.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQVideoEncoderSettings.cpp"

#line 26 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQVideoEncoderSettings.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQVideoEncoderSettings.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQVideoEncoderSettings.cpp"
#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtMultimedia/qmultimedia.sip"
#include <qmultimedia.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQVideoEncoderSettings.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtMultimedia/sipQtMultimediaQVideoEncoderSettings.cpp"


PyDoc_STRVAR(doc_QVideoEncoderSettings_isNull, "QVideoEncoderSettings.isNull() -> bool");

extern "C" {static PyObject *meth_QVideoEncoderSettings_isNull(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_isNull, doc_QVideoEncoderSettings_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_encodingMode, "QVideoEncoderSettings.encodingMode() -> QMultimedia.EncodingMode");

extern "C" {static PyObject *meth_QVideoEncoderSettings_encodingMode(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_encodingMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp))
        {
            QMultimedia::EncodingMode sipRes;

            sipRes = sipCpp->encodingMode();

            return sipConvertFromEnum(sipRes,sipType_QMultimedia_EncodingMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_encodingMode, doc_QVideoEncoderSettings_encodingMode);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_setEncodingMode, "QVideoEncoderSettings.setEncodingMode(QMultimedia.EncodingMode)");

extern "C" {static PyObject *meth_QVideoEncoderSettings_setEncodingMode(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_setEncodingMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMultimedia::EncodingMode a0;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, sipType_QMultimedia_EncodingMode, &a0))
        {
            sipCpp->setEncodingMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_setEncodingMode, doc_QVideoEncoderSettings_setEncodingMode);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_codec, "QVideoEncoderSettings.codec() -> str");

extern "C" {static PyObject *meth_QVideoEncoderSettings_codec(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_codec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->codec());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_codec, doc_QVideoEncoderSettings_codec);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_setCodec, "QVideoEncoderSettings.setCodec(str)");

extern "C" {static PyObject *meth_QVideoEncoderSettings_setCodec(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCodec(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_setCodec, doc_QVideoEncoderSettings_setCodec);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_resolution, "QVideoEncoderSettings.resolution() -> QSize");

extern "C" {static PyObject *meth_QVideoEncoderSettings_resolution(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_resolution(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp))
        {
            QSize*sipRes;

            sipRes = new QSize(sipCpp->resolution());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_resolution, doc_QVideoEncoderSettings_resolution);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_setResolution, "QVideoEncoderSettings.setResolution(QSize)\n"
    "QVideoEncoderSettings.setResolution(int, int)");

extern "C" {static PyObject *meth_QVideoEncoderSettings_setResolution(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_setResolution(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, sipType_QSize, &a0))
        {
            sipCpp->setResolution(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, &a0, &a1))
        {
            sipCpp->setResolution(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_setResolution, doc_QVideoEncoderSettings_setResolution);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_frameRate, "QVideoEncoderSettings.frameRate() -> float");

extern "C" {static PyObject *meth_QVideoEncoderSettings_frameRate(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_frameRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->frameRate();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_frameRate, doc_QVideoEncoderSettings_frameRate);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_setFrameRate, "QVideoEncoderSettings.setFrameRate(float)");

extern "C" {static PyObject *meth_QVideoEncoderSettings_setFrameRate(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_setFrameRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, &a0))
        {
            sipCpp->setFrameRate(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_setFrameRate, doc_QVideoEncoderSettings_setFrameRate);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_bitRate, "QVideoEncoderSettings.bitRate() -> int");

extern "C" {static PyObject *meth_QVideoEncoderSettings_bitRate(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_bitRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->bitRate();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_bitRate, doc_QVideoEncoderSettings_bitRate);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_setBitRate, "QVideoEncoderSettings.setBitRate(int)");

extern "C" {static PyObject *meth_QVideoEncoderSettings_setBitRate(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_setBitRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, &a0))
        {
            sipCpp->setBitRate(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_setBitRate, doc_QVideoEncoderSettings_setBitRate);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_quality, "QVideoEncoderSettings.quality() -> QMultimedia.EncodingQuality");

extern "C" {static PyObject *meth_QVideoEncoderSettings_quality(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_quality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp))
        {
            QMultimedia::EncodingQuality sipRes;

            sipRes = sipCpp->quality();

            return sipConvertFromEnum(sipRes,sipType_QMultimedia_EncodingQuality);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_quality, doc_QVideoEncoderSettings_quality);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_setQuality, "QVideoEncoderSettings.setQuality(QMultimedia.EncodingQuality)");

extern "C" {static PyObject *meth_QVideoEncoderSettings_setQuality(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_setQuality(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMultimedia::EncodingQuality a0;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, sipType_QMultimedia_EncodingQuality, &a0))
        {
            sipCpp->setQuality(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_setQuality, doc_QVideoEncoderSettings_setQuality);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_encodingOption, "QVideoEncoderSettings.encodingOption(str) -> QVariant");

extern "C" {static PyObject *meth_QVideoEncoderSettings_encodingOption(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_encodingOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->encodingOption(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_encodingOption, doc_QVideoEncoderSettings_encodingOption);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_encodingOptions, "QVideoEncoderSettings.encodingOptions() -> dict-of-str-object");

extern "C" {static PyObject *meth_QVideoEncoderSettings_encodingOptions(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_encodingOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp))
        {
            QVariantMap*sipRes;

            sipRes = new QVariantMap(sipCpp->encodingOptions());

            return sipConvertFromNewType(sipRes,sipType_QMap_0100QString_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_encodingOptions, doc_QVideoEncoderSettings_encodingOptions);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_setEncodingOption, "QVideoEncoderSettings.setEncodingOption(str, QVariant)");

extern "C" {static PyObject *meth_QVideoEncoderSettings_setEncodingOption(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_setEncodingOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant, &a1, &a1State))
        {
            sipCpp->setEncodingOption(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_setEncodingOption, doc_QVideoEncoderSettings_setEncodingOption);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoEncoderSettings_setEncodingOptions, "QVideoEncoderSettings.setEncodingOptions(dict-of-str-object)");

extern "C" {static PyObject *meth_QVideoEncoderSettings_setEncodingOptions(PyObject *, PyObject *);}
static PyObject *meth_QVideoEncoderSettings_setEncodingOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariantMap* a0;
        int a0State = 0;
        QVideoEncoderSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QVideoEncoderSettings, &sipCpp, sipType_QMap_0100QString_0100QVariant,&a0, &a0State))
        {
            sipCpp->setEncodingOptions(*a0);
            sipReleaseType(const_cast<QVariantMap *>(a0),sipType_QMap_0100QString_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoEncoderSettings, sipName_setEncodingOptions, doc_QVideoEncoderSettings_setEncodingOptions);

    return NULL;
}


extern "C" {static PyObject *slot_QVideoEncoderSettings___ne__(PyObject *,PyObject *);}
static PyObject *slot_QVideoEncoderSettings___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QVideoEncoderSettings *sipCpp = reinterpret_cast<QVideoEncoderSettings *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoEncoderSettings));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVideoEncoderSettings, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QVideoEncoderSettings::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QVideoEncoderSettings,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVideoEncoderSettings___eq__(PyObject *,PyObject *);}
static PyObject *slot_QVideoEncoderSettings___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QVideoEncoderSettings *sipCpp = reinterpret_cast<QVideoEncoderSettings *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVideoEncoderSettings));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVideoEncoderSettings* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVideoEncoderSettings, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QVideoEncoderSettings::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QVideoEncoderSettings,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QVideoEncoderSettings(void *, const sipTypeDef *);}
static void *cast_QVideoEncoderSettings(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QVideoEncoderSettings)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QVideoEncoderSettings(void *, int);}
static void release_QVideoEncoderSettings(void *sipCppV,int)
{
    delete reinterpret_cast<QVideoEncoderSettings *>(sipCppV);
}


extern "C" {static void assign_QVideoEncoderSettings(void *, SIP_SSIZE_T, const void *);}
static void assign_QVideoEncoderSettings(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVideoEncoderSettings *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVideoEncoderSettings *>(sipSrc);
}


extern "C" {static void *array_QVideoEncoderSettings(SIP_SSIZE_T);}
static void *array_QVideoEncoderSettings(SIP_SSIZE_T sipNrElem)
{
    return new QVideoEncoderSettings[sipNrElem];
}


extern "C" {static void *copy_QVideoEncoderSettings(const void *, SIP_SSIZE_T);}
static void *copy_QVideoEncoderSettings(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVideoEncoderSettings(reinterpret_cast<const QVideoEncoderSettings *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVideoEncoderSettings(sipSimpleWrapper *);}
static void dealloc_QVideoEncoderSettings(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QVideoEncoderSettings(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QVideoEncoderSettings(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QVideoEncoderSettings(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QVideoEncoderSettings *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QVideoEncoderSettings();

            return sipCpp;
        }
    }

    {
        const QVideoEncoderSettings* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVideoEncoderSettings, &a0))
        {
            sipCpp = new QVideoEncoderSettings(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QVideoEncoderSettings[] = {
    {(void *)slot_QVideoEncoderSettings___ne__, ne_slot},
    {(void *)slot_QVideoEncoderSettings___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QVideoEncoderSettings[] = {
    {SIP_MLNAME_CAST(sipName_bitRate), meth_QVideoEncoderSettings_bitRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_bitRate)},
    {SIP_MLNAME_CAST(sipName_codec), meth_QVideoEncoderSettings_codec, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_codec)},
    {SIP_MLNAME_CAST(sipName_encodingMode), meth_QVideoEncoderSettings_encodingMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_encodingMode)},
    {SIP_MLNAME_CAST(sipName_encodingOption), meth_QVideoEncoderSettings_encodingOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_encodingOption)},
    {SIP_MLNAME_CAST(sipName_encodingOptions), meth_QVideoEncoderSettings_encodingOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_encodingOptions)},
    {SIP_MLNAME_CAST(sipName_frameRate), meth_QVideoEncoderSettings_frameRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_frameRate)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QVideoEncoderSettings_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_isNull)},
    {SIP_MLNAME_CAST(sipName_quality), meth_QVideoEncoderSettings_quality, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_quality)},
    {SIP_MLNAME_CAST(sipName_resolution), meth_QVideoEncoderSettings_resolution, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_resolution)},
    {SIP_MLNAME_CAST(sipName_setBitRate), meth_QVideoEncoderSettings_setBitRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_setBitRate)},
    {SIP_MLNAME_CAST(sipName_setCodec), meth_QVideoEncoderSettings_setCodec, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_setCodec)},
    {SIP_MLNAME_CAST(sipName_setEncodingMode), meth_QVideoEncoderSettings_setEncodingMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_setEncodingMode)},
    {SIP_MLNAME_CAST(sipName_setEncodingOption), meth_QVideoEncoderSettings_setEncodingOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_setEncodingOption)},
    {SIP_MLNAME_CAST(sipName_setEncodingOptions), meth_QVideoEncoderSettings_setEncodingOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_setEncodingOptions)},
    {SIP_MLNAME_CAST(sipName_setFrameRate), meth_QVideoEncoderSettings_setFrameRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_setFrameRate)},
    {SIP_MLNAME_CAST(sipName_setQuality), meth_QVideoEncoderSettings_setQuality, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_setQuality)},
    {SIP_MLNAME_CAST(sipName_setResolution), meth_QVideoEncoderSettings_setResolution, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoEncoderSettings_setResolution)}
};

PyDoc_STRVAR(doc_QVideoEncoderSettings, "\1QVideoEncoderSettings()\n"
    "QVideoEncoderSettings(QVideoEncoderSettings)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QVideoEncoderSettings = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QVideoEncoderSettings,
        {0}
    },
    {
        sipNameNr_QVideoEncoderSettings,
        {0, 0, 1},
        17, methods_QVideoEncoderSettings,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QVideoEncoderSettings,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QVideoEncoderSettings,
    init_type_QVideoEncoderSettings,
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
    dealloc_QVideoEncoderSettings,
    assign_QVideoEncoderSettings,
    array_QVideoEncoderSettings,
    copy_QVideoEncoderSettings,
    release_QVideoEncoderSettings,
    cast_QVideoEncoderSettings,
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
