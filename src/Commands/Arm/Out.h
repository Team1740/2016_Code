#ifndef Out_H
#define Out_H

#include "../../CommandBase.h"
#include "WPILib.h"

class Out: public CommandBase
{
public:
	Out();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
