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
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdatePacketLoss
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InPktLoss                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutPktLoss                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_NetworkStatusUI_C::UpdatePacketLoss(float InPktLoss, float OutPktLoss)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdatePacketLoss");
		
		UBP_NetworkStatusUI_C_UpdatePacketLoss_Params params {};
		params.InPktLoss = InPktLoss;
		params.OutPktLoss = OutPktLoss;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateSize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      NewPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_NetworkStatusUI_C::UpdateSize(unsigned char NewPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateSize");
		
		UBP_NetworkStatusUI_C_UpdateSize_Params params {};
		params.NewPosition = NewPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateIncomingPacketRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InRate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_NetworkStatusUI_C::UpdateIncomingPacketRate(int32_t InRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateIncomingPacketRate");
		
		UBP_NetworkStatusUI_C_UpdateIncomingPacketRate_Params params {};
		params.InRate = InRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdatePing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ping                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_NetworkStatusUI_C::UpdatePing(float Ping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdatePing");
		
		UBP_NetworkStatusUI_C_UpdatePing_Params params {};
		params.Ping = Ping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateSeverityColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UImage*                                      ImagePanel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCritical                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_NetworkStatusUI_C::UpdateSeverityColor(class UImage* ImagePanel, bool bCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.UpdateSeverityColor");
		
		UBP_NetworkStatusUI_C_UpdateSeverityColor_Params params {};
		params.ImagePanel = ImagePanel;
		params.bCritical = bCritical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetLowServerFPSStatusVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_NetworkStatusUI_C::GetLowServerFPSStatusVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetLowServerFPSStatusVisibility");
		
		UBP_NetworkStatusUI_C_GetLowServerFPSStatusVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetPacketLossStatusVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_NetworkStatusUI_C::GetPacketLossStatusVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetPacketLossStatusVisibility");
		
		UBP_NetworkStatusUI_C_GetPacketLossStatusVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetLatencyStatusVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_NetworkStatusUI_C::GetLatencyStatusVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetLatencyStatusVisibility");
		
		UBP_NetworkStatusUI_C_GetLatencyStatusVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetDisconnectedStatusVisibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UBP_NetworkStatusUI_C::GetDisconnectedStatusVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.GetDisconnectedStatusVisibility");
		
		UBP_NetworkStatusUI_C_GetDisconnectedStatusVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_NetworkStatusUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.Construct");
		
		UBP_NetworkStatusUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnNetTimingOutUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bTimingOut                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_NetworkStatusUI_C::OnNetTimingOutUpdate(bool bTimingOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnNetTimingOutUpdate");
		
		UBP_NetworkStatusUI_C_OnNetTimingOutUpdate_Params params {};
		params.bTimingOut = bTimingOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnStatsUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FClientNetStats                             Stats                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_NetworkStatusUI_C::OnStatsUpdated(const struct FClientNetStats& Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnStatsUpdated");
		
		UBP_NetworkStatusUI_C_OnStatsUpdated_Params params {};
		params.Stats = Stats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnPlatformConnectionStatusChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bConnected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_NetworkStatusUI_C::OnPlatformConnectionStatusChanged(bool bConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.OnPlatformConnectionStatusChanged");
		
		UBP_NetworkStatusUI_C_OnPlatformConnectionStatusChanged_Params params {};
		params.bConnected = bConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.ExecuteUbergraph_BP_NetworkStatusUI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_NetworkStatusUI_C::ExecuteUbergraph_BP_NetworkStatusUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NetworkStatusUI.BP_NetworkStatusUI_C.ExecuteUbergraph_BP_NetworkStatusUI");
		
		UBP_NetworkStatusUI_C_ExecuteUbergraph_BP_NetworkStatusUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_NetworkStatusUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_NetworkStatusUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_NetworkStatusUI.BP_NetworkStatusUI_C");
		return ptr;
	}

}


