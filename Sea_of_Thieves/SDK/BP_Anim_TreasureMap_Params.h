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
	 * Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStarted
	 */
	struct UBP_Anim_TreasureMap_C_OnUseStarted_Params
	{
	public:
		class UClass*                                              InputID;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FWieldableItemActionVisuals                         ActionVisuals;                                           // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStopped
	 */
	struct UBP_Anim_TreasureMap_C_OnUseStopped_Params
	{
	public:
		class UClass*                                              InputID;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.ExecuteUbergraph_BP_Anim_TreasureMap
	 */
	struct UBP_Anim_TreasureMap_C_ExecuteUbergraph_BP_Anim_TreasureMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L3S2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
