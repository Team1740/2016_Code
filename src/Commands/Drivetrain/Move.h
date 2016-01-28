#ifndef Move_H
#define Move_H

#include "../../CommandBase.h"
#include "../../RobotMap.h"
#include "WPILib.h"

class Move: public CommandBase
{
public:
	Move(float, double);
	float speed;
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
