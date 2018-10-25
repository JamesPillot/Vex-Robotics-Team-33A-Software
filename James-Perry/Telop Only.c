#pragma config(Sensor, dgtl4,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl6,  ,               sensorSONAR_inch)
#pragma config(Sensor, dgtl11, ,               sensorQuadEncoder)
#pragma config(Motor,  port3,            ,             tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,            ,             tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,            ,             tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
#include "James_library.h"
#include "SensorSetup.h"
#include "arcade_drive.h"
#include "arcade_drive.c"
#include "Output.c"

task main()
{
	dt_init();
	while(1)
	{
		CII(vexRT[Ch3], vexRT[Ch1],vexRT[Btn7L], vexRT[Btn7R], vexRT[Btn6U]);//ch3 is wheel, ch1 is throttle, btn7l is for p control stability, btn7r is to reset encoder count b4 pressing 7l
		Output();
	}
}
