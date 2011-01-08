#include <qglobal.h>
#include <kdeversion.h>

#include <qicon.h>

#if KDE_IS_VERSION(4, 4, 0)
#include <nepomuk/term.h>
#include <nepomuk/negationterm.h>
#include <nepomuk/orterm.h>
#include <nepomuk/andterm.h>
#include <nepomuk/comparisonterm.h>
#include <nepomuk/simpleterm.h>
#include <nepomuk/groupterm.h>
#include <nepomuk/resourceterm.h>
#include <nepomuk/literalterm.h>
#include <nepomuk/resourcetypeterm.h>
#include <nepomuk/query.h>
#include <nepomuk/filequery.h>
#include <nepomuk/result.h>
#include <nepomuk/queryserviceclient.h>
#include <nepomuk/queryparser.h>
#endif

#if KDE_IS_VERSION(4, 5, 0)
#include <nepomuk/optionalterm.h>
#endif

#include <nepomuk/variant.h>
