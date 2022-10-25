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
	 * 		Name   -> Function BP_Widget_LocalVoiceStatus.BP_Widget_LocalVoiceStatus_C.SetIsTalking
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewStatus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverRadio                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Widget_LocalVoiceStatus_C::SetIsTalking(bool bNewStatus, bool bOverRadio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_LocalVoiceStatus.BP_Widget_LocalVoiceStatus_C.SetIsTalking");
		
		UBP_Widget_LocalVoiceStatus_C_SetIsTalking_Params params {};
		params.bNewStatus = bNewStatus;
		params.bOverRadio = bOverRadio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_LocalVoiceStatus.BP_Widget_LocalVoiceStatus_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_LocalVoiceStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_LocalVoiceStatus.BP_Widget_LocalVoiceStatus_C.Tick");
		
		UBP_Widget_LocalVoiceStatus_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Widget_LocalVoiceStatus.BP_Widget_LocalVoiceStatus_C.ExecuteUbergraph_BP_Widget_LocalVoiceStatus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Widget_LocalVoiceStatus_C::ExecuteUbergraph_BP_Widget_LocalVoiceStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Widget_LocalVoiceStatus.BP_Widget_LocalVoiceStatus_C.ExecuteUbergraph_BP_Widget_LocalVoiceStatus");
		
		UBP_Widget_LocalVoiceStatus_C_ExecuteUbergraph_BP_Widget_LocalVoiceStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Widget_LocalVoiceStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Widget_LocalVoiceStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Widget_LocalVoiceStatus.BP_Widget_LocalVoiceStatus_C");
		return ptr;
	}

}


