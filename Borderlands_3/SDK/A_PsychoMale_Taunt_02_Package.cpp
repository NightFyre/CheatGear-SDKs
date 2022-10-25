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
	 * 		Name   -> Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UA_PsychoMale_Taunt_02_C::GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB");
		
		UA_PsychoMale_Taunt_02_C_GbxAsyncRequest_Hit_2240004D48A27591019A10BDDF41A7FB_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PsychoMale_Taunt_02_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.OnBegin");
		
		UA_PsychoMale_Taunt_02_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.MeleeStrike
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_PsychoMale_Taunt_02_C::MeleeStrike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.MeleeStrike");
		
		UA_PsychoMale_Taunt_02_C_MeleeStrike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.ExecuteUbergraph_A_PsychoMale_Taunt_02
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_PsychoMale_Taunt_02_C::ExecuteUbergraph_A_PsychoMale_Taunt_02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C.ExecuteUbergraph_A_PsychoMale_Taunt_02");
		
		UA_PsychoMale_Taunt_02_C_ExecuteUbergraph_A_PsychoMale_Taunt_02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_PsychoMale_Taunt_02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_PsychoMale_Taunt_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_PsychoMale_Taunt_02.A_PsychoMale_Taunt_02_C");
		return ptr;
	}

}


