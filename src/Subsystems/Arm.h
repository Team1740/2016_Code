#ifndef Arm_H
#define Arm_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

#define SPEED 1.0

class Arm: public Subsystem
{
public:
	TalonSRX *lifter_motor;
	TalonSRX *extender_motor;
	Arm();
};

#endif
