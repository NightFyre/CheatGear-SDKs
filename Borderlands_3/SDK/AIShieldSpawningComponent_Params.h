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
	 * Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Spawn
	 */
	struct UAIShieldSpawningComponent_C_AIShield_Spawn_Params
	{	};

	/**
	 * Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtTarget
	 */
	struct UAIShieldSpawningComponent_C_AIShield_ThrowAtTarget_Params
	{
	public:
		float                                                      ThrowSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercent;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TargetSocket;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetOffset;                                            // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ThrowAngleOffset;                                        // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      MaxPrediction;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewShield;                                        // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesntExist;                                      // 0x002D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtActor
	 */
	struct UAIShieldSpawningComponent_C_AIShield_ThrowAtActor_Params
	{
	public:
		class AActor*                                              ActorToThrowAt;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowSpeed;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercentage;                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActorSocket;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ActorOffset;                                             // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ThrowAngleOffset;                                        // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      MaxPrediction;                                           // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewShield;                                        // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesntExist;                                      // 0x0035(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_ThrowAtLocation
	 */
	struct UAIShieldSpawningComponent_C_AIShield_ThrowAtLocation_Params
	{
	public:
		struct FVector                                             LocationToThrowAt;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowSpeed;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercentage;                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewShield;                                        // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesntExist;                                      // 0x0015(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_Drop
	 */
	struct UAIShieldSpawningComponent_C_AIShield_Drop_Params
	{
	public:
		bool                                                       RequestNewShield;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.AIShield_SetNewShieldClass
	 */
	struct UAIShieldSpawningComponent_C_AIShield_SetNewShieldClass_Params
	{
	public:
		class UClass*                                              NewShieldClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIShieldSpawningComponent.AIShieldSpawningComponent_C.ExecuteUbergraph_AIShieldSpawningComponent
	 */
	struct UAIShieldSpawningComponent_C_ExecuteUbergraph_AIShieldSpawningComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
