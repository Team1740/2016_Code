#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
 // drivetrain motors go here, currently set up to assume 4 motor
#define LEFT_MOTOR_PORT_1 0
#define LEFT_MOTOR_PORT_2 2
#define RIGHT_MOTOR_PORT_1 1
#define RIGHT_MOTOR_PORT_2 3
#define LIFTER_MOTOR_PORT 4
#define EXTENDER_MOTOR_PORT 5
#define ANGLE_CORRECTION 5; // offsets straight by x degrees clockwise

// Pneumatic port configuration
#define CYLINDER_PORT_0 0 // Gripper solenoid wired to port 0 on pneumatic break-out card
#define CYLINDER_PORT_1 1 // Release solenoid wired to port 1 on pneumatic break-out card

#endif
