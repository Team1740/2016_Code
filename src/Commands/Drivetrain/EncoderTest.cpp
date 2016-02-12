#include "EncoderTest.h"
#include "math.h"

EncoderTest::EncoderTest(int d)
{
	Requires(drivetrain);
	distance = d;
	count = distance;// / 280 * 125;
}

void EncoderTest::Initialize()
{
	drivetrain->leftEncoder->Reset();
	drivetrain->rightEncoder->Reset();
	drivetrain->Go(0.5, -0.5);
}

void EncoderTest::Execute()
{
	return;
}

bool EncoderTest::IsFinished()
{
	if(abs(drivetrain->leftEncoder->Get()) >= count and abs(drivetrain->rightEncoder->Get()) >= count)
	{
		return true;
	}
	else
	{
		printf("Left encoder: %d; Right encoder: %d", drivetrain->leftEncoder->Get(), drivetrain->rightEncoder->Get());
		return false;
	}
//	return abs(drivetrain->leftEncoder->Get()) >= count and abs(drivetrain->rightEncoder->Get()) >= count;
}

void EncoderTest::End()
{
	drivetrain->Stop();
}

void EncoderTest::Interrupted()
{
	drivetrain->Stop();
}
