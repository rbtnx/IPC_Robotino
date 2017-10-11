///////////////////////////////////////////////////////////////////////////////
// velocityConverterToMotorsServices.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_velocityConverterToMotors = 0x3F000000;
#define SRVNAME_VELOCITYCONVERTERTOMOTORS "velocityConverterToMotors"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_velocityConverterToMotorsCvelocityConverterToMotors = {0x68110ca8,0x61e2,0x4695,{0xa7,0xca,0x1f,0x93,0xcd,0x51,0x9b,0x65}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_velocityConverterToMotorsParameter = 0x00000001;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _velocityConverterToMotorsParameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} velocityConverterToMotorsParameter, *PvelocityConverterToMotorsParameter;

typedef struct _velocityConverterToMotorsInputs
{
	double vXCartesianToMotors;
	double vYCartesianToMotors;
	double thetaCartesianToMotors;
} velocityConverterToMotorsInputs, *PvelocityConverterToMotorsInputs;

#pragma pack(push,1)
typedef struct _velocityConverterToMotorsOutputs
{
	double velocityToMotors1;
	double velocityToMotors2;
	double velocityToMotors3;
	SHORT directionToMotors1;
	SHORT directionToMotors2;
	SHORT directionToMotors3;
} velocityConverterToMotorsOutputs, *PvelocityConverterToMotorsOutputs;
#pragma pack(pop)

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_velocityConverterToMotorsInputs 0
#define ADI_velocityConverterToMotorsOutputs 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>
