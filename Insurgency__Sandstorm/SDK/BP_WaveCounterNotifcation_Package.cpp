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
	 * 		Name   -> Function BP_WaveCounterNotifcation.BP_WaveCounterNotifcation_C.GetNotificationColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UBP_WaveCounterNotifcation_C::GetNotificationColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounterNotifcation.BP_WaveCounterNotifcation_C.GetNotificationColor");
		
		UBP_WaveCounterNotifcation_C_GetNotificationColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_WaveCounterNotifcation.BP_WaveCounterNotifcation_C.UpdateWaveCounterNotification
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WavesChanged                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRightWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_WaveCounterNotifcation_C::UpdateWaveCounterNotification(int32_t WavesChanged, bool IsRightWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaveCounterNotifcation.BP_WaveCounterNotifcation_C.UpdateWaveCounterNotification");
		
		UBP_WaveCounterNotifcation_C_UpdateWaveCounterNotification_Params params {};
		params.WavesChanged = WavesChanged;
		params.IsRightWidget = IsRightWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WaveCounterNotifcation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WaveCounterNotifcation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_WaveCounterNotifcation.BP_WaveCounterNotifcation_C");
		return ptr;
	}

}


