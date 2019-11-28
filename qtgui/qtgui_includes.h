//PTZ191127 use of undeclared identifier 'uint8_t' etc... clang-9 gobbles i think.
#include </usr/include/stdint.h>

#include <QtCore>
#include <QtGui>

#ifdef Q_WS_X11
#include <QtGui/qx11info_x11.h>
#include <QtGui/qx11embed_x11.h>
#endif
