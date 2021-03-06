#############################################################################
# Makefile for building: openpiv-c++
# Generated by qmake (2.01a) (Qt 4.8.6) on: Thu Mar 5 20:52:43 2015
# Project:  openpiv-c++.pro
# Template: app
# Command: /usr/lib/i386-linux-gnu/qt4/bin/qmake -o Makefile openpiv-c++.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_XML_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4 -I. -Isrc -I_build -I_build
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -ltiff -lfftw3 -lQtXml -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/i386-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = _build/

####### Files

SOURCES       = src/main.cpp \
		src/mainwindow.cpp \
		src/imagedata.cpp \
		src/pivdisplay.cpp \
		src/imagepaint.cpp \
		src/imagelist.cpp \
		src/importimages.cpp \
		src/importimagelist.cpp \
		src/maskdropdown.cpp \
		src/itempaint.cpp \
		src/settings.cpp \
		src/processing.cpp \
		src/fftcrosscorrelate.cpp \
		src/pivdata.cpp \
		src/gaussiansubpixel.cpp \
		src/datacontainer.cpp \
		src/filters.cpp \
		src/analysis.cpp \
		src/filteroptions.cpp \
		src/pivengine.cpp \
		src/output.cpp \
		src/vectorlist.cpp \
		src/batchwindow.cpp \
		src/pivthread.cpp \
		src/outputthread.cpp \
		src/colourbar.cpp \
		src/session.cpp \
		src/generategrid.cpp _build/moc_mainwindow.cpp \
		_build/moc_pivdisplay.cpp \
		_build/moc_imagelist.cpp \
		_build/moc_importimages.cpp \
		_build/moc_importimagelist.cpp \
		_build/moc_maskdropdown.cpp \
		_build/moc_itempaint.cpp \
		_build/moc_settings.cpp \
		_build/moc_processing.cpp \
		_build/moc_datacontainer.cpp \
		_build/moc_analysis.cpp \
		_build/moc_output.cpp \
		_build/moc_vectorlist.cpp \
		_build/moc_batchwindow.cpp \
		_build/moc_pivthread.cpp \
		_build/moc_outputthread.cpp \
		_build/moc_colourbar.cpp \
		_build/moc_session.cpp \
		_build/qrc_icons.cpp \
		_build/qrc_images.cpp
OBJECTS       = _build/main.o \
		_build/mainwindow.o \
		_build/imagedata.o \
		_build/pivdisplay.o \
		_build/imagepaint.o \
		_build/imagelist.o \
		_build/importimages.o \
		_build/importimagelist.o \
		_build/maskdropdown.o \
		_build/itempaint.o \
		_build/settings.o \
		_build/processing.o \
		_build/fftcrosscorrelate.o \
		_build/pivdata.o \
		_build/gaussiansubpixel.o \
		_build/datacontainer.o \
		_build/filters.o \
		_build/analysis.o \
		_build/filteroptions.o \
		_build/pivengine.o \
		_build/output.o \
		_build/vectorlist.o \
		_build/batchwindow.o \
		_build/pivthread.o \
		_build/outputthread.o \
		_build/colourbar.o \
		_build/session.o \
		_build/generategrid.o \
		_build/moc_mainwindow.o \
		_build/moc_pivdisplay.o \
		_build/moc_imagelist.o \
		_build/moc_importimages.o \
		_build/moc_importimagelist.o \
		_build/moc_maskdropdown.o \
		_build/moc_itempaint.o \
		_build/moc_settings.o \
		_build/moc_processing.o \
		_build/moc_datacontainer.o \
		_build/moc_analysis.o \
		_build/moc_output.o \
		_build/moc_vectorlist.o \
		_build/moc_batchwindow.o \
		_build/moc_pivthread.o \
		_build/moc_outputthread.o \
		_build/moc_colourbar.o \
		_build/moc_session.o \
		_build/qrc_icons.o \
		_build/qrc_images.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		libtiff.pri \
		fftw.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		openpiv-c++.pro
