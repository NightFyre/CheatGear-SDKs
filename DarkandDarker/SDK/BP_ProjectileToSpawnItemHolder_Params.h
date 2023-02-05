#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ProjectileHit
	 */
	struct ABP_ProjectileToSpawnItemHolder_C_ProjectileHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       bIsAttached;                                             // 0x00E8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5J20[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ActorPrevTickTransform;                                  // 0x00F0(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.SpawnItemHolder
	 */
	struct ABP_ProjectileToSpawnItemHolder_C_SpawnItemHolder_Params
	{
	public:
		class UClass*                                              SpawnHolderClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_78GI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UItem*                                               ItemObject;                                              // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ExecuteUbergraph_BP_ProjectileToSpawnItemHolder
	 */
	struct ABP_ProjectileToSpawnItemHolder_C_ExecuteUbergraph_BP_ProjectileToSpawnItemHolder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_COMC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
