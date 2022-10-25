/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x015CF540
	 * 		Name   -> Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void AShimmerActor::OnDeactivateShimmer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer");
		
		AShimmerActor_OnDeactivateShimmer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF520
	 * 		Name   -> Function TreasuryFramework.ShimmerActor.OnActivateShimmer
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void AShimmerActor::OnActivateShimmer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.ShimmerActor.OnActivateShimmer");
		
		AShimmerActor_OnActivateShimmer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShimmerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShimmerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TreasuryFramework.ShimmerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTreasuryWaveDataAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTreasuryWaveDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TreasuryFramework.TreasuryWaveDataAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CFB40
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnWaveStart
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETreasuryEncounterType                             EncounterType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETreasuryWaveType                                  WaveType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATreasuryRoom::OnWaveStart(ETreasuryEncounterType EncounterType, ETreasuryWaveType WaveType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveStart");
		
		ATreasuryRoom_OnWaveStart_Params params {};
		params.EncounterType = EncounterType;
		params.WaveType = WaveType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CFAA0
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnWaveFinishedVaultMaster
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATreasuryRoom::OnWaveFinishedVaultMaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveFinishedVaultMaster");
		
		ATreasuryRoom_OnWaveFinishedVaultMaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CFA00
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnWaveFinished
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATreasuryRoom::OnWaveFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveFinished");
		
		ATreasuryRoom_OnWaveFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF980
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnWaveComplete
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETreasuryEncounterType                             EncounterType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATreasuryRoom::OnWaveComplete(ETreasuryEncounterType EncounterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveComplete");
		
		ATreasuryRoom_OnWaveComplete_Params params {};
		params.EncounterType = EncounterType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF960
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnVaultOpen
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ATreasuryRoom::OnVaultOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnVaultOpen");
		
		ATreasuryRoom_OnVaultOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF940
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnVaultClosed
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ATreasuryRoom::OnVaultClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnVaultClosed");
		
		ATreasuryRoom_OnVaultClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF880
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETreasuryState                                     PrevState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETreasuryState                                     NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATreasuryRoom::OnTreasuryStateChange(ETreasuryState PrevState, ETreasuryState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange");
		
		ATreasuryRoom_OnTreasuryStateChange_Params params {};
		params.PrevState = PrevState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF860
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ATreasuryRoom::OnTreasuryDeactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate");
		
		ATreasuryRoom_OnTreasuryDeactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF840
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ATreasuryRoom::OnTreasuryActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate");
		
		ATreasuryRoom_OnTreasuryActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF820
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ATreasuryRoom::OnStartRaiseWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater");
		
		ATreasuryRoom_OnStartRaiseWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF800
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnStartDrainWater
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ATreasuryRoom::OnStartDrainWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnStartDrainWater");
		
		ATreasuryRoom_OnStartDrainWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF7E0
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnRoomStarted
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ATreasuryRoom::OnRoomStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnRoomStarted");
		
		ATreasuryRoom_OnRoomStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF740
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnRaisedWater
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATreasuryRoom::OnRaisedWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnRaisedWater");
		
		ATreasuryRoom_OnRaisedWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF6B0
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnLeaveRoom
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATreasuryRoom::OnLeaveRoom(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnLeaveRoom");
		
		ATreasuryRoom_OnLeaveRoom_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF620
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnEnterRoom
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATreasuryRoom::OnEnterRoom(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnEnterRoom");
		
		ATreasuryRoom_OnEnterRoom_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF600
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ATreasuryRoom::OnEncounterParamsSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup");
		
		ATreasuryRoom_OnEncounterParamsSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF560
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.OnDrainedWater
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATreasuryRoom::OnDrainedWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnDrainedWater");
		
		ATreasuryRoom_OnDrainedWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x015CF4F0
	 * 		Name   -> Function TreasuryFramework.TreasuryRoom.GetState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ETreasuryState ATreasuryRoom::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.GetState");
		
		ATreasuryRoom_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATreasuryRoom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATreasuryRoom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TreasuryFramework.TreasuryRoom");
		return ptr;
	}

}


