#include "OI.h"
#include "Commands/Piston/ExtendPiston.h"
#include "Commands/Piston/RetractPiston.h"
#include "Commands/Arm/Up.h"
#include "Commands/Arm/Down.h"
#include "Commands/Arm/In.h"
#include "Commands/Arm/Out.h"

OI::OI()
{
	// Driver Station option A: Sticks 1 & 2 used for Tank Drive
	tankDriveJoystickLeft = new Joystick(1);
	tankDriveJoystickRight = new Joystick(2);
	// Driver Station option B: Stick 3 is 3-axis joystick
	threeAxisJoystick = new Joystick(3);
	// Driver Station option C: Stick 4 is Xbox controller
	xboxController = new Joystick(4);
	// Joystick 5 is the NES controller
	NESController = new Joystick(5);
	// Joystick 0 is the launchpad
	launchPad = new Joystick(0);

	left1 = new JoystickButton(tankDriveJoystickLeft, 1);
	right1 = new JoystickButton(tankDriveJoystickRight, 1);
	threeAxis1 = new JoystickButton(threeAxisJoystick, 1);
	threeAxis3 = new JoystickButton(threeAxisJoystick, 3);
	threeAxis4 = new JoystickButton(threeAxisJoystick, 4);
	threeAxis5 = new JoystickButton(threeAxisJoystick, 5);
	threeAxis6 = new JoystickButton(threeAxisJoystick, 6);
	xboxA = new JoystickButton(xboxController, 1);
	xboxB = new JoystickButton(xboxController, 2);
	xboxLB = new JoystickButton(xboxController, 5);
	xboxRB = new JoystickButton(xboxController, 6);
	NESStart = new JoystickButton(NESController, 8);
	NESSelect = new JoystickButton(NESController, 9);
	NESB = new JoystickButton(NESController, 2);
	NESA = new JoystickButton(NESController, 1);
}
