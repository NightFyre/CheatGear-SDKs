/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.AreColorsNearlyEqual
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FLinearColor                                ColorOne                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ColorTwo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEqual                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::AreColorsNearlyEqual(const struct FLinearColor& ColorOne, const struct FLinearColor& ColorTwo, bool* bEqual)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.AreColorsNearlyEqual");
		
		UWBP_DeployMenu_ClassSelectionListing_C_AreColorsNearlyEqual_Params params {};
		params.ColorOne = ColorOne;
		params.ColorTwo = ColorTwo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bEqual != nullptr)
			*bEqual = params.bEqual;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalFillEqpSlots
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalFillEqpSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalFillEqpSlots");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalFillEqpSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SortItemEntriesInPlaceBySlotNum
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHDItemEntry>                        EntriesToSort                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::SortItemEntriesInPlaceBySlotNum(TArray<struct FHDItemEntry>* EntriesToSort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SortItemEntriesInPlaceBySlotNum");
		
		UWBP_DeployMenu_ClassSelectionListing_C_SortItemEntriesInPlaceBySlotNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntriesToSort != nullptr)
			*EntriesToSort = params.EntriesToSort;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetEqpDisplaySymbolBySlotNum
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  SlotSymbolToUse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDesignTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalSetEqpDisplaySymbolBySlotNum(int32_t SlotNum, class UTexture2D* SlotSymbolToUse, bool bDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetEqpDisplaySymbolBySlotNum");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalSetEqpDisplaySymbolBySlotNum_Params params {};
		params.SlotNum = SlotNum;
		params.SlotSymbolToUse = SlotSymbolToUse;
		params.bDesignTime = bDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplayEqpSlots
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalSetupKitDisplayEqpSlots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplayEqpSlots");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupKitDisplayEqpSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalGetEqpSlotImageWidgetByNum
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      EqpSlotImage                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalGetEqpSlotImageWidgetByNum(int32_t SlotNum, class UImage** EqpSlotImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalGetEqpSlotImageWidgetByNum");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalGetEqpSlotImageWidgetByNum_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EqpSlotImage != nullptr)
			*EqpSlotImage = params.EqpSlotImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetClassRestrictedState
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewRestricted                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        NewRestrictionReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalSetClassRestrictedState(bool bNewRestricted, class FText* NewRestrictionReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetClassRestrictedState");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalSetClassRestrictedState_Params params {};
		params.bNewRestricted = bNewRestricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewRestrictionReason != nullptr)
			*NewRestrictionReason = params.NewRestrictionReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalUpdateClassRestrictedText
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bKitRestricted                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        KitRestrictionReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalUpdateClassRestrictedText(bool bKitRestricted, class FText* KitRestrictionReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalUpdateClassRestrictedText");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalUpdateClassRestrictedText_Params params {};
		params.bKitRestricted = bKitRestricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KitRestrictionReason != nullptr)
			*KitRestrictionReason = params.KitRestrictionReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitRestrictionDisplay
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bKitRestricted                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        KitRestrictionReason                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalSetupKitRestrictionDisplay(bool bKitRestricted, class FText* KitRestrictionReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitRestrictionDisplay");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupKitRestrictionDisplay_Params params {};
		params.bKitRestricted = bKitRestricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KitRestrictionReason != nullptr)
			*KitRestrictionReason = params.KitRestrictionReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalIsKitRestricted
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bKitRestricted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        KitRestrictionReason                                       (Parm, OutParm)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalIsKitRestricted(bool* bKitRestricted, class FText* KitRestrictionReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalIsKitRestricted");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalIsKitRestricted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bKitRestricted != nullptr)
			*bKitRestricted = params.bKitRestricted;
		if (KitRestrictionReason != nullptr)
			*KitRestrictionReason = params.KitRestrictionReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplayName
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalSetupKitDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplayName");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupKitDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplaySymbol
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalSetupKitDisplaySymbol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupKitDisplaySymbol");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupKitDisplaySymbol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SetSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::SetSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SetSelected");
		
		UWBP_DeployMenu_ClassSelectionListing_C_SetSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.ToggleClassSelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::ToggleClassSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.ToggleClassSelection");
		
		UWBP_DeployMenu_ClassSelectionListing_C_ToggleClassSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetClassSelectionState
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalSetClassSelectionState(bool bNewSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetClassSelectionState");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalSetClassSelectionState_Params params {};
		params.bNewSelected = bNewSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.DeselectClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::DeselectClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.DeselectClass");
		
		UWBP_DeployMenu_ClassSelectionListing_C_DeselectClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SelectClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::SelectClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.SelectClass");
		
		UWBP_DeployMenu_ClassSelectionListing_C_SelectClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupPrimaryWeaponIcon
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalSetupPrimaryWeaponIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalSetupPrimaryWeaponIcon");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalSetupPrimaryWeaponIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.UpdateRestrictedState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::UpdateRestrictedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.UpdateRestrictedState");
		
		UWBP_DeployMenu_ClassSelectionListing_C_UpdateRestrictedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalKitDisplaySetup
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::InternalKitDisplaySetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.InternalKitDisplaySetup");
		
		UWBP_DeployMenu_ClassSelectionListing_C_InternalKitDisplaySetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.Init
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDKit*                                      Kit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HDPlayerControllerBase_C*                OwningPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::Init(class UHDKit* Kit, class ABP_HDPlayerControllerBase_C* OwningPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.Init");
		
		UWBP_DeployMenu_ClassSelectionListing_C_Init_Params params {};
		params.Kit = Kit;
		params.OwningPC = OwningPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_ClassSelectionListing_C_BndEvt__SelectClassBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.PreConstruct");
		
		UWBP_DeployMenu_ClassSelectionListing_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.Construct");
		
		UWBP_DeployMenu_ClassSelectionListing_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing");
		
		UWBP_DeployMenu_ClassSelectionListing_C_ExecuteUbergraph_WBP_DeployMenu_ClassSelectionListing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.OnClassDeselected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_DeployMenu_ClassSelectionListing_C*     DeselectedClassWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::OnClassDeselected__DelegateSignature(class UWBP_DeployMenu_ClassSelectionListing_C* DeselectedClassWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.OnClassDeselected__DelegateSignature");
		
		UWBP_DeployMenu_ClassSelectionListing_C_OnClassDeselected__DelegateSignature_Params params {};
		params.DeselectedClassWidget = DeselectedClassWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.OnClassSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_DeployMenu_ClassSelectionListing_C*     SelectedClassWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionListing_C::OnClassSelected__DelegateSignature(class UWBP_DeployMenu_ClassSelectionListing_C* SelectedClassWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C.OnClassSelected__DelegateSignature");
		
		UWBP_DeployMenu_ClassSelectionListing_C_OnClassSelected__DelegateSignature_Params params {};
		params.SelectedClassWidget = SelectedClassWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_ClassSelectionListing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_ClassSelectionListing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_ClassSelectionListing.WBP_DeployMenu_ClassSelectionListing_C");
		return ptr;
	}

}


