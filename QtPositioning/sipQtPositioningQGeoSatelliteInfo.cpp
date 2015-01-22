/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:42 2015
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

#include "sipAPIQtPositioning.h"

#line 34 "/home/supermap/OpenThings/pyqt5/sip/QtPositioning/qgeosatelliteinfo.sip"
#include <qgeosatelliteinfo.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtPositioning/sipQtPositioningQGeoSatelliteInfo.cpp"



PyDoc_STRVAR(doc_QGeoSatelliteInfo_setSatelliteSystem, "QGeoSatelliteInfo.setSatelliteSystem(QGeoSatelliteInfo.SatelliteSystem)");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_setSatelliteSystem(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_setSatelliteSystem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoSatelliteInfo::SatelliteSystem a0;
        QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp, sipType_QGeoSatelliteInfo_SatelliteSystem, &a0))
        {
            sipCpp->setSatelliteSystem(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_setSatelliteSystem, doc_QGeoSatelliteInfo_setSatelliteSystem);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_satelliteSystem, "QGeoSatelliteInfo.satelliteSystem() -> QGeoSatelliteInfo.SatelliteSystem");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_satelliteSystem(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_satelliteSystem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp))
        {
            QGeoSatelliteInfo::SatelliteSystem sipRes;

            sipRes = sipCpp->satelliteSystem();

            return sipConvertFromEnum(sipRes,sipType_QGeoSatelliteInfo_SatelliteSystem);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_satelliteSystem, doc_QGeoSatelliteInfo_satelliteSystem);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_setSatelliteIdentifier, "QGeoSatelliteInfo.setSatelliteIdentifier(int)");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_setSatelliteIdentifier(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_setSatelliteIdentifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp, &a0))
        {
            sipCpp->setSatelliteIdentifier(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_setSatelliteIdentifier, doc_QGeoSatelliteInfo_setSatelliteIdentifier);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_satelliteIdentifier, "QGeoSatelliteInfo.satelliteIdentifier() -> int");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_satelliteIdentifier(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_satelliteIdentifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->satelliteIdentifier();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_satelliteIdentifier, doc_QGeoSatelliteInfo_satelliteIdentifier);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_setSignalStrength, "QGeoSatelliteInfo.setSignalStrength(int)");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_setSignalStrength(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_setSignalStrength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp, &a0))
        {
            sipCpp->setSignalStrength(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_setSignalStrength, doc_QGeoSatelliteInfo_setSignalStrength);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_signalStrength, "QGeoSatelliteInfo.signalStrength() -> int");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_signalStrength(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_signalStrength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->signalStrength();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_signalStrength, doc_QGeoSatelliteInfo_signalStrength);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_setAttribute, "QGeoSatelliteInfo.setAttribute(QGeoSatelliteInfo.Attribute, float)");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_setAttribute(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_setAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoSatelliteInfo::Attribute a0;
        qreal a1;
        QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEd", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp, sipType_QGeoSatelliteInfo_Attribute, &a0, &a1))
        {
            sipCpp->setAttribute(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_setAttribute, doc_QGeoSatelliteInfo_setAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_attribute, "QGeoSatelliteInfo.attribute(QGeoSatelliteInfo.Attribute) -> float");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_attribute(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_attribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoSatelliteInfo::Attribute a0;
        const QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp, sipType_QGeoSatelliteInfo_Attribute, &a0))
        {
            qreal sipRes;

            sipRes = sipCpp->attribute(a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_attribute, doc_QGeoSatelliteInfo_attribute);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_removeAttribute, "QGeoSatelliteInfo.removeAttribute(QGeoSatelliteInfo.Attribute)");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_removeAttribute(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_removeAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoSatelliteInfo::Attribute a0;
        QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp, sipType_QGeoSatelliteInfo_Attribute, &a0))
        {
            sipCpp->removeAttribute(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_removeAttribute, doc_QGeoSatelliteInfo_removeAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoSatelliteInfo_hasAttribute, "QGeoSatelliteInfo.hasAttribute(QGeoSatelliteInfo.Attribute) -> bool");

extern "C" {static PyObject *meth_QGeoSatelliteInfo_hasAttribute(PyObject *, PyObject *);}
static PyObject *meth_QGeoSatelliteInfo_hasAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoSatelliteInfo::Attribute a0;
        const QGeoSatelliteInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoSatelliteInfo, &sipCpp, sipType_QGeoSatelliteInfo_Attribute, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->hasAttribute(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoSatelliteInfo, sipName_hasAttribute, doc_QGeoSatelliteInfo_hasAttribute);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoSatelliteInfo___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoSatelliteInfo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoSatelliteInfo *sipCpp = reinterpret_cast<QGeoSatelliteInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoSatelliteInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoSatelliteInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoSatelliteInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoSatelliteInfo::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,ne_slot,sipType_QGeoSatelliteInfo,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoSatelliteInfo___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoSatelliteInfo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoSatelliteInfo *sipCpp = reinterpret_cast<QGeoSatelliteInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoSatelliteInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoSatelliteInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoSatelliteInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoSatelliteInfo::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,eq_slot,sipType_QGeoSatelliteInfo,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGeoSatelliteInfo(void *, const sipTypeDef *);}
