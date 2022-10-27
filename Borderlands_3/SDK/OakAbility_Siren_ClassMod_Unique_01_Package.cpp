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
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Siren_ClassMod_Unique_01_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.OnActivated");
		
		UOakAbility_Siren_ClassMod_Unique_01_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.SirenUnique01_GraspedTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxCharacter*                               GraspedTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Unique_01_C::SirenUnique01_GraspedTarget(class AGbxCharacter* GraspedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.SirenUnique01_GraspedTarget");
		
		UOakAbility_Siren_ClassMod_Unique_01_C_SirenUnique01_GraspedTarget_Params params {};
		params.GraspedTarget = GraspedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Unique_01_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01");
		
		UOakAbility_Siren_ClassMod_Unique_01_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Siren_ClassMod_Unique_01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Siren_ClassMod_Unique_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C");
		return ptr;
	}

}


