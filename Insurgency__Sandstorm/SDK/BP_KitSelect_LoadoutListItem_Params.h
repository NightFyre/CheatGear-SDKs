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
	 * Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateAddUpgradeData
	 */
	struct UBP_KitSelect_LoadoutListItem_C_UpdateAddUpgradeData_Params
	{
	public:
		EItemSlot                                                  InWeaponSlot;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4AMG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InParentLoadoutCategoryIndex;                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.OnFocusReceived
	 */
	struct UBP_KitSelect_LoadoutListItem_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateUpgradeData
	 */
	struct UBP_KitSelect_LoadoutListItem_C_UpdateUpgradeData_Params
	{
	public:
		class UClass*                                              InUpgradeClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InParentItemSlot;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WXOR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InParentItemSubSlot;                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSupplyCost;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsSupplyCostVisible;                                   // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J20A[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              InItemClass;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InParentLoadoutCategoryIndex;                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateItemData
	 */
	struct UBP_KitSelect_LoadoutListItem_C_UpdateItemData_Params
	{
	public:
		int32_t                                                    InSupplyCost;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  InItemSlot;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MM70[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSubSlot;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PKZA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              InItemClass;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLoadoutCategoryIndex;                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_LoadoutListItem.BP_KitSelect_LoadoutListItem_C.UpdateEmptyData
	 */
	struct UBP_KitSelect_LoadoutListItem_C_UpdateEmptyData_Params
	{
	public:
		class FText                                                InSlotText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EItemSlot                                                  InItemSlot;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BEUP[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSubSlot;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInDisabledSlot;                                         // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsNewGear;                                            // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5968[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InLoadoutCategoryIndex;                                  // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
