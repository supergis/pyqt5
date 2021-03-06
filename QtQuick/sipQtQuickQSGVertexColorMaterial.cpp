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

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgvertexcolormaterial.sip"
#include <qsgvertexcolormaterial.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGVertexColorMaterial.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGVertexColorMaterial.cpp"
#line 192 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGVertexColorMaterial.cpp"
#line 199 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGVertexColorMaterial.cpp"
#line 199 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGVertexColorMaterial.cpp"


class sipQSGVertexColorMaterial : public QSGVertexColorMaterial
{
public:
    sipQSGVertexColorMaterial();
    virtual ~sipQSGVertexColorMaterial();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QSGMaterialShader* createShader() const;
    QSGMaterialType* type() const;
    int compare(const QSGMaterial*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGVertexColorMaterial(const sipQSGVertexColorMaterial &);
    sipQSGVertexColorMaterial &operator = (const sipQSGVertexColorMaterial &);

    char sipPyMethods[3];
};

sipQSGVertexColorMaterial::sipQSGVertexColorMaterial(): QSGVertexColorMaterial(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGVertexColorMaterial::~sipQSGVertexColorMaterial()
{
    sipCommonDtor(sipPySelf);
}

QSGMaterialShader* sipQSGVertexColorMaterial::createShader() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_createShader);

    if (!sipMeth)
        return QSGVertexColorMaterial::createShader();

    extern QSGMaterialShader* sipVH_QtQuick_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_0(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QSGMaterialType* sipQSGVertexColorMaterial::type() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_type);

    if (!sipMeth)
        return QSGVertexColorMaterial::type();

    extern QSGMaterialType* sipVH_QtQuick_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_1(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

int sipQSGVertexColorMaterial::compare(const QSGMaterial*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_compare);

    if (!sipMeth)
        return QSGVertexColorMaterial::compare(a0);

    extern int sipVH_QtQuick_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSGMaterial*);

    return sipVH_QtQuick_2(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSGVertexColorMaterial_compare, "QSGVertexColorMaterial.compare(QSGMaterial) -> int");

extern "C" {static PyObject *meth_QSGVertexColorMaterial_compare(PyObject *, PyObject *);}
static PyObject *meth_QSGVertexColorMaterial_compare(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGMaterial* a0;
        const QSGVertexColorMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSGVertexColorMaterial, &sipCpp, sipType_QSGMaterial, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGVertexColorMaterial::compare(a0) : sipCpp->compare(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGVertexColorMaterial, sipName_compare, doc_QSGVertexColorMaterial_compare);

    return NULL;
}


PyDoc_STRVAR(doc_QSGVertexColorMaterial_type, "QSGVertexColorMaterial.type() -> QSGMaterialType");

extern "C" {static PyObject *meth_QSGVertexColorMaterial_type(PyObject *, PyObject *);}
static PyObject *meth_QSGVertexColorMaterial_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGVertexColorMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QSGVertexColorMaterial, &sipCpp))
        {
            QSGMaterialType*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGVertexColorMaterial::type() : sipCpp->type());

            return sipConvertFromType(sipRes,sipType_QSGMaterialType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGVertexColorMaterial, sipName_type, doc_QSGVertexColorMaterial_type);

    return NULL;
}


PyDoc_STRVAR(doc_QSGVertexColorMaterial_createShader, "QSGVertexColorMaterial.createShader() -> QSGMaterialShader");

extern "C" {static PyObject *meth_QSGVertexColorMaterial_createShader(PyObject *, PyObject *);}
static PyObject *meth_QSGVertexColorMaterial_createShader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGVertexColorMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QSGVertexColorMaterial, &sipCpp))
        {
            QSGMaterialShader*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGVertexColorMaterial::createShader() : sipCpp->createShader());

            return sipConvertFromNewType(sipRes,sipType_QSGMaterialShader,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGVertexColorMaterial, sipName_createShader, doc_QSGVertexColorMaterial_createShader);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGVertexColorMaterial(void *, const sipTypeDef *);}
static void *cast_QSGVertexColorMaterial(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSGVertexColorMaterial)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSGMaterial)->ctd_cast((QSGMaterial *)(QSGVertexColorMaterial *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGVertexColorMaterial(void *, int);}
static void release_QSGVertexColorMaterial(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGVertexColorMaterial *>(sipCppV);
    else
        delete reinterpret_cast<QSGVertexColorMaterial *>(sipCppV);
}


extern "C" {static void dealloc_QSGVertexColorMaterial(sipSimpleWrapper *);}
static void dealloc_QSGVertexColorMaterial(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSGVertexColorMaterial *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSGVertexColorMaterial(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSGVertexColorMaterial(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGVertexColorMaterial(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGVertexColorMaterial *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGVertexColorMaterial();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGVertexColorMaterial[] = {{45, 255, 1}};


static PyMethodDef methods_QSGVertexColorMaterial[] = {
    {SIP_MLNAME_CAST(sipName_compare), meth_QSGVertexColorMaterial_compare, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGVertexColorMaterial_compare)},
    {SIP_MLNAME_CAST(sipName_createShader), meth_QSGVertexColorMaterial_createShader, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGVertexColorMaterial_createShader)},
    {SIP_MLNAME_CAST(sipName_type), meth_QSGVertexColorMaterial_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGVertexColorMaterial_type)}
};

PyDoc_STRVAR(doc_QSGVertexColorMaterial, "\1QSGVertexColorMaterial()");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGVertexColorMaterial = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGVertexColorMaterial,
        {0}
    },
    {
        sipNameNr_QSGVertexColorMaterial,
        {0, 0, 1},
        3, methods_QSGVertexColorMaterial,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGVertexColorMaterial,
    -1,
    -1,
    supers_QSGVertexColorMaterial,
    0,
    init_type_QSGVertexColorMaterial,
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
    dealloc_QSGVertexColorMaterial,
    0,
    0,
    0,
    release_QSGVertexColorMaterial,
    cast_QSGVertexColorMaterial,
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
