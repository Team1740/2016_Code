#ifndef PISTON_H
#define PISTON_H

#include "Commands/Subsystem.h"
#include "Solenoid.h"
#include "../RobotMap.h"
#include "WPILib.h"

class Piston: public Subsystem
{
private:
	Solenoid *s0;
	Solenoid *s1;
public:
	Piston();
	bool isOpen;
	void Extend();
	void Retract();
};

#endif
