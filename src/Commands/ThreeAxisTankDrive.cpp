#include "ThreeAxisTankDrive.h"

ThreeAxisTankDrive::ThreeAxisTankDrive()
{
	Requires(drivetrain);
}

void ThreeAxisTankDrive::Initialize()
{
	datalogger->Log("ThreeAxisTankDrive::Initialize()", STATUS_MESSAGE);
}

void ThreeAxisTankDrive::Execute()
{

	// The drivetrain->Go() method has built in handling for reversing motors on the left side...

	float x = 0, t = 0; // floats for the axes x, twist
	float fl = 0, fr = 0, rl = 0, rr = 0; // floats for the motor outputs

	if (oi->threeAxisJoystick->GetX() > DEADBAND_XAXIS || oi->threeAxisJoystick->GetX() < -DEADBAND_XAXIS)  // Deadband
	{
		x = oi->threeAxisJoystick->GetX();
	}
	if (oi->threeAxisJoystick->GetTwist() > DEADBAND_TWIST || oi->threeAxisJoystick->GetTwist() < -DEADBAND_TWIST)  // Deadband
	{
		t = SCALE_TWIST  * oi->threeAxisJoystick->GetTwist();
	}
	fl = t + x; // Front Left Wheel
	fr = - t - x; // Front Right Wheel
	rl = t - x; // Rear Left Wheel
	rr = - t + x; // Rear Right Wheel

#if (DEBUG_LEVEL == 4) // CRE Not sure if this is legit

	if (gfl!=fl || gfr!=fr || grl!=rl || grr!=rr) // Only log the movement if something changed
	{
		gfl=fl; gfr=fr; grl=rl; grr=rr;
		char *data = new char[128];
		sprintf(data, "We're moving: %2.1f, %2.1f, %2.1f, %2.1f; X=%2.1f, Twist=%2.1f", fl, fr, rl, rr, x, t);
		datalogger->Log(data, DEBUG_MESSAGE);
	}

#endif

	drivetrain->Go(fl,fr,rl,rr);

}

bool ThreeAxisTankDrive::IsFinished()
{
	return false;
}

void ThreeAxisTankDrive::End()
{
	drivetrain->Stop();
	datalogger->Log("ThreeAxisTankDrive::End()", ERROR_MESSAGE);
}

void ThreeAxisTankDrive::Interrupted()
{
	drivetrain->Stop();
	datalogger->Log("ThreeAxisTankDrive::Interrupted()", STATUS_MESSAGE);
}
