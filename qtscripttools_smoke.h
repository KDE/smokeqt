#ifndef QTSCRIPTTOOLS_SMOKE_H
#define QTSCRIPTTOOLS_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qsci_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtscripttools_Smoke;
extern "C" SMOKE_EXPORT void init_qtscripttools_Smoke();
extern "C" SMOKE_EXPORT void delete_qtscripttools_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
