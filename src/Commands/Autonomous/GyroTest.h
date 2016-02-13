#ifndef GyroTest_H
#define GyroTest_H

#include "../../CommandBase.h"
#include "WPILib.h"

class GyroTest: public CommandBase
{
public:
	GyroTest();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	const float kP = 0.1;
};

#endif
