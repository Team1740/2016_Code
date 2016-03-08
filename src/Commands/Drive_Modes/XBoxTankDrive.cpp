#include "XBoxTankDrive.h"
#include "../../RobotMap.h"
#include "../../OI.h"

XBoxTankDrive::XBoxTankDrive()
{
	Requires(drivetrain);
}

void XBoxTankDrive::Initialize()
{
	datalogger->Log("XBoxTankDrive::Initialize()", STATUS_MESSAGE);
}

void XBoxTankDrive::Execute(){
	datalogger->Log("XBoxTankDrive::Execute()", VERBOSE_MESSAGE);
	if(oi->xboxController->GetRawAxis(2) <= 0.5 and oi->xboxController->GetRawAxis(3) <= 0.5)
	{
		drivetrain->Go(oi->xboxController->GetRawAxis(1), oi->xboxController->GetRawAxis(5));
	}
	else if(oi->xboxController->GetRawAxis(2) > 0.5 and oi->xboxController->GetRawAxis(3) <= 0.5)
	{
		drivetrain->Go(-1 * oi->xboxController->GetRawAxis(1), -1 * oi->xboxController->GetRawAxis(5));
	}
	else if(oi->xboxController->GetRawAxis(2) <= 0.5 and oi->xboxController->GetRawAxis(3) > 0.5)
	{
		drivetrain->Go(0.5 * oi->xboxController->GetRawAxis(1), 0.5 * oi->xboxController->GetRawAxis(5));
	}
	else if(oi->xboxController->GetRawAxis(2) > 0.5 and oi->xboxController->GetRawAxis(3) <= 0.5)
	{
		drivetrain->Go(-0.5 * oi->xboxController->GetRawAxis(1), -0.5 * oi->xboxController->GetRawAxis(5));
	}
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
