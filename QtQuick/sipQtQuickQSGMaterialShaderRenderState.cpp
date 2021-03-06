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
#line 37 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 31 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShaderRenderState.cpp"

#line 30 "sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 35 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShaderRenderState.cpp"
#line 50 "sip/QtGui/qopenglcontext.sip"
#include <qopenglcontext.h>
#line 38 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShaderRenderState.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 41 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShaderRenderState.cpp"
#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 37 "/home/supermap/OpenThings/pyqt5/sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 46 "/home/supermap/OpenThings/pyqt5/QtQuick/sipQtQuickQSGMaterialShaderRenderState.cpp"


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_dirtyStates, "QSGMaterialShader.RenderState.dirtyStates() -> QSGMaterialShader.RenderState.DirtyStates");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_dirtyStates(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_dirtyStates(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            QSGMaterialShader::RenderState::DirtyStates*sipRes;

            sipRes = new QSGMaterialShader::RenderState::DirtyStates(sipCpp->dirtyStates());

            return sipConvertFromNewType(sipRes,sipType_QSGMaterialShader_RenderState_DirtyStates,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_dirtyStates, doc_QSGMaterialShader_RenderState_dirtyStates);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_isMatrixDirty, "QSGMaterialShader.RenderState.isMatrixDirty() -> bool");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_isMatrixDirty(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_isMatrixDirty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isMatrixDirty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_isMatrixDirty, doc_QSGMaterialShader_RenderState_isMatrixDirty);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_isOpacityDirty, "QSGMaterialShader.RenderState.isOpacityDirty() -> bool");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_isOpacityDirty(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_isOpacityDirty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isOpacityDirty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_isOpacityDirty, doc_QSGMaterialShader_RenderState_isOpacityDirty);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_opacity, "QSGMaterialShader.RenderState.opacity() -> float");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_opacity(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_opacity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->opacity();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_opacity, doc_QSGMaterialShader_RenderState_opacity);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_combinedMatrix, "QSGMaterialShader.RenderState.combinedMatrix() -> QMatrix4x4");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_combinedMatrix(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_combinedMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            QMatrix4x4*sipRes;

            sipRes = new QMatrix4x4(sipCpp->combinedMatrix());

            return sipConvertFromNewType(sipRes,sipType_QMatrix4x4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_combinedMatrix, doc_QSGMaterialShader_RenderState_combinedMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_modelViewMatrix, "QSGMaterialShader.RenderState.modelViewMatrix() -> QMatrix4x4");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_modelViewMatrix(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_modelViewMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            QMatrix4x4*sipRes;

            sipRes = new QMatrix4x4(sipCpp->modelViewMatrix());

            return sipConvertFromNewType(sipRes,sipType_QMatrix4x4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_modelViewMatrix, doc_QSGMaterialShader_RenderState_modelViewMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_viewportRect, "QSGMaterialShader.RenderState.viewportRect() -> QRect");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_viewportRect(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_viewportRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->viewportRect());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_viewportRect, doc_QSGMaterialShader_RenderState_viewportRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_deviceRect, "QSGMaterialShader.RenderState.deviceRect() -> QRect");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_deviceRect(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_deviceRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->deviceRect());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_deviceRect, doc_QSGMaterialShader_RenderState_deviceRect);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_determinant, "QSGMaterialShader.RenderState.determinant() -> float");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_determinant(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_determinant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->determinant();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_determinant, doc_QSGMaterialShader_RenderState_determinant);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_context, "QSGMaterialShader.RenderState.context() -> QOpenGLContext");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_context(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_context(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            QOpenGLContext*sipRes;

            sipRes = sipCpp->context();

            return sipConvertFromType(sipRes,sipType_QOpenGLContext,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_context, doc_QSGMaterialShader_RenderState_context);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_projectionMatrix, "QSGMaterialShader.RenderState.projectionMatrix() -> QMatrix4x4");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_projectionMatrix(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_projectionMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            QMatrix4x4*sipRes;

            sipRes = new QMatrix4x4(sipCpp->projectionMatrix());

            return sipConvertFromNewType(sipRes,sipType_QMatrix4x4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_projectionMatrix, doc_QSGMaterialShader_RenderState_projectionMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_QSGMaterialShader_RenderState_devicePixelRatio, "QSGMaterialShader.RenderState.devicePixelRatio() -> float");

extern "C" {static PyObject *meth_QSGMaterialShader_RenderState_devicePixelRatio(PyObject *, PyObject *);}
static PyObject *meth_QSGMaterialShader_RenderState_devicePixelRatio(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGMaterialShader::RenderState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGMaterialShader_RenderState, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->devicePixelRatio();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_RenderState, sipName_devicePixelRatio, doc_QSGMaterialShader_RenderState_devicePixelRatio);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGMaterialShader_RenderState(void *, const sipTypeDef *);}
static void *cast_QSGMaterialShader_RenderState(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSGMaterialShader_RenderState)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGMaterialShader_RenderState(void *, int);}
static void release_QSGMaterialShader_RenderState(void *sipCppV,int)
{
    delete reinterpret_cast<QSGMaterialShader::RenderState *>(sipCppV);
}


