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
	 * 		Name   -> Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.SetActiveState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_SpectatorItemIcon_C::SetActiveState(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.SetActiveState");
		
		UBP_SpectatorItemIcon_C_SetActiveState_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.UpdateActiveColor
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorItemIcon_C::UpdateActiveColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.UpdateActiveColor");
		
		UBP_SpectatorItemIcon_C_UpdateActiveColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.UpdateItem
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpectatorItemIcon_C::UpdateItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.UpdateItem");
		
		UBP_SpectatorItemIcon_C_UpdateItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.SetItemClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      NewItemClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorItemIcon_C::SetItemClass(class UClass* NewItemClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.SetItemClass");
		
		UBP_SpectatorItemIcon_C_SetItemClass_Params params {};
		params.NewItemClass = NewItemClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_SpectatorItemIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.Construct");
		
		UBP_SpectatorItemIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.ExecuteUbergraph_BP_SpectatorItemIcon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpectatorItemIcon_C::ExecuteUbergraph_BP_SpectatorItemIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpectatorItemIcon.BP_SpectatorItemIcon_C.ExecuteUbergraph_BP_SpectatorItemIcon");
		
		UBP_SpectatorItemIcon_C_ExecuteUbergraph_BP_SpectatorItemIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SpectatorItemIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SpectatorItemIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_SpectatorItemIcon.BP_SpectatorItemIcon_C");
		return ptr;
	}

}


