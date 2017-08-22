#ifndef QTPRINTSUPPORT_SMOKE_H
#define QTPRINTSUPPORT_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qprintsupport_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtprintsupport_Smoke;
extern "C" SMOKE_EXPORT void init_qtprintsupport_Smoke();
extern "C" SMOKE_EXPORT void delete_qtprintsupport_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
