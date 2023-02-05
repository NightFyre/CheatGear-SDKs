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
	 * 		Name   -> Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.OnVisibilityChangedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Invisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellEquippedGroup_C::OnVisibilityChangedEvent(ESlateVisibility Invisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.OnVisibilityChangedEvent");
		
		UWB_ClassSpellEquippedGroup_C_OnVisibilityChangedEvent_Params params {};
		params.Invisibility = Invisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassSpellEquippedGroup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.Construct");
		
		UWB_ClassSpellEquippedGroup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.ExecuteUbergraph_WB_ClassSpellEquippedGroup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellEquippedGroup_C::ExecuteUbergraph_WB_ClassSpellEquippedGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C.ExecuteUbergraph_WB_ClassSpellEquippedGroup");
		
		UWB_ClassSpellEquippedGroup_C_ExecuteUbergraph_WB_ClassSpellEquippedGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassSpellEquippedGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassSpellEquippedGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassSpellEquippedGroup.WB_ClassSpellEquippedGroup_C");
		return ptr;
	}

}


