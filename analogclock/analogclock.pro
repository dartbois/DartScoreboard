include(../rasterwindow/rasterwindow.pri)

# work-around for QTBUG-13496
CONFIG += no_batch

SOURCES += \
    audienceview.cpp \
    main.cpp \
    scorerview.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/gui/analogclock
INSTALLS += target

HEADERS += \
    audienceview.h \
    scorerview.h

FORMS += \
    audienceview.ui \
    scorerview.ui
