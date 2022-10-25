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
	 * 		Name   -> Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus
	 * 		Flags  -> ()
	 */
	class FText UUI_CTFRoundInfoWidget_C::GetRoundStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus");
		
		UUI_CTFRoundInfoWidget_C_GetRoundStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_CTFRoundInfoWidget_C::GetTimeLeftBoxVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility");
		
		UUI_CTFRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText
	 * 		Flags  -> ()
	 */
	class FText UUI_CTFRoundInfoWidget_C::GetTimeLeftDescriptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText");
		
		UUI_CTFRoundInfoWidget_C_GetTimeLeftDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText
	 * 		Flags  -> ()
	 */
	class FText UUI_CTFRoundInfoWidget_C::GetTimeLeftText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText");
		
		UUI_CTFRoundInfoWidget_C_GetTimeLeftText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGameEventBase*                              gameEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CTFRoundInfoWidget_C::SetGameEvent(class AGameEventBase* gameEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent");
		
		UUI_CTFRoundInfoWidget_C_SetGameEvent_Params params {};
		params.gameEvent = gameEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CTFRoundInfoWidget_C::ExecuteUbergraph_UI_CTFRoundInfoWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget");
		
		UUI_CTFRoundInfoWidget_C_ExecuteUbergraph_UI_CTFRoundInfoWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CTFRoundInfoWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CTFRoundInfoWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C");
		return ptr;
	}

}


