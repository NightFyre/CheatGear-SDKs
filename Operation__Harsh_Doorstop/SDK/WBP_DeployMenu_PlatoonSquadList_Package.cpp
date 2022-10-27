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
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.IsPlatoonValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bValidPLTN                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::IsPlatoonValid(bool* bValidPLTN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.IsPlatoonValid");
		
		UWBP_DeployMenu_PlatoonSquadList_C_IsPlatoonValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidPLTN != nullptr)
			*bValidPLTN = params.bValidPLTN;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.WasListCollapsedByUser
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bCollapsedByUser                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::WasListCollapsedByUser(bool* bCollapsedByUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.WasListCollapsedByUser");
		
		UWBP_DeployMenu_PlatoonSquadList_C_WasListCollapsedByUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCollapsedByUser != nullptr)
			*bCollapsedByUser = params.bCollapsedByUser;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.HasAnySquads
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bValidSquadsPresent                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::HasAnySquads(bool* bValidSquadsPresent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.HasAnySquads");
		
		UWBP_DeployMenu_PlatoonSquadList_C_HasAnySquads_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidSquadsPresent != nullptr)
			*bValidSquadsPresent = params.bValidSquadsPresent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SetPlatoonNameText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewPlatoonName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::SetPlatoonNameText(const class FText& NewPlatoonName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SetPlatoonNameText");
		
		UWBP_DeployMenu_PlatoonSquadList_C_SetPlatoonNameText_Params params {};
		params.NewPlatoonName = NewPlatoonName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.UpdateCreateBtnAvailability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::UpdateCreateBtnAvailability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.UpdateCreateBtnAvailability");
		
		UWBP_DeployMenu_PlatoonSquadList_C_UpdateCreateBtnAvailability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.UpdateSquadCountText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::UpdateSquadCountText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.UpdateSquadCountText");
		
		UWBP_DeployMenu_PlatoonSquadList_C_UpdateSquadCountText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.CollapseListIfEmpty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::CollapseListIfEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.CollapseListIfEmpty");
		
		UWBP_DeployMenu_PlatoonSquadList_C_CollapseListIfEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.CollapseList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::CollapseList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.CollapseList");
		
		UWBP_DeployMenu_PlatoonSquadList_C_CollapseList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.ExpandList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::ExpandList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.ExpandList");
		
		UWBP_DeployMenu_PlatoonSquadList_C_ExpandList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.RemoveSquadItemWidgetFromList
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USquadListEntry*                             RemovedSquadData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RemoveIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::RemoveSquadItemWidgetFromList(class USquadListEntry* RemovedSquadData, int32_t RemoveIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.RemoveSquadItemWidgetFromList");
		
		UWBP_DeployMenu_PlatoonSquadList_C_RemoveSquadItemWidgetFromList_Params params {};
		params.RemovedSquadData = RemovedSquadData;
		params.RemoveIdx = RemoveIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.AddNewSquadItemWidget
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USquadListEntry*                             SquadData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_DeployMenu_SquadList_C*                 SquadItemWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::AddNewSquadItemWidget(class USquadListEntry* SquadData, class UWBP_DeployMenu_SquadList_C** SquadItemWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.AddNewSquadItemWidget");
		
		UWBP_DeployMenu_PlatoonSquadList_C_AddNewSquadItemWidget_Params params {};
		params.SquadData = SquadData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SquadItemWidget != nullptr)
			*SquadItemWidget = params.SquadItemWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.GenerateSquad
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USquadListEntry*                             SquadData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::GenerateSquad(class USquadListEntry* SquadData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.GenerateSquad");
		
		UWBP_DeployMenu_PlatoonSquadList_C_GenerateSquad_Params params {};
		params.SquadData = SquadData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.DeconstructSquad
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class USquadListEntry*                             RemovedSquadData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RemovedSquadIdx                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::DeconstructSquad(class USquadListEntry* RemovedSquadData, int32_t RemovedSquadIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.DeconstructSquad");
		
		UWBP_DeployMenu_PlatoonSquadList_C_DeconstructSquad_Params params {};
		params.RemovedSquadData = RemovedSquadData;
		params.RemovedSquadIdx = RemovedSquadIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_PlatoonSquadList_C_BndEvt__ListToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.PreConstruct");
		
		UWBP_DeployMenu_PlatoonSquadList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SquadsListExpanded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::SquadsListExpanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SquadsListExpanded");
		
		UWBP_DeployMenu_PlatoonSquadList_C_SquadsListExpanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SquadsListCollapsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::SquadsListCollapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.SquadsListCollapsed");
		
		UWBP_DeployMenu_PlatoonSquadList_C_SquadsListCollapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_DeployMenu_PlatoonSquadList_C_BndEvt__CreateSquadBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.OnPlatoonSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::OnPlatoonSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.OnPlatoonSet");
		
		UWBP_DeployMenu_PlatoonSquadList_C_OnPlatoonSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_PlatoonSquadList_C::ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C.ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList");
		
		UWBP_DeployMenu_PlatoonSquadList_C_ExecuteUbergraph_WBP_DeployMenu_PlatoonSquadList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_PlatoonSquadList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_PlatoonSquadList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_PlatoonSquadList.WBP_DeployMenu_PlatoonSquadList_C");
		return ptr;
	}

}


