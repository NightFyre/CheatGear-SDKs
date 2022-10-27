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
	 * 		Name   -> Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.RemovePlatoonItemWidgetFromList
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlatoonListEntry*                           RemovedPlatoonData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RemoveIdx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadSelectionPanel_C::RemovePlatoonItemWidgetFromList(class UPlatoonListEntry* RemovedPlatoonData, int32_t RemoveIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.RemovePlatoonItemWidgetFromList");
		
		UWBP_DeployMenu_SquadSelectionPanel_C_RemovePlatoonItemWidgetFromList_Params params {};
		params.RemovedPlatoonData = RemovedPlatoonData;
		params.RemoveIdx = RemoveIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.AddNewPlatoonItemWidget
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPlatoonListEntry*                           PlatoonData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadSelectionPanel_C::AddNewPlatoonItemWidget(class UPlatoonListEntry* PlatoonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.AddNewPlatoonItemWidget");
		
		UWBP_DeployMenu_SquadSelectionPanel_C_AddNewPlatoonItemWidget_Params params {};
		params.PlatoonData = PlatoonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.GeneratePlatoon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UPlatoonListEntry*                           PlatoonData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadSelectionPanel_C::GeneratePlatoon(class UPlatoonListEntry* PlatoonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.GeneratePlatoon");
		
		UWBP_DeployMenu_SquadSelectionPanel_C_GeneratePlatoon_Params params {};
		params.PlatoonData = PlatoonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.DeconstructPlatoon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UPlatoonListEntry*                           RemovedPlatoonData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RemovedPlatoonIdx                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadSelectionPanel_C::DeconstructPlatoon(class UPlatoonListEntry* RemovedPlatoonData, int32_t RemovedPlatoonIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.DeconstructPlatoon");
		
		UWBP_DeployMenu_SquadSelectionPanel_C_DeconstructPlatoon_Params params {};
		params.RemovedPlatoonData = RemovedPlatoonData;
		params.RemovedPlatoonIdx = RemovedPlatoonIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_DeployMenu_SquadSelectionPanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.PreConstruct");
		
		UWBP_DeployMenu_SquadSelectionPanel_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DeployMenu_SquadSelectionPanel_C::ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C.ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel");
		
		UWBP_DeployMenu_SquadSelectionPanel_C_ExecuteUbergraph_WBP_DeployMenu_SquadSelectionPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DeployMenu_SquadSelectionPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DeployMenu_SquadSelectionPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DeployMenu_SquadSelectionPanel.WBP_DeployMenu_SquadSelectionPanel_C");
		return ptr;
	}

}


