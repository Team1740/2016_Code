#include "RangeLight.h"
#include "../../RobotMap.h"

RangeLight::RangeLight()
{
	Requires(rangefinder);
}

void RangeLight::Initialize()
{
	datalogger->Log("RangeLight::Initialize()", STATUS_MESSAGE);
}

void RangeLight::Execute()
{

	if (rangefinder->rangefinder->GetRangeInches() < 11)
	{
		rangefinder->Light(1);
	}
	else {
		rangefinder->Light(0);
	}
	SmartDashboard::PutNumber("Range:", rangefinder->rangefinder->GetRangeInches());
}

bool RangeLight::IsFinished()
{
	return false;
}

void RangeLight::End()
{
	return;
}

void RangeLight::Interrupted()
{
	return;
}
