#include "LowBar.h"
#include "../Drivetrain/Move.h"
#include "../Arm/Down.h"
#include "RoughTerrain.h"

LowBar::LowBar()
{
	AddSequential(new Down());
	AddSequential(new RoughTerrain(10000));
}
