#include "XBoxArcadeDrive.h"
#include "../../RobotMap.h"
#include "../../OI.h"

XBoxArcadeDrive::XBoxArcadeDrive()
{
	Requires(drivetrain);
}

void XBoxArcadeDrive::Initialize()
{
	datalogger->Log("XBoxArcadeDrive::Initialize()", STATUS_MESSAGE);
}

void XBoxArcadeDrive::Execute(){
	datalogger->Log("XBoxDrive::Execute()", VERBOSE_MESSAGE);
	if(oi->xboxController->GetRawAxis(2) <= 0.5 and oi->xboxController->GetRawAxis(3) <= 0.5)
	{
		drivetrain->Go(oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4), oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4));
	}
	else if(oi->xboxController->GetRawAxis(2) > 0.5 and oi->xboxController->GetRawAxis(3) <= 0.5)
	{
		drivetrain->Go(-1 * oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4), -1 * oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4));
	}
	else if(oi->xboxController->GetRawAxis(2) <= 0.5 and oi->xboxController->GetRawAxis(3) > 0.5)
	{
		drivetrain->Go(0.5 * oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4), 0.5 * oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4));
	}
	else if(oi->xboxController->GetRawAxis(2) > 0.5 and oi->xboxController->GetRawAxis(3) <= 0.5)
	{
		drivetrain->Go(-0.5 * oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4), -0.5 * oi->xboxController->GetRawAxis(1) - oi->xboxController->GetRawAxis(4));
	}
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
