#ifdef __SMOKEGEN_RUN__
    #include <kate_export.h>
    #undef KATEINTERFACES_EXPORT
    #define KATEINTERFACES_EXPORT
#endif

#include <kate/mainwindow.h>

#include <kate/application.h>
#include <kate/documentmanager.h>
#include <kate/pluginconfigpageinterface.h>
#include <kate/pluginmanager.h>
#include <kate/plugin.h>

#include <kcomponentdata.h>
#include <QtXml/QDomDocument>
