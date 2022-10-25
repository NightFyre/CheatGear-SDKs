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
	 * 		Name   -> Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.IsBgVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_KitSelect_ItemsBackground_C::IsBgVisible(bool* bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.IsBgVisible");
		
		UBP_KitSelect_ItemsBackground_C_IsBgVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bVisible != nullptr)
			*bVisible = params.bVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_ItemsBackground_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnMouseEnter");
		
		UBP_KitSelect_ItemsBackground_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_KitSelect_ItemsBackground_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnMouseLeave");
		
		UBP_KitSelect_ItemsBackground_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnRemovedFromFocusPath
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_KitSelect_ItemsBackground_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnRemovedFromFocusPath");
		
		UBP_KitSelect_ItemsBackground_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.ExecuteUbergraph_BP_KitSelect_ItemsBackground
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_KitSelect_ItemsBackground_C::ExecuteUbergraph_BP_KitSelect_ItemsBackground(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.ExecuteUbergraph_BP_KitSelect_ItemsBackground");
		
		UBP_KitSelect_ItemsBackground_C_ExecuteUbergraph_BP_KitSelect_ItemsBackground_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnUpgradeListBgUnhover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemsBackground_C::OnUpgradeListBgUnhover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnUpgradeListBgUnhover__DelegateSignature");
		
		UBP_KitSelect_ItemsBackground_C_OnUpgradeListBgUnhover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnUpgradeListBgHover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_KitSelect_ItemsBackground_C::OnUpgradeListBgHover__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C.OnUpgradeListBgHover__DelegateSignature");
		
		UBP_KitSelect_ItemsBackground_C_OnUpgradeListBgHover__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KitSelect_ItemsBackground_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KitSelect_ItemsBackground_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_KitSelect_ItemsBackground.BP_KitSelect_ItemsBackground_C");
		return ptr;
	}

}


