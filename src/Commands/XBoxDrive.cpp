#include "XBoxDrive.h"
#include "../RobotMap.h"
#include "OI.h"

XBoxDrive::XBoxDrive()
{
	Requires(drivetrain);
}

void XBoxDrive::Initialize()
{
	datalogger->Log("XBoxDrive::Initialize()", STATUS_MESSAGE);
}

void XBoxDrive::Execute(){
	datalogger->Log("XBoxDrive::Execute()", VERBOSE_MESSAGE);
	drivetrain->leftMotor1->Set(-1 * oi->xboxController->GetRawAxis(1) + oi->xboxController->GetRawAxis(0));
	drivetrain->leftMotor2->Set(-1 * oi->xboxController->GetRawAxis(1) + oi->xboxController->GetRawAxis(0));
	drivetrain->rightMotor1->Set(oi->xboxController->GetRawAxis(1) + oi->xboxController->GetRawAxis(0));
	drivetrain->rightMotor2->Set(oi->xboxController->GetRawAxis(1) + oi->xboxController->GetRawAxis(0));
}

bool XBoxDrive::IsFinished()
{
	return false;
}

void XBoxDrive::End()
{
	datalogger->Log("XBoxDrive::End()", ERROR_MESSAGE);
	drivetrain->Stop();
}

void XBoxDrive::Interrupted()
{
	datalogger->Log("XBoxDrive::Interrupted()", STATUS_MESSAGE);
	drivetrain->Stop();
}
