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

#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickframebufferobject.sip"
#include <qquickframebufferobject.h>
#line 35 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickframebufferobject.sip"
#include <qquickframebufferobject.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickFramebufferObjectRenderer.cpp"

#line 28 "sip/QtGui/qopenglframebufferobject.sip"
#include <qopenglframebufferobject.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickFramebufferObjectRenderer.cpp"
#line 28 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qquickframebufferobject.sip"
#include <qquickframebufferobject.h>
#line 38 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickFramebufferObjectRenderer.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 41 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQQuickFramebufferObjectRenderer.cpp"


class sipQQuickFramebufferObject_Renderer : public QQuickFramebufferObject::Renderer
{
public:
    sipQQuickFramebufferObject_Renderer();
    sipQQuickFramebufferObject_Renderer(const QQuickFramebufferObject::Renderer&);
    virtual ~sipQQuickFramebufferObject_Renderer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void synchronize(QQuickFramebufferObject*);
    QOpenGLFramebufferObject* createFramebufferObject(const QSize&);
    void render();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQuickFramebufferObject_Renderer(const sipQQuickFramebufferObject_Renderer &);
    sipQQuickFramebufferObject_Renderer &operator = (const sipQQuickFramebufferObject_Renderer &);

    char sipPyMethods[3];
};

sipQQuickFramebufferObject_Renderer::sipQQuickFramebufferObject_Renderer(): QQuickFramebufferObject::Renderer(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQuickFramebufferObject_Renderer::sipQQuickFramebufferObject_Renderer(const QQuickFramebufferObject::Renderer& a0): QQuickFramebufferObject::Renderer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQuickFramebufferObject_Renderer::~sipQQuickFramebufferObject_Renderer()
{
    sipCommonDtor(sipPySelf);
}

void sipQQuickFramebufferObject_Renderer::synchronize(QQuickFramebufferObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_synchronize);

    if (!sipMeth)
    {
        QQuickFramebufferObject::Renderer::synchronize(a0);
        return;
    }

    extern void sipVH_QtQuick_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QQuickFramebufferObject*);

    sipVH_QtQuick_31(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QOpenGLFramebufferObject* sipQQuickFramebufferObject_Renderer::createFramebufferObject(const QSize& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_createFramebufferObject);

    if (!sipMeth)
        return QQuickFramebufferObject::Renderer::createFramebufferObject(a0);

    extern QOpenGLFramebufferObject* sipVH_QtQuick_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSize&);

    return sipVH_QtQuick_32(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQQuickFramebufferObject_Renderer::render()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_Renderer,sipName_render);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QQuickFramebufferObject_Renderer_render, "QQuickFramebufferObject.Renderer.render()");

extern "C" {static PyObject *meth_QQuickFramebufferObject_Renderer_render(PyObject *, PyObject *);}
static PyObject *meth_QQuickFramebufferObject_Renderer_render(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QQuickFramebufferObject::Renderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QQuickFramebufferObject_Renderer, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_Renderer, sipName_render);
                return NULL;
            }

            sipCpp->render();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Renderer, sipName_render, doc_QQuickFramebufferObject_Renderer_render);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickFramebufferObject_Renderer_createFramebufferObject, "QQuickFramebufferObject.Renderer.createFramebufferObject(QSize) -> QOpenGLFramebufferObject");

extern "C" {static PyObject *meth_QQuickFramebufferObject_Renderer_createFramebufferObject(PyObject *, PyObject *);}
static PyObject *meth_QQuickFramebufferObject_Renderer_createFramebufferObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSize* a0;
        QQuickFramebufferObject::Renderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ9", &sipSelf, sipType_QQuickFramebufferObject_Renderer, &sipCpp, sipType_QSize, &a0))
        {
            QOpenGLFramebufferObject*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QQuickFramebufferObject::Renderer::createFramebufferObject(*a0) : sipCpp->createFramebufferObject(*a0));

            return sipConvertFromType(sipRes,sipType_QOpenGLFramebufferObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Renderer, sipName_createFramebufferObject, doc_QQuickFramebufferObject_Renderer_createFramebufferObject);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickFramebufferObject_Renderer_synchronize, "QQuickFramebufferObject.Renderer.synchronize(QQuickFramebufferObject)");

