/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.PlayFadeOut
	 * 		Flags  -> ()
	 */
	void UWBP_AmmoCheckIndicator_C::PlayFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.PlayFadeOut");
		
		UWBP_AmmoCheckIndicator_C_PlayFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.Collapse
	 * 		Flags  -> ()
	 */
	void UWBP_AmmoCheckIndicator_C::Collapse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.Collapse");
		
		UWBP_AmmoCheckIndicator_C_Collapse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.DisplayAmmoCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        AmmoCheckText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  AmmoCheckIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShowInterdiction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_AmmoCheckIndicator_C::DisplayAmmoCheck(const class FText& AmmoCheckText, class UTexture2D* AmmoCheckIcon, float DisplayTime, bool bShowInterdiction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.DisplayAmmoCheck");
		
		UWBP_AmmoCheckIndicator_C_DisplayAmmoCheck_Params params {};
		params.AmmoCheckText = AmmoCheckText;
		params.AmmoCheckIcon = AmmoCheckIcon;
		params.DisplayTime = DisplayTime;
		params.bShowInterdiction = bShowInterdiction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.ExecuteUbergraph_WBP_AmmoCheckIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_AmmoCheckIndicator_C::ExecuteUbergraph_WBP_AmmoCheckIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C.ExecuteUbergraph_WBP_AmmoCheckIndicator");
		
		UWBP_AmmoCheckIndicator_C_ExecuteUbergraph_WBP_AmmoCheckIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_AmmoCheckIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_AmmoCheckIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AmmoCheckIndicator.WBP_AmmoCheckIndicator_C");
		return ptr;
	}

}


