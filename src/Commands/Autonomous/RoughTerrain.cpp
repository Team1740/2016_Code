#include "RoughTerrain.h"

RoughTerrain::RoughTerrain(int distance)
{
	Requires(drivetrain);
	count = distance / 360 * 280;
}

void RoughTerrain::Initialize()
{
	drivetrain->Forward(0.5);
}

void RoughTerrain::Execute()
{
	return;
}

bool RoughTerrain::IsFinished()
{
	if(abs(drivetrain->leftEncoder->Get()) >= count or abs(drivetrain->rightEncoder->Get()) >= count)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void RoughTerrain::End()
{
	drivetrain->Stop();
}

void RoughTerrain::Interrupted()
{
	drivetrain->Stop();
}
