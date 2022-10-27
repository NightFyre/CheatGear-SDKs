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
	 * 		Name   -> Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_OnShieldUnequipped
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AShield*                                     Shield                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AOakCharacter*                               Equipper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAugmentData                                StackData                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UShieldAug_Revolter_C::K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_OnShieldUnequipped");
		
		UShieldAug_Revolter_C_K2_OnShieldUnequipped_Params params {};
		params.Shield = Shield;
		params.Equipper = Equipper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StackData != nullptr)
			*StackData = params.StackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_NativeDelayCallback
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AShield*                                     Shield                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAugmentData                                StackData                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FName                                        DelayName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShieldAug_Revolter_C::K2_NativeDelayCallback(class AShield* Shield, struct FAugmentData* StackData, const class FName& DelayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_NativeDelayCallback");
		
		UShieldAug_Revolter_C_K2_NativeDelayCallback_Params params {};
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
	 * 		Name   -> Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_TriggerEffect
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AShield*                                     Shield                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameResourcePoolReference                  ResourcePool                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 * 		struct FAugmentData                                StackData                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UShieldAug_Revolter_C::K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData* StackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShieldAug_Revolter.ShieldAug_Revolter_C.K2_TriggerEffect");
		
		UShieldAug_Revolter_C_K2_TriggerEffect_Params params {};
		params.Shield = Shield;
		params.ResourcePool = ResourcePool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StackData != nullptr)
			*StackData = params.StackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShieldAug_Revolter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShieldAug_Revolter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_Revolter.ShieldAug_Revolter_C");
		return ptr;
	}

}


