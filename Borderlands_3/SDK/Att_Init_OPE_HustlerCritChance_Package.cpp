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
	 * 		Name   -> Function Att_Init_OPE_HustlerCritChance.Att_Init_OPE_HustlerCritChance_C.CalculateAttributeInitialValue
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UAtt_Init_OPE_HustlerCritChance_C::CalculateAttributeInitialValue(class UObject* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Att_Init_OPE_HustlerCritChance.Att_Init_OPE_HustlerCritChance_C.CalculateAttributeInitialValue");
		
		UAtt_Init_OPE_HustlerCritChance_C_CalculateAttributeInitialValue_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAtt_Init_OPE_HustlerCritChance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAtt_Init_OPE_HustlerCritChance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Att_Init_OPE_HustlerCritChance.Att_Init_OPE_HustlerCritChance_C");
		return ptr;
	}

}


