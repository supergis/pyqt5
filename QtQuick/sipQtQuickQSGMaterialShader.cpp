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

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShader.cpp"

#line 32 "sip/QtGui/qopenglshaderprogram.sip"
#include <qopenglshaderprogram.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShader.cpp"
#line 34 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShader.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShader.cpp"
#line 80 "sip/QtGui/qopenglshaderprogram.sip"
#include <qopenglshaderprogram.h>
#line 42 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShader.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 37 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 47 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShader.cpp"
#line 199 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 50 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShader.cpp"


class sipQSGMaterialShader : public QSGMaterialShader
{
public:
    sipQSGMaterialShader();
    virtual ~sipQSGMaterialShader();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    const char* fragmentShader() const;
    const char* vertexShader() const;
    void initialize();
    void compile();
    const char* const* attributeNames() const;
    void updateState(const QSGMaterialShader::RenderState&,QSGMaterial*,QSGMaterial*);
    void deactivate();
    void activate();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGMaterialShader(const sipQSGMaterialShader &);
    sipQSGMaterialShader &operator = (const sipQSGMaterialShader &);

    char sipPyMethods[8];
};

sipQSGMaterialShader::sipQSGMaterialShader(): QSGMaterialShader(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGMaterialShader::~sipQSGMaterialShader()
{
    sipCommonDtor(sipPySelf);
}

const char* sipQSGMaterialShader::fragmentShader() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_fragmentShader);

    if (!sipMeth)
        return QSGMaterialShader::fragmentShader();

    extern const char* sipVH_QtQuick_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtQuick_6(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, -3);
}

const char* sipQSGMaterialShader::vertexShader() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_vertexShader);

    if (!sipMeth)
        return QSGMaterialShader::vertexShader();

    extern const char* sipVH_QtQuick_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtQuick_6(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, -4);
}

void sipQSGMaterialShader::initialize()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_initialize);

    if (!sipMeth)
    {
        QSGMaterialShader::initialize();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQSGMaterialShader::compile()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_compile);

    if (!sipMeth)
    {
        QSGMaterialShader::compile();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

const char* const* sipQSGMaterialShader::attributeNames() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QSGMaterialShader,sipName_attributeNames);

    if (!sipMeth)
        return 0;

    extern const char* const* sipVH_QtQuick_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtQuick_7(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, -5);
}

void sipQSGMaterialShader::updateState(const QSGMaterialShader::RenderState& a0,QSGMaterial*a1,QSGMaterial*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_updateState);

    if (!sipMeth)
    {
        QSGMaterialShader::updateState(a0,a1,a2);
        return;
    }

    extern void sipVH_QtQuick_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSGMaterialShader::RenderState&,QSGMaterial*,QSGMaterial*);

    sipVH_QtQuick_8(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1, a2);
}

void sipQSGMaterialShader::deactivate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_deactivate);

    if (!sipMeth)
    {
        QSGMaterialShader::deactivate();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQSGMaterialShader::activate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_activate);

    if (!sipMeth)
    {
        QSGMaterialShader::activate();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSGMaterialShader_activate, "QSGMaterialShader.activate()");

extern "C" {static PyObject *meth_QSGMaterialShader_activate(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_activate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QSGMaterialShader::activate() : sipCpp->activate());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_activate, doc_QSGMaterialShader_activate);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_deactivate, "QSGMaterialShader.deactivate()");

extern "C" {static PyObject *meth_QSGMaterialShader_deactivate(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_deactivate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QSGMaterialShader::deactivate() : sipCpp->deactivate());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_deactivate, doc_QSGMaterialShader_deactivate);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_updateState, "QSGMaterialShader.updateState(QSGMaterialShader.RenderState, QSGMaterial, QSGMaterial)");

extern "C" {static PyObject *meth_QSGMaterialShader_updateState(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_updateState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGMaterialShader::RenderState* a0;
        QSGMaterial* a1;
        QSGMaterial* a2;
        QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J8J8", &sipSelf, sipType_QSGMaterialShader, &sipCpp, sipType_QSGMaterialShader_RenderState, &a0, sipType_QSGMaterial, &a1, sipType_QSGMaterial, &a2))
        {
            (sipSelfWasArg ? sipCpp->QSGMaterialShader::updateState(*a0,a1,a2) : sipCpp->updateState(*a0,a1,a2));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_updateState, doc_QSGMaterialShader_updateState);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_attributeNames, "QSGMaterialShader.attributeNames() -> list-of-str");

extern "C" {static PyObject *meth_QSGMaterialShader_attributeNames(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_attributeNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader, &sipCpp))
        {
            PyObject * sipRes = 0;
            int sipIsErr = 0;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSGMaterialShader, sipName_attributeNames);
                return NULL;
            }

#line 73 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
        const char * const *names = sipCpp->attributeNames();
        
        SIP_SSIZE_T nr_names = 0;
        
        if (names)
            while (names[nr_names])
                ++nr_names;
            
        sipRes = PyList_New(nr_names);
            
        if (!sipRes)
            sipIsErr = 1;
        else
            for (SIP_SSIZE_T i = 0; i < nr_names; ++i)
            {
                const char *name = names[i];
                PyObject *el;
        
        #if PY_MAJOR_VERSION >= 3
                el = PyUnicode_DecodeASCII(name, strlen(name), 0);
        #else
                el = PyString_FromString(name);
        #endif
                
                if (!el)
                {
                    Py_DECREF(sipRes);
                    sipIsErr = 1;
                    break;
                }
        
                PyList_SET_ITEM(sipRes, i, el);
            }
#line 369 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShader.cpp"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_attributeNames, doc_QSGMaterialShader_attributeNames);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_program, "QSGMaterialShader.program() -> QOpenGLShaderProgram");

