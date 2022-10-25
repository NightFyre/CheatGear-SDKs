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
	 * 		Name   -> Function Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_ArtifactStat_Vladof_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C.OnActivated");
		
		UAbility_ArtifactStat_Vladof_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C.ExecuteUbergraph_Ability_ArtifactStat_Vladof
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_ArtifactStat_Vladof_C::ExecuteUbergraph_Ability_ArtifactStat_Vladof(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C.ExecuteUbergraph_Ability_ArtifactStat_Vladof");
		
		UAbility_ArtifactStat_Vladof_C_ExecuteUbergraph_Ability_ArtifactStat_Vladof_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_ArtifactStat_Vladof_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_ArtifactStat_Vladof_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_ArtifactStat_Vladof.Ability_ArtifactStat_Vladof_C");
		return ptr;
	}

}


