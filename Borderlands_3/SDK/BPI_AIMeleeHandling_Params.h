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
	 * Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_GetElementalTypeFromMeleeWeapon
	 */
	struct UBPI_AIMeleeHandling_C_AIMelee_GetElementalTypeFromMeleeWeapon_Params
	{
	public:
		EOakElementalType                                          MeleeWeaponElement;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_SetNewMeleeWeaponClass
	 */
	struct UBPI_AIMeleeHandling_C_AIMelee_SetNewMeleeWeaponClass_Params
	{
	public:
		class UClass*                                              NewMeleeWeaponClass;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtLocation
	 */
	struct UBPI_AIMeleeHandling_C_AIMelee_ThrowAtLocation_Params
	{
	public:
		struct FVector                                             LocationToThrowAt;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowSpeed;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercentage;                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewMeleeWeapon;                                   // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesntExist;                                      // 0x0015(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtActor
	 */
	struct UBPI_AIMeleeHandling_C_AIMelee_ThrowAtActor_Params
	{
	public:
		class AActor*                                              ActorToThrowAt;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowSpeed;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercentage;                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActorSocket;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ActorOffset;                                             // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ThrowAngleOffset;                                        // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      MaxPrediction;                                           // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewMeleeWeapon;                                   // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesntExist;                                      // 0x0035(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_ThrowAtTarget
	 */
	struct UBPI_AIMeleeHandling_C_AIMelee_ThrowAtTarget_Params
	{
	public:
		float                                                      ThrowSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercent;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TargetSocket;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetOffset;                                            // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ThrowAngleOffset;                                        // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      MaxPrediction;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewMeleeWeapon;                                   // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesntExist;                                      // 0x002D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_Drop
	 */
	struct UBPI_AIMeleeHandling_C_AIMelee_Drop_Params
	{
	public:
		bool                                                       RequestNewMeleeWeapon;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_AIMeleeHandling.BPI_AIMeleeHandling_C.AIMelee_Spawn
	 */
	struct UBPI_AIMeleeHandling_C_AIMelee_Spawn_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
