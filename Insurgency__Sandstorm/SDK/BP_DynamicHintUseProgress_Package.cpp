/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHintUseProgress.BP_DynamicHintUseProgress_C.UpdateProgressFraction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewFraction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DynamicHintUseProgress_C::UpdateProgressFraction(float NewFraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHintUseProgress.BP_DynamicHintUseProgress_C.UpdateProgressFraction");
		
		UBP_DynamicHintUseProgress_C_UpdateProgressFraction_Params params {};
		params.NewFraction = NewFraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_DynamicHintUseProgress.BP_DynamicHintUseProgress_C.UpdateHintTexture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  NewTexture                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_DynamicHintUseProgress_C::UpdateHintTexture(class UTexture2D* NewTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DynamicHintUseProgress.BP_DynamicHintUseProgress_C.UpdateHintTexture");
		
		UBP_DynamicHintUseProgress_C_UpdateHintTexture_Params params {};
		params.NewTexture = NewTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_DynamicHintUseProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DynamicHintUseProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_DynamicHintUseProgress.BP_DynamicHintUseProgress_C");
		return ptr;
	}

}


