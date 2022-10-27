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
	 * 		Name   -> Function Ability_AnointParent_SkillEnd.Ability_AnointParent_SkillEnd_C.AnointOnActionSkillCoolingDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAbility_AnointParent_SkillEnd_C::AnointOnActionSkillCoolingDown(class UOakActionAbility* ActionAbility, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_SkillEnd.Ability_AnointParent_SkillEnd_C.AnointOnActionSkillCoolingDown");
		
		UAbility_AnointParent_SkillEnd_C_AnointOnActionSkillCoolingDown_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbility_AnointParent_SkillEnd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbility_AnointParent_SkillEnd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_SkillEnd.Ability_AnointParent_SkillEnd_C");
		return ptr;
	}

}


