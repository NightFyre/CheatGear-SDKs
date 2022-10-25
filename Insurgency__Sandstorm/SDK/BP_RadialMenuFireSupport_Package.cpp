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
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.UpdateFireSupportTimerVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewOnCooldown                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RadialMenuFireSupport_C::UpdateFireSupportTimerVisibility(bool bNewOnCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.UpdateFireSupportTimerVisibility");
		
		UBP_RadialMenuFireSupport_C_UpdateFireSupportTimerVisibility_Params params {};
		params.bNewOnCooldown = bNewOnCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UBP_RadialMenuFireSupport_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.OnKeyDown");
		
		UBP_RadialMenuFireSupport_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.SetupFireSupportRadial
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuFireSupport_C::SetupFireSupportRadial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.SetupFireSupportRadial");
		
		UBP_RadialMenuFireSupport_C_SetupFireSupportRadial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_RadialMenuFireSupport_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.Construct");
		
		UBP_RadialMenuFireSupport_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuFireSupport_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.Tick");
		
		UBP_RadialMenuFireSupport_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.OnTeamChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      TeamId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATeamInfo*                                   TeamInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuFireSupport_C::OnTeamChanged(unsigned char TeamId, class ATeamInfo* TeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.OnTeamChanged");
		
		UBP_RadialMenuFireSupport_C_OnTeamChanged_Params params {};
		params.TeamId = TeamId;
		params.TeamInfo = TeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.BndEvt__RadialMenu_K2Node_ComponentBoundEvent_0_OnSendCommand__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		ERadialMenuDirection                               Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuFireSupport_C::BndEvt__RadialMenu_K2Node_ComponentBoundEvent_0_OnSendCommand__DelegateSignature(ERadialMenuDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.BndEvt__RadialMenu_K2Node_ComponentBoundEvent_0_OnSendCommand__DelegateSignature");
		
		UBP_RadialMenuFireSupport_C_BndEvt__RadialMenu_K2Node_ComponentBoundEvent_0_OnSendCommand__DelegateSignature_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.UpdatePersonalCooldown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_RadialMenuFireSupport_C::UpdatePersonalCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.UpdatePersonalCooldown");
		
		UBP_RadialMenuFireSupport_C_UpdatePersonalCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.ExecuteUbergraph_BP_RadialMenuFireSupport
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RadialMenuFireSupport_C::ExecuteUbergraph_BP_RadialMenuFireSupport(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.ExecuteUbergraph_BP_RadialMenuFireSupport");
		
		UBP_RadialMenuFireSupport_C_ExecuteUbergraph_BP_RadialMenuFireSupport_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RadialMenuFireSupport_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RadialMenuFireSupport_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C");
		return ptr;
	}

}


