#include "DriveTrain.h"
#include "../RobotMap.h"
#include "math.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain")
{
	leftMotor1 = new TalonSRX(LEFT_MOTOR_1_ID);
	leftMotor2 = new TalonSRX(LEFT_MOTOR_2_ID);
	rightMotor1 = new TalonSRX(RIGHT_MOTOR_1_ID);
	rightMotor2 = new TalonSRX(RIGHT_MOTOR_2_ID);
}

void DriveTrain::Go(float leftSpeed, float rightSpeed)
{
	leftMotor1->Set(leftSpeed);
	leftMotor2->Set(leftSpeed);
	rightMotor1->Set(rightSpeed);
	rightMotor2->Set(rightSpeed);
}

void DriveTrain::Stop()
{
	leftMotor1->Set(0);
	leftMotor2->Set(0);
	rightMotor1->Set(0);
	rightMotor2->Set(0);
}