QMAKE_TARGET  = openpiv-c++
DESTDIR       = 
TARGET        = openpiv-c++

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): _build/ui_mainwindow.h _build/ui_importimages.h _build/ui_batchwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: openpiv-c++.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		libtiff.pri \
		fftw.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/i386-linux-gnu/libQtXml.prl \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile openpiv-c++.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
libtiff.pri:
fftw.pri:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/i386-linux-gnu/libQtXml.prl:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile openpiv-c++.pro

dist: 
	@$(CHK_DIR_EXISTS) _build/openpiv-c++1.0.0 || $(MKDIR) _build/openpiv-c++1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) _build/openpiv-c++1.0.0/ && $(COPY_FILE) --parents src/mainwindow.h src/imagedata.h src/pivdisplay.h src/imagepaint.h src/imagelist.h src/importimages.h src/importimagelist.h src/maskdropdown.h src/itempaint.h src/settings.h src/processing.h src/fftcrosscorrelate.h src/pivdata.h src/gaussiansubpixel.h src/datacontainer.h src/filters.h src/analysis.h src/filteroptions.h src/pivengine.h src/output.h src/vectorlist.h src/batchwindow.h src/pivthread.h src/outputthread.h src/colourbar.h src/session.h src/generategrid.h _build/openpiv-c++1.0.0/ && $(COPY_FILE) --parents share/icons/icons.qrc share/images/images.qrc _build/openpiv-c++1.0.0/ && $(COPY_FILE) --parents src/main.cpp src/mainwindow.cpp src/imagedata.cpp src/pivdisplay.cpp src/imagepaint.cpp src/imagelist.cpp src/importimages.cpp src/importimagelist.cpp src/maskdropdown.cpp src/itempaint.cpp src/settings.cpp src/processing.cpp src/fftcrosscorrelate.cpp src/pivdata.cpp src/gaussiansubpixel.cpp src/datacontainer.cpp src/filters.cpp src/analysis.cpp src/filteroptions.cpp src/pivengine.cpp src/output.cpp src/vectorlist.cpp src/batchwindow.cpp src/pivthread.cpp src/outputthread.cpp src/colourbar.cpp src/session.cpp src/generategrid.cpp _build/openpiv-c++1.0.0/ && $(COPY_FILE) --parents ui/mainwindow.ui ui/importimages.ui ui/batchwindow.ui _build/openpiv-c++1.0.0/ && (cd `dirname _build/openpiv-c++1.0.0` && $(TAR) openpiv-c++1.0.0.tar openpiv-c++1.0.0 && $(COMPRESS) openpiv-c++1.0.0.tar) && $(MOVE) `dirname _build/openpiv-c++1.0.0`/openpiv-c++1.0.0.tar.gz . && $(DEL_FILE) -r _build/openpiv-c++1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: _build/moc_mainwindow.cpp _build/moc_pivdisplay.cpp _build/moc_imagelist.cpp _build/moc_importimages.cpp _build/moc_importimagelist.cpp _build/moc_maskdropdown.cpp _build/moc_itempaint.cpp _build/moc_settings.cpp _build/moc_processing.cpp _build/moc_datacontainer.cpp _build/moc_analysis.cpp _build/moc_output.cpp _build/moc_vectorlist.cpp _build/moc_batchwindow.cpp _build/moc_pivthread.cpp _build/moc_outputthread.cpp _build/moc_colourbar.cpp _build/moc_session.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) _build/moc_mainwindow.cpp _build/moc_pivdisplay.cpp _build/moc_imagelist.cpp _build/moc_importimages.cpp _build/moc_importimagelist.cpp _build/moc_maskdropdown.cpp _build/moc_itempaint.cpp _build/moc_settings.cpp _build/moc_processing.cpp _build/moc_datacontainer.cpp _build/moc_analysis.cpp _build/moc_output.cpp _build/moc_vectorlist.cpp _build/moc_batchwindow.cpp _build/moc_pivthread.cpp _build/moc_outputthread.cpp _build/moc_colourbar.cpp _build/moc_session.cpp
