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
	 * 		Name   -> Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UAbility_Siren_Grasp_TerrorSkulls_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.OnActivated");
		
		UAbility_Siren_Grasp_TerrorSkulls_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.GraspedTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhaseTranceElementalType                          Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Siren_Grasp_TerrorSkulls_C::GraspedTarget(class AActor* Enemy, EPhaseTranceElementalType Element)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.GraspedTarget");
		
		UAbility_Siren_Grasp_TerrorSkulls_C_GraspedTarget_Params params {};
		params.Enemy = Enemy;
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbility_Siren_Grasp_TerrorSkulls_C::ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls");
		
		UAbility_Siren_Grasp_TerrorSkulls_C_ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_Siren_Grasp_TerrorSkulls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_Siren_Grasp_TerrorSkulls_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C");
		return ptr;
	}

}


