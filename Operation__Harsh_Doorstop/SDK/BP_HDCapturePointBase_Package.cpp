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
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagClothLOD
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDCapturePointBase_C::UpdateFlagClothLOD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagClothLOD");
		
		ABP_HDCapturePointBase_C_UpdateFlagClothLOD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.AddPOI
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDCapturePointBase_C::AddPOI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.AddPOI");
		
		ABP_HDCapturePointBase_C_AddPOI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.RemovePOI
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDCapturePointBase_C::RemovePOI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.RemovePOI");
		
		ABP_HDCapturePointBase_C_RemovePOI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdatePOIState
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDCapturePointBase_C::UpdatePOIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdatePOIState");
		
		ABP_HDCapturePointBase_C_UpdatePOIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.InitPOI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDFMinimap*                                  Minimap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::InitPOI(class UDFMinimap* Minimap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.InitPOI");
		
		ABP_HDCapturePointBase_C_InitPOI_Params params {};
		params.Minimap = Minimap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            InOwningTeam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHUD*                                        InLocalPlayerHUD                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::UpdateFlagIcon(EHDTeam InOwningTeam, class AHUD* InLocalPlayerHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagIcon");
		
		ABP_HDCapturePointBase_C_UpdateFlagIcon_Params params {};
		params.InOwningTeam = InOwningTeam;
		params.InLocalPlayerHUD = InLocalPlayerHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            InOwningTeam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::UpdateFlagColor(EHDTeam InOwningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UpdateFlagColor");
		
		ABP_HDCapturePointBase_C_UpdateFlagColor_Params params {};
		params.InOwningTeam = InOwningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDCapturePointBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.UserConstructionScript");
		
		ABP_HDCapturePointBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveTick");
		
		ABP_HDCapturePointBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnOwningTeamUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EHDTeam                                            LastOwningTeam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::ReceiveOnOwningTeamUpdated(EHDTeam LastOwningTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnOwningTeamUpdated");
		
		ABP_HDCapturePointBase_C_ReceiveOnOwningTeamUpdated_Params params {};
		params.LastOwningTeam = LastOwningTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnCaptureProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewContested                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDCapturePointBase_C::ReceiveOnCaptureProgress(bool bNewContested)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnCaptureProgress");
		
		ABP_HDCapturePointBase_C_ReceiveOnCaptureProgress_Params params {};
		params.bNewContested = bNewContested;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.OnCaptureUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bContested                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::OnCaptureUpdate(bool bContested, int32_t Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.OnCaptureUpdate");
		
		ABP_HDCapturePointBase_C_OnCaptureUpdate_Params params {};
		params.bContested = bContested;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnActive
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDCapturePointBase_C::ReceiveOnActive(bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnActive");
		
		ABP_HDCapturePointBase_C_ReceiveOnActive_Params params {};
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnLocked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewLocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDCapturePointBase_C::ReceiveOnLocked(bool bNewLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnLocked");
		
		ABP_HDCapturePointBase_C_ReceiveOnLocked_Params params {};
		params.bNewLocked = bNewLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDCapturePointBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveBeginPlay");
		
		ABP_HDCapturePointBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnTeamCaptureStatusUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDCapturePointBase_C::ReceiveOnTeamCaptureStatusUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveOnTeamCaptureStatusUpdated");
		
		ABP_HDCapturePointBase_C_ReceiveOnTeamCaptureStatusUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ReceiveEndPlay");
		
		ABP_HDCapturePointBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ExecuteUbergraph_BP_HDCapturePointBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::ExecuteUbergraph_BP_HDCapturePointBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.ExecuteUbergraph_BP_HDCapturePointBase");
		
		ABP_HDCapturePointBase_C_ExecuteUbergraph_BP_HDCapturePointBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.OnCaptureStatusUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDCapturePointBase_C*                    ControlPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDCapturePointBase_C::OnCaptureStatusUpdated__DelegateSignature(class ABP_HDCapturePointBase_C* ControlPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDCapturePointBase.BP_HDCapturePointBase_C.OnCaptureStatusUpdated__DelegateSignature");
		
		ABP_HDCapturePointBase_C_OnCaptureStatusUpdated__DelegateSignature_Params params {};
		params.ControlPoint = ControlPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDCapturePointBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDCapturePointBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDCapturePointBase.BP_HDCapturePointBase_C");
		return ptr;
	}

}


