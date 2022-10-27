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
	 * 		Name   -> Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Failure_264F849F461DE8AE8A8C7B98070E4B60
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FEnvQueryResult                             QueryResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_SummonDigiClone_C::Failure_264F849F461DE8AE8A8C7B98070E4B60(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Failure_264F849F461DE8AE8A8C7B98070E4B60");
		
		UAction_Operative_SummonDigiClone_C_Failure_264F849F461DE8AE8A8C7B98070E4B60_Params params {};
		params.QueryResult = QueryResult;
		params.Location = Location;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Success_264F849F461DE8AE8A8C7B98070E4B60
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FEnvQueryResult                             QueryResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_SummonDigiClone_C::Success_264F849F461DE8AE8A8C7B98070E4B60(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.Success_264F849F461DE8AE8A8C7B98070E4B60");
		
		UAction_Operative_SummonDigiClone_C_Success_264F849F461DE8AE8A8C7B98070E4B60_Params params {};
		params.QueryResult = QueryResult;
		params.Location = Location;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_SummonDigiClone_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.OnBegin");
		
		UAction_Operative_SummonDigiClone_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.AnimNotify_SpawnClones
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_SummonDigiClone_C::AnimNotify_SpawnClones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.AnimNotify_SpawnClones");
		
		UAction_Operative_SummonDigiClone_C_AnimNotify_SpawnClones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.ExecuteUbergraph_Action_Operative_SummonDigiClone
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_SummonDigiClone_C::ExecuteUbergraph_Action_Operative_SummonDigiClone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C.ExecuteUbergraph_Action_Operative_SummonDigiClone");
		
		UAction_Operative_SummonDigiClone_C_ExecuteUbergraph_Action_Operative_SummonDigiClone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Operative_SummonDigiClone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Operative_SummonDigiClone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C");
		return ptr;
	}

}


