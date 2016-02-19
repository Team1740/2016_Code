#include "DriveThroughObstacle.h"
#include "../Drivetrain/Move.h"
#include "../Drivetrain/DriveUntilRange.h"

DriveThroughObstacle::DriveThroughObstacle()
{
	AddSequential(new Move(1.0, 3));
//	AddSequential(new DriveUntilRange(1.0, 12));
}
