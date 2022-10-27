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
	 * 		Name   -> Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_CommanderPlanetoid_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.OnActivated");
		
		UAbility_Artifact_CommanderPlanetoid_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Artifact_CommanderPlanetoid_C::OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.OnDeactivated");
		
		UAbility_Artifact_CommanderPlanetoid_C_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.SwitchElement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbility_Artifact_CommanderPlanetoid_C::SwitchElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.SwitchElement");
		
		UAbility_Artifact_CommanderPlanetoid_C_SwitchElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Artifact_CommanderPlanetoid_C::ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C.ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid");
		
		UAbility_Artifact_CommanderPlanetoid_C_ExecuteUbergraph_Ability_Artifact_CommanderPlanetoid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Artifact_CommanderPlanetoid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Artifact_CommanderPlanetoid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Artifact_CommanderPlanetoid.Ability_Artifact_CommanderPlanetoid_C");
		return ptr;
	}

}


