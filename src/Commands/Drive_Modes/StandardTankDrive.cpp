#include "StandardTankDrive.h"

StandardTankDrive::StandardTankDrive()
{
	Requires(drivetrain);
}

void StandardTankDrive::Initialize()
{
	datalogger->Log("StandardTankDrive::Initialize()", STATUS_MESSAGE);
}
void StandardTankDrive::Execute()
{
	datalogger->Log("StandardTankDrive::Execute()", VERBOSE_MESSAGE);
	if(not oi->left1->Get() and not oi->right1->Get())
	{
		drivetrain->Go(oi->tankDriveJoystickLeft->GetY(), oi->tankDriveJoystickRight->GetY());
	}
	else if(oi->left1->Get() and not oi->right1->Get())
	{
		drivetrain->Go(-1 * oi->tankDriveJoystickLeft->GetY(), -1 * oi->tankDriveJoystickRight->GetY());
	}
	else if(not oi->left1->Get() and oi->right1->Get())
	{
		drivetrain->Go(0.5 * oi->tankDriveJoystickLeft->GetY(), 0.5 * oi->tankDriveJoystickRight->GetY());
	}
	else if(oi->left1->Get() and oi->right1->Get())
	{
		drivetrain->Go(-0.5 * oi->tankDriveJoystickLeft->GetY(), -0.5 * oi->tankDriveJoystickRight->GetY());
	}
}

bool StandardTankDrive::IsFinished()
{
	return false;
}

void StandardTankDrive::End()
{
	datalogger->Log("StandardTankDrive::End()", ERROR_MESSAGE);
	drivetrain->Stop();
}

void StandardTankDrive::Interrupted()
{
	datalogger->Log("StandardTankDrive::Interrupted()", STATUS_MESSAGE);
	drivetrain->Stop();
}
