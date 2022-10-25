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
	 * 		Name   -> Function UI_MicInputIndicator.UI_MicInputIndicator_C.GetMicVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_MicInputIndicator_C::GetMicVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MicInputIndicator.UI_MicInputIndicator_C.GetMicVisibility");
		
		UUI_MicInputIndicator_C_GetMicVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MicInputIndicator.UI_MicInputIndicator_C.UpdateVoiceChat
	 * 		Flags  -> ()
	 */
	void UUI_MicInputIndicator_C::UpdateVoiceChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MicInputIndicator.UI_MicInputIndicator_C.UpdateVoiceChat");
		
		UUI_MicInputIndicator_C_UpdateVoiceChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MicInputIndicator.UI_MicInputIndicator_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MicInputIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MicInputIndicator.UI_MicInputIndicator_C.Tick");
		
		UUI_MicInputIndicator_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MicInputIndicator.UI_MicInputIndicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_MicInputIndicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MicInputIndicator.UI_MicInputIndicator_C.Construct");
		
		UUI_MicInputIndicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MicInputIndicator.UI_MicInputIndicator_C.ExecuteUbergraph_UI_MicInputIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MicInputIndicator_C::ExecuteUbergraph_UI_MicInputIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MicInputIndicator.UI_MicInputIndicator_C.ExecuteUbergraph_UI_MicInputIndicator");
		
		UUI_MicInputIndicator_C_ExecuteUbergraph_UI_MicInputIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MicInputIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MicInputIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MicInputIndicator.UI_MicInputIndicator_C");
		return ptr;
	}

}


