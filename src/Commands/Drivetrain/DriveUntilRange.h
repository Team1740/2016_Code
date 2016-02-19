#ifndef DriveUntilRange_H
#define DriveUntilRange_H

#include "../../CommandBase.h"
#include "WPILib.h"

class DriveUntilRange: public CommandBase
{
public:
	DriveUntilRange(float, float);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	float speed;
	float range;
};

#endif
