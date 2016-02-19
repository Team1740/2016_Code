#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveTrain: public Subsystem
{
public:
	CANTalon *leftMotor1;
	CANTalon *leftMotor2;
	CANTalon *rightMotor1;
	CANTalon *rightMotor2;
	DriveTrain();
	void Go(float, float);
	void Stop();
};

#endif
