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
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetThrowingAccessItemVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_ThrowingAccessItemWidget_C::GetThrowingAccessItemVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetThrowingAccessItemVisibility");
		
		UUI_ThrowingAccessItemWidget_C_GetThrowingAccessItemVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetItemSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   itemSize                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ThrowingAccessItemWidget_C::GetItemSize(struct FVector2D* itemSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetItemSize");
		
		UUI_ThrowingAccessItemWidget_C_GetItemSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (itemSize != nullptr)
			*itemSize = params.itemSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetImageBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 imageBrush                                                 (Parm, OutParm)
	 */
	void UUI_ThrowingAccessItemWidget_C::GetImageBrush(struct FSlateBrush* imageBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetImageBrush");
		
		UUI_ThrowingAccessItemWidget_C_GetImageBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (imageBrush != nullptr)
			*imageBrush = params.imageBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.On__imageWidget_MouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_ThrowingAccessItemWidget_C::On__imageWidget_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.On__imageWidget_MouseButtonDown_1");
		
		UUI_ThrowingAccessItemWidget_C_On__imageWidget_MouseButtonDown_1_Params params {};
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
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.SetItemSlotNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            itemSlotNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ThrowingAccessItemWidget_C::SetItemSlotNumber(int32_t itemSlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.SetItemSlotNumber");
		
		UUI_ThrowingAccessItemWidget_C_SetItemSlotNumber_Params params {};
		params.itemSlotNumber = itemSlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ActivateNormalColor
	 * 		Flags  -> ()
	 */
	void UUI_ThrowingAccessItemWidget_C::ActivateNormalColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ActivateNormalColor");
		
		UUI_ThrowingAccessItemWidget_C_ActivateNormalColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ActivateAlarmColor
	 * 		Flags  -> ()
	 */
	void UUI_ThrowingAccessItemWidget_C::ActivateAlarmColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ActivateAlarmColor");
		
		UUI_ThrowingAccessItemWidget_C_ActivateAlarmColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetItemSlotNumber
	 * 		Flags  -> ()
	 */
	class FText UUI_ThrowingAccessItemWidget_C::GetItemSlotNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.GetItemSlotNumber");
		
		UUI_ThrowingAccessItemWidget_C_GetItemSlotNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ThrowingAccessItemWidget_C::SetTextColor(const struct FLinearColor& TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.SetTextColor");
		
		UUI_ThrowingAccessItemWidget_C_SetTextColor_Params params {};
		params.TextColor = TextColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ThrowingAccessItemWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.Construct");
		
		UUI_ThrowingAccessItemWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.OnDragLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ThrowingAccessItemWidget_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.OnDragLeave");
		
		UUI_ThrowingAccessItemWidget_C_OnDragLeave_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ExecuteUbergraph_UI_ThrowingAccessItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ThrowingAccessItemWidget_C::ExecuteUbergraph_UI_ThrowingAccessItemWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C.ExecuteUbergraph_UI_ThrowingAccessItemWidget");
		
		UUI_ThrowingAccessItemWidget_C_ExecuteUbergraph_UI_ThrowingAccessItemWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ThrowingAccessItemWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ThrowingAccessItemWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ThrowingAccessItemWidget.UI_ThrowingAccessItemWidget_C");
		return ptr;
	}

}


