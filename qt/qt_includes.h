#include <QtCore/QtCore>
#include <QtGui/QtGui>

#ifdef Q_WS_X11
#include <QtGui/qx11info_x11.h>
#include <QtGui/qx11embed_x11.h>
#endif

#include <QtXml/QtXml>
#include <QtSql/QtSql>
#include <QtOpenGL/QtOpenGL>
#include <QtNetwork/QtNetwork>
#include <QtSvg/QtSvg>

// some MS headers do
// #define interface struct
// un-define it here so QtDBus will build correctly
#undef interface
#include <QtDBus/QtDBus>
