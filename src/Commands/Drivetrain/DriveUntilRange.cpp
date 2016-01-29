#include "DriveUntilRange.h"

DriveUntilRange::DriveUntilRange(float s, float r)
{
	Requires(drivetrain);
	speed = s;
	range = r;
}

void DriveUntilRange::Initialize()
{
	drivetrain->Go(speed, speed);
}

void DriveUntilRange::Execute()
{
	return;
}

bool DriveUntilRange::IsFinished()
{
	return rangefinder->rangefinder->GetRangeInches() >= range;
}

void DriveUntilRange::End()
{
	drivetrain->Stop();
}

void DriveUntilRange::Interrupted()
{
	drivetrain->Stop();
}
