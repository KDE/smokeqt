#ifndef QTWIDGETS_SMOKE_H
#define QTWIDGETS_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtwidgets_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtwidgets_Smoke;
extern "C" SMOKE_EXPORT void init_qtwidgets_Smoke();
extern "C" SMOKE_EXPORT void delete_qtwidgets_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
