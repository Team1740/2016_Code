#ifndef RoughTerrain_H
#define RoughTerrain_H

#include "../../CommandBase.h"
#include "WPILib.h"

class RoughTerrain: public CommandBase
{
public:
	RoughTerrain(long);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	unsigned long count;
	unsigned int timer;
};

#endif
