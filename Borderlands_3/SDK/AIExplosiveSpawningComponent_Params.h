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
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Spawn
	 */
	struct UAIExplosiveSpawningComponent_C_AIExplosive_Spawn_Params
	{	};

	/**
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Prime
	 */
	struct UAIExplosiveSpawningComponent_C_AIExplosive_Prime_Params
	{	};

	/**
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Detonate
	 */
	struct UAIExplosiveSpawningComponent_C_AIExplosive_Detonate_Params
	{
	public:
		bool                                                       KillSelfOnDetonate;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RequestNewExplosive;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LLMN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatorOverride;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtTarget
	 */
	struct UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtTarget_Params
	{
	public:
		float                                                      ThrowSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercent;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TargetSocket;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetOffset;                                            // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ThrowAngleOffset;                                        // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      MaxPrediction;                                           // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewExplosive;                                     // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesn_tExist;                                     // 0x002D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_Drop
	 */
	struct UAIExplosiveSpawningComponent_C_AIExplosive_Drop_Params
	{
	public:
		bool                                                       RequestNewExplosive;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D30V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InstigatorOverride;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtActor
	 */
	struct UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtActor_Params
	{
	public:
		class AActor*                                              ActorToThrowAt;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowSpeed;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercentage;                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ActorSocket;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ActorOffset;                                             // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ThrowAngleOffset;                                        // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      MaxPrediction;                                           // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewExplosive;                                     // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesntExist;                                      // 0x0035(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_ThrowAtLocation
	 */
	struct UAIExplosiveSpawningComponent_C_AIExplosive_ThrowAtLocation_Params
	{
	public:
		struct FVector                                             LocationToThrowAt;                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowSpeed;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ThrowAnglePercentage;                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RequestNewExplosive;                                     // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnIfDoesntExist;                                      // 0x0015(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.AIExplosive_SetNewExplosiveClass
	 */
	struct UAIExplosiveSpawningComponent_C_AIExplosive_SetNewExplosiveClass_Params
	{
	public:
		class UClass*                                              NewExplosiveClass;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIExplosiveSpawningComponent.AIExplosiveSpawningComponent_C.ExecuteUbergraph_AIExplosiveSpawningComponent
	 */
	struct UAIExplosiveSpawningComponent_C_ExecuteUbergraph_AIExplosiveSpawningComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
