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
	 * 		Name   -> Function Ability_ArtifactStat_Jakobs1.Ability_ArtifactStat_Jakobs1_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_ArtifactStat_Jakobs1_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_Jakobs1.Ability_ArtifactStat_Jakobs1_C.OnActivated");
		
		UAbility_ArtifactStat_Jakobs1_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_ArtifactStat_Jakobs1.Ability_ArtifactStat_Jakobs1_C.ExecuteUbergraph_Ability_ArtifactStat_Jakobs1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_ArtifactStat_Jakobs1_C::ExecuteUbergraph_Ability_ArtifactStat_Jakobs1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_ArtifactStat_Jakobs1.Ability_ArtifactStat_Jakobs1_C.ExecuteUbergraph_Ability_ArtifactStat_Jakobs1");
		
		UAbility_ArtifactStat_Jakobs1_C_ExecuteUbergraph_Ability_ArtifactStat_Jakobs1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_ArtifactStat_Jakobs1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_ArtifactStat_Jakobs1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_ArtifactStat_Jakobs1.Ability_ArtifactStat_Jakobs1_C");
		return ptr;
	}

}


