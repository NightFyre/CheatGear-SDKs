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
	 * 		Name   -> Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.EndSpiderantBurrow
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetSpiderant_C::EndSpiderantBurrow(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.EndSpiderantBurrow");
		
		UAIAction_PetSpiderant_C_EndSpiderantBurrow_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.BndEvt__Teleport_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxAIController*                            AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIActionBlueprintContext                   Context                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		EAIActionResult                                    Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetSpiderant_C::BndEvt__Teleport_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.BndEvt__Teleport_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant");
		
		UAIAction_PetSpiderant_C_BndEvt__Teleport_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AIAction_PetSpiderant_Params params {};
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
	 * 		Name   -> Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.ExecuteUbergraph_AIAction_PetSpiderant
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAction_PetSpiderant_C::ExecuteUbergraph_AIAction_PetSpiderant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIAction_PetSpiderant.AIAction_PetSpiderant_C.ExecuteUbergraph_AIAction_PetSpiderant");
		
		UAIAction_PetSpiderant_C_ExecuteUbergraph_AIAction_PetSpiderant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAction_PetSpiderant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAction_PetSpiderant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_PetSpiderant.AIAction_PetSpiderant_C");
		return ptr;
	}

}


