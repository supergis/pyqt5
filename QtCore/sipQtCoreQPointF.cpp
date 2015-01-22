/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.6-snapshot-3c5425fa3c80 on Thu Jan 22 20:34:03 2015
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

#include "sipAPIQtCore.h"

#line 99 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQPointF.cpp"

#line 30 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQPointF.cpp"


PyDoc_STRVAR(doc_QPointF_isNull, "QPointF.isNull() -> bool");

extern "C" {static PyObject *meth_QPointF_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPointF_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPointF, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPointF, sipName_isNull, doc_QPointF_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QPointF_x, "QPointF.x() -> float");

extern "C" {static PyObject *meth_QPointF_x(PyObject *, PyObject *);}
static PyObject *meth_QPointF_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPointF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->x();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPointF, sipName_x, doc_QPointF_x);

    return NULL;
}


PyDoc_STRVAR(doc_QPointF_y, "QPointF.y() -> float");

extern "C" {static PyObject *meth_QPointF_y(PyObject *, PyObject *);}
static PyObject *meth_QPointF_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPointF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->y();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPointF, sipName_y, doc_QPointF_y);

    return NULL;
}


PyDoc_STRVAR(doc_QPointF_setX, "QPointF.setX(float)");

extern "C" {static PyObject *meth_QPointF_setX(PyObject *, PyObject *);}
static PyObject *meth_QPointF_setX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPointF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPointF, &sipCpp, &a0))
        {
            sipCpp->setX(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPointF, sipName_setX, doc_QPointF_setX);

    return NULL;
}


PyDoc_STRVAR(doc_QPointF_setY, "QPointF.setY(float)");

extern "C" {static PyObject *meth_QPointF_setY(PyObject *, PyObject *);}
static PyObject *meth_QPointF_setY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPointF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPointF, &sipCpp, &a0))
        {
            sipCpp->setY(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPointF, sipName_setY, doc_QPointF_setY);

    return NULL;
}


PyDoc_STRVAR(doc_QPointF_toPoint, "QPointF.toPoint() -> QPoint");

extern "C" {static PyObject *meth_QPointF_toPoint(PyObject *, PyObject *);}
static PyObject *meth_QPointF_toPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPointF, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->toPoint());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPointF, sipName_toPoint, doc_QPointF_toPoint);

    return NULL;
}


PyDoc_STRVAR(doc_QPointF_manhattanLength, "QPointF.manhattanLength() -> float");

extern "C" {static PyObject *meth_QPointF_manhattanLength(PyObject *, PyObject *);}
static PyObject *meth_QPointF_manhattanLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPointF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->manhattanLength();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPointF, sipName_manhattanLength, doc_QPointF_manhattanLength);

    return NULL;
}


PyDoc_STRVAR(doc_QPointF_dotProduct, "QPointF.dotProduct(QPointF, QPointF) -> float");

extern "C" {static PyObject *meth_QPointF_dotProduct(PyObject *, PyObject *);}
static PyObject *meth_QPointF_dotProduct(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        const QPointF* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1", sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State))
        {
            qreal sipRes;

            sipRes = QPointF::dotProduct(*a0,*a1);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPointF, sipName_dotProduct, doc_QPointF_dotProduct);

    return NULL;
}


