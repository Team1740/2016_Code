#include "DriveToGoal.h"
#include "../Drivetrain/Move.h"
#include "../Drivetrain/DriveUntilRange.h"

DriveToGoal::DriveToGoal()
{
	AddSequential(new Move(1.0, 3));
//	AddSequential(new MoveDistance(1.0, 200));
}
