#ifndef DATALOGGER_H
#define DATALOGGER_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Debugging Levels for logging
 * 0: Silent
 * 1: Error Messages
 * 2: Status Messages
 * 3: [unassigned]
 * 4: Verbose
 */
#define ERROR_MESSAGE 1
#define STATUS_MESSAGE 2
#define DEBUG_MESSAGE 3
#define VERBOSE_MESSAGE 4
#define DEBUG_LEVEL 4
// Messages with this level or below will be logged

class DataLogger: public Subsystem
{

// Making these static so we don't have to instantiate an object

// static char logfile[256];
// static char buffer[256];
// static char bufferPrevious[256];
// FILE *fh;
// int abort=true;

private:
	Timer gameTime;
	FILE *fh;
	time_t currentTime;
	int abort=true;
	char logfile[256];
	char buffer[256];
	char bufferPrevious[256];

public:
	DataLogger();
	int CreateLog();
	int Log(const char *, int level);
	void Flush();
	int End();
};

#endif
