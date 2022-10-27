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
	 * 		Name   -> Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAIAspect_SetBlackboardBool_C::BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool");
		
		UAIAspect_SetBlackboardBool_C_BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_SetBlackboardBool_Params params {};
		params.AIController = AIController;
		params.Character = Character;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EAIActionResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAspect_SetBlackboardBool_C::BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool");
		
		UAIAspect_SetBlackboardBool_C_BndEvt__OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAspect_SetBlackboardBool_Params params {};
		params.AIController = AIController;
		params.Character = Character;
		params.Context = Context;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.ExecuteUbergraph_AIAspect_SetBlackboardBool
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAspect_SetBlackboardBool_C::ExecuteUbergraph_AIAspect_SetBlackboardBool(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C.ExecuteUbergraph_AIAspect_SetBlackboardBool");
		
		UAIAspect_SetBlackboardBool_C_ExecuteUbergraph_AIAspect_SetBlackboardBool_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAspect_SetBlackboardBool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAspect_SetBlackboardBool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAspect_SetBlackboardBool.AIAspect_SetBlackboardBool_C");
		return ptr;
	}

}


