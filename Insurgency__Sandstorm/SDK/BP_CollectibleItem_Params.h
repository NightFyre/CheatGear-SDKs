#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_CollectibleItem.BP_CollectibleItem_C.SetupVariation
	 */
	struct UBP_CollectibleItem_C_SetupVariation_Params
	{	};

	/**
	 * Function BP_CollectibleItem.BP_CollectibleItem_C.Get Cosmetic Information
	 */
	struct UBP_CollectibleItem_C_Get_Cosmetic_Information_Params
	{	};

	/**
	 * Function BP_CollectibleItem.BP_CollectibleItem_C.Set Collectible
	 */
	struct UBP_CollectibleItem_C_Set_Collectible_Params
	{
	public:
		class UClass*                                              NewCollectible;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewCredits;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CollectibleItem.BP_CollectibleItem_C.PreConstruct
	 */
	struct UBP_CollectibleItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CollectibleItem.BP_CollectibleItem_C.ExecuteUbergraph_BP_CollectibleItem
	 */
	struct UBP_CollectibleItem_C_ExecuteUbergraph_BP_CollectibleItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
