#ifndef QTMULTIMEDIAWIDGETS_SMOKE_H
#define QTMULTIMEDIAWIDGETS_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtmultimediawidgets_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtmultimediawidgets_Smoke;
extern "C" SMOKE_EXPORT void init_qtmultimediawidgets_Smoke();
extern "C" SMOKE_EXPORT void delete_qtmultimediawidgets_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
