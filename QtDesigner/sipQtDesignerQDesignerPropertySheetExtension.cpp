/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:36 2015
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

#include "sipAPIQtDesigner.h"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtDesigner/propertysheet.sip"
#include <propertysheet.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQDesignerPropertySheetExtension.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQDesignerPropertySheetExtension.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQDesignerPropertySheetExtension.cpp"


class sipQDesignerPropertySheetExtension : public QDesignerPropertySheetExtension
{
public:
    sipQDesignerPropertySheetExtension();
    sipQDesignerPropertySheetExtension(const QDesignerPropertySheetExtension&);
    virtual ~sipQDesignerPropertySheetExtension();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool isEnabled(int) const;
    void setChanged(int,bool);
    bool isChanged(int) const;
    void setProperty(int,const QVariant&);
    QVariant property(int) const;
    void setAttribute(int,bool);
    bool isAttribute(int) const;
    void setVisible(int,bool);
    bool isVisible(int) const;
    bool reset(int);
    bool hasReset(int) const;
    void setPropertyGroup(int,const QString&);
    QString propertyGroup(int) const;
    QString propertyName(int) const;
    int indexOf(const QString&) const;
    int count() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerPropertySheetExtension(const sipQDesignerPropertySheetExtension &);
    sipQDesignerPropertySheetExtension &operator = (const sipQDesignerPropertySheetExtension &);

    char sipPyMethods[16];
};

sipQDesignerPropertySheetExtension::sipQDesignerPropertySheetExtension(): QDesignerPropertySheetExtension(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerPropertySheetExtension::sipQDesignerPropertySheetExtension(const QDesignerPropertySheetExtension& a0): QDesignerPropertySheetExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerPropertySheetExtension::~sipQDesignerPropertySheetExtension()
{
    sipCommonDtor(sipPySelf);
}

bool sipQDesignerPropertySheetExtension::isEnabled(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_isEnabled);

    if (!sipMeth)
        return QDesignerPropertySheetExtension::isEnabled(a0);

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDesignerPropertySheetExtension::setChanged(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_setChanged);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_4(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQDesignerPropertySheetExtension::isChanged(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_isChanged);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDesignerPropertySheetExtension::setProperty(int a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_setProperty);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtWidgets_44)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const QVariant&);

    ((sipVH_QtWidgets_44)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[44]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

QVariant sipQDesignerPropertySheetExtension::property(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_property);

    if (!sipMeth)
        return QVariant();

    typedef QVariant (*sipVH_QtGui_27)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_27)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[27]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDesignerPropertySheetExtension::setAttribute(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_setAttribute);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_4(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQDesignerPropertySheetExtension::isAttribute(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_isAttribute);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDesignerPropertySheetExtension::setVisible(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_setVisible);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_4(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQDesignerPropertySheetExtension::isVisible(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_isVisible);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQDesignerPropertySheetExtension::reset(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_reset);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQDesignerPropertySheetExtension::hasReset(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_hasReset);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQDesignerPropertySheetExtension::setPropertyGroup(int a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_setPropertyGroup);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const QString&);

    sipVH_QtDesigner_5(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

QString sipQDesignerPropertySheetExtension::propertyGroup(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_propertyGroup);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtWidgets_83)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtWidgets_83)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[83]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QString sipQDesignerPropertySheetExtension::propertyName(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_propertyName);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtWidgets_83)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtWidgets_83)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[83]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

int sipQDesignerPropertySheetExtension::indexOf(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_indexOf);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtWidgets_84)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtWidgets_84)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[84]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

