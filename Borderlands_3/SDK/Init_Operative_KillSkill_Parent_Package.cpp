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
	 * 		Name   -> Function Init_Operative_KillSkill_Parent.Init_Operative_KillSkill_Parent_C.Get Death Follows Close Bonus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ability_Mod_Bonus                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInit_Operative_KillSkill_Parent_C::Get_Death_Follows_Close_Bonus(class UObject* Object, float* Ability_Mod_Bonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_Operative_KillSkill_Parent.Init_Operative_KillSkill_Parent_C.Get Death Follows Close Bonus");
		
		UInit_Operative_KillSkill_Parent_C_Get_Death_Follows_Close_Bonus_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ability_Mod_Bonus != nullptr)
			*Ability_Mod_Bonus = params.Ability_Mod_Bonus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInit_Operative_KillSkill_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_Operative_KillSkill_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_Operative_KillSkill_Parent.Init_Operative_KillSkill_Parent_C");
		return ptr;
	}

}


