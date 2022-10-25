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
	 * 		Name   -> Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetRiftActorFromRegisters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABPPetEnrageRift_C*                          res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_EnrageAirAnim_C::GetRiftActorFromRegisters(class ABPPetEnrageRift_C** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetRiftActorFromRegisters");
		
		UA_Pet_EnrageAirAnim_C_GetRiftActorFromRegisters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetLocationFromRegisters
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_EnrageAirAnim_C::GetLocationFromRegisters(struct FVector* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.GetLocationFromRegisters");
		
		UA_Pet_EnrageAirAnim_C_GetLocationFromRegisters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_EnrageAirAnim_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.OnBegin");
		
		UA_Pet_EnrageAirAnim_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.ExecuteUbergraph_A_Pet_EnrageAirAnim
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Pet_EnrageAirAnim_C::ExecuteUbergraph_A_Pet_EnrageAirAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C.ExecuteUbergraph_A_Pet_EnrageAirAnim");
		
		UA_Pet_EnrageAirAnim_C_ExecuteUbergraph_A_Pet_EnrageAirAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_Pet_EnrageAirAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_Pet_EnrageAirAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Pet_EnrageAirAnim.A_Pet_EnrageAirAnim_C");
		return ptr;
	}

}


