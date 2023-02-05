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
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.FindItemDataGameplayEffect
	 */
	struct UWB_ItemTooltip_C_FindItemDataGameplayEffect_Params
	{
	public:
		TArray<struct FItemDataGameplayEffect>                     ItemDataGameplayEffectArray;                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimaryAssetId                                     EffectId;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FItemDataGameplayEffect                             FoundItemDataGameplayEffect;                             // 0x0020(0x0020)  (Parm, OutParm)
	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.Completed_E5EDA09445BB690707F6069D183BA8BC
	 */
	struct UWB_ItemTooltip_C_Completed_E5EDA09445BB690707F6069D183BA8BC_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.OnItemData
	 */
	struct UWB_ItemTooltip_C_OnItemData_Params
	{
	public:
		struct FItemData                                           NewItemData;                                             // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FItemData                                           OldItemData;                                             // 0x0090(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.OnLoadArtData
	 */
	struct UWB_ItemTooltip_C_OnLoadArtData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipWeapon
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipWeapon_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipArmor
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipArmor_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipUtility
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipUtility_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltip
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltip_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatProperty
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipStatProperty_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatAbility
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipStatAbility_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipDesc
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipDesc_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipMics
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipMics_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.OnUpdateItemRequirementsFulfilledStatus
	 */
	struct UWB_ItemTooltip_C_OnUpdateItemRequirementsFulfilledStatus_Params
	{
	public:
		bool                                                       bFulfilled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7V07[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EItemRequirementType>                               UnmetRequirementsArray;                                  // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipRequirements
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipRequirements_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.OnLoadDescData
	 */
	struct UWB_ItemTooltip_C_OnLoadDescData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipAccessory
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipAccessory_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.OnSetCostInfoData
	 */
	struct UWB_ItemTooltip_C_OnSetCostInfoData_Params
	{
	public:
		TArray<struct FMerchantCostInfo>                           InCostInfoArray;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bActive;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.OnRefreshItemName
	 */
	struct UWB_ItemTooltip_C_OnRefreshItemName_Params
	{	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.UpdateItemTooltipStatPropertyDescData
	 */
	struct UWB_ItemTooltip_C_UpdateItemTooltipStatPropertyDescData_Params
	{
	public:
		class FText                                                TypeText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ValueText;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WB_ItemTooltip.WB_ItemTooltip_C.ExecuteUbergraph_WB_ItemTooltip
	 */
	struct UWB_ItemTooltip_C_ExecuteUbergraph_WB_ItemTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BKUX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