_build/moc_mainwindow.cpp: src/pivdisplay.h \
		src/imagepaint.h \
		src/imagedata.h \
		src/settings.h \
		src/filteroptions.h \
		src/itempaint.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/imagelist.h \
		src/vectorlist.h \
		src/importimages.h \
		src/importimagelist.h \
		_build/ui_importimages.h \
		src/batchwindow.h \
		_build/ui_batchwindow.h \
		src/maskdropdown.h \
		src/session.h \
		src/processing.h \
		src/pivengine.h \
		src/fftcrosscorrelate.h \
		src/output.h \
		src/pivthread.h \
		src/analysis.h \
		src/outputthread.h \
		_build/ui_mainwindow.h \
		src/mainwindow.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/mainwindow.h -o _build/moc_mainwindow.cpp

_build/moc_pivdisplay.cpp: src/imagepaint.h \
		src/imagedata.h \
		src/settings.h \
		src/filteroptions.h \
		src/itempaint.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/pivdisplay.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/pivdisplay.h -o _build/moc_pivdisplay.cpp

_build/moc_imagelist.cpp: src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h \
		src/imagelist.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/imagelist.h -o _build/moc_imagelist.cpp

_build/moc_importimages.cpp: src/importimagelist.h \
		src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h \
		_build/ui_importimages.h \
		src/importimages.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/importimages.h -o _build/moc_importimages.cpp

_build/moc_importimagelist.cpp: src/importimagelist.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/importimagelist.h -o _build/moc_importimagelist.cpp

_build/moc_maskdropdown.cpp: src/pivdisplay.h \
		src/imagepaint.h \
		src/imagedata.h \
		src/settings.h \
		src/filteroptions.h \
		src/itempaint.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/maskdropdown.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/maskdropdown.h -o _build/moc_maskdropdown.cpp

_build/moc_itempaint.cpp: src/settings.h \
		src/filteroptions.h \
		src/pivdata.h \
		src/itempaint.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/itempaint.h -o _build/moc_itempaint.cpp

_build/moc_settings.cpp: src/filteroptions.h \
		src/settings.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/settings.h -o _build/moc_settings.cpp

_build/moc_processing.cpp: src/imagedata.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivengine.h \
		src/fftcrosscorrelate.h \
		src/batchwindow.h \
		_build/ui_batchwindow.h \
		src/output.h \
		src/pivthread.h \
		src/analysis.h \
		src/outputthread.h \
		src/processing.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/processing.h -o _build/moc_processing.cpp

_build/moc_datacontainer.cpp: src/settings.h \
		src/filteroptions.h \
		src/pivdata.h \
		src/datacontainer.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/datacontainer.h -o _build/moc_datacontainer.cpp

_build/moc_analysis.cpp: src/pivdata.h \
		src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/analysis.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/analysis.h -o _build/moc_analysis.cpp

_build/moc_output.cpp: src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/pivdata.h \
		src/output.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/output.h -o _build/moc_output.cpp

_build/moc_vectorlist.cpp: src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h \
		src/vectorlist.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/vectorlist.h -o _build/moc_vectorlist.cpp

_build/moc_batchwindow.cpp: src/settings.h \
		src/filteroptions.h \
		_build/ui_batchwindow.h \
		src/batchwindow.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/batchwindow.h -o _build/moc_batchwindow.cpp

_build/moc_pivthread.cpp: src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/pivdata.h \
		src/analysis.h \
		src/fftcrosscorrelate.h \
		src/pivengine.h \
		src/imagedata.h \
		src/pivthread.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/pivthread.h -o _build/moc_pivthread.cpp

_build/moc_outputthread.cpp: src/pivdata.h \
		src/output.h \
		src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/outputthread.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/outputthread.h -o _build/moc_outputthread.cpp

_build/moc_colourbar.cpp: src/colourbar.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/colourbar.h -o _build/moc_colourbar.cpp

_build/moc_session.cpp: src/settings.h \
		src/filteroptions.h \
		src/processing.h \
		src/imagedata.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/pivengine.h \
		src/fftcrosscorrelate.h \
		src/batchwindow.h \
		_build/ui_batchwindow.h \
		src/output.h \
		src/pivthread.h \
		src/analysis.h \
		src/outputthread.h \
		src/session.h
	/usr/lib/i386-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/session.h -o _build/moc_session.cpp

