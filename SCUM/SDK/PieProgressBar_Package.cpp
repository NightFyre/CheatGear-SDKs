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
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.HidePieImages
	 * 		Flags  -> ()
	 */
	void UPieProgressBar_C::HidePieImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.HidePieImages");
		
		UPieProgressBar_C_HidePieImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.GetPercentageText
	 * 		Flags  -> ()
	 */
	class FText UPieProgressBar_C::GetPercentageText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetPercentageText");
		
		UPieProgressBar_C_GetPercentageText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.SetImageColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::SetImageColor(class UImage* Image, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetImageColor");
		
		UPieProgressBar_C_SetImageColor_Params params {};
		params.Image = Image;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  textWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::SetTextColor(class UTextBlock* textWidget, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetTextColor");
		
		UPieProgressBar_C_SetTextColor_Params params {};
		params.textWidget = textWidget;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.SetCircularBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                circularBarColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::SetCircularBarColor(const struct FLinearColor& circularBarColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetCircularBarColor");
		
		UPieProgressBar_C_SetCircularBarColor_Params params {};
		params.circularBarColor = circularBarColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.GetCircularBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                circularBarColor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::GetCircularBarColor(struct FLinearColor* circularBarColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetCircularBarColor");
		
		UPieProgressBar_C_GetCircularBarColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (circularBarColor != nullptr)
			*circularBarColor = params.circularBarColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                OuterCircleColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::SetOuterCircleColor(const struct FLinearColor& OuterCircleColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor");
		
		UPieProgressBar_C_SetOuterCircleColor_Params params {};
		params.OuterCircleColor = OuterCircleColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                OuterCircleColor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::GetOuterCircleColor(struct FLinearColor* OuterCircleColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor");
		
		UPieProgressBar_C_GetOuterCircleColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OuterCircleColor != nullptr)
			*OuterCircleColor = params.OuterCircleColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.GetNormalColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                normalColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::GetNormalColor(struct FLinearColor* normalColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.GetNormalColor");
		
		UPieProgressBar_C_GetNormalColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (normalColor != nullptr)
			*normalColor = params.normalColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.SetNormalColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                normalColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::SetNormalColor(const struct FLinearColor& normalColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.SetNormalColor");
		
		UPieProgressBar_C_SetNormalColor_Params params {};
		params.normalColor = normalColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc
	 * 		Flags  -> ()
	 */
	void UPieProgressBar_C::UpdatePercentageArc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc");
		
		UPieProgressBar_C_UpdatePercentageArc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.OnPercentageChanged
	 * 		Flags  -> ()
	 */
	void UPieProgressBar_C::OnPercentageChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.OnPercentageChanged");
		
		UPieProgressBar_C_OnPercentageChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.Tick");
		
		UPieProgressBar_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UPieProgressBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.Construct");
		
		UPieProgressBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UPieProgressBar_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties");
		
		UPieProgressBar_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPieProgressBar_C::ExecuteUbergraph_PieProgressBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar");
		
		UPieProgressBar_C_ExecuteUbergraph_PieProgressBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPieProgressBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPieProgressBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PieProgressBar.PieProgressBar_C");
		return ptr;
	}

}


