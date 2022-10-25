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
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.BlinkTheObjectiveBeingContested
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FloatingObjectiveIcon_C::BlinkTheObjectiveBeingContested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.BlinkTheObjectiveBeingContested");
		
		UBP_FloatingObjectiveIcon_C_BlinkTheObjectiveBeingContested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateObjectiveLetter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FloatingObjectiveIcon_C::UpdateObjectiveLetter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateObjectiveLetter");
		
		UBP_FloatingObjectiveIcon_C_UpdateObjectiveLetter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.SetCapturableIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCapturable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FloatingObjectiveIcon_C::SetCapturableIcon(bool bCapturable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.SetCapturableIcon");
		
		UBP_FloatingObjectiveIcon_C_SetCapturableIcon_Params params {};
		params.bCapturable = bCapturable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateOnScreenState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewOnscreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FrontDot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RightDot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FloatingObjectiveIcon_C::UpdateOnScreenState(bool NewOnscreen, float FrontDot, float RightDot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateOnScreenState");
		
		UBP_FloatingObjectiveIcon_C_UpdateOnScreenState_Params params {};
		params.NewOnscreen = NewOnscreen;
		params.FrontDot = FrontDot;
		params.RightDot = RightDot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateDistanceText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FloatingObjectiveIcon_C::UpdateDistanceText(float NewDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateDistanceText");
		
		UBP_FloatingObjectiveIcon_C_UpdateDistanceText_Params params {};
		params.NewDistance = NewDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.SetObjectiveType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_FloatingObjectiveIcon_C::SetObjectiveType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.SetObjectiveType");
		
		UBP_FloatingObjectiveIcon_C_SetObjectiveType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconBgColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_FloatingObjectiveIcon_C::GetIconBgColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconBgColor");
		
		UBP_FloatingObjectiveIcon_C_GetIconBgColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconBorderColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_FloatingObjectiveIcon_C::GetIconBorderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconBorderColor");
		
		UBP_FloatingObjectiveIcon_C_GetIconBorderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconFillColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBP_FloatingObjectiveIcon_C::GetIconFillColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconFillColor");
		
		UBP_FloatingObjectiveIcon_C_GetIconFillColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateIcon
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InDistance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InFrontDot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRightDot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InIronsightFrac                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsOnScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_FloatingObjectiveIcon_C::UpdateIcon(float InDistance, float InFrontDot, float InRightDot, float InIronsightFrac, bool bInIsOnScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateIcon");
		
		UBP_FloatingObjectiveIcon_C_UpdateIcon_Params params {};
		params.InDistance = InDistance;
		params.InFrontDot = InFrontDot;
		params.InRightDot = InRightDot;
		params.InIronsightFrac = InIronsightFrac;
		params.bInIsOnScreen = bInIsOnScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.OnSetObjective
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AObjectiveBase*                              NewObjective                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FloatingObjectiveIcon_C::OnSetObjective(class AObjectiveBase* NewObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.OnSetObjective");
		
		UBP_FloatingObjectiveIcon_C_OnSetObjective_Params params {};
		params.NewObjective = NewObjective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FloatingObjectiveIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.Tick");
		
		UBP_FloatingObjectiveIcon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.OnObjectiveChangeCapturingTeam
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AObjectiveBase*                              InObjective                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCapturers                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FloatingObjectiveIcon_C::OnObjectiveChangeCapturingTeam(class AObjectiveBase* InObjective, unsigned char NewCapturers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.OnObjectiveChangeCapturingTeam");
		
		UBP_FloatingObjectiveIcon_C_OnObjectiveChangeCapturingTeam_Params params {};
		params.InObjective = InObjective;
		params.NewCapturers = NewCapturers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.ExecuteUbergraph_BP_FloatingObjectiveIcon
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_FloatingObjectiveIcon_C::ExecuteUbergraph_BP_FloatingObjectiveIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.ExecuteUbergraph_BP_FloatingObjectiveIcon");
		
		UBP_FloatingObjectiveIcon_C_ExecuteUbergraph_BP_FloatingObjectiveIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_FloatingObjectiveIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_FloatingObjectiveIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C");
		return ptr;
	}

}


