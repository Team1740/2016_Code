#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
public:
	TalonSRX *leftMotor1;
	TalonSRX *leftMotor2;
	TalonSRX *rightMotor1;
	TalonSRX *rightMotor2;
	DriveTrain();
	void Go(float, float);
	void Stop();
};

#endif
