#include "XBoxArcadeDrive.h"
#include "../../RobotMap.h"
#include "../../OI.h"

XBoxArcadeDrive::XBoxArcadeDrive()
{
	Requires(drivetrain);
	leftDrive = 0;
	rightDrive = 0;
}

void XBoxArcadeDrive::Initialize()
{
	datalogger->Log("XBoxArcadeDrive::Initialize()", STATUS_MESSAGE);
}

void XBoxArcadeDrive::Execute()
{
	leftDrive = oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4);
	rightDrive = oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4);
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

bool XBoxArcadeDrive::IsFinished()
{
	return false;
}

void XBoxArcadeDrive::End()
{
	datalogger->Log("XBoxArcadeDrive::End()", ERROR_MESSAGE);
	drivetrain->Stop();
}

void XBoxArcadeDrive::Interrupted()
{
	datalogger->Log("XBoxArcadeDrive::Interrupted()", STATUS_MESSAGE);
	drivetrain->Stop();
}
