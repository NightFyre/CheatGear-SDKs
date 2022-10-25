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
	 * 		Name   -> Function Init_BH_MissionDropCondition_Intro_Badass.Init_BH_MissionDropCondition_Intro_Badass_C.CalculateAttributeInitialValue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UInit_BH_MissionDropCondition_Intro_Badass_C::CalculateAttributeInitialValue(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Init_BH_MissionDropCondition_Intro_Badass.Init_BH_MissionDropCondition_Intro_Badass_C.CalculateAttributeInitialValue");
		
		UInit_BH_MissionDropCondition_Intro_Badass_C_CalculateAttributeInitialValue_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInit_BH_MissionDropCondition_Intro_Badass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInit_BH_MissionDropCondition_Intro_Badass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Init_BH_MissionDropCondition_Intro_Badass.Init_BH_MissionDropCondition_Intro_Badass_C");
		return ptr;
	}

}


