#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetNavPainterEnabled
	 */
	struct UBPI_IO_Combat_Barrel_C_BPI_SetNavPainterEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ResetHealth
	 */
	struct UBPI_IO_Combat_Barrel_C_BPI_ResetHealth_Params
	{	};

	/**
	 * Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_ImpulseThrow
	 */
	struct UBPI_IO_Combat_Barrel_C_BPI_ImpulseThrow_Params
	{
	public:
		struct FVector                                             ThrowVector;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Force;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotatorForSpin;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      FuseSpeedScale;                                          // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AdditiveVector;                                          // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_SetSimulatePhysics
	 */
	struct UBPI_IO_Combat_Barrel_C_BPI_SetSimulatePhysics_Params
	{
	public:
		bool                                                       PhysicsOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_Explode
	 */
	struct UBPI_IO_Combat_Barrel_C_BPI_Explode_Params
	{	};

	/**
	 * Function BPI_IO_Combat_Barrel.BPI_IO_Combat_Barrel_C.BPI_StartFuse
	 */
	struct UBPI_IO_Combat_Barrel_C_BPI_StartFuse_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
