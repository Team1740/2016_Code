#include "Out.h"

Out::Out()
{
	Requires(arm);
}

void Out::Initialize()
{
	datalogger->Log("Out::Initialize()", STATUS_MESSAGE);
	arm->extender_motor->Set(1.0);
}

void Out::Execute()
{
	return;
}

bool Out::IsFinished()
{
	return false;
}

void Out::End()
{
	datalogger->Log("Out::End()", ERROR_MESSAGE);
	arm->extender_motor->Set(0);
}

void Out::Interrupted()
{
	datalogger->Log("Out::Interrupted()", STATUS_MESSAGE);
	arm->extender_motor->Set(0);
}
