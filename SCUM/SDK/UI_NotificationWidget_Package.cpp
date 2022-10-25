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
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBasicNotificationDescription*               desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationWidget_C::Initialize(class UBasicNotificationDescription* desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Initialize");
		
		UUI_NotificationWidget_C_Initialize_Params params {};
		params.desc = desc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.Set Notification Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  IconTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IconSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationWidget_C::Set_Notification_Icon(class UTexture2D* IconTexture, int32_t IconSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Set Notification Icon");
		
		UUI_NotificationWidget_C_Set_Notification_Icon_Params params {};
		params.IconTexture = IconTexture;
		params.IconSize = IconSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.Set Notification Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        notificationName                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_NotificationWidget_C::Set_Notification_Name(const class FText& notificationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Set Notification Name");
		
		UUI_NotificationWidget_C_Set_Notification_Name_Params params {};
		params.notificationName = notificationName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationWidget_C::CheckLifespan(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan");
		
		UUI_NotificationWidget_C_CheckLifespan_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationWidget_C::SetLifeSpan(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan");
		
		UUI_NotificationWidget_C_SetLifeSpan_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            InFontSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationWidget_C::SetText(const class FText& InText, int32_t InFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.SetText");
		
		UUI_NotificationWidget_C_SetText_Params params {};
		params.InText = InText;
		params.InFontSize = InFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale
	 * 		Flags  -> ()
	 */
	void UUI_NotificationWidget_C::UpdateScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale");
		
		UUI_NotificationWidget_C_UpdateScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_NotificationWidget_C::Show(bool Instant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Show");
		
		UUI_NotificationWidget_C_Show_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_NotificationWidget_C::Dismiss(bool Instant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss");
		
		UUI_NotificationWidget_C_Dismiss_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_NotificationWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Construct");
		
		UUI_NotificationWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.Tick");
		
		UUI_NotificationWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NotificationWidget_C::ExecuteUbergraph_UI_NotificationWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget");
		
		UUI_NotificationWidget_C_ExecuteUbergraph_UI_NotificationWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NotificationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NotificationWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NotificationWidget.UI_NotificationWidget_C");
		return ptr;
	}

}


