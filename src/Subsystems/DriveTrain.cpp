#include "DriveTrain.h"
#include "../RobotMap.h"
#include "Datalogger.h"
#include "math.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain")
{
	leftMotor1 = new CANTalon(LEFT_MOTOR_1_ID);
	leftMotor2 = new CANTalon(LEFT_MOTOR_2_ID);
	rightMotor1 = new CANTalon(RIGHT_MOTOR_1_ID);
	rightMotor2 = new CANTalon(RIGHT_MOTOR_2_ID);
	leftEncoder = new Encoder(LEFT_ENCODER_PORT_2, LEFT_ENCODER_PORT_3);
	rightEncoder = new Encoder(RIGHT_ENCODER_PORT_0, RIGHT_ENCODER_PORT_1);
	steeringGyro = new AnalogGyro(STEERING_GYRO_PORT);
	leftEncoder->Reset();
	rightEncoder->Reset();
}

void DriveTrain::Go(float leftSpeed, float rightSpeed)
{
	printf("Left Drive: %f\n", leftSpeed * LEFT_FORWARD);
	printf("Right Drive: %f\n", rightSpeed * RIGHT_FORWARD);
	leftMotor1->Set(leftSpeed * LEFT_FORWARD);
	leftMotor2->Set(leftSpeed * LEFT_FORWARD);
	rightMotor1->Set(rightSpeed * RIGHT_FORWARD);
	rightMotor2->Set(rightSpeed * RIGHT_FORWARD);
}
/*
	These two methods are only used in AUTONOMOUS
	We have an issue with the fact that the joysticks
	return a positive value when pulled back
	and a negative value when pusehd forward  (airplane style)

	So the same LEFT_FORWARD, RIGHT_FORWARD, LEFT_REVERSE
	and RIGHT_REVERSE constants CANNOT apply to both teleop
	and autonomous modes, unless we employ a kludgy fix
	which is to flip/flop the forward and reverse methods
	below. In fact, we should probably just multiply the
	joystick inputs by -1, and use the LEFT_FORWARD,
	RIGHT_REVERSE, etc constants to indicate a 1 or -1
	depending solely on how the motors are physically
	mounted

*/
void DriveTrain::Reverse(float speed)
{
	leftMotor1->Set(speed * LEFT_FORWARD);
	leftMotor2->Set(speed * LEFT_FORWARD);
	rightMotor1->Set(speed * RIGHT_FORWARD);
	rightMotor2->Set(speed * RIGHT_FORWARD);
}

void DriveTrain::Forward(float speed)
{
	leftMotor1->Set(speed * LEFT_REVERSE);
	leftMotor2->Set(speed * LEFT_REVERSE);
	rightMotor1->Set(speed * RIGHT_REVERSE);
	rightMotor2->Set(speed * RIGHT_REVERSE);
}

void DriveTrain::Stop()
{
	leftMotor1->Set(0);
	leftMotor2->Set(0);
	rightMotor1->Set(0);
	rightMotor2->Set(0);
}
