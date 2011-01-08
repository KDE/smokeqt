#include <kparts/kparts_export.h>
#include <kparts/part.h>
#include <kparts/plugin.h>
#include <kparts/partmanager.h>
#include <kparts/mainwindow.h>
#include <kparts/event.h>
#include <kparts/browserextension.h>
#include <kparts/factory.h>
#include <kparts/historyprovider.h>
#include <kparts/browserinterface.h>
#include <kparts/genericfactory.h>
#include <kparts/componentfactory.h>
#include <kparts/browserrun.h>
#include <kparts/statusbarextension.h>

#include <kde_terminal_interface.h>

#if KDE_IS_VERSION(4, 3, 0)
#include <kde_terminal_interface_v2.h>
#endif

#if KDE_IS_VERSION(4, 4, 0)
#include <kparts/browseropenorsavequestion.h>
#endif
