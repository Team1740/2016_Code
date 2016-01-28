#include "Out.h"

Out::Out()
{
	Requires(arm);
}

void Out::Initialize()
{
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
	arm->extender_motor->Set(0);
}

void Out::Interrupted()
{
	arm->extender_motor->Set(0);
}
