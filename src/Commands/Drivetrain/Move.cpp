#include "Move.h"

Move::Move(float s, double time)
{
	Requires(drivetrain);
	speed = s;
	SetTimeout(time);
}

void Move::Initialize()
{
	drivetrain->Go(speed, speed);
}

void Move::Execute()
{
	return;
}

bool Move::IsFinished()
{
	return IsTimedOut();
}

void Move::End()
{
	drivetrain->Stop();
}

void Move::Interrupted()
{
	drivetrain->Stop();
}