compiler_rcc_make_all: _build/qrc_icons.cpp _build/qrc_images.cpp
compiler_rcc_clean:
	-$(DEL_FILE) _build/qrc_icons.cpp _build/qrc_images.cpp
_build/qrc_icons.cpp: share/icons/icons.qrc \
		share/icons/help.png \
		share/icons/LUT.png \
		share/icons/colour.png \
		share/icons/player_fwd.png \
		share/icons/openpiv.png \
		share/icons/filesave.png \
		share/icons/player_pause.png \
		share/icons/correlate.png \
		share/icons/filter.png \
		share/icons/applications-education.png \
		share/icons/fileopen.png \
		share/icons/edit.png \
		share/icons/viewmagfit.png \
		share/icons/viewmag-.png \
		share/icons/player_rew.png \
		share/icons/image_mask.png \
		share/icons/filenew.png \
		share/icons/arrow-down-double-3_small.png \
		share/icons/edit-node.png \
		share/icons/filesaveas.png \
		share/icons/import_image.png \
		share/icons/bookmark-2.png \
		share/icons/exit.png \
		share/icons/hist.png \
		share/icons/player_play.png \
		share/icons/kcmsystem.png \
		share/icons/viewmag+.png \
		share/icons/system-help.png
	/usr/lib/i386-linux-gnu/qt4/bin/rcc -name icons share/icons/icons.qrc -o _build/qrc_icons.cpp

_build/qrc_images.cpp: share/images/images.qrc
	/usr/lib/i386-linux-gnu/qt4/bin/rcc -name images share/images/images.qrc -o _build/qrc_images.cpp

compiler_image_collection_make_all: _build/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) _build/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: _build/ui_mainwindow.h _build/ui_importimages.h _build/ui_batchwindow.h
compiler_uic_clean:
	-$(DEL_FILE) _build/ui_mainwindow.h _build/ui_importimages.h _build/ui_batchwindow.h
_build/ui_mainwindow.h: ui/mainwindow.ui \
		src/imagelist.h \
		src/pivdisplay.h \
		src/vectorlist.h \
		src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h \
		src/imagepaint.h \
		src/imagedata.h \
		src/settings.h \
		src/filteroptions.h \
		src/itempaint.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h
	/usr/lib/i386-linux-gnu/qt4/bin/uic ui/mainwindow.ui -o _build/ui_mainwindow.h

_build/ui_importimages.h: ui/importimages.ui \
		src/importimagelist.h
	/usr/lib/i386-linux-gnu/qt4/bin/uic ui/importimages.ui -o _build/ui_importimages.h

_build/ui_batchwindow.h: ui/batchwindow.ui
	/usr/lib/i386-linux-gnu/qt4/bin/uic ui/batchwindow.ui -o _build/ui_batchwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

_build/main.o: src/main.cpp src/mainwindow.h \
		src/pivdisplay.h \
		src/imagepaint.h \
		src/imagedata.h \
		src/settings.h \
		src/filteroptions.h \
		src/itempaint.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/imagelist.h \
		src/vectorlist.h \
		src/importimages.h \
		src/importimagelist.h \
		_build/ui_importimages.h \
		src/batchwindow.h \
		_build/ui_batchwindow.h \
		src/maskdropdown.h \
		src/session.h \
		src/processing.h \
		src/pivengine.h \
		src/fftcrosscorrelate.h \
		src/output.h \
		src/pivthread.h \
		src/analysis.h \
		src/outputthread.h \
		_build/ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/main.o src/main.cpp

