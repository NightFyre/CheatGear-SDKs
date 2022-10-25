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
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SetClassSelectionState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDKit*                                      ClassToUpdate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bMatchDisplayNames                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bClassUpdated                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::SetClassSelectionState(class UHDKit* ClassToUpdate, bool bSelected, bool bMatchDisplayNames, bool* bClassUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SetClassSelectionState");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_SetClassSelectionState_Params params {};
		params.ClassToUpdate = ClassToUpdate;
		params.bSelected = bSelected;
		params.bMatchDisplayNames = bMatchDisplayNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bClassUpdated != nullptr)
			*bClassUpdated = params.bClassUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalUpdateSelectionState
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDeployMenu_ClassSelectionListing*           NewSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::InternalUpdateSelectionState(class UDeployMenu_ClassSelectionListing* NewSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalUpdateSelectionState");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_InternalUpdateSelectionState_Params params {};
		params.NewSelection = NewSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SelectFirstUnrestrictedClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::SelectFirstUnrestrictedClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SelectFirstUnrestrictedClass");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_SelectFirstUnrestrictedClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalDeselectAllClasses
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::InternalDeselectAllClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalDeselectAllClasses");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_InternalDeselectAllClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.IsValidClassListingIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            ChildIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bValidIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::IsValidClassListingIndex(int32_t ChildIndex, bool* bValidIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.IsValidClassListingIndex");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_IsValidClassListingIndex_Params params {};
		params.ChildIndex = ChildIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidIndex != nullptr)
			*bValidIndex = params.bValidIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SetClassSelectionStateByIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ChildIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::SetClassSelectionStateByIndex(int32_t ChildIndex, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.SetClassSelectionStateByIndex");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_SetClassSelectionStateByIndex_Params params {};
		params.ChildIndex = ChildIndex;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.ToggleRestrictionsTimer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFireOnceImmediately                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::ToggleRestrictionsTimer(bool bEnabled, bool bFireOnceImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.ToggleRestrictionsTimer");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_ToggleRestrictionsTimer_Params params {};
		params.bEnabled = bEnabled;
		params.bFireOnceImmediately = bFireOnceImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalCreateClassListingWidget
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHDKit*                                      Kit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_DeployMenu_ClassSelectionListing_C*     NewKitListingWidget                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::InternalCreateClassListingWidget(class UHDKit* Kit, class UWBP_DeployMenu_ClassSelectionListing_C** NewKitListingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalCreateClassListingWidget");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_InternalCreateClassListingWidget_Params params {};
		params.Kit = Kit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewKitListingWidget != nullptr)
			*NewKitListingWidget = params.NewKitListingWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalPopulateListWithClasses
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::InternalPopulateListWithClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.InternalPopulateListWithClasses");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_InternalPopulateListWithClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.RepopulateListByFaction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            OwningPlayerTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::RepopulateListByFaction(EHDTeam OwningPlayerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.RepopulateListByFaction");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_RepopulateListByFaction_Params params {};
		params.OwningPlayerTeam = OwningPlayerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.Construct");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.PreConstruct");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.LateInit_RepPlayerState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::LateInit_RepPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.LateInit_RepPlayerState");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_LateInit_RepPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.CheckRestrictions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::CheckRestrictions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.CheckRestrictions");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_CheckRestrictions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.Destruct");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.OnClassSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_DeployMenu_ClassSelectionListing_C*     SelectedClassWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::OnClassSelected(class UWBP_DeployMenu_ClassSelectionListing_C* SelectedClassWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.OnClassSelected");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_OnClassSelected_Params params {};
		params.SelectedClassWidget = SelectedClassWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.OnClassDeselected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_DeployMenu_ClassSelectionListing_C*     DeselectedClassWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::OnClassDeselected(class UWBP_DeployMenu_ClassSelectionListing_C* DeselectedClassWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.OnClassDeselected");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_OnClassDeselected_Params params {};
		params.DeselectedClassWidget = DeselectedClassWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_ClassSelectionPanel_C::ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C.ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel");
		
		UWBP_DeployMenu_ClassSelectionPanel_C_ExecuteUbergraph_WBP_DeployMenu_ClassSelectionPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_ClassSelectionPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_ClassSelectionPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_ClassSelectionPanel.WBP_DeployMenu_ClassSelectionPanel_C");
		return ptr;
	}

}


