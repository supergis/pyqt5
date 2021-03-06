/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:29 2015
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

#include "sipAPIQtXml.h"

#line 403 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"

#line 58 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 313 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 30 "sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 365 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 276 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 430 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 389 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 352 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 418 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 178 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 196 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 264 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 377 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 296 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 238 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"
#line 158 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomEntity.cpp"


PyDoc_STRVAR(doc_QDomEntity_publicId, "QDomEntity.publicId() -> str");

extern "C" {static PyObject *meth_QDomEntity_publicId(PyObject *, PyObject *);}
static PyObject *meth_QDomEntity_publicId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDomEntity *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomEntity, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->publicId());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomEntity, sipName_publicId, doc_QDomEntity_publicId);

    return NULL;
}


PyDoc_STRVAR(doc_QDomEntity_systemId, "QDomEntity.systemId() -> str");

extern "C" {static PyObject *meth_QDomEntity_systemId(PyObject *, PyObject *);}
static PyObject *meth_QDomEntity_systemId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDomEntity *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomEntity, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->systemId());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomEntity, sipName_systemId, doc_QDomEntity_systemId);

    return NULL;
}


PyDoc_STRVAR(doc_QDomEntity_notationName, "QDomEntity.notationName() -> str");

extern "C" {static PyObject *meth_QDomEntity_notationName(PyObject *, PyObject *);}
static PyObject *meth_QDomEntity_notationName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDomEntity *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomEntity, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->notationName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomEntity, sipName_notationName, doc_QDomEntity_notationName);

    return NULL;
}


PyDoc_STRVAR(doc_QDomEntity_nodeType, "QDomEntity.nodeType() -> QDomNode.NodeType");

extern "C" {static PyObject *meth_QDomEntity_nodeType(PyObject *, PyObject *);}
static PyObject *meth_QDomEntity_nodeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDomEntity *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomEntity, &sipCpp))
        {
            QDomNode::NodeType sipRes;

            sipRes = sipCpp->nodeType();

            return sipConvertFromEnum(sipRes,sipType_QDomNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomEntity, sipName_nodeType, doc_QDomEntity_nodeType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDomEntity(void *, const sipTypeDef *);}
static void *cast_QDomEntity(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDomEntity)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QDomNode)->ctd_cast((QDomNode *)(QDomEntity *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomEntity(void *, int);}
static void release_QDomEntity(void *sipCppV,int)
{
    delete reinterpret_cast<QDomEntity *>(sipCppV);
}


extern "C" {static void assign_QDomEntity(void *, SIP_SSIZE_T, const void *);}
static void assign_QDomEntity(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDomEntity *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDomEntity *>(sipSrc);
}


extern "C" {static void *array_QDomEntity(SIP_SSIZE_T);}
static void *array_QDomEntity(SIP_SSIZE_T sipNrElem)
{
    return new QDomEntity[sipNrElem];
}


extern "C" {static void *copy_QDomEntity(const void *, SIP_SSIZE_T);}
static void *copy_QDomEntity(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDomEntity(reinterpret_cast<const QDomEntity *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomEntity(sipSimpleWrapper *);}
static void dealloc_QDomEntity(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDomEntity(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDomEntity(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDomEntity(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDomEntity *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDomEntity();

            return sipCpp;
        }
    }

    {
        const QDomEntity* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDomEntity, &a0))
        {
            sipCpp = new QDomEntity(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDomEntity[] = {{13, 255, 1}};


static PyMethodDef methods_QDomEntity[] = {
    {SIP_MLNAME_CAST(sipName_nodeType), meth_QDomEntity_nodeType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomEntity_nodeType)},
    {SIP_MLNAME_CAST(sipName_notationName), meth_QDomEntity_notationName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomEntity_notationName)},
    {SIP_MLNAME_CAST(sipName_publicId), meth_QDomEntity_publicId, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomEntity_publicId)},
    {SIP_MLNAME_CAST(sipName_systemId), meth_QDomEntity_systemId, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomEntity_systemId)}
};

PyDoc_STRVAR(doc_QDomEntity, "\1QDomEntity()\n"
    "QDomEntity(QDomEntity)");


pyqt5ClassTypeDef sipTypeDef_QtXml_QDomEntity = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDomEntity,
        {0}
    },
    {
        sipNameNr_QDomEntity,
        {0, 0, 1},
        4, methods_QDomEntity,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDomEntity,
    -1,
    -1,
    supers_QDomEntity,
    0,
    init_type_QDomEntity,
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
    dealloc_QDomEntity,
    assign_QDomEntity,
    array_QDomEntity,
    copy_QDomEntity,
    release_QDomEntity,
    cast_QDomEntity,
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
