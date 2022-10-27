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
	 * 		Name   -> Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_PhoenixTears_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.OnActivated");
		
		UAbility_Artifact_PhoenixTears_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_PhoenixTears_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.OnDeactivated");
		
		UAbility_Artifact_PhoenixTears_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.DownStateStopped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Artifact_PhoenixTears_C::DownStateStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.DownStateStopped");
		
		UAbility_Artifact_PhoenixTears_C_DownStateStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.ExecuteUbergraph_Ability_Artifact_PhoenixTears
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_PhoenixTears_C::ExecuteUbergraph_Ability_Artifact_PhoenixTears(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C.ExecuteUbergraph_Ability_Artifact_PhoenixTears");
		
		UAbility_Artifact_PhoenixTears_C_ExecuteUbergraph_Ability_Artifact_PhoenixTears_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Artifact_PhoenixTears_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Artifact_PhoenixTears_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_PhoenixTears.Ability_Artifact_PhoenixTears_C");
		return ptr;
	}

}


