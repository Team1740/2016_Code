#include "XBoxTankDrive.h"
#include "../../RobotMap.h"
#include "../../OI.h"

XBoxTankDrive::XBoxTankDrive()
{
	Requires(drivetrain);
	leftDrive = 0;
	rightDrive = 0;
}

void XBoxTankDrive::Initialize()
{
	datalogger->Log("XBoxTankDrive::Initialize()", STATUS_MESSAGE);
}

void XBoxTankDrive::Execute()
{
	datalogger->Log("XBoxTankDrive::Execute()", VERBOSE_MESSAGE);
	leftDrive = oi->xboxController->GetRawAxis(1);
	rightDrive = oi->xboxController->GetRawAxis(5);
	if(oi->xboxController->GetRawAxis(2) > 0.5) // left trigger is reverse
	{
		leftDrive *= -1;
		rightDrive *= -1;
	}
	if(oi->xboxController->GetRawAxis(3) > 0.5) // right trigger is half speed
	{
		leftDrive *= 0.5;
		rightDrive *= 0.5;
	}
	drivetrain->Go(leftDrive, rightDrive);
}

bool XBoxTankDrive::IsFinished()
{
	return false;
}

void XBoxTankDrive::End()
{
	datalogger->Log("XBoxTankDrive::End()", ERROR_MESSAGE);
	drivetrain->Stop();
}

void XBoxTankDrive::Interrupted()
{
	datalogger->Log("XBoxTankDrive::Interrupted()", STATUS_MESSAGE);
	drivetrain->Stop();
}
