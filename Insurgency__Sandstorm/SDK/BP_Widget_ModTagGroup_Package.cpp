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
	 * 		Name   -> Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.GetUnSelectedTags
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void UBP_Widget_ModTagGroup_C::GetUnSelectedTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.GetUnSelectedTags");
		
		UBP_Widget_ModTagGroup_C_GetUnSelectedTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.GetSelectedTags
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void UBP_Widget_ModTagGroup_C::GetSelectedTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.GetSelectedTags");
		
		UBP_Widget_ModTagGroup_C_GetSelectedTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.UpdateSelectedTags
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Widget_ModTagGroup_C::UpdateSelectedTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.UpdateSelectedTags");
		
		UBP_Widget_ModTagGroup_C_UpdateSelectedTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ModTagGroup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.PreConstruct");
		
		UBP_Widget_ModTagGroup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.OnOptionToggled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Toggled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_ModTagGroup_C::OnOptionToggled(const class FName& Key, bool Toggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.OnOptionToggled");
		
		UBP_Widget_ModTagGroup_C_OnOptionToggled_Params params {};
		params.Key = Key;
		params.Toggled = Toggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.ExecuteUbergraph_BP_Widget_ModTagGroup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_ModTagGroup_C::ExecuteUbergraph_BP_Widget_ModTagGroup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.ExecuteUbergraph_BP_Widget_ModTagGroup");
		
		UBP_Widget_ModTagGroup_C_ExecuteUbergraph_BP_Widget_ModTagGroup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.OnTagsUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_Widget_ModTagGroup_C*                    Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_ModTagGroup_C::OnTagsUpdated__DelegateSignature(class UBP_Widget_ModTagGroup_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C.OnTagsUpdated__DelegateSignature");
		
		UBP_Widget_ModTagGroup_C_OnTagsUpdated__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_ModTagGroup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_ModTagGroup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_ModTagGroup.BP_Widget_ModTagGroup_C");
		return ptr;
	}

}


