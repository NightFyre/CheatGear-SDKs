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
	 * 		Name   -> Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UA_PetSpiderant_Burrow_Start_C::GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5");
		
		UA_PetSpiderant_Burrow_Start_C_GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UA_PetSpiderant_Burrow_Start_C::GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5");
		
		UA_PetSpiderant_Burrow_Start_C_GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.TraceToGround
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetSpiderant_Burrow_Start_C::TraceToGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.TraceToGround");
		
		UA_PetSpiderant_Burrow_Start_C_TraceToGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_Burrow_Start_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.OnBegin");
		
		UA_PetSpiderant_Burrow_Start_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.Notify_SetBurrowStance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PetSpiderant_Burrow_Start_C::Notify_SetBurrowStance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.Notify_SetBurrowStance");
		
		UA_PetSpiderant_Burrow_Start_C_Notify_SetBurrowStance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.ExecuteUbergraph_A_PetSpiderant_Burrow_Start
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PetSpiderant_Burrow_Start_C::ExecuteUbergraph_A_PetSpiderant_Burrow_Start(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.ExecuteUbergraph_A_PetSpiderant_Burrow_Start");
		
		UA_PetSpiderant_Burrow_Start_C_ExecuteUbergraph_A_PetSpiderant_Burrow_Start_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PetSpiderant_Burrow_Start_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PetSpiderant_Burrow_Start_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C");
		return ptr;
	}

}


