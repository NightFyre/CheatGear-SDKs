/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateActiveUnits
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFriendly                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UnitCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MinUnitsRequired                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_C::UpdateActiveUnits(bool bFriendly, int32_t UnitCount, int32_t MinUnitsRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateActiveUnits");
		
		UWBP_CaptureStatus_C_UpdateActiveUnits_Params params {};
		params.bFriendly = bFriendly;
		params.UnitCount = UnitCount;
		params.MinUnitsRequired = MinUnitsRequired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.SetMinCountToCapture
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MinCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_C::SetMinCountToCapture(int32_t MinCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.SetMinCountToCapture");
		
		UWBP_CaptureStatus_C_SetMinCountToCapture_Params params {};
		params.MinCount = MinCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.ResizeGarrisonContainer
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewUnitIconCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_C::ResizeGarrisonContainer(int32_t NewUnitIconCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.ResizeGarrisonContainer");
		
		UWBP_CaptureStatus_C_ResizeGarrisonContainer_Params params {};
		params.NewUnitIconCount = NewUnitIconCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateTeamOwnerText
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            CaptureTeam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_C::UpdateTeamOwnerText(EHDTeam CaptureTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateTeamOwnerText");
		
		UWBP_CaptureStatus_C_UpdateTeamOwnerText_Params params {};
		params.CaptureTeam = CaptureTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateProgressBarColor
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            OwningTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_C::UpdateProgressBarColor(EHDTeam OwningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.UpdateProgressBarColor");
		
		UWBP_CaptureStatus_C_UpdateProgressBarColor_Params params {};
		params.OwningTeam = OwningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.OwnerTouchingControlPoint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AHDBaseCapturePoint*                         OverlappingCP                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CaptureStatus_C::OwnerTouchingControlPoint(class AHDBaseCapturePoint* OverlappingCP, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.OwnerTouchingControlPoint");
		
		UWBP_CaptureStatus_C_OwnerTouchingControlPoint_Params params {};
		params.OverlappingCP = OverlappingCP;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.OwnerNoControlPoint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_CaptureStatus_C::OwnerNoControlPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.OwnerNoControlPoint");
		
		UWBP_CaptureStatus_C_OwnerNoControlPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_CaptureStatus_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.OnInitialized");
		
		UWBP_CaptureStatus_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetCaptureProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bContested                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewValueNorm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OldValueNorm                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CaptureStatus_C::ControlPointSetCaptureProgress(bool bContested, float NewValueNorm, float OldValueNorm, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetCaptureProgress");
		
		UWBP_CaptureStatus_C_ControlPointSetCaptureProgress_Params params {};
		params.bContested = bContested;
		params.NewValueNorm = NewValueNorm;
		params.OldValueNorm = OldValueNorm;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetOwnershipState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCaptured                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHDTeam                                            NewOwningTeam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHDTeam                                            OldOwningTeam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CaptureStatus_C::ControlPointSetOwnershipState(bool bCaptured, EHDTeam NewOwningTeam, EHDTeam OldOwningTeam, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetOwnershipState");
		
		UWBP_CaptureStatus_C_ControlPointSetOwnershipState_Params params {};
		params.bCaptured = bCaptured;
		params.NewOwningTeam = NewOwningTeam;
		params.OldOwningTeam = OldOwningTeam;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetGarrisonedPlayerCount
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumFriendlies                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumEnemies                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MinNumRequiredForCapture                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInitial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CaptureStatus_C::ControlPointSetGarrisonedPlayerCount(int32_t NumFriendlies, int32_t NumEnemies, int32_t MinNumRequiredForCapture, bool bInitial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.ControlPointSetGarrisonedPlayerCount");
		
		UWBP_CaptureStatus_C_ControlPointSetGarrisonedPlayerCount_Params params {};
		params.NumFriendlies = NumFriendlies;
		params.NumEnemies = NumEnemies;
		params.MinNumRequiredForCapture = MinNumRequiredForCapture;
		params.bInitial = bInitial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CaptureStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.PreConstruct");
		
		UWBP_CaptureStatus_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CaptureStatus.WBP_CaptureStatus_C.ExecuteUbergraph_WBP_CaptureStatus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CaptureStatus_C::ExecuteUbergraph_WBP_CaptureStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CaptureStatus.WBP_CaptureStatus_C.ExecuteUbergraph_WBP_CaptureStatus");
		
		UWBP_CaptureStatus_C_ExecuteUbergraph_WBP_CaptureStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CaptureStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CaptureStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CaptureStatus.WBP_CaptureStatus_C");
		return ptr;
	}

}