int sipQDesignerPropertySheetExtension::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,sipName_QDesignerPropertySheetExtension,sipName_count);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_count, "QDesignerPropertySheetExtension.count() -> int");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_count(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_count);
                return NULL;
            }

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_count, doc_QDesignerPropertySheetExtension_count);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_indexOf, "QDesignerPropertySheetExtension.indexOf(str) -> int");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_indexOf(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_indexOf(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_indexOf);
                return NULL;
            }

            sipRes = sipCpp->indexOf(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_indexOf, doc_QDesignerPropertySheetExtension_indexOf);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_propertyName, "QDesignerPropertySheetExtension.propertyName(int) -> str");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_propertyName(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_propertyName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_propertyName);
                return NULL;
            }

            sipRes = new QString(sipCpp->propertyName(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_propertyName, doc_QDesignerPropertySheetExtension_propertyName);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_propertyGroup, "QDesignerPropertySheetExtension.propertyGroup(int) -> str");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_propertyGroup(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_propertyGroup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_propertyGroup);
                return NULL;
            }

            sipRes = new QString(sipCpp->propertyGroup(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_propertyGroup, doc_QDesignerPropertySheetExtension_propertyGroup);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_setPropertyGroup, "QDesignerPropertySheetExtension.setPropertyGroup(int, str)");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_setPropertyGroup(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_setPropertyGroup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QString* a1;
        int a1State = 0;
        QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_setPropertyGroup);
                return NULL;
            }

            sipCpp->setPropertyGroup(a0,*a1);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_setPropertyGroup, doc_QDesignerPropertySheetExtension_setPropertyGroup);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_hasReset, "QDesignerPropertySheetExtension.hasReset(int) -> bool");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_hasReset(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_hasReset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_hasReset);
                return NULL;
            }

            sipRes = sipCpp->hasReset(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_hasReset, doc_QDesignerPropertySheetExtension_hasReset);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_reset, "QDesignerPropertySheetExtension.reset(int) -> bool");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_reset(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_reset);
                return NULL;
            }

            sipRes = sipCpp->reset(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_reset, doc_QDesignerPropertySheetExtension_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_isVisible, "QDesignerPropertySheetExtension.isVisible(int) -> bool");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_isVisible);
                return NULL;
            }

            sipRes = sipCpp->isVisible(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_isVisible, doc_QDesignerPropertySheetExtension_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_setVisible, "QDesignerPropertySheetExtension.setVisible(int, bool)");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        bool a1;
        QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_setVisible);
                return NULL;
            }

            sipCpp->setVisible(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_setVisible, doc_QDesignerPropertySheetExtension_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_isAttribute, "QDesignerPropertySheetExtension.isAttribute(int) -> bool");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_isAttribute(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_isAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_isAttribute);
                return NULL;
            }

            sipRes = sipCpp->isAttribute(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_isAttribute, doc_QDesignerPropertySheetExtension_isAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_setAttribute, "QDesignerPropertySheetExtension.setAttribute(int, bool)");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_setAttribute(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_setAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        bool a1;
        QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_setAttribute);
                return NULL;
            }

            sipCpp->setAttribute(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_setAttribute, doc_QDesignerPropertySheetExtension_setAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_property, "QDesignerPropertySheetExtension.property(int) -> QVariant");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_property(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_property(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            QVariant*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_property);
                return NULL;
            }

            sipRes = new QVariant(sipCpp->property(a0));

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_property, doc_QDesignerPropertySheetExtension_property);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_setProperty, "QDesignerPropertySheetExtension.setProperty(int, QVariant)");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QVariant* a1;
        int a1State = 0;
        QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0, sipType_QVariant, &a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_setProperty);
                return NULL;
            }

            sipCpp->setProperty(a0,*a1);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_setProperty, doc_QDesignerPropertySheetExtension_setProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_isChanged, "QDesignerPropertySheetExtension.isChanged(int) -> bool");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_isChanged(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_isChanged(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_isChanged);
                return NULL;
            }

            sipRes = sipCpp->isChanged(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_isChanged, doc_QDesignerPropertySheetExtension_isChanged);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_setChanged, "QDesignerPropertySheetExtension.setChanged(int, bool)");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_setChanged(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_setChanged(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        bool a1;
        QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerPropertySheetExtension, sipName_setChanged);
                return NULL;
            }

            sipCpp->setChanged(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_setChanged, doc_QDesignerPropertySheetExtension_setChanged);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerPropertySheetExtension_isEnabled, "QDesignerPropertySheetExtension.isEnabled(int) -> bool");