extern "C" {static PyObject *slot_QPointF___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPointF, &a0, &a0State))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QPointF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPointF___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPointF, &a0, &a0State))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QPointF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPointF___add__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        const QPointF* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State))
        {
            QPointF*sipRes;

            sipRes = new QPointF((*a0 + *a1));
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPointF___sub__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        const QPointF* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State))
        {
            QPointF*sipRes;

            sipRes = new QPointF((*a0 - *a1));
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPointF___mul__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1d", sipType_QPointF, &a0, &a0State, &a1))
        {
            QPointF*sipRes;

            sipRes = new QPointF((*a0 * a1));
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    {
        qreal a0;
        const QPointF* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ1", &a0, sipType_QPointF, &a1, &a1State))
        {
            QPointF*sipRes;

            sipRes = new QPointF((a0 * *a1));
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPointF___div__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1d", sipType_QPointF, &a0, &a0State, &a1))
        {
            QPointF*sipRes;

            sipRes = new QPointF((*a0 / a1));
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QPointF___neg__(PyObject *);}
static PyObject *slot_QPointF___neg__(PyObject *sipSelf)
{
    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;


    {
        {
            QPointF*sipRes;

            sipRes = new QPointF(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPointF___pos__(PyObject *);}
static PyObject *slot_QPointF___pos__(PyObject *sipSelf)
{
    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;


    {
        {
            QPointF*sipRes;

            sipRes = new QPointF(+(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPointF___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPointF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QPointF::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPointF___imul__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPointF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QPointF::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPointF___isub__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPointF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPointF, &a0, &a0State))
        {
            sipCpp->QPointF::operator-=(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QPointF___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QPointF___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPointF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QPointF, &a0, &a0State))
        {
            sipCpp->QPointF::operator+=(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static int slot_QPointF___bool__(PyObject *);}
static int slot_QPointF___bool__(PyObject *sipSelf)
{
    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 178 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpoint.sip"
        sipRes = !sipCpp->isNull();
#line 690 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQPointF.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPointF___repr__(PyObject *);}
static PyObject *slot_QPointF___repr__(PyObject *sipSelf)
{
    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPointF));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 144 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpoint.sip"
        if (sipCpp->isNull())
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString("PyQt5.QtCore.QPointF()");
        #else
            sipRes = PyString_FromString("PyQt5.QtCore.QPointF()");
        #endif
        }
        else
        {
            PyObject *x = PyFloat_FromDouble(sipCpp->x());
            PyObject *y = PyFloat_FromDouble(sipCpp->y());
        
            if (x && y)
            {
        #if PY_MAJOR_VERSION >= 3
                sipRes = PyUnicode_FromFormat("PyQt5.QtCore.QPointF(%R, %R)", x, y);
        #else
                sipRes = PyString_FromString("PyQt5.QtCore.QPointF(");
                PyString_ConcatAndDel(&sipRes, PyObject_Repr(x));
                PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
                PyString_ConcatAndDel(&sipRes, PyObject_Repr(y));
                PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
            }
        
            Py_XDECREF(x);
            Py_XDECREF(y);
        }
#line 743 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQPointF.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPointF(void *, const sipTypeDef *);}
static void *cast_QPointF(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPointF)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPointF(void *, int);}
static void release_QPointF(void *sipCppV,int)
{
    delete reinterpret_cast<QPointF *>(sipCppV);
}


extern "C" {static PyObject *pickle_QPointF(void *);}
static PyObject *pickle_QPointF(void *sipCppV)
{
    QPointF *sipCpp = reinterpret_cast<QPointF *>(sipCppV);
    PyObject *sipRes;

#line 135 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpoint.sip"
    sipRes = Py_BuildValue((char *)"dd", sipCpp->x(), sipCpp->y());
#line 780 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQPointF.cpp"

    return sipRes;
}


extern "C" {static void assign_QPointF(void *, SIP_SSIZE_T, const void *);}
static void assign_QPointF(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPointF *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPointF *>(sipSrc);
}


extern "C" {static void *array_QPointF(SIP_SSIZE_T);}
static void *array_QPointF(SIP_SSIZE_T sipNrElem)
{
    return new QPointF[sipNrElem];
}


extern "C" {static void *copy_QPointF(const void *, SIP_SSIZE_T);}
static void *copy_QPointF(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPointF(reinterpret_cast<const QPointF *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPointF(sipSimpleWrapper *);}
static void dealloc_QPointF(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPointF(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPointF(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPointF(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPointF *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPointF();

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dd", &a0, &a1))
        {
            sipCpp = new QPointF(a0,a1);

            return sipCpp;
        }
    }

    {
        const QPoint* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPoint, &a0))
        {
            sipCpp = new QPointF(*a0);

            return sipCpp;
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QPointF, &a0, &a0State))
        {
            sipCpp = new QPointF(*a0);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QPointF(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPointF(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPointF **sipCppPtr = reinterpret_cast<QPointF **>(sipCppPtrV);

#line 103 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qpoint.sip"
// Allow a QPoint whenever a QPointF is expected.  This is mainly to help source
// compatibility for Qt5.

if (sipIsErr == NULL)
    return (sipCanConvertToType(sipPy, sipType_QPointF, SIP_NO_CONVERTORS) ||
            sipCanConvertToType(sipPy, sipType_QPoint, 0));

if (sipCanConvertToType(sipPy, sipType_QPointF, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QPointF *>(sipConvertToType(sipPy, sipType_QPointF, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

int state;

QPoint *pt = reinterpret_cast<QPoint *>(sipConvertToType(sipPy, sipType_QPoint, 0, 0, &state, sipIsErr));

if (*sipIsErr)
{
    sipReleaseType(pt, sipType_QPoint, state);
    return 0;
}

*sipCppPtr = new QPointF(*pt);

sipReleaseType(pt, sipType_QPoint, state);

return sipGetState(sipTransferObj);
#line 906 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQPointF.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPointF[] = {
    {(void *)slot_QPointF___eq__, eq_slot},
    {(void *)slot_QPointF___ne__, ne_slot},
    {(void *)slot_QPointF___add__, add_slot},
    {(void *)slot_QPointF___sub__, sub_slot},
    {(void *)slot_QPointF___mul__, mul_slot},
    {(void *)slot_QPointF___div__, div_slot},
    {(void *)slot_QPointF___neg__, neg_slot},
    {(void *)slot_QPointF___pos__, pos_slot},
    {(void *)slot_QPointF___idiv__, idiv_slot},
    {(void *)slot_QPointF___imul__, imul_slot},
    {(void *)slot_QPointF___isub__, isub_slot},
    {(void *)slot_QPointF___iadd__, iadd_slot},
    {(void *)slot_QPointF___bool__, bool_slot},
    {(void *)slot_QPointF___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPointF[] = {
    {SIP_MLNAME_CAST(sipName_dotProduct), meth_QPointF_dotProduct, METH_VARARGS, SIP_MLDOC_CAST(doc_QPointF_dotProduct)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPointF_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QPointF_isNull)},
    {SIP_MLNAME_CAST(sipName_manhattanLength), meth_QPointF_manhattanLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QPointF_manhattanLength)},
    {SIP_MLNAME_CAST(sipName_setX), meth_QPointF_setX, METH_VARARGS, SIP_MLDOC_CAST(doc_QPointF_setX)},
    {SIP_MLNAME_CAST(sipName_setY), meth_QPointF_setY, METH_VARARGS, SIP_MLDOC_CAST(doc_QPointF_setY)},
    {SIP_MLNAME_CAST(sipName_toPoint), meth_QPointF_toPoint, METH_VARARGS, SIP_MLDOC_CAST(doc_QPointF_toPoint)},
    {SIP_MLNAME_CAST(sipName_x), meth_QPointF_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QPointF_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QPointF_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QPointF_y)}
};

PyDoc_STRVAR(doc_QPointF, "\1QPointF()\n"
    "QPointF(float, float)\n"
    "QPointF(QPoint)\n"
    "QPointF(QPointF)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QPointF = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPointF,
        {0}
    },
    {
        sipNameNr_QPointF,
        {0, 0, 1},
        8, methods_QPointF,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPointF,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPointF,
    init_type_QPointF,
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
    dealloc_QPointF,
    assign_QPointF,
    array_QPointF,
    copy_QPointF,
    release_QPointF,
    cast_QPointF,
    convertTo_QPointF,
    0,
    0,
    pickle_QPointF,
    0,
    0
},
    0,
    0,
    0,
    0
};
