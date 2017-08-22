#ifndef QTWEBCHANNEL_SMOKE_H
#define QTWEBCHANNEL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_qwebchannel_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* qtwebchannel_Smoke;
extern "C" SMOKE_EXPORT void init_qtwebchannel_Smoke();
extern "C" SMOKE_EXPORT void delete_qtwebchannel_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
