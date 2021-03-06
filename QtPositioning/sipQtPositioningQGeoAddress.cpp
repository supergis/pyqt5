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

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtPositioning/qgeoaddress.sip"
#include <qgeoaddress.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtPositioning/sipQtPositioningQGeoAddress.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtPositioning/sipQtPositioningQGeoAddress.cpp"


PyDoc_STRVAR(doc_QGeoAddress_text, "QGeoAddress.text() -> str");

extern "C" {static PyObject *meth_QGeoAddress_text(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_text, doc_QGeoAddress_text);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setText, "QGeoAddress.setText(str)");

extern "C" {static PyObject *meth_QGeoAddress_setText(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setText(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setText, doc_QGeoAddress_setText);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_country, "QGeoAddress.country() -> str");

extern "C" {static PyObject *meth_QGeoAddress_country(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_country(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->country());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_country, doc_QGeoAddress_country);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setCountry, "QGeoAddress.setCountry(str)");

extern "C" {static PyObject *meth_QGeoAddress_setCountry(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setCountry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCountry(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setCountry, doc_QGeoAddress_setCountry);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_countryCode, "QGeoAddress.countryCode() -> str");

extern "C" {static PyObject *meth_QGeoAddress_countryCode(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_countryCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->countryCode());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_countryCode, doc_QGeoAddress_countryCode);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setCountryCode, "QGeoAddress.setCountryCode(str)");

extern "C" {static PyObject *meth_QGeoAddress_setCountryCode(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setCountryCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCountryCode(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setCountryCode, doc_QGeoAddress_setCountryCode);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_state, "QGeoAddress.state() -> str");

extern "C" {static PyObject *meth_QGeoAddress_state(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->state());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_state, doc_QGeoAddress_state);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setState, "QGeoAddress.setState(str)");

extern "C" {static PyObject *meth_QGeoAddress_setState(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setState(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setState, doc_QGeoAddress_setState);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_county, "QGeoAddress.county() -> str");

extern "C" {static PyObject *meth_QGeoAddress_county(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_county(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->county());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_county, doc_QGeoAddress_county);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setCounty, "QGeoAddress.setCounty(str)");

extern "C" {static PyObject *meth_QGeoAddress_setCounty(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setCounty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCounty(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setCounty, doc_QGeoAddress_setCounty);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_city, "QGeoAddress.city() -> str");

extern "C" {static PyObject *meth_QGeoAddress_city(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_city(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->city());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_city, doc_QGeoAddress_city);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setCity, "QGeoAddress.setCity(str)");

extern "C" {static PyObject *meth_QGeoAddress_setCity(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setCity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCity(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setCity, doc_QGeoAddress_setCity);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_district, "QGeoAddress.district() -> str");

extern "C" {static PyObject *meth_QGeoAddress_district(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_district(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->district());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_district, doc_QGeoAddress_district);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setDistrict, "QGeoAddress.setDistrict(str)");

extern "C" {static PyObject *meth_QGeoAddress_setDistrict(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setDistrict(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setDistrict(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setDistrict, doc_QGeoAddress_setDistrict);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_postalCode, "QGeoAddress.postalCode() -> str");

extern "C" {static PyObject *meth_QGeoAddress_postalCode(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_postalCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->postalCode());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_postalCode, doc_QGeoAddress_postalCode);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setPostalCode, "QGeoAddress.setPostalCode(str)");

extern "C" {static PyObject *meth_QGeoAddress_setPostalCode(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setPostalCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setPostalCode(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setPostalCode, doc_QGeoAddress_setPostalCode);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_street, "QGeoAddress.street() -> str");

extern "C" {static PyObject *meth_QGeoAddress_street(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_street(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->street());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_street, doc_QGeoAddress_street);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_setStreet, "QGeoAddress.setStreet(str)");

extern "C" {static PyObject *meth_QGeoAddress_setStreet(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_setStreet(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setStreet(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_setStreet, doc_QGeoAddress_setStreet);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_isEmpty, "QGeoAddress.isEmpty() -> bool");

extern "C" {static PyObject *meth_QGeoAddress_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_isEmpty, doc_QGeoAddress_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_clear, "QGeoAddress.clear()");

extern "C" {static PyObject *meth_QGeoAddress_clear(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_clear, doc_QGeoAddress_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoAddress_isTextGenerated, "QGeoAddress.isTextGenerated() -> bool");

extern "C" {static PyObject *meth_QGeoAddress_isTextGenerated(PyObject *, PyObject *);}
static PyObject *meth_QGeoAddress_isTextGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoAddress, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isTextGenerated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoAddress, sipName_isTextGenerated, doc_QGeoAddress_isTextGenerated);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoAddress___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoAddress___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoAddress *sipCpp = reinterpret_cast<QGeoAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoAddress));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoAddress, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoAddress::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,ne_slot,sipType_QGeoAddress,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoAddress___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoAddress___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoAddress *sipCpp = reinterpret_cast<QGeoAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoAddress));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoAddress* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoAddress, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoAddress::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtPositioning,eq_slot,sipType_QGeoAddress,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGeoAddress(void *, const sipTypeDef *);}
static void *cast_QGeoAddress(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGeoAddress)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoAddress(void *, int);}
static void release_QGeoAddress(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoAddress *>(sipCppV);
}


extern "C" {static void assign_QGeoAddress(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoAddress(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoAddress *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoAddress *>(sipSrc);
}


extern "C" {static void *array_QGeoAddress(SIP_SSIZE_T);}
static void *array_QGeoAddress(SIP_SSIZE_T sipNrElem)
{
    return new QGeoAddress[sipNrElem];
}


extern "C" {static void *copy_QGeoAddress(const void *, SIP_SSIZE_T);}
static void *copy_QGeoAddress(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoAddress(reinterpret_cast<const QGeoAddress *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoAddress(sipSimpleWrapper *);}
static void dealloc_QGeoAddress(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoAddress(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoAddress(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoAddress(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoAddress *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGeoAddress();

            return sipCpp;
        }
    }

    {
        const QGeoAddress* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoAddress, &a0))
        {
            sipCpp = new QGeoAddress(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoAddress[] = {
    {(void *)slot_QGeoAddress___ne__, ne_slot},
    {(void *)slot_QGeoAddress___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoAddress[] = {
    {SIP_MLNAME_CAST(sipName_city), meth_QGeoAddress_city, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_city)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QGeoAddress_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_clear)},
    {SIP_MLNAME_CAST(sipName_country), meth_QGeoAddress_country, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_country)},
    {SIP_MLNAME_CAST(sipName_countryCode), meth_QGeoAddress_countryCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_countryCode)},
    {SIP_MLNAME_CAST(sipName_county), meth_QGeoAddress_county, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_county)},
    {SIP_MLNAME_CAST(sipName_district), meth_QGeoAddress_district, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_district)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QGeoAddress_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isTextGenerated), meth_QGeoAddress_isTextGenerated, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_isTextGenerated)},
    {SIP_MLNAME_CAST(sipName_postalCode), meth_QGeoAddress_postalCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_postalCode)},
    {SIP_MLNAME_CAST(sipName_setCity), meth_QGeoAddress_setCity, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setCity)},
    {SIP_MLNAME_CAST(sipName_setCountry), meth_QGeoAddress_setCountry, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setCountry)},
    {SIP_MLNAME_CAST(sipName_setCountryCode), meth_QGeoAddress_setCountryCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setCountryCode)},
    {SIP_MLNAME_CAST(sipName_setCounty), meth_QGeoAddress_setCounty, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setCounty)},
    {SIP_MLNAME_CAST(sipName_setDistrict), meth_QGeoAddress_setDistrict, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setDistrict)},
    {SIP_MLNAME_CAST(sipName_setPostalCode), meth_QGeoAddress_setPostalCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setPostalCode)},
    {SIP_MLNAME_CAST(sipName_setState), meth_QGeoAddress_setState, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setState)},
    {SIP_MLNAME_CAST(sipName_setStreet), meth_QGeoAddress_setStreet, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setStreet)},
    {SIP_MLNAME_CAST(sipName_setText), meth_QGeoAddress_setText, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_setText)},
    {SIP_MLNAME_CAST(sipName_state), meth_QGeoAddress_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_state)},
    {SIP_MLNAME_CAST(sipName_street), meth_QGeoAddress_street, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_street)},
    {SIP_MLNAME_CAST(sipName_text), meth_QGeoAddress_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoAddress_text)}
};

PyDoc_STRVAR(doc_QGeoAddress, "\1QGeoAddress()\n"
    "QGeoAddress(QGeoAddress)");


pyqt5ClassTypeDef sipTypeDef_QtPositioning_QGeoAddress = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoAddress,
        {0}
    },
    {
        sipNameNr_QGeoAddress,
        {0, 0, 1},
        21, methods_QGeoAddress,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoAddress,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QGeoAddress,
    init_type_QGeoAddress,
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
    dealloc_QGeoAddress,
    assign_QGeoAddress,
    array_QGeoAddress,
    copy_QGeoAddress,
    release_QGeoAddress,
    cast_QGeoAddress,
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
