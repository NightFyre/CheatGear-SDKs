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
	 * 		Name   -> Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnVisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LoadoutGroup_C::OnVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnVisible");
		
		UWB_LoadoutGroup_C_OnVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnInvisible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWB_LoadoutGroup_C::OnInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnInvisible");
		
		UWB_LoadoutGroup_C_OnInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LoadoutGroup.WB_LoadoutGroup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWB_LoadoutGroup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LoadoutGroup.WB_LoadoutGroup_C.Construct");
		
		UWB_LoadoutGroup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnVisibilityChanged_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESlateVisibility                                   Invisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LoadoutGroup_C::OnVisibilityChanged_Event(ESlateVisibility Invisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LoadoutGroup.WB_LoadoutGroup_C.OnVisibilityChanged_Event");
		
		UWB_LoadoutGroup_C_OnVisibilityChanged_Event_Params params {};
		params.Invisibility = Invisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LoadoutGroup.WB_LoadoutGroup_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LoadoutGroup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LoadoutGroup.WB_LoadoutGroup_C.Tick");
		
		UWB_LoadoutGroup_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function WB_LoadoutGroup.WB_LoadoutGroup_C.ExecuteUbergraph_WB_LoadoutGroup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_LoadoutGroup_C::ExecuteUbergraph_WB_LoadoutGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_LoadoutGroup.WB_LoadoutGroup_C.ExecuteUbergraph_WB_LoadoutGroup");
		
		UWB_LoadoutGroup_C_ExecuteUbergraph_WB_LoadoutGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_LoadoutGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_LoadoutGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_LoadoutGroup.WB_LoadoutGroup_C");
		return ptr;
	}

}


