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
#define LIFTER_MOTOR_ID 0
#define EXTENDER_MOTOR_ID 6
#define LEFT_ENCODER_PORT_2 2
#define LEFT_ENCODER_PORT_3 3
#define RIGHT_ENCODER_PORT_0 0
#define RIGHT_ENCODER_PORT_1 1
//#define ARM_ENCODER_PORT_0 0
//#define ARM_ENCODER_PORT_1 1
#define STEERING_GYRO_PORT 0

// Pneumatic port configuration
//#define CYLINDER_PORT_0 0 // Gripper solenoid wired to port 0 on pneumatic break-out card
//#define CYLINDER_PORT_1 1 // Release solenoid wired to port 1 on pneumatic break-out card

#endif