extern "C" {static void assign_QSGMaterialShader_RenderState(void *, SIP_SSIZE_T, const void *);}
static void assign_QSGMaterialShader_RenderState(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSGMaterialShader::RenderState *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSGMaterialShader::RenderState *>(sipSrc);
}


extern "C" {static void *array_QSGMaterialShader_RenderState(SIP_SSIZE_T);}
static void *array_QSGMaterialShader_RenderState(SIP_SSIZE_T sipNrElem)
{
    return new QSGMaterialShader::RenderState[sipNrElem];
}


extern "C" {static void *copy_QSGMaterialShader_RenderState(const void *, SIP_SSIZE_T);}
static void *copy_QSGMaterialShader_RenderState(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSGMaterialShader::RenderState(reinterpret_cast<const QSGMaterialShader::RenderState *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSGMaterialShader_RenderState(sipSimpleWrapper *);}
static void dealloc_QSGMaterialShader_RenderState(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSGMaterialShader_RenderState(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSGMaterialShader_RenderState(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGMaterialShader_RenderState(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSGMaterialShader::RenderState *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSGMaterialShader::RenderState();

            return sipCpp;
        }
    }

    {
        const QSGMaterialShader::RenderState* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSGMaterialShader_RenderState, &a0))
        {
            sipCpp = new QSGMaterialShader::RenderState(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSGMaterialShader_RenderState[] = {
    {SIP_MLNAME_CAST(sipName_combinedMatrix), meth_QSGMaterialShader_RenderState_combinedMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_combinedMatrix)},
    {SIP_MLNAME_CAST(sipName_context), meth_QSGMaterialShader_RenderState_context, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_context)},
    {SIP_MLNAME_CAST(sipName_determinant), meth_QSGMaterialShader_RenderState_determinant, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_determinant)},
    {SIP_MLNAME_CAST(sipName_devicePixelRatio), meth_QSGMaterialShader_RenderState_devicePixelRatio, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_devicePixelRatio)},
    {SIP_MLNAME_CAST(sipName_deviceRect), meth_QSGMaterialShader_RenderState_deviceRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_deviceRect)},
    {SIP_MLNAME_CAST(sipName_dirtyStates), meth_QSGMaterialShader_RenderState_dirtyStates, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_dirtyStates)},
    {SIP_MLNAME_CAST(sipName_isMatrixDirty), meth_QSGMaterialShader_RenderState_isMatrixDirty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_isMatrixDirty)},
    {SIP_MLNAME_CAST(sipName_isOpacityDirty), meth_QSGMaterialShader_RenderState_isOpacityDirty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_isOpacityDirty)},
    {SIP_MLNAME_CAST(sipName_modelViewMatrix), meth_QSGMaterialShader_RenderState_modelViewMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_modelViewMatrix)},
    {SIP_MLNAME_CAST(sipName_opacity), meth_QSGMaterialShader_RenderState_opacity, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_opacity)},
    {SIP_MLNAME_CAST(sipName_projectionMatrix), meth_QSGMaterialShader_RenderState_projectionMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_projectionMatrix)},
    {SIP_MLNAME_CAST(sipName_viewportRect), meth_QSGMaterialShader_RenderState_viewportRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGMaterialShader_RenderState_viewportRect)}
};

static sipEnumMemberDef enummembers_QSGMaterialShader_RenderState[] = {
    {sipName_DirtyMatrix, static_cast<int>(QSGMaterialShader::RenderState::DirtyMatrix), 50},
    {sipName_DirtyOpacity, static_cast<int>(QSGMaterialShader::RenderState::DirtyOpacity), 50},
};

PyDoc_STRVAR(doc_QSGMaterialShader_RenderState, "\1QSGMaterialShader.RenderState()\n"
    "QSGMaterialShader.RenderState(QSGMaterialShader.RenderState)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGMaterialShader_RenderState = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGMaterialShader__RenderState,
        {0}
    },
    {
        sipNameNr_RenderState,
        {48, 255, 0},
        12, methods_QSGMaterialShader_RenderState,
        2, enummembers_QSGMaterialShader_RenderState,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGMaterialShader_RenderState,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSGMaterialShader_RenderState,
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
    dealloc_QSGMaterialShader_RenderState,
    assign_QSGMaterialShader_RenderState,
    array_QSGMaterialShader_RenderState,
    copy_QSGMaterialShader_RenderState,
    release_QSGMaterialShader_RenderState,
    cast_QSGMaterialShader_RenderState,
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
