#include "Log.h"

int main()
{
	InitLog(dfLOG_LEVEL_ERROR, CONSOLE);
	_LOG(dfLOG_LEVEL_DEBUG, L"debug");
	_LOG(dfLOG_LEVEL_ERROR, L"error");
	_LOG(dfLOG_LEVEL_SYSTEM, L"system");
	_LOG(dfLOG_LEVEL_DEBUG, L"debug2");
	_LOG(dfLOG_LEVEL_ERROR, L"error2");
	_LOG(dfLOG_LEVEL_SYSTEM, L"system2");
	CloseLog();
	return 0;
}