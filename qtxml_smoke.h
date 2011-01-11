#ifndef QTXML_SMOKE_H
#define QTXML_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtxml_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtxml_Smoke;
extern "C" SMOKE_EXPORT void init_qtxml_Smoke();
extern "C" SMOKE_EXPORT void delete_qtxml_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