extern "C" {static PyObject *meth_QQuickFramebufferObject_Renderer_synchronize(PyObject *, PyObject *);}
static PyObject *meth_QQuickFramebufferObject_Renderer_synchronize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QQuickFramebufferObject* a0;
        QQuickFramebufferObject::Renderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QQuickFramebufferObject_Renderer, &sipCpp, sipType_QQuickFramebufferObject, &a0))
        {
            (sipSelfWasArg ? sipCpp->QQuickFramebufferObject::Renderer::synchronize(a0) : sipCpp->synchronize(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Renderer, sipName_synchronize, doc_QQuickFramebufferObject_Renderer_synchronize);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickFramebufferObject_Renderer_framebufferObject, "QQuickFramebufferObject.Renderer.framebufferObject() -> QOpenGLFramebufferObject");

extern "C" {static PyObject *meth_QQuickFramebufferObject_Renderer_framebufferObject(PyObject *, PyObject *);}
static PyObject *meth_QQuickFramebufferObject_Renderer_framebufferObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQuickFramebufferObject::Renderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QQuickFramebufferObject_Renderer, &sipCpp))
        {
            QOpenGLFramebufferObject*sipRes;

            sipRes = sipCpp->framebufferObject();

            return sipConvertFromType(sipRes,sipType_QOpenGLFramebufferObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Renderer, sipName_framebufferObject, doc_QQuickFramebufferObject_Renderer_framebufferObject);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickFramebufferObject_Renderer_update, "QQuickFramebufferObject.Renderer.update()");

extern "C" {static PyObject *meth_QQuickFramebufferObject_Renderer_update(PyObject *, PyObject *);}
static PyObject *meth_QQuickFramebufferObject_Renderer_update(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQuickFramebufferObject::Renderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QQuickFramebufferObject_Renderer, &sipCpp))
        {
            sipCpp->update();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Renderer, sipName_update, doc_QQuickFramebufferObject_Renderer_update);

    return NULL;
}


PyDoc_STRVAR(doc_QQuickFramebufferObject_Renderer_invalidateFramebufferObject, "QQuickFramebufferObject.Renderer.invalidateFramebufferObject()");

extern "C" {static PyObject *meth_QQuickFramebufferObject_Renderer_invalidateFramebufferObject(PyObject *, PyObject *);}
static PyObject *meth_QQuickFramebufferObject_Renderer_invalidateFramebufferObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QQuickFramebufferObject::Renderer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QQuickFramebufferObject_Renderer, &sipCpp))
        {
            sipCpp->invalidateFramebufferObject();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Renderer, sipName_invalidateFramebufferObject, doc_QQuickFramebufferObject_Renderer_invalidateFramebufferObject);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQuickFramebufferObject_Renderer(void *, const sipTypeDef *);}
static void *cast_QQuickFramebufferObject_Renderer(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQuickFramebufferObject_Renderer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQuickFramebufferObject_Renderer(void *, int);}
static void release_QQuickFramebufferObject_Renderer(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQQuickFramebufferObject_Renderer *>(sipCppV);
}


extern "C" {static void dealloc_QQuickFramebufferObject_Renderer(sipSimpleWrapper *);}
static void dealloc_QQuickFramebufferObject_Renderer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQuickFramebufferObject_Renderer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQuickFramebufferObject_Renderer(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQuickFramebufferObject_Renderer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQuickFramebufferObject_Renderer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQQuickFramebufferObject_Renderer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQQuickFramebufferObject_Renderer();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QQuickFramebufferObject::Renderer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQuickFramebufferObject_Renderer, &a0))
        {
            sipCpp = new sipQQuickFramebufferObject_Renderer(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QQuickFramebufferObject_Renderer[] = {
    {SIP_MLNAME_CAST(sipName_createFramebufferObject), meth_QQuickFramebufferObject_Renderer_createFramebufferObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickFramebufferObject_Renderer_createFramebufferObject)},
    {SIP_MLNAME_CAST(sipName_framebufferObject), meth_QQuickFramebufferObject_Renderer_framebufferObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickFramebufferObject_Renderer_framebufferObject)},
    {SIP_MLNAME_CAST(sipName_invalidateFramebufferObject), meth_QQuickFramebufferObject_Renderer_invalidateFramebufferObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickFramebufferObject_Renderer_invalidateFramebufferObject)},
    {SIP_MLNAME_CAST(sipName_render), meth_QQuickFramebufferObject_Renderer_render, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickFramebufferObject_Renderer_render)},
    {SIP_MLNAME_CAST(sipName_synchronize), meth_QQuickFramebufferObject_Renderer_synchronize, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickFramebufferObject_Renderer_synchronize)},
    {SIP_MLNAME_CAST(sipName_update), meth_QQuickFramebufferObject_Renderer_update, METH_VARARGS, SIP_MLDOC_CAST(doc_QQuickFramebufferObject_Renderer_update)}
};

PyDoc_STRVAR(doc_QQuickFramebufferObject_Renderer, "\1QQuickFramebufferObject.Renderer()\n"
    "QQuickFramebufferObject.Renderer(QQuickFramebufferObject.Renderer)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QQuickFramebufferObject_Renderer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQuickFramebufferObject__Renderer,
        {0}
    },
    {
        sipNameNr_Renderer,
        {1, 255, 0},
        6, methods_QQuickFramebufferObject_Renderer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQuickFramebufferObject_Renderer,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQuickFramebufferObject_Renderer,
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
    dealloc_QQuickFramebufferObject_Renderer,
    0,
    0,
    0,
    release_QQuickFramebufferObject_Renderer,
    cast_QQuickFramebufferObject_Renderer,
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
