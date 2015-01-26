TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtCore.pyd
    target.files = QtCore.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtCore.so
    target.files = QtCore.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtCore
sip.files = ../sip/QtCore/qpropertyanimation.sip ../sip/QtCore/qthread.sip ../sip/QtCore/qnamespace.sip ../sip/QtCore/qregexp.sip ../sip/QtCore/qsize.sip ../sip/QtCore/qpycore_qlist.sip ../sip/QtCore/qmessageauthenticationcode.sip ../sip/QtCore/qtimer.sip ../sip/QtCore/qline.sip ../sip/QtCore/QtCoremod.sip ../sip/QtCore/qbasictimer.sip ../sip/QtCore/qsysinfo.sip ../sip/QtCore/qpycore_qhash.sip ../sip/QtCore/qurl.sip ../sip/QtCore/qvariantanimation.sip ../sip/QtCore/qiodevice.sip ../sip/QtCore/qpair.sip ../sip/QtCore/qtimezone.sip ../sip/QtCore/qpluginloader.sip ../sip/QtCore/qabstractproxymodel.sip ../sip/QtCore/qpauseanimation.sip ../sip/QtCore/qobjectcleanuphandler.sip ../sip/QtCore/qxmlstream.sip ../sip/QtCore/qlibrary.sip ../sip/QtCore/qabstractitemmodel.sip ../sip/QtCore/qcommandlineoption.sip ../sip/QtCore/qlibraryinfo.sip ../sip/QtCore/qtranslator.sip ../sip/QtCore/qsettings.sip ../sip/QtCore/qmimedatabase.sip ../sip/QtCore/qsocketnotifier.sip ../sip/QtCore/qmutex.sip ../sip/QtCore/qtemporaryfile.sip ../sip/QtCore/qhash.sip ../sip/QtCore/qfilesystemwatcher.sip ../sip/QtCore/qrect.sip ../sip/QtCore/qlist.sip ../sip/QtCore/qpycore_qpair.sip ../sip/QtCore/qitemselectionmodel.sip ../sip/QtCore/qcryptographichash.sip ../sip/QtCore/qstringlistmodel.sip ../sip/QtCore/qabstractnativeeventfilter.sip ../sip/QtCore/qabstracttransition.sip ../sip/QtCore/qdatastream.sip ../sip/QtCore/qdiriterator.sip ../sip/QtCore/qeventloop.sip ../sip/QtCore/qbytearray.sip ../sip/QtCore/qelapsedtimer.sip ../sip/QtCore/qpycore_qstringlist.sip ../sip/QtCore/qtextboundaryfinder.sip ../sip/QtCore/qtextstream.sip ../sip/QtCore/qpoint.sip ../sip/QtCore/qpycore_qmap.sip ../sip/QtCore/qset.sip ../sip/QtCore/qjsonobject.sip ../sip/QtCore/qobjectdefs.sip ../sip/QtCore/qmetatype.sip ../sip/QtCore/qanimationgroup.sip ../sip/QtCore/qobject.sip ../sip/QtCore/qsignalmapper.sip ../sip/QtCore/qjsondocument.sip ../sip/QtCore/qhistorystate.sip ../sip/QtCore/qvector.sip ../sip/QtCore/qstorageinfo.sip ../sip/QtCore/qrunnable.sip ../sip/QtCore/qchar.sip ../sip/QtCore/qpycore_qset.sip ../sip/QtCore/qvariant.sip ../sip/QtCore/qfileselector.sip ../sip/QtCore/qsavefile.sip ../sip/QtCore/qpycore_qvector.sip ../sip/QtCore/qbitarray.sip ../sip/QtCore/qcoreevent.sip ../sip/QtCore/qjsonarray.sip ../sip/QtCore/qsequentialanimationgroup.sip ../sip/QtCore/quuid.sip ../sip/QtCore/qstate.sip ../sip/QtCore/qglobal.sip ../sip/QtCore/qstring.sip ../sip/QtCore/qfileinfo.sip ../sip/QtCore/qwineventnotifier.sip ../sip/QtCore/qeasingcurve.sip ../sip/QtCore/qtimeline.sip ../sip/QtCore/qtextcodec.sip ../sip/QtCore/qsharedmemory.sip ../sip/QtCore/qstatemachine.sip ../sip/QtCore/qpycore_virtual_error_handler.sip ../sip/QtCore/qbuffer.sip ../sip/QtCore/qsystemsemaphore.sip ../sip/QtCore/qfile.sip ../sip/QtCore/qparallelanimationgroup.sip ../sip/QtCore/qfinalstate.sip ../sip/QtCore/qbytearraymatcher.sip ../sip/QtCore/qmimetype.sip ../sip/QtCore/qdatetime.sip ../sip/QtCore/qmap.sip ../sip/QtCore/qmargins.sip ../sip/QtCore/qurlquery.sip ../sip/QtCore/qstandardpaths.sip ../sip/QtCore/qresource.sip ../sip/QtCore/qeventtransition.sip ../sip/QtCore/qreadwritelock.sip ../sip/QtCore/qlogging.sip ../sip/QtCore/qlocale.sip ../sip/QtCore/qidentityproxymodel.sip ../sip/QtCore/qcoreapplication.sip ../sip/QtCore/qsignaltransition.sip ../sip/QtCore/qabstracteventdispatcher.sip ../sip/QtCore/qabstractstate.sip ../sip/QtCore/qthreadpool.sip ../sip/QtCore/qlockfile.sip ../sip/QtCore/qcollator.sip ../sip/QtCore/qjsonvalue.sip ../sip/QtCore/qtemporarydir.sip ../sip/QtCore/qmimedata.sip ../sip/QtCore/qsemaphore.sip ../sip/QtCore/qregularexpression.sip ../sip/QtCore/qcommandlineparser.sip ../sip/QtCore/qdir.sip ../sip/QtCore/qstringlist.sip ../sip/QtCore/qprocess.sip ../sip/QtCore/qwaitcondition.sip ../sip/QtCore/qfiledevice.sip ../sip/QtCore/qnumeric.sip ../sip/QtCore/qsortfilterproxymodel.sip ../sip/QtCore/qabstractanimation.sip ../sip/QtCore/qmetaobject.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtCore.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtCore

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtCore
HEADERS = sipAPIQtCore.h ../qpy/QtCore/qpycore_enums_flags.h ../qpy/QtCore/qpycore_pyqtboundsignal.h ../qpy/QtCore/qpycore_misc.h ../qpy/QtCore/qpycore_pyqtproperty.h ../qpy/QtCore/qpycore_api.h ../qpy/QtCore/qpycore_pyqtslotproxy.h ../qpy/QtCore/qpycore_pyqtsignal.h ../qpy/QtCore/qpycore_chimera.h ../qpy/QtCore/qpycore_qobject_helpers.h ../qpy/QtCore/qpycore_qmetaobjectbuilder.h ../qpy/QtCore/qpycore_objectified_strings.h ../qpy/QtCore/qpycore_sip.h ../qpy/QtCore/qpycore_namespace.h ../qpy/QtCore/qpycore_pyqtpyobject.h ../qpy/QtCore/qpycore_pyqtmethodproxy.h ../qpy/QtCore/qpycore_public_api.h ../qpy/QtCore/qpycore_types.h ../qpy/QtCore/qpycore_classinfo.h ../qpy/QtCore/qpycore_pyqtslot.h
SOURCES = sipQtCoreQtMatchFlags.cpp sipQtCoreQList2400.cpp sipQtCoreQMessageAuthenticationCode.cpp sipQtCoreQSize.cpp sipQtCoreQFileSystemWatcher.cpp sipQtCoreQParallelAnimationGroup.cpp sipQtCoreQUrlUserInputResolutionOptions.cpp sipQtCoreQAbstractItemModel.cpp sipQtCoreQLineF.cpp sipQtCoreQTimeLine.cpp sipQtCoreQRegExp.cpp sipQtCoreQSequentialAnimationGroup.cpp sipQtCoreQList0100QModelIndex.cpp sipQtCoreQtInputMethodHints.cpp sipQtCoreQtDockWidgetAreas.cpp sipQtCoreQtDropActions.cpp sipQtCoreQObject.cpp sipQtCoreQSignalMapper.cpp sipQtCoreQMimeData.cpp sipQtCoreQLocale.cpp sipQtCoreQBitArray.cpp sipQtCoreQtMouseEventFlags.cpp sipQtCoreQReadWriteLock.cpp sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp sipQtCoreQCommandLineOption.cpp sipQtCoreQSemaphore.cpp sipQtCoreQProcess.cpp sipQtCoreQEasingCurve.cpp sipQtCoreQXmlStreamAttributes.cpp sipQtCoreQDateTime.cpp sipQtCoreQtTextInteractionFlags.cpp sipQtCoreQRect.cpp sipQtCoreQSettings.cpp sipQtCoreQProcessEnvironment.cpp sipQtCoreQTextEncoder.cpp sipQtCoreQResource.cpp sipQtCoreQCollator.cpp sipQtCoreQList1800.cpp sipQtCoreQPair18001800.cpp sipQtCoreQVariant.cpp sipQtCoreQList0100QFileInfo.cpp sipQtCoreQList0100QStorageInfo.cpp sipQtCoreQSizeF.cpp sipQtCoreQList0100QLocale.cpp sipQtCoreQTranslator.cpp qpycore_post_init.cpp sipQtCoreQMessageLogContext.cpp sipQtCoreQPauseAnimation.cpp sipQtCoreQList0600QPair0100QString0100QString.cpp sipQtCoreQStateMachineWrappedEvent.cpp sipQtCoreQFileDevicePermissions.cpp sipQtCoreQState.cpp sipQtCoreQtInputMethodQueries.cpp sipQtCoreQtWindowStates.cpp sipQtCoreQTextCodec.cpp sipQtCoreQList0100QMimeType.cpp sipQtCoreQTemporaryFile.cpp sipQtCoreQList0100QUrl.cpp sipQtCoreQLibraryLoadHints.cpp sipQtCoreQWaitCondition.cpp sipQtCoreQFinalState.cpp sipQtCoreQXmlStreamEntityResolver.cpp sipQtCoreQItemSelection.cpp sipQtCoreQStringList.cpp sipQtCoreQVector0100QPointF.cpp sipQtCoreQFileDevice.cpp sipQtCoreQUrlQuery.cpp sipQtCoreQVector1800.cpp sipQtCoreQUrlFormattingOptions.cpp sipQtCoreQObjectCleanupHandler.cpp sipQtCoreQTextStreamManipulator.cpp sipQtCoreQFileSelector.cpp sipQtCoreQtKeyboardModifiers.cpp sipQtCoreQAnimationGroup.cpp sipQtCoreQDate.cpp sipQtCoreQGenericReturnArgument.cpp sipQtCoreQPointF.cpp sipQtCoreQWriteLocker.cpp sipQtCoreQTimeZone.cpp sipQtCoreQString.cpp sipQtCoreQMutex.cpp sipQtCoreQDir.cpp sipQtCoreQItemSelectionRange.cpp sipQtCoreQtWindowFlags.cpp sipQtCoreQLine.cpp sipQtCoreQBasicTimer.cpp sipQtCoreQList0100QVariant.cpp sipQtCoreQTextStream.cpp sipQtCoreQJsonObject.cpp sipQtCoreQGenericArgument.cpp sipQtCoreQList0100QCommandLineOption.cpp sipQtCoreQRegularExpression.cpp sipQtCorequintptr.cpp sipQtCoreQAbstractProxyModel.cpp sipQtCoreQChar.cpp sipQtCoreQSysInfo.cpp sipQtCoreQList0101QAbstractState.cpp sipQtCoreQSharedMemory.cpp sipQtCoreQModelIndex.cpp sipQtCoreQMimeDatabase.cpp sipQtCoreQStringListModel.cpp sipQtCoreQDynamicPropertyChangeEvent.cpp sipQtCoreQXmlStreamAttribute.cpp sipQtCoreQPropertyAnimation.cpp sipQtCoreQSignalTransition.cpp sipQtCoreQEventLoopProcessEventsFlags.cpp sipQtCoreQRegularExpressionMatch.cpp sipQtCoreQSet0101QAbstractState.cpp sipQtCoreQAbstractState.cpp sipQtCoreQStorageInfo.cpp sipQtCoreQEventLoopLocker.cpp sipQtCoreQStandardPaths.cpp sipQtCoreQXmlStreamNamespaceDeclaration.cpp sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp sipQtCoreQIODeviceOpenMode.cpp sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp sipQtCoreQItemSelectionModelSelectionFlags.cpp sipQtCoreQMetaMethod.cpp sipQtCoreQRectF.cpp sipQtCoreQCryptographicHash.cpp sipQtCoreQTextCodecConverterState.cpp sipQtCoreQFileInfo.cpp sipQtCoreQJsonArray.cpp sipQtCoreQMargins.cpp sipQtCoreQItemSelectionModel.cpp sipQtCoreQByteArrayBase64Options.cpp sipQtCoreQTimeZoneOffsetData.cpp sipQtCoreQSortFilterProxyModel.cpp sipQtCoreQMimeType.cpp sipQtCoreQXmlStreamWriter.cpp sipQtCoreQtEdges.cpp sipQtCoreQRunnable.cpp sipQtCoreQVector0100QTimeZoneOffsetData.cpp sipQtCoreQByteArrayMatcher.cpp sipQtCoreQTime.cpp sipQtCoreQLocaleNumberOptions.cpp sipQtCoreQtItemFlags.cpp sipQtCoreQIODevice.cpp sipQtCoreQMutexLocker.cpp sipQtCoreQJsonValue.cpp sipQtCoreQFileDeviceFileHandleFlags.cpp sipQtCoreQtImageConversionFlags.cpp sipQtCoreQMap18000100QVariant.cpp sipQtCoreQXmlStreamEntityDeclaration.cpp sipQtCoreQLockFile.cpp sipQtCoreQByteArray.cpp sipQtCoreQtAlignment.cpp sipQtCoreQEventTransition.cpp sipQtCoreQRegularExpressionMatchOptions.cpp sipQtCoreQMetaClassInfo.cpp sipQtCoreQSignalBlocker.cpp sipQtCoreQMap0100QString0100QVariant.cpp sipQtCoreQJsonParseError.cpp sipQtCoreQHash0100QString0100QVariant.cpp sipQtCoreQBuffer.cpp sipQtCoreQReadLocker.cpp sipQtCoreQDirIteratorIteratorFlags.cpp sipQtCoreQAbstractNativeEventFilter.cpp sipQtCoreQDirSortFlags.cpp sipQtCoreQMetaProperty.cpp sipQtCoreQList0100QtDayOfWeek.cpp sipQtCoreQList0100QPersistentModelIndex.cpp sipQtCoreQMarginsF.cpp sipQtCoreQJsonDocument.cpp sipQtCoreQtTouchPointStates.cpp sipQtCoreQAbstractAnimation.cpp sipQtCoreQCoreApplication.cpp sipQtCoreQLibraryInfo.cpp sipQtCoreQXmlStreamReader.cpp sipQtCoreQPersistentModelIndex.cpp sipQtCoreQCollatorSortKey.cpp sipQtCoreQList0600QPair18001800.cpp sipQtCoreQXmlStreamNotationDeclaration.cpp sipQtCoreQTimer.cpp sipQtCoreQAbstractTransition.cpp sipQtCoreQEventLoop.cpp sipQtCoreQtFindChildOptions.cpp sipQtCoreQThread.cpp sipQtCoreQChildEvent.cpp sipQtCoreQLibrary.cpp sipQtCoreQTextBoundaryFinder.cpp sipQtCoreQUuid.cpp sipQtCoreQMetaEnum.cpp sipQtCoreQUrlComponentFormattingOptions.cpp sipQtCoreQMessageLogger.cpp sipQtCoreQVariantAnimation.cpp sipQtCoreQDataStream.cpp sipQtCoreQEvent.cpp sipQtCorecmodule.cpp sipQtCoreQDirFilters.cpp sipQtCoreQTextDecoder.cpp sipQtCoreQAbstractEventDispatcherTimerInfo.cpp sipQtCoreQtToolBarAreas.cpp sipQtCoreQPoint.cpp sipQtCoreQTemporaryDir.cpp sipQtCoreQtGestureFlags.cpp sipQtCoreQHistoryState.cpp sipQtCoreQDirIterator.cpp sipQtCoreQStateMachineSignalEvent.cpp sipQtCoreQStateMachine.cpp sipQtCoreQRegularExpressionPatternOptions.cpp sipQtCoreQTextStreamNumberFlags.cpp sipQtCoreQAbstractEventDispatcher.cpp sipQtCoreQThreadPool.cpp sipQtCoreQStandardPathsLocateOptions.cpp sipQtCoreQElapsedTimer.cpp sipQtCoreQtOrientations.cpp sipQtCoreQList0101QAbstractAnimation.cpp sipQtCoreQList0100QAbstractEventDispatcherTimerInfo.cpp sipQtCoreQSocketNotifier.cpp sipQtCoreQMetaType.cpp sipQtCoreQSaveFile.cpp sipQtCoreqintptr.cpp sipQtCoreQtScreenOrientations.cpp sipQtCoreQTextCodecConversionFlags.cpp sipQtCoreQMetaObject.cpp sipQtCoreQList0101QAbstractTransition.cpp sipQtCoreQt.cpp sipQtCoreQList0101QObject.cpp sipQtCoreQStringRef.cpp sipQtCoreQTimerEvent.cpp sipQtCoreQVector0600QPair24000100QVariant.cpp sipQtCoreQRegularExpressionMatchIterator.cpp sipQtCoreQCommandLineParser.cpp sipQtCoreQUrl.cpp sipQtCoreQAbstractListModel.cpp sipQtCoreQVector0100QXmlStreamEntityDeclaration.cpp sipQtCoreQMetaTypeTypeFlags.cpp sipQtCoreQFile.cpp sipQtCoreQPluginLoader.cpp sipQtCoreQtApplicationStates.cpp sipQtCoreQHash18000100QByteArray.cpp sipQtCoreQAbstractTableModel.cpp sipQtCoreQtMouseButtons.cpp sipQtCoreQList0100QByteArray.cpp sipQtCoreQIdentityProxyModel.cpp sipQtCoreQSystemSemaphore.cpp ../qpy/QtCore/qpycore_pyqtslot.cpp ../qpy/QtCore/qpycore_types.cpp ../qpy/QtCore/qpycore_pyqtproperty.cpp ../qpy/QtCore/qpycore_pyqtboundsignal.cpp ../qpy/QtCore/qpycore_qobject_helpers.cpp ../qpy/QtCore/qpycore_init.cpp ../qpy/QtCore/qpycore_chimera_signature.cpp ../qpy/QtCore/qpycore_qstringlist.cpp ../qpy/QtCore/qpycore_misc.cpp ../qpy/QtCore/qpycore_public_api.cpp ../qpy/QtCore/qpycore_pyqtconfigure.cpp ../qpy/QtCore/qpycore_chimera.cpp ../qpy/QtCore/qpycore_qmessagelogger.cpp ../qpy/QtCore/qpycore_chimera_storage.cpp ../qpy/QtCore/qpycore_decorators.cpp ../qpy/QtCore/qpycore_pyqtpyobject.cpp ../qpy/QtCore/qpycore_qvariant_value.cpp ../qpy/QtCore/qpycore_pyqtsignal.cpp ../qpy/QtCore/qpycore_qmetaobject_helpers.cpp ../qpy/QtCore/qpycore_qobject_getattr.cpp ../qpy/QtCore/qpycore_classinfo.cpp ../qpy/QtCore/qpycore_qstring.cpp ../qpy/QtCore/qpycore_qvariant.cpp ../qpy/QtCore/qpycore_pyqtslotproxy.cpp ../qpy/QtCore/qpycore_qmetaobject.cpp ../qpy/QtCore/qpycore_qjsonvalue.cpp ../qpy/QtCore/qpycore_pyqtmethodproxy.cpp ../qpy/QtCore/qpycore_enums_flags.cpp