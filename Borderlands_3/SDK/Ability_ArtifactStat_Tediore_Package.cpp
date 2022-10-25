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
	 * 		Name   -> Function Ability_ArtifactStat_Tediore.Ability_ArtifactStat_Tediore_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_ArtifactStat_Tediore_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_Tediore.Ability_ArtifactStat_Tediore_C.OnActivated");
		
		UAbility_ArtifactStat_Tediore_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_ArtifactStat_Tediore.Ability_ArtifactStat_Tediore_C.ExecuteUbergraph_Ability_ArtifactStat_Tediore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_ArtifactStat_Tediore_C::ExecuteUbergraph_Ability_ArtifactStat_Tediore(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_Tediore.Ability_ArtifactStat_Tediore_C.ExecuteUbergraph_Ability_ArtifactStat_Tediore");
		
		UAbility_ArtifactStat_Tediore_C_ExecuteUbergraph_Ability_ArtifactStat_Tediore_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_ArtifactStat_Tediore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_ArtifactStat_Tediore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_ArtifactStat_Tediore.Ability_ArtifactStat_Tediore_C");
		return ptr;
	}

}


