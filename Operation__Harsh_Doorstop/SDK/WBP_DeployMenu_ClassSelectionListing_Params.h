#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.AreColorsNearlyEqual
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_AreColorsNearlyEqual_Params
	{
	public:
		struct FLinearColor                                        ColorOne;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ColorTwo;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEqual;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalFillEqpSlots
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalFillEqpSlots_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SortItemEntriesInPlaceBySlotNum
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_SortItemEntriesInPlaceBySlotNum_Params
	{
	public:
		TArray<struct FHDItemEntry>                                EntriesToSort;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetEqpDisplaySymbolBySlotNum
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalSetEqpDisplaySymbolBySlotNum_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MSSE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          SlotSymbolToUse;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDesignTime;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplayEqpSlots
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupKitDisplayEqpSlots_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalGetEqpSlotImageWidgetByNum
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalGetEqpSlotImageWidgetByNum_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3CYE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UImage*                                              EqpSlotImage;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetClassRestrictedState
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalSetClassRestrictedState_Params
	{
	public:
		bool                                                       bNewRestricted;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OTBU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                NewRestrictionReason;                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalUpdateClassRestrictedText
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalUpdateClassRestrictedText_Params
	{
	public:
		bool                                                       bKitRestricted;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QJSN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                KitRestrictionReason;                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitRestrictionDisplay
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupKitRestrictionDisplay_Params
	{
	public:
		bool                                                       bKitRestricted;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DTHF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                KitRestrictionReason;                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalIsKitRestricted
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalIsKitRestricted_Params
	{
	public:
		bool                                                       bKitRestricted;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H9NQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                KitRestrictionReason;                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplayName
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupKitDisplayName_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplaySymbol
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupKitDisplaySymbol_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SetSelected
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.ToggleClassSelection
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_ToggleClassSelection_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetClassSelectionState
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalSetClassSelectionState_Params
	{
	public:
		bool                                                       bNewSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.DeselectClass
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_DeselectClass_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SelectClass
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_SelectClass_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupPrimaryWeaponIcon
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupPrimaryWeaponIcon_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.UpdateRestrictedState
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_UpdateRestrictedState_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalKitDisplaySetup
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_InternalKitDisplaySetup_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.Init
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_Init_Params
	{
	public:
		class UHDKit*                                              Kit;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_HDPlayerControllerBase_C*                        OwningPC;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.PreConstruct
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.Construct
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_Construct_Params
	{	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.OnClassDeselected__DelegateSignature
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_OnClassDeselected__DelegateSignature_Params
	{
	public:
		class UWBP_DeployMenu_ClassSelectionListing_C*             DeselectedClassWidget;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.OnClassSelected__DelegateSignature
	 */
	struct UWBP_DeployMenu_ClassSelectionListing_C_OnClassSelected__DelegateSignature_Params
	{
	public:
		class UWBP_DeployMenu_ClassSelectionListing_C*             SelectedClassWidget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
