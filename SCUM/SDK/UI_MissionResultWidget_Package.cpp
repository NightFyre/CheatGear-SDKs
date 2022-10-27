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
	 * 		Name   -> Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation
	 * 		Flags  -> ()
	 */
	void UUI_MissionResultWidget_C::PlayShowMissionResultAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.PlayShowMissionResultAnimation");
		
		UUI_MissionResultWidget_C_PlayShowMissionResultAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.OnAnimationFinished");
		
		UUI_MissionResultWidget_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MissionResultWidget_C::ExecuteUbergraph_UI_MissionResultWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MissionResultWidget.UI_MissionResultWidget_C.ExecuteUbergraph_UI_MissionResultWidget");
		
		UUI_MissionResultWidget_C_ExecuteUbergraph_UI_MissionResultWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MissionResultWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MissionResultWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MissionResultWidget.UI_MissionResultWidget_C");
		return ptr;
	}

}


