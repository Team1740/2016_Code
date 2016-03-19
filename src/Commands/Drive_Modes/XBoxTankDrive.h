#ifndef XBOXTANKDRIVE_H
#define XBOXTANKDRIVE_H

#include "../../CommandBase.h"
#include "WPILib.h"

class XBoxTankDrive: public CommandBase
{
public:
	XBoxTankDrive();
	float leftDrive;
	float rightDrive;
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
