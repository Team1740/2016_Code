#include "StandardTankDrive.h"

StandardTankDrive::StandardTankDrive()
{
	Requires(drivetrain);
	leftDrive = 0;
	rightDrive = 0;
}

void StandardTankDrive::Initialize()
{
	datalogger->Log("StandardTankDrive::Initialize()", STATUS_MESSAGE);
}
void StandardTankDrive::Execute()
{
	datalogger->Log("StandardTankDrive::Execute()", VERBOSE_MESSAGE);
	leftDrive = oi->tankDriveJoystickLeft->GetY();
	rightDrive = oi->tankDriveJoystickRight->GetY();
	if(oi->left1->Get()) // left trigger is reverse
	{
		leftDrive *= -1;
		rightDrive *= -1;
	}
	if(oi->right1->Get()) // right trigger is half speed
	{
		leftDrive *= 0.5;
		rightDrive *= 0.5;
	}
	drivetrain->Go(leftDrive, rightDrive);
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
