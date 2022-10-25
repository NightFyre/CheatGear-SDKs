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
	 * 		Name   -> Function DA_AttributeEffectSet.DA_AttributeEffectSet_C.ApplyAttributeEffectSet
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ModifierContext                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ModifierTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGbxAttributeModifierHandle>         AppliedAttributeEffects                                    (Parm, OutParm, ZeroConstructor)
	 */
	void UDA_AttributeEffectSet_C::ApplyAttributeEffectSet(class AActor* ModifierContext, class AActor* ModifierTarget, TArray<struct FGbxAttributeModifierHandle>* AppliedAttributeEffects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DA_AttributeEffectSet.DA_AttributeEffectSet_C.ApplyAttributeEffectSet");
		
		UDA_AttributeEffectSet_C_ApplyAttributeEffectSet_Params params {};
		params.ModifierContext = ModifierContext;
		params.ModifierTarget = ModifierTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AppliedAttributeEffects != nullptr)
			*AppliedAttributeEffects = params.AppliedAttributeEffects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDA_AttributeEffectSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDA_AttributeEffectSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DA_AttributeEffectSet.DA_AttributeEffectSet_C");
		return ptr;
	}

}


