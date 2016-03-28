#include "Down.h"

Down::Down()
{
	Requires(arm);
}

void Down::Initialize()
{
	datalogger->Log("Down::Initialize()", STATUS_MESSAGE);
	arm->lifterMotor->Set(-1.0 * SPEED);
}

void Down::Execute() // Every 20 msec
{
	return;
}

bool Down::IsFinished() // Called right after Execute()
{
	bool done = arm->lifterMotor->IsRevLimitSwitchClosed();
	if (done)
		datalogger->Log("Done", STATUS_MESSAGE);
//	printf("Done %d", done);
	return (done);
}


void Down::End()
{
	datalogger->Log("Down::End()", ERROR_MESSAGE);
	arm->lifterMotor->Set(0);
}

void Down::Interrupted()
{
	datalogger->Log("Down::Interrupted()", STATUS_MESSAGE);
	arm->lifterMotor->Set(0);
}
