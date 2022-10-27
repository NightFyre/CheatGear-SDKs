/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Tick");
		
		UBP_ObjectiveIcon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Invalidate And Update Everything
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ObjectiveIcon_C::Invalidate_And_Update_Everything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Invalidate And Update Everything");
		
		UBP_ObjectiveIcon_C_Invalidate_And_Update_Everything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnSetObjective
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AObjectiveBase*                              NewObjective                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveIcon_C::OnSetObjective(class AObjectiveBase* NewObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnSetObjective");
		
		UBP_ObjectiveIcon_C_OnSetObjective_Params params {};
		params.NewObjective = NewObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveActive
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActiveState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AObjectiveBase*                              InObjective                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveIcon_C::OnObjectiveActive(bool bNewActiveState, class AObjectiveBase* InObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveActive");
		
		UBP_ObjectiveIcon_C_OnObjectiveActive_Params params {};
		params.bNewActiveState = bNewActiveState;
		params.InObjective = InObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveChangeCapturingTeam
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AObjectiveBase*                              InObjective                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCapturers                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveIcon_C::OnObjectiveChangeCapturingTeam(class AObjectiveBase* InObjective, unsigned char NewCapturers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveChangeCapturingTeam");
		
		UBP_ObjectiveIcon_C_OnObjectiveChangeCapturingTeam_Params params {};
		params.InObjective = InObjective;
		params.NewCapturers = NewCapturers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveChangeOwner
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AObjectiveBase*                              InObjective                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewOwners                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveIcon_C::OnObjectiveChangeOwner(class AObjectiveBase* InObjective, unsigned char NewOwners)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveChangeOwner");
		
		UBP_ObjectiveIcon_C_OnObjectiveChangeOwner_Params params {};
		params.InObjective = InObjective;
		params.NewOwners = NewOwners;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnPlayerChangeTeam
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   TeamInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveIcon_C::OnPlayerChangeTeam(unsigned char TeamId, class ATeamInfo* TeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnPlayerChangeTeam");
		
		UBP_ObjectiveIcon_C_OnPlayerChangeTeam_Params params {};
		params.TeamId = TeamId;
		params.TeamInfo = TeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Ensure Objective Is Visibile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_ObjectiveIcon_C::Ensure_Objective_Is_Visibile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.Ensure Objective Is Visibile");
		
		UBP_ObjectiveIcon_C_Ensure_Objective_Is_Visibile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveIsCounterAttacked
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewCounterAttackState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AObjectiveBase*                              InObjective                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveIcon_C::OnObjectiveIsCounterAttacked(bool bNewCounterAttackState, class AObjectiveBase* InObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.OnObjectiveIsCounterAttacked");
		
		UBP_ObjectiveIcon_C_OnObjectiveIsCounterAttacked_Params params {};
		params.bNewCounterAttackState = bNewCounterAttackState;
		params.InObjective = InObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.ExecuteUbergraph_BP_ObjectiveIcon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ObjectiveIcon_C::ExecuteUbergraph_BP_ObjectiveIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectiveIcon.BP_ObjectiveIcon_C.ExecuteUbergraph_BP_ObjectiveIcon");
		
		UBP_ObjectiveIcon_C_ExecuteUbergraph_BP_ObjectiveIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ObjectiveIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ObjectiveIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ObjectiveIcon.BP_ObjectiveIcon_C");
		return ptr;
	}

}


