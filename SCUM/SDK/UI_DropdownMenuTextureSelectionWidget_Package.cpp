/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.OnMouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_DropdownMenuTextureSelectionWidget_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.OnMouseButtonDown_1");
		
		UUI_DropdownMenuTextureSelectionWidget_C_OnMouseButtonDown_1_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DropdownMenuTextureSelectionWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.PreConstruct");
		
		UUI_DropdownMenuTextureSelectionWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.Update
	 * 		Flags  -> ()
	 */
	void UUI_DropdownMenuTextureSelectionWidget_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.Update");
		
		UUI_DropdownMenuTextureSelectionWidget_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DropdownMenuTextureSelectionWidget_C::ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C.ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget");
		
		UUI_DropdownMenuTextureSelectionWidget_C_ExecuteUbergraph_UI_DropdownMenuTextureSelectionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DropdownMenuTextureSelectionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DropdownMenuTextureSelectionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DropdownMenuTextureSelectionWidget.UI_DropdownMenuTextureSelectionWidget_C");
		return ptr;
	}

}


