#include <ktexteditor/annotationinterface.h>
#include <ktexteditor/attribute.h>
#include <ktexteditor/codecompletioninterface.h>
#include <ktexteditor/codecompletionmodel.h>
#include <ktexteditor/commandinterface.h>
#include <ktexteditor/configinterface.h>
#include <ktexteditor/configpage.h>
#include <ktexteditor/containerinterface.h>
#include <ktexteditor/cursorfeedback.h>
#include <ktexteditor/cursor.h>
#include <ktexteditor/document.h>
#include <ktexteditor/editorchooser.h>
#include <ktexteditor/editor.h>
#include <ktexteditor/factory.h>
#include <ktexteditor/ktexteditor_export.h>
#include <ktexteditor/markinterface.h>
#include <ktexteditor/modificationinterface.h>
#include <ktexteditor/plugin.h>
#include <ktexteditor/rangefeedback.h>
#include <ktexteditor/range.h>
#include <ktexteditor/searchinterface.h>
#include <ktexteditor/sessionconfiginterface.h>
#include <ktexteditor/smartcursor.h>
#include <ktexteditor/smartinterface.h>
#include <ktexteditor/smartrange.h>
#include <ktexteditor/templateinterface.h>
#include <ktexteditor/texthintinterface.h>
#include <ktexteditor/variableinterface.h>
#include <ktexteditor/view.h>

#if KDE_IS_VERSION(4, 2, 0)
#include <ktexteditor/codecompletionmodelcontrollerinterface.h>
#include <ktexteditor/loadsavefiltercheckplugin.h>
#endif

#if KDE_IS_VERSION(4, 4, 0)
#include <ktexteditor/highlightinterface.h>
#include <ktexteditor/smartcursornotifier.h>
#include <ktexteditor/smartcursorwatcher.h>
#include <ktexteditor/smartrangenotifier.h>
#include <ktexteditor/smartrangewatcher.h>
#endif
