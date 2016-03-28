#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

// Motor Direction Mapping
#define LEFT_FORWARD -1
#define RIGHT_FORWARD 1
#define LEFT_REVERSE 1
#define RIGHT_REVERSE -1

class DriveTrain: public Subsystem
{
public:
	CANTalon *leftMotor1;
	CANTalon *leftMotor2;
	CANTalon *rightMotor1;
	CANTalon *rightMotor2;
	Encoder *leftEncoder;
	Encoder *rightEncoder;
	AnalogGyro *steeringGyro;
	DriveTrain();
	void Go(float, float);
	void Forward(float);
	void Reverse(float);
	void Stop();
private:
	char buffer[256];
};

#endif
