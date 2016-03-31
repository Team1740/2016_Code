#include "PortculisWedge.h"

PortculisWedge::PortculisWedge()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void PortculisWedge::Initialize()
{
	printf("PortculisWedge::Initialize()");
	drivetrain->Forward(0.25);
	drivetrain->Reverse(0.25);
	drivetrain->Forward(2.0);
	drivetrain->Stop();
}

// Called repeatedly when this Command is scheduled to run
void PortculisWedge::Execute()
{
	return;
}

// Make this return true when this Command no longer needs to run execute()
bool PortculisWedge::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void PortculisWedge::End()
{
	return;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PortculisWedge::Interrupted()
{
	return;
}
