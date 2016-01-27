#include <Subsystems/Arm.h>
#include "../RobotMap.h"

Arm::Arm(): Subsystem("Arm")
{
	lifter_motor = new TalonSRX(LIFTER_MOTOR_PORT);
	extender_motor = new TalonSRX(EXTENDER_MOTOR_PORT);
}
