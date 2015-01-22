TEMPLATE = lib
CONFIG += warn_on plugin
QT += multimedia
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtMultimedia.pyd
    target.files = QtMultimedia.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtMultimedia.so
    target.files = QtMultimedia.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtMultimedia
sip.files = ../sip/QtMultimedia/qaudiooutput.sip ../sip/QtMultimedia/qmediaencodersettings.sip ../sip/QtMultimedia/qcameraimageprocessing.sip ../sip/QtMultimedia/qmediaresource.sip ../sip/QtMultimedia/qcamerainfo.sip ../sip/QtMultimedia/qradiotuner.sip ../sip/QtMultimedia/qaudiodecoder.sip ../sip/QtMultimedia/qaudiorecorder.sip ../sip/QtMultimedia/qcameraimagecapture.sip ../sip/QtMultimedia/qvideoprobe.sip ../sip/QtMultimedia/qmediacontent.sip ../sip/QtMultimedia/qaudiobuffer.sip ../sip/QtMultimedia/qvideoframe.sip ../sip/QtMultimedia/QtMultimediamod.sip ../sip/QtMultimedia/qcamera.sip ../sip/QtMultimedia/qpymultimedia_qlist.sip ../sip/QtMultimedia/qmediarecorder.sip ../sip/QtMultimedia/qmediabindableinterface.sip ../sip/QtMultimedia/qradiodata.sip ../sip/QtMultimedia/qsound.sip ../sip/QtMultimedia/qaudiodeviceinfo.sip ../sip/QtMultimedia/qaudioformat.sip ../sip/QtMultimedia/qvideosurfaceformat.sip ../sip/QtMultimedia/qmediaservice.sip ../sip/QtMultimedia/qmediametadata.sip ../sip/QtMultimedia/qaudioinput.sip ../sip/QtMultimedia/qmultimedia.sip ../sip/QtMultimedia/qmediaplaylist.sip ../sip/QtMultimedia/qmediaobject.sip ../sip/QtMultimedia/qmediaplayer.sip ../sip/QtMultimedia/qabstractvideosurface.sip ../sip/QtMultimedia/qmediacontrol.sip ../sip/QtMultimedia/qaudioprobe.sip ../sip/QtMultimedia/qabstractvideobuffer.sip ../sip/QtMultimedia/qaudio.sip ../sip/QtMultimedia/qcameraexposure.sip ../sip/QtMultimedia/qcamerafocus.sip ../sip/QtMultimedia/qsoundeffect.sip ../sip/QtMultimedia/qmediatimerange.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtMultimedia.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtMultimedia
HEADERS = sipAPIQtMultimedia.h
SOURCES = sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp sipQtMultimediaQAudioEncoderSettings.cpp sipQtMultimediaQCameraFocusZone.cpp sipQtMultimediaQCameraInfo.cpp sipQtMultimediaQCameraLockTypes.cpp sipQtMultimediaQCameraCaptureModes.cpp sipQtMultimediaQList0100QAudioDeviceInfo.cpp sipQtMultimediaQList0100QMediaTimeInterval.cpp sipQtMultimediaQMediaTimeInterval.cpp sipQtMultimediaQAudioDeviceInfo.cpp sipQtMultimediaQList0100QCameraFocusZone.cpp sipQtMultimediaQImageEncoderSettings.cpp sipQtMultimediaQList0100QCameraInfo.cpp sipQtMultimediaQAudioProbe.cpp sipQtMultimediaQAudioOutput.cpp sipQtMultimediaQAudioInput.cpp sipQtMultimediaQAbstractVideoBuffer.cpp sipQtMultimediaQMediaPlayerFlags.cpp sipQtMultimediaQMediaContent.cpp sipQtMultimediaQAudioFormat.cpp sipQtMultimediaQVideoProbe.cpp sipQtMultimediaQCameraImageCapture.cpp sipQtMultimediaQCameraExposureFlashModes.cpp sipQtMultimediaQMediaPlaylist.cpp sipQtMultimediaQMediaMetaData.cpp sipQtMultimediaQVideoSurfaceFormat.cpp sipQtMultimediaQList0100QAudioFormatEndian.cpp sipQtMultimediaQList0100QMediaResource.cpp sipQtMultimediaQSound.cpp sipQtMultimediaQMultimedia.cpp sipQtMultimediaQRadioData.cpp sipQtMultimediaQAudio.cpp sipQtMultimediaQCameraFocusFocusModes.cpp sipQtMultimediaQVideoFrame.cpp sipQtMultimediaQList0100QVideoFramePixelFormat.cpp sipQtMultimediaQMediaControl.cpp sipQtMultimediaQRadioTuner.cpp sipQtMultimediaQAudioDecoder.cpp sipQtMultimediaQVideoEncoderSettings.cpp sipQtMultimediaQAudioBuffer.cpp sipQtMultimediaQMediaTimeRange.cpp sipQtMultimediaQList0100QAudioFormatSampleType.cpp sipQtMultimediaQMediaResource.cpp sipQtMultimediaQAbstractVideoSurface.cpp sipQtMultimediaQCameraImageProcessing.cpp sipQtMultimediaQMediaBindableInterface.cpp sipQtMultimediaQSoundEffect.cpp sipQtMultimediacmodule.cpp sipQtMultimediaQMediaObject.cpp sipQtMultimediaQCameraFocus.cpp sipQtMultimediaQCameraExposure.cpp sipQtMultimediaQMediaPlayer.cpp sipQtMultimediaQMediaService.cpp sipQtMultimediaQCamera.cpp sipQtMultimediaQAudioRecorder.cpp sipQtMultimediaQList0100QMediaContent.cpp sipQtMultimediaQMediaRecorder.cpp