_build/mainwindow.o: src/mainwindow.cpp src/mainwindow.h \
		src/pivdisplay.h \
		src/imagepaint.h \
		src/imagedata.h \
		src/settings.h \
		src/filteroptions.h \
		src/itempaint.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/imagelist.h \
		src/vectorlist.h \
		src/importimages.h \
		src/importimagelist.h \
		_build/ui_importimages.h \
		src/batchwindow.h \
		_build/ui_batchwindow.h \
		src/maskdropdown.h \
		src/session.h \
		src/processing.h \
		src/pivengine.h \
		src/fftcrosscorrelate.h \
		src/output.h \
		src/pivthread.h \
		src/analysis.h \
		src/outputthread.h \
		_build/ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/mainwindow.o src/mainwindow.cpp

_build/imagedata.o: src/imagedata.cpp src/imagedata.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/imagedata.o src/imagedata.cpp

_build/pivdisplay.o: src/pivdisplay.cpp src/pivdisplay.h \
		src/imagepaint.h \
		src/imagedata.h \
		src/settings.h \
		src/filteroptions.h \
		src/itempaint.h \
		src/pivdata.h \
		src/datacontainer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/pivdisplay.o src/pivdisplay.cpp

_build/imagepaint.o: src/imagepaint.cpp src/imagepaint.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/imagepaint.o src/imagepaint.cpp

_build/imagelist.o: src/imagelist.cpp src/imagelist.h \
		src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/imagelist.o src/imagelist.cpp

_build/importimages.o: src/importimages.cpp src/importimages.h \
		src/importimagelist.h \
		src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h \
		_build/ui_importimages.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/importimages.o src/importimages.cpp

_build/importimagelist.o: src/importimagelist.cpp src/importimagelist.h \
		src/importimages.h \
		src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h \
		_build/ui_importimages.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/importimagelist.o src/importimagelist.cpp

_build/maskdropdown.o: src/maskdropdown.cpp src/maskdropdown.h \
		src/pivdisplay.h \
		src/imagepaint.h \
		src/imagedata.h \
		src/settings.h \
		src/filteroptions.h \
		src/itempaint.h \
		src/pivdata.h \
		src/datacontainer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/maskdropdown.o src/maskdropdown.cpp

_build/itempaint.o: src/itempaint.cpp src/itempaint.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/itempaint.o src/itempaint.cpp

_build/settings.o: src/settings.cpp src/settings.h \
		src/filteroptions.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/settings.o src/settings.cpp

_build/processing.o: src/processing.cpp src/settings.h \
		src/filteroptions.h \
		src/processing.h \
		src/imagedata.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/pivengine.h \
		src/fftcrosscorrelate.h \
		src/batchwindow.h \
		_build/ui_batchwindow.h \
		src/output.h \
		src/pivthread.h \
		src/analysis.h \
		src/outputthread.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/processing.o src/processing.cpp

_build/fftcrosscorrelate.o: src/fftcrosscorrelate.cpp src/fftcrosscorrelate.h \
		src/pivengine.h \
		src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/pivdata.h \
		src/imagedata.h \
		src/gaussiansubpixel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/fftcrosscorrelate.o src/fftcrosscorrelate.cpp

_build/pivdata.o: src/pivdata.cpp src/pivdata.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/pivdata.o src/pivdata.cpp

_build/gaussiansubpixel.o: src/gaussiansubpixel.cpp src/pivdata.h \
		src/gaussiansubpixel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/gaussiansubpixel.o src/gaussiansubpixel.cpp

_build/datacontainer.o: src/datacontainer.cpp src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/pivdata.h \
		src/generategrid.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/datacontainer.o src/datacontainer.cpp

_build/filters.o: src/filters.cpp src/filters.h \
		src/filteroptions.h \
		src/pivdata.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/filters.o src/filters.cpp

_build/analysis.o: src/analysis.cpp src/analysis.h \
		src/pivdata.h \
		src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/filters.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/analysis.o src/analysis.cpp

_build/filteroptions.o: src/filteroptions.cpp src/filteroptions.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/filteroptions.o src/filteroptions.cpp

_build/pivengine.o: src/pivengine.cpp src/pivengine.h \
		src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/pivdata.h \
		src/imagedata.h \
		src/gaussiansubpixel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/pivengine.o src/pivengine.cpp

_build/output.o: src/output.cpp src/output.h \
		src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/pivdata.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/output.o src/output.cpp

