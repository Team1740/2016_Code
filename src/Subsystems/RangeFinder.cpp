#include "RangeFinder.h"
#include "../RobotMap.h"
#include "../Commands/Rangefinder/RangeLight.h" // YOU MUST INCLUDE IT to set it as the default command

#define LIGHT_BAR_RELAY_PORT 1 // Compiler blows chunks if using relay port 0

RangeFinder::RangeFinder() :
	Subsystem("RangeFinder")
{
//	rangefinder = new Ultrasonic(6,7);
//	rangefinder->SetAutomaticMode(true);
//	light = new Relay(LIGHT_BAR_RELAY_PORT);
}

void RangeFinder::InitDefaultCommand()
{
//	SetDefaultCommand(new RangeLight());
}

void RangeFinder::Light(unsigned int state)
{
	if (state)
	{
//		light->Set(Relay::kForward);
	}
	else
	{
//		light->Set(Relay::kOff);
	}
}
