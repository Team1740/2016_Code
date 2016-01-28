#include "In.h"

In::In()
{
	Requires(arm);
}

void In::Initialize()
{
	arm->extender_motor->Set(-1.0);
}

void In::Execute()
{
	return;
}

bool In::IsFinished()
{
	return false;
}

void In::End()
{
	arm->extender_motor->Set(0);
}

void In::Interrupted()
{
	arm->extender_motor->Set(0);
}
