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
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.GetItemToolTipWidget
	 */
	struct UWB_MerchantItemBase_C_GetItemToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnActiveSellBackService
	 */
	struct UWB_MerchantItemBase_C_OnActiveSellBackService_Params
	{
	public:
		class UWB_ItemTooltip_C*                                   ItemTooltip;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bActive;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.PostItemSound
	 */
	struct UWB_MerchantItemBase_C_PostItemSound_Params
	{
	public:
		struct FGameplayTag                                        SoundTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnMouseButtonDown
	 */
	struct UWB_MerchantItemBase_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00D0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.CreateItemTooltip
	 */
	struct UWB_MerchantItemBase_C_CreateItemTooltip_Params
	{	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnItemContentsCountUpdated
	 */
	struct UWB_MerchantItemBase_C_OnItemContentsCountUpdated_Params
	{
	public:
		int32_t                                                    ContentsCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnSetItemRequirementsFulfilledStatus
	 */
	struct UWB_MerchantItemBase_C_OnSetItemRequirementsFulfilledStatus_Params
	{
	public:
		bool                                                       bFufilled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EJSU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPrimaryAssetId                                     PlayerCharacterId;                                       // 0x0004(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L456[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDCAttributeSet*                                     AttributeSet;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FPrimaryAssetId>                             PerkIdArray;                                             // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnDragCancelled
	 */
	struct UWB_MerchantItemBase_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.Construct
	 */
	struct UWB_MerchantItemBase_C_Construct_Params
	{	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnItemData
	 */
	struct UWB_MerchantItemBase_C_OnItemData_Params
	{
	public:
		struct FItemData                                           NewItemData;                                             // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FItemData                                           OldItemData;                                             // 0x0090(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.SetActivateStockSellBackInfo
	 */
	struct UWB_MerchantItemBase_C_SetActivateStockSellBackInfo_Params
	{
	public:
		bool                                                       bSellTabOpen;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnStockSellBackDataSet
	 */
	struct UWB_MerchantItemBase_C_OnStockSellBackDataSet_Params
	{
	public:
		struct FStockSellBackData                                  InStockSellBackData;                                     // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnStockBuyDataSet
	 */
	struct UWB_MerchantItemBase_C_OnStockBuyDataSet_Params
	{
	public:
		struct FStockBuyData                                       InStockBuyData;                                          // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnLoadSoundData
	 */
	struct UWB_MerchantItemBase_C_OnLoadSoundData_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.UpdateItemContentsCount
	 */
	struct UWB_MerchantItemBase_C_UpdateItemContentsCount_Params
	{	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnMouseEnter
	 */
	struct UWB_MerchantItemBase_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0040(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnMouseLeave
	 */
	struct UWB_MerchantItemBase_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnSelected
	 */
	struct UWB_MerchantItemBase_C_OnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.OnStockCraftDataSet
	 */
	struct UWB_MerchantItemBase_C_OnStockCraftDataSet_Params
	{
	public:
		struct FStockCraftData                                     InStockCraftData;                                        // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_MerchantItemBase.WB_MerchantItemBase_C.ExecuteUbergraph_WB_MerchantItemBase
	 */
	struct UWB_MerchantItemBase_C_ExecuteUbergraph_WB_MerchantItemBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9LIR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
