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

#line 25 "/home/supermap/OpenThings/pyqt5/sip/QtDesigner/qpydesignerpropertysheetextension.sip"
#include <qpydesignerpropertysheetextension.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 234 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 222 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/supermap/OpenThings/pyqt5/QtDesigner/sipQtDesignerQPyDesignerPropertySheetExtension.cpp"


class sipQPyDesignerPropertySheetExtension : public QPyDesignerPropertySheetExtension
{
public:
    sipQPyDesignerPropertySheetExtension(QObject*);
    virtual ~sipQPyDesignerPropertySheetExtension();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

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
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPyDesignerPropertySheetExtension(const sipQPyDesignerPropertySheetExtension &);
    sipQPyDesignerPropertySheetExtension &operator = (const sipQPyDesignerPropertySheetExtension &);

    char sipPyMethods[23];
};

sipQPyDesignerPropertySheetExtension::sipQPyDesignerPropertySheetExtension(QObject*a0): QPyDesignerPropertySheetExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerPropertySheetExtension::~sipQPyDesignerPropertySheetExtension()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerPropertySheetExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerPropertySheetExtension);
}

int sipQPyDesignerPropertySheetExtension::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDesignerPropertySheetExtension::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerPropertySheetExtension,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerPropertySheetExtension::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerPropertySheetExtension, _clname, &sipCpp) ? sipCpp : QPyDesignerPropertySheetExtension::qt_metacast(_clname));
}

bool sipQPyDesignerPropertySheetExtension::isEnabled(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_isEnabled);

    if (!sipMeth)
        return QPyDesignerPropertySheetExtension::isEnabled(a0);

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setChanged(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setChanged);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_4(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerPropertySheetExtension::isChanged(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_isChanged);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setProperty(int a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setProperty);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtWidgets_44)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const QVariant&);

    ((sipVH_QtWidgets_44)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[44]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

QVariant sipQPyDesignerPropertySheetExtension::property(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_property);

    if (!sipMeth)
        return QVariant();

    typedef QVariant (*sipVH_QtGui_27)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_27)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[27]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setAttribute(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setAttribute);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_4(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerPropertySheetExtension::isAttribute(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_isAttribute);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setVisible(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setVisible);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_4(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerPropertySheetExtension::isVisible(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_isVisible);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerPropertySheetExtension::reset(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_reset);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerPropertySheetExtension::hasReset(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_hasReset);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_45)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_45)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[45]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::setPropertyGroup(int a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_setPropertyGroup);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const QString&);

    sipVH_QtDesigner_5(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

QString sipQPyDesignerPropertySheetExtension::propertyGroup(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_propertyGroup);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtWidgets_83)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtWidgets_83)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[83]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QString sipQPyDesignerPropertySheetExtension::propertyName(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_propertyName);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtWidgets_83)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtWidgets_83)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[83]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

int sipQPyDesignerPropertySheetExtension::indexOf(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_indexOf);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtWidgets_84)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtWidgets_84)(sipModuleAPI_QtDesigner_QtWidgets->em_virthandlers[84]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

int sipQPyDesignerPropertySheetExtension::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,sipName_QPyDesignerPropertySheetExtension,sipName_count);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQPyDesignerPropertySheetExtension::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[17],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[46]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[25]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[47]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQPyDesignerPropertySheetExtension::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[20],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPyDesignerPropertySheetExtension::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[9]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerPropertySheetExtension::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[21],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPyDesignerPropertySheetExtension::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[26]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerPropertySheetExtension::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[22],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPyDesignerPropertySheetExtension::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[5]))(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPyDesignerPropertySheetExtension(void *, const sipTypeDef *);}
static void *cast_QPyDesignerPropertySheetExtension(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPyDesignerPropertySheetExtension)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QPyDesignerPropertySheetExtension *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_QDesignerPropertySheetExtension)->ctd_cast((QDesignerPropertySheetExtension *)(QPyDesignerPropertySheetExtension *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerPropertySheetExtension(void *, int);}
static void release_QPyDesignerPropertySheetExtension(void *sipCppV,int)
{
    QPyDesignerPropertySheetExtension *sipCpp = reinterpret_cast<QPyDesignerPropertySheetExtension *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QPyDesignerPropertySheetExtension(sipSimpleWrapper *);}
static void dealloc_QPyDesignerPropertySheetExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDesignerPropertySheetExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDesignerPropertySheetExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPyDesignerPropertySheetExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerPropertySheetExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerPropertySheetExtension *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQPyDesignerPropertySheetExtension(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerPropertySheetExtension[] = {{162, 0, 0}, {20, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerPropertySheetExtension, "\1QPyDesignerPropertySheetExtension(QObject)");


pyqt5ClassTypeDef sipTypeDef_QtDesigner_QPyDesignerPropertySheetExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerPropertySheetExtension,
        {0}
    },
    {
        sipNameNr_QPyDesignerPropertySheetExtension,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerPropertySheetExtension,
    -1,
    -1,
    supers_QPyDesignerPropertySheetExtension,
    0,
    init_type_QPyDesignerPropertySheetExtension,
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
    dealloc_QPyDesignerPropertySheetExtension,
    0,
    0,
    0,
    release_QPyDesignerPropertySheetExtension,
    cast_QPyDesignerPropertySheetExtension,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPyDesignerPropertySheetExtension::staticMetaObject,
    0,
    0,
    0
};