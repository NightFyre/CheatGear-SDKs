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
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ShouldUseScope
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bUseScope                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDScopeWeaponBase_C::ShouldUseScope(bool* bUseScope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ShouldUseScope");
		
		ABP_HDScopeWeaponBase_C_ShouldUseScope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUseScope != nullptr)
			*bUseScope = params.bUseScope;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SaveOwnerDefaultValues
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::SaveOwnerDefaultValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SaveOwnerDefaultValues");
		
		ABP_HDScopeWeaponBase_C_SaveOwnerDefaultValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.RestoreOwnerDefaultValues
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::RestoreOwnerDefaultValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.RestoreOwnerDefaultValues");
		
		ABP_HDScopeWeaponBase_C_RestoreOwnerDefaultValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ScopeEffects
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::ScopeEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ScopeEffects");
		
		ABP_HDScopeWeaponBase_C_ScopeEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.AimOut
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::AimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.AimOut");
		
		ABP_HDScopeWeaponBase_C_AimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.AimIn
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::AimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.AimIn");
		
		ABP_HDScopeWeaponBase_C_AimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.HasLocallyPlayerControlledOwner
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bLocalPlayerOwner                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDScopeWeaponBase_C::HasLocallyPlayerControlledOwner(bool* bLocalPlayerOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.HasLocallyPlayerControlledOwner");
		
		ABP_HDScopeWeaponBase_C_HasLocallyPlayerControlledOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocalPlayerOwner != nullptr)
			*bLocalPlayerOwner = params.bLocalPlayerOwner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.HasValidOwnerData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bCharAliveCheck                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bValidOwnerData                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDScopeWeaponBase_C::HasValidOwnerData(bool bCharAliveCheck, bool* bValidOwnerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.HasValidOwnerData");
		
		ABP_HDScopeWeaponBase_C_HasValidOwnerData_Params params {};
		params.bCharAliveCheck = bCharAliveCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidOwnerData != nullptr)
			*bValidOwnerData = params.bValidOwnerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ResetDefaultValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::ResetDefaultValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ResetDefaultValues");
		
		ABP_HDScopeWeaponBase_C_ResetDefaultValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.CleanupOwnerData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::CleanupOwnerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.CleanupOwnerData");
		
		ABP_HDScopeWeaponBase_C_CleanupOwnerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SetupOwnerData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bValidOwnerData                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDScopeWeaponBase_C::SetupOwnerData(bool* bValidOwnerData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SetupOwnerData");
		
		ABP_HDScopeWeaponBase_C_SetupOwnerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValidOwnerData != nullptr)
			*bValidOwnerData = params.bValidOwnerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.UserConstructionScript");
		
		ABP_HDScopeWeaponBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.StartAimInScope
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::StartAimInScope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.StartAimInScope");
		
		ABP_HDScopeWeaponBase_C_StartAimInScope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.StartAimOutScope
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::StartAimOutScope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.StartAimOutScope");
		
		ABP_HDScopeWeaponBase_C_StartAimOutScope_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDScopeWeaponBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveTick");
		
		ABP_HDScopeWeaponBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnEquipFinished
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::ReceiveOnEquipFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnEquipFinished");
		
		ABP_HDScopeWeaponBase_C_ReceiveOnEquipFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnUnEquip
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bPlayAnimAndWait                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeavingPawnInventory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDScopeWeaponBase_C::ReceiveOnUnEquip(bool bPlayAnimAndWait, bool bLeavingPawnInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnUnEquip");
		
		ABP_HDScopeWeaponBase_C_ReceiveOnUnEquip_Params params {};
		params.bPlayAnimAndWait = bPlayAnimAndWait;
		params.bLeavingPawnInventory = bLeavingPawnInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ResetAimOutGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::ResetAimOutGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ResetAimOutGate");
		
		ABP_HDScopeWeaponBase_C_ResetAimOutGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnLeaveInventory
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            LastOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDScopeWeaponBase_C::ReceiveOnLeaveInventory(class ADFBaseCharacter* LastOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ReceiveOnLeaveInventory");
		
		ABP_HDScopeWeaponBase_C_ReceiveOnLeaveInventory_Params params {};
		params.LastOwner = LastOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SetCurrentSight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Sight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDScopeWeaponBase_C::SetCurrentSight(class USceneComponent* Sight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.SetCurrentSight");
		
		ABP_HDScopeWeaponBase_C_SetCurrentSight_Params params {};
		params.Sight = Sight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.OnBraceAimEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDScopeWeaponBase_C::OnBraceAimEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.OnBraceAimEnd");
		
		ABP_HDScopeWeaponBase_C_OnBraceAimEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ExecuteUbergraph_BP_HDScopeWeaponBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDScopeWeaponBase_C::ExecuteUbergraph_BP_HDScopeWeaponBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C.ExecuteUbergraph_BP_HDScopeWeaponBase");
		
		ABP_HDScopeWeaponBase_C_ExecuteUbergraph_BP_HDScopeWeaponBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDScopeWeaponBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDScopeWeaponBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDScopeWeaponBase.BP_HDScopeWeaponBase_C");
		return ptr;
	}

}