static void *cast_QGeoSatelliteInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGeoSatelliteInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoSatelliteInfo(void *, int);}
static void release_QGeoSatelliteInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoSatelliteInfo *>(sipCppV);
}


extern "C" {static void assign_QGeoSatelliteInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoSatelliteInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoSatelliteInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoSatelliteInfo *>(sipSrc);
}


extern "C" {static void *array_QGeoSatelliteInfo(SIP_SSIZE_T);}
static void *array_QGeoSatelliteInfo(SIP_SSIZE_T sipNrElem)
{
    return new QGeoSatelliteInfo[sipNrElem];
}


extern "C" {static void *copy_QGeoSatelliteInfo(const void *, SIP_SSIZE_T);}
static void *copy_QGeoSatelliteInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoSatelliteInfo(reinterpret_cast<const QGeoSatelliteInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoSatelliteInfo(sipSimpleWrapper *);}
static void dealloc_QGeoSatelliteInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoSatelliteInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoSatelliteInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoSatelliteInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoSatelliteInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoSatelliteInfo();

            return sipCpp;
        }
    }

    {
        const QGeoSatelliteInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoSatelliteInfo, &a0))
        {
            sipCpp = new QGeoSatelliteInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoSatelliteInfo[] = {
    {(void *)slot_QGeoSatelliteInfo___ne__, ne_slot},
    {(void *)slot_QGeoSatelliteInfo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoSatelliteInfo[] = {
    {SIP_MLNAME_CAST(sipName_attribute), meth_QGeoSatelliteInfo_attribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_attribute)},
    {SIP_MLNAME_CAST(sipName_hasAttribute), meth_QGeoSatelliteInfo_hasAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_hasAttribute)},
    {SIP_MLNAME_CAST(sipName_removeAttribute), meth_QGeoSatelliteInfo_removeAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_removeAttribute)},
    {SIP_MLNAME_CAST(sipName_satelliteIdentifier), meth_QGeoSatelliteInfo_satelliteIdentifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_satelliteIdentifier)},
    {SIP_MLNAME_CAST(sipName_satelliteSystem), meth_QGeoSatelliteInfo_satelliteSystem, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_satelliteSystem)},
    {SIP_MLNAME_CAST(sipName_setAttribute), meth_QGeoSatelliteInfo_setAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_setAttribute)},
    {SIP_MLNAME_CAST(sipName_setSatelliteIdentifier), meth_QGeoSatelliteInfo_setSatelliteIdentifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_setSatelliteIdentifier)},
    {SIP_MLNAME_CAST(sipName_setSatelliteSystem), meth_QGeoSatelliteInfo_setSatelliteSystem, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_setSatelliteSystem)},
    {SIP_MLNAME_CAST(sipName_setSignalStrength), meth_QGeoSatelliteInfo_setSignalStrength, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_setSignalStrength)},
    {SIP_MLNAME_CAST(sipName_signalStrength), meth_QGeoSatelliteInfo_signalStrength, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoSatelliteInfo_signalStrength)}
};

static sipEnumMemberDef enummembers_QGeoSatelliteInfo[] = {
    {sipName_Azimuth, static_cast<int>(QGeoSatelliteInfo::Azimuth), 19},
    {sipName_Elevation, static_cast<int>(QGeoSatelliteInfo::Elevation), 19},
    {sipName_GLONASS, static_cast<int>(QGeoSatelliteInfo::GLONASS), 20},
    {sipName_GPS, static_cast<int>(QGeoSatelliteInfo::GPS), 20},
    {sipName_Undefined, static_cast<int>(QGeoSatelliteInfo::Undefined), 20},
};

PyDoc_STRVAR(doc_QGeoSatelliteInfo, "\1QGeoSatelliteInfo()\n"
    "QGeoSatelliteInfo(QGeoSatelliteInfo)");


pyqt5ClassTypeDef sipTypeDef_QtPositioning_QGeoSatelliteInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoSatelliteInfo,
        {0}
    },
    {
        sipNameNr_QGeoSatelliteInfo,
        {0, 0, 1},
        10, methods_QGeoSatelliteInfo,
        5, enummembers_QGeoSatelliteInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoSatelliteInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QGeoSatelliteInfo,
    init_type_QGeoSatelliteInfo,
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
    dealloc_QGeoSatelliteInfo,
    assign_QGeoSatelliteInfo,
    array_QGeoSatelliteInfo,
    copy_QGeoSatelliteInfo,
    release_QGeoSatelliteInfo,
    cast_QGeoSatelliteInfo,
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
