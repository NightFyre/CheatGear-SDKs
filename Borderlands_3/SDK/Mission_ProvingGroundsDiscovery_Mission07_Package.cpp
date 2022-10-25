/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Update_Navigate_NewPlanet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::Update_Navigate_NewPlanet(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Update_Navigate_NewPlanet");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_Update_Navigate_NewPlanet_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Obj_Navigate_NewPlanet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::Obj_Navigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Obj_Navigate_NewPlanet");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_Obj_Navigate_NewPlanet_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Set_Navigate_NewPlanet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::Set_Navigate_NewPlanet(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Set_Navigate_NewPlanet");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_Set_Navigate_NewPlanet_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Advance_Navigate_NewPlanet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::Advance_Navigate_NewPlanet(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Advance_Navigate_NewPlanet");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_Advance_Navigate_NewPlanet_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Obj_UseDropPod
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Obj_UseDropPod");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_Obj_UseDropPod_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Obj_ReNavigate_NewPlanet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveEvent                             ObjectiveEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ObjectiveCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::Obj_ReNavigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int32_t ObjectiveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Obj_ReNavigate_NewPlanet");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_Obj_ReNavigate_NewPlanet_Params params {};
		params.ObjectiveEvent = ObjectiveEvent;
		params.ObjectiveCount = ObjectiveCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.AdvanceTo_ArriveAtMap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::AdvanceTo_ArriveAtMap(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.AdvanceTo_ArriveAtMap");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_AdvanceTo_ArriveAtMap_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Set_UseDropPod
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Set_UseDropPod");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_Set_UseDropPod_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Set_ArriveAtMap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMissionObjectiveSetEvent                          ObjectiveSetEvent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::Set_ArriveAtMap(EMissionObjectiveSetEvent ObjectiveSetEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.Set_ArriveAtMap");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_Set_ArriveAtMap_Params params {};
		params.ObjectiveSetEvent = ObjectiveSetEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.[OBJ_UseDropPod_Objective] PROXY
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::OBJ_UseDropPod_Objective_PROXY()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.[OBJ_UseDropPod_Objective] PROXY");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_OBJ_UseDropPod_Objective_PROXY_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission07
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMission_ProvingGroundsDiscovery_Mission07_C::ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission07(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C.ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission07");
		
		UMission_ProvingGroundsDiscovery_Mission07_C_ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission07_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMission_ProvingGroundsDiscovery_Mission07_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMission_ProvingGroundsDiscovery_Mission07_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mission_ProvingGroundsDiscovery_Mission07.Mission_ProvingGroundsDiscovery_Mission07_C");
		return ptr;
	}

}


