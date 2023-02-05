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
	 * 		Name   -> Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.OnVisibilityChangedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Invisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellGroup_C::OnVisibilityChangedEvent(ESlateVisibility Invisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.OnVisibilityChangedEvent");
		
		UWB_ClassSpellGroup_C_OnVisibilityChangedEvent_Params params {};
		params.Invisibility = Invisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_ClassSpellGroup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.Construct");
		
		UWB_ClassSpellGroup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.ExecuteUbergraph_WB_ClassSpellGroup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_ClassSpellGroup_C::ExecuteUbergraph_WB_ClassSpellGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ClassSpellGroup.WB_ClassSpellGroup_C.ExecuteUbergraph_WB_ClassSpellGroup");
		
		UWB_ClassSpellGroup_C_ExecuteUbergraph_WB_ClassSpellGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ClassSpellGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ClassSpellGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ClassSpellGroup.WB_ClassSpellGroup_C");
		return ptr;
	}

}


