#ifndef QTWEBENGINEWIDGETS_SMOKE_H
#define QTWEBENGINEWIDGETS_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtwebenginewidgets_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtwebenginewidgets_Smoke;
extern "C" SMOKE_EXPORT void init_qtwebenginewidgets_Smoke();
extern "C" SMOKE_EXPORT void delete_qtwebenginewidgets_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
