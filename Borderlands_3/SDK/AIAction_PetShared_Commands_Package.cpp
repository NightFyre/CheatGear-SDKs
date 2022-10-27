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
	 * 		Name   -> Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EAIActionResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetShared_Commands_C::BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands");
		
		UAIAction_PetShared_Commands_C_BndEvt__PlayGbxAction_1_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands_Params params {};
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
	 * 		Name   -> Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__Mod1_TauntOverride_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EAIActionResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetShared_Commands_C::BndEvt__Mod1_TauntOverride_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__Mod1_TauntOverride_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant");
		
		UAIAction_PetShared_Commands_C_BndEvt__Mod1_TauntOverride_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant_Params params {};
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
	 * 		Name   -> Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.CleanupFadeAwayTaunt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetShared_Commands_C::CleanupFadeAwayTaunt(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.CleanupFadeAwayTaunt");
		
		UAIAction_PetShared_Commands_C_CleanupFadeAwayTaunt_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__PlayGbxAction_0_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EAIActionResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetShared_Commands_C::BndEvt__PlayGbxAction_0_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__PlayGbxAction_0_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands");
		
		UAIAction_PetShared_Commands_C_BndEvt__PlayGbxAction_0_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetShared_Commands_Params params {};
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
	 * 		Name   -> Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EAIActionResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetShared_Commands_C::BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon");
		
		UAIAction_PetShared_Commands_C_BndEvt__ReviveAlly_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetJabbermon_Params params {};
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
	 * 		Name   -> Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAIAction_PetShared_Commands_C::BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon");
		
		UAIAction_PetShared_Commands_C_BndEvt__ReviveAlly_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_PetJabbermon_Params params {};
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
	 * 		Name   -> Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.ExecuteUbergraph_AIAction_PetShared_Commands
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetShared_Commands_C::ExecuteUbergraph_AIAction_PetShared_Commands(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetShared_Commands.AIAction_PetShared_Commands_C.ExecuteUbergraph_AIAction_PetShared_Commands");
		
		UAIAction_PetShared_Commands_C_ExecuteUbergraph_AIAction_PetShared_Commands_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_PetShared_Commands_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_PetShared_Commands_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_PetShared_Commands.AIAction_PetShared_Commands_C");
		return ptr;
	}

}


