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
	 * Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.SetSlotColor
	 */
	struct UWB_Equipment_WeaponSetBase_C_SetSlotColor_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCanEquip;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EB51[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OverrideItemSizeBox
	 */
	struct UWB_Equipment_WeaponSetBase_C_OverrideItemSizeBox_Params
	{
	public:
		class USizeBox*                                            TargetSizeBox;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     InventoryWidth;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     InventoryHeight;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnInitialized
	 */
	struct UWB_Equipment_WeaponSetBase_C_OnInitialized_Params
	{	};

	/**
	 * Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnFinishedItemDataSet
	 */
	struct UWB_Equipment_WeaponSetBase_C_OnFinishedItemDataSet_Params
	{
	public:
		struct FItemData                                           InItemData;                                              // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FGameplayTag                                        HandType;                                                // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        SlotType;                                                // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FItemInventorySize                                  InventorySize;                                           // 0x00A0(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnOverlapItemWidget
	 */
	struct UWB_Equipment_WeaponSetBase_C_OnOverlapItemWidget_Params
	{
	public:
		struct FPrimaryAssetId                                     ItemId;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       bValidSlot;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCanEquip;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.OnLeaveItemWidget
	 */
	struct UWB_Equipment_WeaponSetBase_C_OnLeaveItemWidget_Params
	{	};

	/**
	 * Function WB_Equipment_WeaponSetBase.WB_Equipment_WeaponSetBase_C.ExecuteUbergraph_WB_Equipment_WeaponSetBase
	 */
	struct UWB_Equipment_WeaponSetBase_C_ExecuteUbergraph_WB_Equipment_WeaponSetBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3IKF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
