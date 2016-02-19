#include "Arm.h"
#include "../RobotMap.h"

Arm::Arm(): Subsystem("Arm")
{
	lifter_motor = new CANTalon(LIFTER_MOTOR_ID);
	extender_motor = new TalonSRX(EXTENDER_MOTOR_ID);
}
