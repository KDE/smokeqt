#include <kdeversion.h>

#include <nepomuk/class.h>
#include <nepomuk/desktopontologyloader.h>
#include <nepomuk/entity.h>
#include <nepomuk/fileontologyloader.h>
#include <nepomuk/global.h>
#include <nepomuk/kmetadatatagcloud.h>
#include <nepomuk/kmetadatatagwidget.h>
#include <nepomuk/kratingpainter.h>
#include <nepomuk/kratingwidget.h>
#include <nepomuk/ktagcloudwidget.h>
#include <nepomuk/ktagdisplaywidget.h>
#include <nepomuk/literal.h>
#include <nepomuk/nepomuk_export.h>
#include <nepomuk/nepomukontologyloader.h>
#include <nepomuk/nepomukservice.h>
#include <nepomuk/ontology.h>
#include <nepomuk/ontologyloader.h>
#include <nepomuk/ontologymanager.h>
#include <nepomuk/property.h>
#include <nepomuk/resource.h>
#include <nepomuk/resourcemanager.h>
#include <nepomuk/tag.h>
#include <nepomuk/tools.h>
#include <nepomuk/variant.h>

#include <qicon.h>

#if KDE_IS_VERSION(4, 2, 0)
#include <nepomuk/thing.h>
#endif

#if KDE_IS_VERSION(4, 4, 0)
#include <nepomuk/andterm.h>
#include <nepomuk/comparisonterm.h>
#include <nepomuk/filequery.h>
#include <nepomuk/groupterm.h>
#include <nepomuk/literalterm.h>
#include <nepomuk/negationterm.h>
#include <nepomuk/nepomukquery_export.h>
#include <nepomuk/orterm.h>
#include <nepomuk/query.h>
#include <nepomuk/queryparser.h>
#include <nepomuk/queryserviceclient.h>
#include <nepomuk/resourceterm.h>
#include <nepomuk/resourcetypeterm.h>
#include <nepomuk/result.h>
#include <nepomuk/simpleterm.h>
#include <nepomuk/term.h>
#endif

#if KDE_IS_VERSION(4, 5, 50)
#include <nepomuk/file.h>
#endif
