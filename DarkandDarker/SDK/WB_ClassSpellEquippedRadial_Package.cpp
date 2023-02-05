/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellEquippedRadial.WB_ClassSpellEquippedRadial_C.OnShowEquippableSlot
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_ClassSpellEquippedRadial_C::OnShowEquippableSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellEquippedRadial.WB_ClassSpellEquippedRadial_C.OnShowEquippableSlot");
		
		UWB_ClassSpellEquippedRadial_C_OnShowEquippableSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellEquippedRadial.WB_ClassSpellEquippedRadial_C.OnHideEquippableSlot
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWB_ClassSpellEquippedRadial_C::OnHideEquippableSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellEquippedRadial.WB_ClassSpellEquippedRadial_C.OnHideEquippableSlot");
		
		UWB_ClassSpellEquippedRadial_C_OnHideEquippableSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellEquippedRadial.WB_ClassSpellEquippedRadial_C.ExecuteUbergraph_WB_ClassSpellEquippedRadial
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellEquippedRadial_C::ExecuteUbergraph_WB_ClassSpellEquippedRadial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellEquippedRadial.WB_ClassSpellEquippedRadial_C.ExecuteUbergraph_WB_ClassSpellEquippedRadial");
		
		UWB_ClassSpellEquippedRadial_C_ExecuteUbergraph_WB_ClassSpellEquippedRadial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassSpellEquippedRadial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassSpellEquippedRadial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassSpellEquippedRadial.WB_ClassSpellEquippedRadial_C");
		return ptr;
	}

}


