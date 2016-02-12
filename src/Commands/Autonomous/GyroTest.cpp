#include "GyroTest.h"

GyroTest::GyroTest()
{
	Requires(drivetrain);
}

void GyroTest::Initialize()
{
	drivetrain->steeringGyro->Reset();
}

void GyroTest::Execute()
{
	float angle = drivetrain->steeringGyro->GetAngle();
	drivetrain->Go(0.5 - angle * kP, 0.5 + angle * kP);
}

bool GyroTest::IsFinished()
{
	return false;
}

void GyroTest::End()
{
	drivetrain->Stop();
}

void GyroTest::Interrupted()
{
	drivetrain->Stop();
}
