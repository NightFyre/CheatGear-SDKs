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
	 * 		Name   -> Function ShieldAug_Ember.ShieldAug_Ember_C.K2_NativeDelayCallback
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AShield*                                     Shield                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAugmentData                                StackData                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FName                                        DelayName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShieldAug_Ember_C::K2_NativeDelayCallback(class AShield* Shield, struct FAugmentData* StackData, const class FName& DelayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShieldAug_Ember.ShieldAug_Ember_C.K2_NativeDelayCallback");
		
		UShieldAug_Ember_C_K2_NativeDelayCallback_Params params {};
		params.Shield = Shield;
		params.DelayName = DelayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StackData != nullptr)
			*StackData = params.StackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ShieldAug_Ember.ShieldAug_Ember_C.K2_OnShieldBeginPlay
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AShield*                                     Shield                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAugmentData                                StackData                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UShieldAug_Ember_C::K2_OnShieldBeginPlay(class AShield* Shield, struct FAugmentData* StackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShieldAug_Ember.ShieldAug_Ember_C.K2_OnShieldBeginPlay");
		
		UShieldAug_Ember_C_K2_OnShieldBeginPlay_Params params {};
		params.Shield = Shield;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StackData != nullptr)
			*StackData = params.StackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShieldAug_Ember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShieldAug_Ember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_Ember.ShieldAug_Ember_C");
		return ptr;
	}

}


