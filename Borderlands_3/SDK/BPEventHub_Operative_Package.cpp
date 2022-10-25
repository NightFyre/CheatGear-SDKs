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
	 * 		Name   -> Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSetDroneManualTarget__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Operative_C::SkillEvent_OperativeSetDroneManualTarget__DelegateSignature(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSetDroneManualTarget__DelegateSignature");
		
		UBPEventHub_Operative_C_SkillEvent_OperativeSetDroneManualTarget__DelegateSignature_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeUsedBarrier__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PickedUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPEventHub_Operative_C::SkillEvent_OperativeUsedBarrier__DelegateSignature(bool PickedUp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeUsedBarrier__DelegateSignature");
		
		UBPEventHub_Operative_C_SkillEvent_OperativeUsedBarrier__DelegateSignature_Params params {};
		params.PickedUp = PickedUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSwappedPlaces__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Operative_C::SkillEvent_OperativeSwappedPlaces__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSwappedPlaces__DelegateSignature");
		
		UBPEventHub_Operative_C_SkillEvent_OperativeSwappedPlaces__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillEnded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeGadgets                                  ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Operative_C::SkillEvent_OperativeActionSkillEnded__DelegateSignature(EOperativeGadgets ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillEnded__DelegateSignature");
		
		UBPEventHub_Operative_C_SkillEvent_OperativeActionSkillEnded__DelegateSignature_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeGadgetModActivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeGadgetAugments                           ActionSkillMod                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Operative_C::SkillEvent_OperativeGadgetModActivated__DelegateSignature(EOperativeGadgetAugments ActionSkillMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeGadgetModActivated__DelegateSignature");
		
		UBPEventHub_Operative_C_SkillEvent_OperativeGadgetModActivated__DelegateSignature_Params params {};
		params.ActionSkillMod = ActionSkillMod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillActivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOperativeGadgets                                  ActionSkill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Operative_C::SkillEvent_OperativeActionSkillActivated__DelegateSignature(EOperativeGadgets ActionSkill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillActivated__DelegateSignature");
		
		UBPEventHub_Operative_C_SkillEvent_OperativeActionSkillActivated__DelegateSignature_Params params {};
		params.ActionSkill = ActionSkill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Operative.BPEventHub_Operative_C.OnSeeingRedActivated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Operative_C::OnSeeingRedActivated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.OnSeeingRedActivated__DelegateSignature");
		
		UBPEventHub_Operative_C_OnSeeingRedActivated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPEventHub_Operative_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPEventHub_Operative_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPEventHub_Operative.BPEventHub_Operative_C");
		return ptr;
	}

}


