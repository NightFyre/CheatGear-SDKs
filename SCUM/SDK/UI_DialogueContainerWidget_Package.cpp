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
	 * 		Name   -> Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation
	 * 		Flags  -> ()
	 */
	class UWidgetAnimation* UUI_DialogueContainerWidget_C::GetHideAvatarAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetHideAvatarAnimation");
		
		UUI_DialogueContainerWidget_C_GetHideAvatarAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation
	 * 		Flags  -> ()
	 */
	class UWidgetAnimation* UUI_DialogueContainerWidget_C::GetShowAvatarAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.GetShowAvatarAnimation");
		
		UUI_DialogueContainerWidget_C_GetShowAvatarAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_DialogueContainerWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct");
		
		UUI_DialogueContainerWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DialogueContainerWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick");
		
		UUI_DialogueContainerWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DialogueContainerWidget_C::ExecuteUbergraph_UI_DialogueContainerWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget");
		
		UUI_DialogueContainerWidget_C_ExecuteUbergraph_UI_DialogueContainerWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DialogueContainerWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DialogueContainerWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_DialogueContainerWidget.UI_DialogueContainerWidget_C");
		return ptr;
	}

}


