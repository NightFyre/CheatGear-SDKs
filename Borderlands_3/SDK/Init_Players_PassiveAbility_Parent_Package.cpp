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
	 * 		Name   -> Function Init_Players_PassiveAbility_Parent.Init_Players_PassiveAbility_Parent_C.GetPassiveSkillGrade
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Grade                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInit_Players_PassiveAbility_Parent_C::GetPassiveSkillGrade(class AActor* Context, class UClass* Skill, int32_t* Grade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_Players_PassiveAbility_Parent.Init_Players_PassiveAbility_Parent_C.GetPassiveSkillGrade");
		
		UInit_Players_PassiveAbility_Parent_C_GetPassiveSkillGrade_Params params {};
		params.Context = Context;
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grade != nullptr)
			*Grade = params.Grade;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInit_Players_PassiveAbility_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_Players_PassiveAbility_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_Players_PassiveAbility_Parent.Init_Players_PassiveAbility_Parent_C");
		return ptr;
	}

}


