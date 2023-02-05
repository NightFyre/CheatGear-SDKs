/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_AbilityActor_Decal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ReceiveBeginPlay");
		
		ABP_AbilityActor_Decal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.SetReticleMaterialParamVector
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbilityActor_Decal_C::SetReticleMaterialParamVector(const class FName& ParamName, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.SetReticleMaterialParamVector");
		
		ABP_AbilityActor_Decal_C_SetReticleMaterialParamVector_Params params {};
		params.ParamName = ParamName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.OnParametersInitialized
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_AbilityActor_Decal_C::OnParametersInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.OnParametersInitialized");
		
		ABP_AbilityActor_Decal_C_OnParametersInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2CFE0
	 * 		Name   -> Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ExecuteUbergraph_BP_AbilityActor_Decal
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AbilityActor_Decal_C::ExecuteUbergraph_BP_AbilityActor_Decal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ExecuteUbergraph_BP_AbilityActor_Decal");
		
		ABP_AbilityActor_Decal_C_ExecuteUbergraph_BP_AbilityActor_Decal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AbilityActor_Decal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AbilityActor_Decal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AbilityActor_Decal.BP_AbilityActor_Decal_C");
		return ptr;
	}

}


