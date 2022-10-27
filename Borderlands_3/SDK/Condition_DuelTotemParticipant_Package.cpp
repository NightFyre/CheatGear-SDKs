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
	 * 		Name   -> Function Condition_DuelTotemParticipant.Condition_DuelTotemParticipant_C.EvaluateCondition
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     OptionalContext                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCondition_DuelTotemParticipant_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Condition_DuelTotemParticipant.Condition_DuelTotemParticipant_C.EvaluateCondition");
		
		UCondition_DuelTotemParticipant_C_EvaluateCondition_Params params {};
		params.Context = Context;
		params.OptionalContext = OptionalContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCondition_DuelTotemParticipant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCondition_DuelTotemParticipant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Condition_DuelTotemParticipant.Condition_DuelTotemParticipant_C");
		return ptr;
	}

}


