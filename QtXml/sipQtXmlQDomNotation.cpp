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

#line 389 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"

#line 58 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 313 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 30 "sip/QtCore/qtextstream.sip"
#include <qtextstream.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 365 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 276 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 430 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 403 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 352 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 418 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 178 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 196 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 264 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 377 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 296 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 238 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"
#line 158 "/home/supermap/OpenThings/pyqt5/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtXml/sipQtXmlQDomNotation.cpp"


PyDoc_STRVAR(doc_QDomNotation_publicId, "QDomNotation.publicId() -> str");

extern "C" {static PyObject *meth_QDomNotation_publicId(PyObject *, PyObject *);}
static PyObject *meth_QDomNotation_publicId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDomNotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomNotation, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->publicId());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNotation, sipName_publicId, doc_QDomNotation_publicId);

    return NULL;
}


PyDoc_STRVAR(doc_QDomNotation_systemId, "QDomNotation.systemId() -> str");

extern "C" {static PyObject *meth_QDomNotation_systemId(PyObject *, PyObject *);}
static PyObject *meth_QDomNotation_systemId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDomNotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomNotation, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->systemId());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNotation, sipName_systemId, doc_QDomNotation_systemId);

    return NULL;
}


PyDoc_STRVAR(doc_QDomNotation_nodeType, "QDomNotation.nodeType() -> QDomNode.NodeType");

extern "C" {static PyObject *meth_QDomNotation_nodeType(PyObject *, PyObject *);}
static PyObject *meth_QDomNotation_nodeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDomNotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomNotation, &sipCpp))
        {
            QDomNode::NodeType sipRes;

            sipRes = sipCpp->nodeType();

            return sipConvertFromEnum(sipRes,sipType_QDomNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNotation, sipName_nodeType, doc_QDomNotation_nodeType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDomNotation(void *, const sipTypeDef *);}
static void *cast_QDomNotation(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDomNotation)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QDomNode)->ctd_cast((QDomNode *)(QDomNotation *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomNotation(void *, int);}
static void release_QDomNotation(void *sipCppV,int)
{
    delete reinterpret_cast<QDomNotation *>(sipCppV);
}


extern "C" {static void assign_QDomNotation(void *, SIP_SSIZE_T, const void *);}
static void assign_QDomNotation(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDomNotation *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDomNotation *>(sipSrc);
}


extern "C" {static void *array_QDomNotation(SIP_SSIZE_T);}
static void *array_QDomNotation(SIP_SSIZE_T sipNrElem)
{
    return new QDomNotation[sipNrElem];
}


extern "C" {static void *copy_QDomNotation(const void *, SIP_SSIZE_T);}
static void *copy_QDomNotation(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDomNotation(reinterpret_cast<const QDomNotation *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomNotation(sipSimpleWrapper *);}
static void dealloc_QDomNotation(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDomNotation(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDomNotation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDomNotation(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDomNotation *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QDomNotation();

            return sipCpp;
        }
    }

    {
        const QDomNotation* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDomNotation, &a0))
        {
            sipCpp = new QDomNotation(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDomNotation[] = {{13, 255, 1}};


static PyMethodDef methods_QDomNotation[] = {
    {SIP_MLNAME_CAST(sipName_nodeType), meth_QDomNotation_nodeType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomNotation_nodeType)},
    {SIP_MLNAME_CAST(sipName_publicId), meth_QDomNotation_publicId, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomNotation_publicId)},
    {SIP_MLNAME_CAST(sipName_systemId), meth_QDomNotation_systemId, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomNotation_systemId)}
};

PyDoc_STRVAR(doc_QDomNotation, "\1QDomNotation()\n"
    "QDomNotation(QDomNotation)");


pyqt5ClassTypeDef sipTypeDef_QtXml_QDomNotation = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDomNotation,
        {0}
    },
    {
        sipNameNr_QDomNotation,
        {0, 0, 1},
        3, methods_QDomNotation,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDomNotation,
    -1,
    -1,
    supers_QDomNotation,
    0,
    init_type_QDomNotation,
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
    dealloc_QDomNotation,
    assign_QDomNotation,
    array_QDomNotation,
    copy_QDomNotation,
    release_QDomNotation,
    cast_QDomNotation,
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
