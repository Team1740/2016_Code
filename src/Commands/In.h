#ifndef In_H
#define In_H

#include "../CommandBase.h"
#include "WPILib.h"

class In: public CommandBase
{
public:
	In();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
