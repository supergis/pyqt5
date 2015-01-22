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

#line 24 "/home/supermap/OpenThings/pyqt5/sip/QtCore/qsysinfo.sip"
#include <qsysinfo.h>
#line 29 "/home/supermap/OpenThings/pyqt5/QtCore/sipQtCoreQSysInfo.cpp"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSysInfo(void *, const sipTypeDef *);}
static void *cast_QSysInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSysInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSysInfo(void *, int);}
static void release_QSysInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QSysInfo *>(sipCppV);
}


extern "C" {static void assign_QSysInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QSysInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSysInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSysInfo *>(sipSrc);
}


extern "C" {static void *array_QSysInfo(SIP_SSIZE_T);}
static void *array_QSysInfo(SIP_SSIZE_T sipNrElem)
{
    return new QSysInfo[sipNrElem];
}


extern "C" {static void *copy_QSysInfo(const void *, SIP_SSIZE_T);}
static void *copy_QSysInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSysInfo(reinterpret_cast<const QSysInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSysInfo(sipSimpleWrapper *);}
static void dealloc_QSysInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSysInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSysInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSysInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSysInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSysInfo();

            return sipCpp;
        }
    }

    {
        const QSysInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSysInfo, &a0))
        {
            sipCpp = new QSysInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}

static sipEnumMemberDef enummembers_QSysInfo[] = {
    {sipName_BigEndian, static_cast<int>(QSysInfo::BigEndian), 235},
    {sipName_ByteOrder, static_cast<int>(QSysInfo::ByteOrder), 235},
    {sipName_LittleEndian, static_cast<int>(QSysInfo::LittleEndian), 235},
    {sipName_WordSize, static_cast<int>(QSysInfo::WordSize), 236},
};

PyDoc_STRVAR(doc_QSysInfo, "\1QSysInfo()\n"
    "QSysInfo(QSysInfo)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QSysInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSysInfo,
        {0}
    },
    {
        sipNameNr_QSysInfo,
        {0, 0, 1},
        0, 0,
        4, enummembers_QSysInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSysInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSysInfo,
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
    dealloc_QSysInfo,
    assign_QSysInfo,
    array_QSysInfo,
    copy_QSysInfo,
    release_QSysInfo,
    cast_QSysInfo,
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