extern "C" {static PyObject *meth_QSGMaterialShader_program(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_program(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader, &sipCpp))
        {
            QOpenGLShaderProgram*sipRes;

            sipRes = sipCpp->program();

            return sipConvertFromType(sipRes,sipType_QOpenGLShaderProgram,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_program, doc_QSGMaterialShader_program);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_compile, "QSGMaterialShader.compile()");

extern "C" {static PyObject *meth_QSGMaterialShader_compile(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_compile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QSGMaterialShader, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QSGMaterialShader::compile() : sipCpp->compile());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_compile, doc_QSGMaterialShader_compile);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_initialize, "QSGMaterialShader.initialize()");

extern "C" {static PyObject *meth_QSGMaterialShader_initialize(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_initialize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QSGMaterialShader, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QSGMaterialShader::initialize() : sipCpp->initialize());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_initialize, doc_QSGMaterialShader_initialize);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_vertexShader, "QSGMaterialShader.vertexShader() -> str");

extern "C" {static PyObject *meth_QSGMaterialShader_vertexShader(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_vertexShader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QSGMaterialShader, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGMaterialShader::vertexShader() : sipCpp->vertexShader());

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_vertexShader, doc_QSGMaterialShader_vertexShader);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_fragmentShader, "QSGMaterialShader.fragmentShader() -> str");

extern "C" {static PyObject *meth_QSGMaterialShader_fragmentShader(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_fragmentShader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QSGMaterialShader, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGMaterialShader::fragmentShader() : sipCpp->fragmentShader());

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return PyUnicode_DecodeASCII(sipRes, strlen(sipRes), NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_fragmentShader, doc_QSGMaterialShader_fragmentShader);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_setShaderSourceFile, "QSGMaterialShader.setShaderSourceFile(QOpenGLShader.ShaderType, str)");

extern "C" {static PyObject *meth_QSGMaterialShader_setShaderSourceFile(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_setShaderSourceFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1J1", &sipSelf, sipType_QSGMaterialShader, &sipCpp, sipType_QOpenGLShader_ShaderType, &a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->setShaderSourceFile(*a0,*a1);
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_setShaderSourceFile, doc_QSGMaterialShader_setShaderSourceFile);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_setShaderSourceFiles, "QSGMaterialShader.setShaderSourceFiles(QOpenGLShader.ShaderType, list-of-str)");

extern "C" {static PyObject *meth_QSGMaterialShader_setShaderSourceFiles(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_setShaderSourceFiles(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        const QStringList* a1;
        int a1State = 0;
        QSGMaterialShader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1J1", &sipSelf, sipType_QSGMaterialShader, &sipCpp, sipType_QOpenGLShader_ShaderType, &a0, &a0State, sipType_QStringList,&a1, &a1State))
        {
            sipCpp->setShaderSourceFiles(*a0,*a1);
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);
            sipReleaseType(const_cast<QStringList *>(a1),sipType_QStringList,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGMaterialShader, sipName_setShaderSourceFiles, doc_QSGMaterialShader_setShaderSourceFiles);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGMaterialShader(void *, const sipTypeDef *);}
static void *cast_QSGMaterialShader(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSGMaterialShader)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGMaterialShader(void *, int);}
static void release_QSGMaterialShader(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGMaterialShader *>(sipCppV);
    else
        delete reinterpret_cast<QSGMaterialShader *>(sipCppV);
}


extern "C" {static void dealloc_QSGMaterialShader(sipSimpleWrapper *);}
static void dealloc_QSGMaterialShader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSGMaterialShader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSGMaterialShader(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSGMaterialShader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGMaterialShader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGMaterialShader *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGMaterialShader();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSGMaterialShader[] = {
    {SIP_MLNAME_CAST(sipName_activate), meth_QSGMaterialShader_activate, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_activate)},
    {SIP_MLNAME_CAST(sipName_attributeNames), meth_QSGMaterialShader_attributeNames, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_attributeNames)},
    {SIP_MLNAME_CAST(sipName_compile), meth_QSGMaterialShader_compile, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_compile)},
    {SIP_MLNAME_CAST(sipName_deactivate), meth_QSGMaterialShader_deactivate, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_deactivate)},
    {SIP_MLNAME_CAST(sipName_fragmentShader), meth_QSGMaterialShader_fragmentShader, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_fragmentShader)},
    {SIP_MLNAME_CAST(sipName_initialize), meth_QSGMaterialShader_initialize, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_initialize)},
    {SIP_MLNAME_CAST(sipName_program), meth_QSGMaterialShader_program, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_program)},
    {SIP_MLNAME_CAST(sipName_setShaderSourceFile), meth_QSGMaterialShader_setShaderSourceFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_setShaderSourceFile)},
    {SIP_MLNAME_CAST(sipName_setShaderSourceFiles), meth_QSGMaterialShader_setShaderSourceFiles, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_setShaderSourceFiles)},
    {SIP_MLNAME_CAST(sipName_updateState), meth_QSGMaterialShader_updateState, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_updateState)},
    {SIP_MLNAME_CAST(sipName_vertexShader), meth_QSGMaterialShader_vertexShader, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_vertexShader)}
};

PyDoc_STRVAR(doc_QSGMaterialShader, "\1QSGMaterialShader()");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGMaterialShader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGMaterialShader,
        {0}
    },
    {
        sipNameNr_QSGMaterialShader,
        {0, 0, 1},
        11, methods_QSGMaterialShader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGMaterialShader,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSGMaterialShader,
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
    dealloc_QSGMaterialShader,
    0,
    0,
    0,
    release_QSGMaterialShader,
    cast_QSGMaterialShader,
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
