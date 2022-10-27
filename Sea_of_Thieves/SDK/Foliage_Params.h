#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	 */
	struct UFoliageStatistics_FoliageOverlappingSphereCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CenterPosition;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	 */
	struct UFoliageStatistics_FoliageOverlappingBoxCount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBox                                                Box;                                                     // 0x0010(0x001C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Foliage.InteractiveFoliageActor.CapsuleTouched
	 */
	struct AInteractiveFoliageActor_CapsuleTouched_Params
	{
	public:
		class AActor*                                              Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EM9L[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OverlapInfo;                                             // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Foliage.ProceduralFoliageSpawner.Simulate
	 */
	struct UProceduralFoliageSpawner_Simulate_Params
	{
	public:
		int32_t                                                    NumSteps;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
