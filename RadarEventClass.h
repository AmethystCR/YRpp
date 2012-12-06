/*
	Radar notifications
*/

#ifndef RADAREVENT_H
#define RADAREVENT_H

#include <GeneralDefinitions.h>

class RadarEventClass
{
public:
	static bool Create(int nType, CellStruct nMapCoords)
		{ PUSH_VAR32(nMapCoords); SET_REG32(ecx, nType); CALL(0x65FA70); }

private:
	//Constructor, Destructor
	RadarEventClass(int nType, CellStruct nMapCoords)
		{ JMP_THIS(0x65FB80); }

	~RadarEventClass()		{/*???*/}

	//===========================================================================
	//===== Properties ==========================================================
	//===========================================================================

public:

	int Type;
	int RadarX;	//not sure
	int RadarY;	//not sure
	float Speed;
	float RotationValue;
	float RotationSpeed;
	float ColorValue;
	float ColorSpeed;
	CellStruct MapCoords;
	TimerStruct DurationTimer;	//Rotation timer?
	TimerStruct VisibilityTimer;	//Color timer?
	bool Rotating;
	bool Visible;
};

#endif
