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
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UOakAbility_Siren_ClassMod_Raid1_C::OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.OnActivated");
		
		UOakAbility_Siren_ClassMod_Raid1_C_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.SirenCMRaid1_OnActionSkillActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Raid1_C::SirenCMRaid1_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.SirenCMRaid1_OnActionSkillActivated");
		
		UOakAbility_Siren_ClassMod_Raid1_C_SirenCMRaid1_OnActionSkillActivated_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOakAbility_Siren_ClassMod_Raid1_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1");
		
		UOakAbility_Siren_ClassMod_Raid1_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Raid1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOakAbility_Siren_ClassMod_Raid1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOakAbility_Siren_ClassMod_Raid1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Siren_ClassMod_Raid1.OakAbility_Siren_ClassMod_Raid1_C");
		return ptr;
	}

}


