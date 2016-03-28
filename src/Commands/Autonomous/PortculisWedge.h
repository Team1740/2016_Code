#ifndef PortculisWedge_H
#define PortculisWedge_H

#include "../../CommandBase.h"
#include "WPILib.h"

class PortculisWedge: public CommandBase
{
public:
	PortculisWedge();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
