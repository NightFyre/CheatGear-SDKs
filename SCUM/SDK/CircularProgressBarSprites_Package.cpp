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
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText
	 * 		Flags  -> ()
	 */
	class FText UCircularProgressBarSprites_C::GetCurrentPercentageToShowText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText");
		
		UCircularProgressBarSprites_C_GetCurrentPercentageToShowText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              currentPercentageToShow                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::GetCurrentPercentageToShow(float* currentPercentageToShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow");
		
		UCircularProgressBarSprites_C_GetCurrentPercentageToShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentPercentageToShow != nullptr)
			*currentPercentageToShow = params.currentPercentageToShow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              percentageToShow                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::SetCurrentPercentageToShow(float percentageToShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow");
		
		UCircularProgressBarSprites_C_SetCurrentPercentageToShow_Params params {};
		params.percentageToShow = percentageToShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText
	 * 		Flags  -> ()
	 */
	class FText UCircularProgressBarSprites_C::GetPercentageText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText");
		
		UCircularProgressBarSprites_C_GetPercentageText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  textWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::SetTextalarmColorC(class UTextBlock* textWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC");
		
		UCircularProgressBarSprites_C_SetTextalarmColorC_Params params {};
		params.textWidget = textWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  textWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::SetTextColor(class UTextBlock* textWidget, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor");
		
		UCircularProgressBarSprites_C_SetTextColor_Params params {};
		params.textWidget = textWidget;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor
	 * 		Flags  -> ()
	 */
	void UCircularProgressBarSprites_C::ActivateNormalColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor");
		
		UCircularProgressBarSprites_C_ActivateNormalColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                circularBarColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::SetCircularBarColor(const struct FLinearColor& circularBarColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor");
		
		UCircularProgressBarSprites_C_SetCircularBarColor_Params params {};
		params.circularBarColor = circularBarColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                circularBarColor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::GetCircularBarColor(struct FLinearColor* circularBarColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor");
		
		UCircularProgressBarSprites_C_GetCircularBarColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (circularBarColor != nullptr)
			*circularBarColor = params.circularBarColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                OuterCircleColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::SetOuterCircleColor(const struct FLinearColor& OuterCircleColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor");
		
		UCircularProgressBarSprites_C_SetOuterCircleColor_Params params {};
		params.OuterCircleColor = OuterCircleColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                OuterCircleColor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::GetOuterCircleColor(struct FLinearColor* OuterCircleColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor");
		
		UCircularProgressBarSprites_C_GetOuterCircleColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OuterCircleColor != nullptr)
			*OuterCircleColor = params.OuterCircleColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                normalColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::GetNormalColor(struct FLinearColor* normalColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor");
		
		UCircularProgressBarSprites_C_GetNormalColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (normalColor != nullptr)
			*normalColor = params.normalColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                normalColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::SetNormalColor(const struct FLinearColor& normalColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor");
		
		UCircularProgressBarSprites_C_SetNormalColor_Params params {};
		params.normalColor = normalColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                AlarmColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::GetAlarmColor(struct FLinearColor* AlarmColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor");
		
		UCircularProgressBarSprites_C_GetAlarmColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AlarmColor != nullptr)
			*AlarmColor = params.AlarmColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                AlarmColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::SetAlarmColor(const struct FLinearColor& AlarmColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor");
		
		UCircularProgressBarSprites_C_SetAlarmColor_Params params {};
		params.AlarmColor = AlarmColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor
	 * 		Flags  -> ()
	 */
	void UCircularProgressBarSprites_C::ActivateAlarmColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor");
		
		UCircularProgressBarSprites_C_ActivateAlarmColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc
	 * 		Flags  -> ()
	 */
	void UCircularProgressBarSprites_C::UpdatePercentageArc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc");
		
		UCircularProgressBarSprites_C_UpdatePercentageArc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      ImageWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::SetImageAlarmColor(class UImage* ImageWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor");
		
		UCircularProgressBarSprites_C_SetImageAlarmColor_Params params {};
		params.ImageWidget = ImageWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged
	 * 		Flags  -> ()
	 */
	void UCircularProgressBarSprites_C::OnPercentageChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged");
		
		UCircularProgressBarSprites_C_OnPercentageChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn
	 * 		Flags  -> ()
	 */
	void UCircularProgressBarSprites_C::AlarmSwitchOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn");
		
		UCircularProgressBarSprites_C_AlarmSwitchOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff
	 * 		Flags  -> ()
	 */
	void UCircularProgressBarSprites_C::AlarmSwitchOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff");
		
		UCircularProgressBarSprites_C_AlarmSwitchOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick");
		
		UCircularProgressBarSprites_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct
	 * 		Flags  -> ()
	 */
	void UCircularProgressBarSprites_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct");
		
		UCircularProgressBarSprites_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UCircularProgressBarSprites_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties");
		
		UCircularProgressBarSprites_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCircularProgressBarSprites_C::ExecuteUbergraph_CircularProgressBarSprites(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites");
		
		UCircularProgressBarSprites_C_ExecuteUbergraph_CircularProgressBarSprites_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCircularProgressBarSprites_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCircularProgressBarSprites_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CircularProgressBarSprites.CircularProgressBarSprites_C");
		return ptr;
	}

}


