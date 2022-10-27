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
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Ended__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasValidChargeTarget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      ChargeTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Gunner_C::IronBear_AutoBear_Ended__DelegateSignature(bool HasValidChargeTarget, class AActor* ChargeTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Ended__DelegateSignature");
		
		UBPEventHub_Gunner_C_IronBear_AutoBear_Ended__DelegateSignature_Params params {};
		params.HasValidChargeTarget = HasValidChargeTarget;
		params.ChargeTarget = ChargeTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Started__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Gunner_C::IronBear_AutoBear_Started__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Started__DelegateSignature");
		
		UBPEventHub_Gunner_C_IronBear_AutoBear_Started__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Emptied__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ExitingActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Gunner_C::IronBear_DakkaTurret_Emptied__DelegateSignature(class AActor* ExitingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Emptied__DelegateSignature");
		
		UBPEventHub_Gunner_C_IronBear_DakkaTurret_Emptied__DelegateSignature_Params params {};
		params.ExitingActor = ExitingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Entered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      EnteredActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Gunner_C::IronBear_DakkaTurret_Entered__DelegateSignature(class AActor* EnteredActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Entered__DelegateSignature");
		
		UBPEventHub_Gunner_C_IronBear_DakkaTurret_Entered__DelegateSignature_Params params {};
		params.EnteredActor = EnteredActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_StartRecharge__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Gunner_C::IronBear_BubbleShield_StartRecharge__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_StartRecharge__DelegateSignature");
		
		UBPEventHub_Gunner_C_IronBear_BubbleShield_StartRecharge__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_Depleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Gunner_C::IronBear_BubbleShield_Depleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_Depleted__DelegateSignature");
		
		UBPEventHub_Gunner_C_IronBear_BubbleShield_Depleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_GundamBear_Used__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Gunner_C::IronBear_GundamBear_Used__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_GundamBear_Used__DelegateSignature");
		
		UBPEventHub_Gunner_C_IronBear_GundamBear_Used__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_Start__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Gunner_C::SkillEvent_BronzeAgeRage_Start__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_Start__DelegateSignature");
		
		UBPEventHub_Gunner_C_SkillEvent_BronzeAgeRage_Start__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_End__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Gunner_C::SkillEvent_BronzeAgeRage_End__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_End__DelegateSignature");
		
		UBPEventHub_Gunner_C_SkillEvent_BronzeAgeRage_End__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_Capacitation__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Gunner_C::SkillEvent_Capacitation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_Capacitation__DelegateSignature");
		
		UBPEventHub_Gunner_C_SkillEvent_Capacitation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_HighVoltage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPEventHub_Gunner_C::SkillEvent_HighVoltage__DelegateSignature(class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_HighVoltage__DelegateSignature");
		
		UBPEventHub_Gunner_C_SkillEvent_HighVoltage__DelegateSignature_Params params {};
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_IronScience__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPEventHub_Gunner_C::SkillEvent_IronScience__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_IronScience__DelegateSignature");
		
		UBPEventHub_Gunner_C_SkillEvent_IronScience__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPEventHub_Gunner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPEventHub_Gunner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPEventHub_Gunner.BPEventHub_Gunner_C");
		return ptr;
	}

}


