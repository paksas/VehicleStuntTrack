// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "VehicleWheelFront.h"
#include "TireConfig.h"
#include "UObject/ConstructorHelpers.h"

UVehicleWheelFront::UVehicleWheelFront()
{
	ShapeRadius = 18.f;
	ShapeWidth = 15.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 40.f;

	// Setup suspension forces
	SuspensionForceOffset = -4.0f;
	SuspensionMaxRaise = 10.0f;
	SuspensionMaxDrop = 30.0f;
	SuspensionNaturalFrequency = 15.0f;
	SuspensionDampingRatio = 0.3f;

	// Find the tire object and set the data for it
	static ConstructorHelpers::FObjectFinder<UTireConfig> TireData(TEXT("/Game/VehicleAdv/Vehicle/WheelData/Vehicle_FrontTireConfig.Vehicle_FrontTireConfig"));
	TireConfig = TireData.Object;
}
