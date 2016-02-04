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
#define LEFT_MOTOR_1_ID 4
#define LEFT_MOTOR_2_ID 5
#define RIGHT_MOTOR_1_ID 2
#define RIGHT_MOTOR_2_ID 3
#define LIFTER_MOTOR_ID 1
#define EXTENDER_MOTOR_ID 6

// Pneumatic port configuration
//#define CYLINDER_PORT_0 0 // Gripper solenoid wired to port 0 on pneumatic break-out card
//#define CYLINDER_PORT_1 1 // Release solenoid wired to port 1 on pneumatic break-out card

#endif