_build/vectorlist.o: src/vectorlist.cpp src/vectorlist.h \
		src/datacontainer.h \
		src/settings.h \
		src/filteroptions.h \
		src/pivdata.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/vectorlist.o src/vectorlist.cpp

_build/batchwindow.o: src/batchwindow.cpp src/batchwindow.h \
		src/settings.h \
		src/filteroptions.h \
		_build/ui_batchwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/batchwindow.o src/batchwindow.cpp

_build/pivthread.o: src/pivthread.cpp src/pivthread.h \
		src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h \
		src/pivdata.h \
		src/analysis.h \
		src/fftcrosscorrelate.h \
		src/pivengine.h \
		src/imagedata.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/pivthread.o src/pivthread.cpp

_build/outputthread.o: src/outputthread.cpp src/outputthread.h \
		src/pivdata.h \
		src/output.h \
		src/settings.h \
		src/filteroptions.h \
		src/datacontainer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/outputthread.o src/outputthread.cpp

_build/colourbar.o: src/colourbar.cpp src/colourbar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/colourbar.o src/colourbar.cpp

_build/session.o: src/session.cpp src/session.h \
		src/settings.h \
		src/filteroptions.h \
		src/processing.h \
		src/imagedata.h \
		src/pivdata.h \
		src/datacontainer.h \
		src/pivengine.h \
		src/fftcrosscorrelate.h \
		src/batchwindow.h \
		_build/ui_batchwindow.h \
		src/output.h \
		src/pivthread.h \
		src/analysis.h \
		src/outputthread.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/session.o src/session.cpp

_build/generategrid.o: src/generategrid.cpp src/generategrid.h \
		src/settings.h \
		src/filteroptions.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/generategrid.o src/generategrid.cpp

_build/moc_mainwindow.o: _build/moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_mainwindow.o _build/moc_mainwindow.cpp

_build/moc_pivdisplay.o: _build/moc_pivdisplay.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_pivdisplay.o _build/moc_pivdisplay.cpp

_build/moc_imagelist.o: _build/moc_imagelist.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_imagelist.o _build/moc_imagelist.cpp

_build/moc_importimages.o: _build/moc_importimages.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_importimages.o _build/moc_importimages.cpp

_build/moc_importimagelist.o: _build/moc_importimagelist.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_importimagelist.o _build/moc_importimagelist.cpp

_build/moc_maskdropdown.o: _build/moc_maskdropdown.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_maskdropdown.o _build/moc_maskdropdown.cpp

_build/moc_itempaint.o: _build/moc_itempaint.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_itempaint.o _build/moc_itempaint.cpp

_build/moc_settings.o: _build/moc_settings.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_settings.o _build/moc_settings.cpp

_build/moc_processing.o: _build/moc_processing.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_processing.o _build/moc_processing.cpp

_build/moc_datacontainer.o: _build/moc_datacontainer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_datacontainer.o _build/moc_datacontainer.cpp

_build/moc_analysis.o: _build/moc_analysis.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_analysis.o _build/moc_analysis.cpp

_build/moc_output.o: _build/moc_output.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_output.o _build/moc_output.cpp

_build/moc_vectorlist.o: _build/moc_vectorlist.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_vectorlist.o _build/moc_vectorlist.cpp

_build/moc_batchwindow.o: _build/moc_batchwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_batchwindow.o _build/moc_batchwindow.cpp

_build/moc_pivthread.o: _build/moc_pivthread.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_pivthread.o _build/moc_pivthread.cpp

_build/moc_outputthread.o: _build/moc_outputthread.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_outputthread.o _build/moc_outputthread.cpp

_build/moc_colourbar.o: _build/moc_colourbar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_colourbar.o _build/moc_colourbar.cpp

_build/moc_session.o: _build/moc_session.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/moc_session.o _build/moc_session.cpp

_build/qrc_icons.o: _build/qrc_icons.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/qrc_icons.o _build/qrc_icons.cpp

_build/qrc_images.o: _build/qrc_images.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o _build/qrc_images.o _build/qrc_images.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

