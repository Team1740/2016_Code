#ifndef THREEAXISTANKDRIVE_H
#define THREEAXISTANKDRIVE_H

#include "math.h"
#include "../CommandBase.h"
#include "WPILib.h"

#define SCALE_TWIST 0.4
#define SCALE_XAXIS 1.0
#define DEADBAND_XAXIS .1
#define DEADBAND_TWIST .3

class ThreeAxisTankDrive: public CommandBase
{
public:
	ThreeAxisTankDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	float gfl = 0, gfr = 0, grl = 0, grr = 0; // floats for the motor outputs
};

#endif
