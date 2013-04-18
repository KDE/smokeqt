#ifndef qtprintsupport_SMOKE_H
#define qtprintsupport_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qtprintsupport_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtprintsupport_Smoke;
extern "C" SMOKE_EXPORT void init_qtprintsupport_Smoke();
extern "C" SMOKE_EXPORT void delete_qtprintsupport_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
