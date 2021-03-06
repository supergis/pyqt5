/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:35:28 2015
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

#include "sipAPIQtWidgets.h"

#line 26 "/home/supermap/OpenThings/pyqt5/sip/QtWidgets/qgraphicstransform.sip"
#include <qgraphicstransform.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 30 "sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "/home/supermap/OpenThings/pyqt5/QtWidgets/sipQtWidgetsQGraphicsTransform.cpp"


class sipQGraphicsTransform : public QGraphicsTransform
{
public:
    sipQGraphicsTransform(QObject*);
    virtual ~sipQGraphicsTransform();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);
    void applyTo(QMatrix4x4*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsTransform(const sipQGraphicsTransform &);
    sipQGraphicsTransform &operator = (const sipQGraphicsTransform &);

    char sipPyMethods[8];
};

sipQGraphicsTransform::sipQGraphicsTransform(QObject*a0): QGraphicsTransform(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsTransform::~sipQGraphicsTransform()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQGraphicsTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWidgets_qt_metaobject(sipPySelf,sipType_QGraphicsTransform);
}

int sipQGraphicsTransform::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QGraphicsTransform::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWidgets_qt_metacall(sipPySelf,sipType_QGraphicsTransform,_c,_id,_a);

    return _id;
}

void *sipQGraphicsTransform::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWidgets_qt_metacast(sipPySelf, sipType_QGraphicsTransform, _clname, &sipCpp) ? sipCpp : QGraphicsTransform::qt_metacast(_clname));
}

void sipQGraphicsTransform::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QGraphicsTransform::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQGraphicsTransform::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QGraphicsTransform::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQGraphicsTransform::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QGraphicsTransform::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQGraphicsTransform::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QGraphicsTransform::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQGraphicsTransform::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QGraphicsTransform::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQGraphicsTransform::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QGraphicsTransform::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQGraphicsTransform::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QGraphicsTransform::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtWidgets_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQGraphicsTransform::applyTo(QMatrix4x4*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QGraphicsTransform,sipName_applyTo);

    if (!sipMeth)
        return;

    extern void sipVH_QtWidgets_116(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QMatrix4x4*);

    sipVH_QtWidgets_116(sipGILState, sipModuleAPI_QtWidgets_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QGraphicsTransform_applyTo, "QGraphicsTransform.applyTo(QMatrix4x4)");

extern "C" {static PyObject *meth_QGraphicsTransform_applyTo(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsTransform_applyTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QMatrix4x4* a0;
        const QGraphicsTransform *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsTransform, &sipCpp, sipType_QMatrix4x4, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsTransform, sipName_applyTo);
                return NULL;
            }

            sipCpp->applyTo(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsTransform, sipName_applyTo, doc_QGraphicsTransform_applyTo);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsTransform_update, "QGraphicsTransform.update()");

extern "C" {static PyObject *meth_QGraphicsTransform_update(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsTransform_update(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsTransform *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QGraphicsTransform, &sipCpp))
        {
            sipCpp->update();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsTransform, sipName_update, doc_QGraphicsTransform_update);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsTransform(void *, const sipTypeDef *);}
static void *cast_QGraphicsTransform(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsTransform)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QGraphicsTransform *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsTransform(void *, int);}
static void release_QGraphicsTransform(void *sipCppV,int)
{
    QGraphicsTransform *sipCpp = reinterpret_cast<QGraphicsTransform *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QGraphicsTransform(sipSimpleWrapper *);}
static void dealloc_QGraphicsTransform(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsTransform *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsTransform(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGraphicsTransform(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsTransform(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsTransform *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQGraphicsTransform(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsTransform[] = {{162, 0, 1}};


static PyMethodDef methods_QGraphicsTransform[] = {
    {SIP_MLNAME_CAST(sipName_applyTo), meth_QGraphicsTransform_applyTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsTransform_applyTo)},
    {SIP_MLNAME_CAST(sipName_update), meth_QGraphicsTransform_update, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsTransform_update)}
};

PyDoc_STRVAR(doc_QGraphicsTransform, "\1QGraphicsTransform(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsTransform = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsTransform,
        {0}
    },
    {
        sipNameNr_QGraphicsTransform,
        {0, 0, 1},
        2, methods_QGraphicsTransform,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsTransform,
    -1,
    -1,
    supers_QGraphicsTransform,
    0,
    init_type_QGraphicsTransform,
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
    dealloc_QGraphicsTransform,
    0,
    0,
    0,
    release_QGraphicsTransform,
    cast_QGraphicsTransform,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QGraphicsTransform::staticMetaObject,
    0,
    0,
    0
};
