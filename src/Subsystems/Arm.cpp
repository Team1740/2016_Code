#include "Arm.h"
#include "../RobotMap.h"
#include "../Commands/Arm/ArmControl.h"

Arm::Arm(): Subsystem("Arm")
{
	lifterMotor = new CANTalon(LIFTER_MOTOR_ID);
	extenderMotor = new CANTalon(EXTENDER_MOTOR_ID);
	lifterEncoder = new Encoder(LIFTER_ENCODER_PORT_4, LIFTER_ENCODER_PORT_5);
	extenderEncoder = new Encoder(EXTENDER_ENCODER_PORT_6, EXTENDER_ENCODER_PORT_7);
<<<<<<< HEAD
	//armCamera = new USBCamera("cam0", true);
	//armCamera->SetExposureAuto();
	//armCamera->SetFPS(40.0);
	//armCamera->SetSize(640,480);
}

void Arm::InitDefaultCommand()
{
	SetDefaultCommand(new ArmControl());
	printf("Arm::initDefaultCommand Constructor");
=======
	armCamera = new USBCamera("cam0", true);
	armCamera->SetExposureAuto();
	armCamera->SetFPS(40.0);
	armCamera->SetSize(640,480);
>>>>>>> refs/remotes/FRC1740/master
}