extern "C" {static PyObject *meth_QDesignerPropertySheetExtension_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_QDesignerPropertySheetExtension_isEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QDesignerPropertySheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerPropertySheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QDesignerPropertySheetExtension::isEnabled(a0) : sipCpp->isEnabled(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerPropertySheetExtension, sipName_isEnabled, doc_QDesignerPropertySheetExtension_isEnabled);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QDesignerPropertySheetExtension___len__(PyObject *);}
static SIP_SSIZE_T slot_QDesignerPropertySheetExtension___len__(PyObject *sipSelf)
{
    QDesignerPropertySheetExtension *sipCpp = reinterpret_cast<QDesignerPropertySheetExtension *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerPropertySheetExtension));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 908 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQDesignerPropertySheetExtension.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerPropertySheetExtension(void *, const sipTypeDef *);}
static void *cast_QDesignerPropertySheetExtension(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDesignerPropertySheetExtension)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerPropertySheetExtension(void *, int);}
static void release_QDesignerPropertySheetExtension(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerPropertySheetExtension *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerPropertySheetExtension *>(sipCppV);
}


extern "C" {static void dealloc_QDesignerPropertySheetExtension(sipSimpleWrapper *);}
static void dealloc_QDesignerPropertySheetExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerPropertySheetExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerPropertySheetExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDesignerPropertySheetExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesignerPropertySheetExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerPropertySheetExtension *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQDesignerPropertySheetExtension();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerPropertySheetExtension* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerPropertySheetExtension, &a0))
        {
            sipCpp = new sipQDesignerPropertySheetExtension(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDesignerPropertySheetExtension[] = {
    {(void *)slot_QDesignerPropertySheetExtension___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDesignerPropertySheetExtension[] = {
    {SIP_MLNAME_CAST(sipName_count), meth_QDesignerPropertySheetExtension_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_count)},
    {SIP_MLNAME_CAST(sipName_hasReset), meth_QDesignerPropertySheetExtension_hasReset, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_hasReset)},
    {SIP_MLNAME_CAST(sipName_indexOf), meth_QDesignerPropertySheetExtension_indexOf, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_indexOf)},
    {SIP_MLNAME_CAST(sipName_isAttribute), meth_QDesignerPropertySheetExtension_isAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_isAttribute)},
    {SIP_MLNAME_CAST(sipName_isChanged), meth_QDesignerPropertySheetExtension_isChanged, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_isChanged)},
    {SIP_MLNAME_CAST(sipName_isEnabled), meth_QDesignerPropertySheetExtension_isEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_isEnabled)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QDesignerPropertySheetExtension_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_isVisible)},
    {SIP_MLNAME_CAST(sipName_property), meth_QDesignerPropertySheetExtension_property, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_property)},
    {SIP_MLNAME_CAST(sipName_propertyGroup), meth_QDesignerPropertySheetExtension_propertyGroup, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_propertyGroup)},
    {SIP_MLNAME_CAST(sipName_propertyName), meth_QDesignerPropertySheetExtension_propertyName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_propertyName)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QDesignerPropertySheetExtension_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_reset)},
    {SIP_MLNAME_CAST(sipName_setAttribute), meth_QDesignerPropertySheetExtension_setAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_setAttribute)},
    {SIP_MLNAME_CAST(sipName_setChanged), meth_QDesignerPropertySheetExtension_setChanged, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_setChanged)},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QDesignerPropertySheetExtension_setProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_setProperty)},
    {SIP_MLNAME_CAST(sipName_setPropertyGroup), meth_QDesignerPropertySheetExtension_setPropertyGroup, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_setPropertyGroup)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QDesignerPropertySheetExtension_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerPropertySheetExtension_setVisible)}
};

PyDoc_STRVAR(doc_QDesignerPropertySheetExtension, "\1QDesignerPropertySheetExtension()\n"
    "QDesignerPropertySheetExtension(QDesignerPropertySheetExtension)");


pyqt5ClassTypeDef sipTypeDef_QtDesigner_QDesignerPropertySheetExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerPropertySheetExtension,
        {0}
    },
    {
        sipNameNr_QDesignerPropertySheetExtension,
        {0, 0, 1},
        16, methods_QDesignerPropertySheetExtension,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerPropertySheetExtension,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDesignerPropertySheetExtension,
    init_type_QDesignerPropertySheetExtension,
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
    dealloc_QDesignerPropertySheetExtension,
    0,
    0,
    0,
    release_QDesignerPropertySheetExtension,
    cast_QDesignerPropertySheetExtension,
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
