﻿/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AInGame_Turret_TorpedoLauncher_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.Timeline_0__FinishedFunc");
		
		AInGame_Turret_TorpedoLauncher_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AInGame_Turret_TorpedoLauncher_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.Timeline_0__UpdateFunc");
		
		AInGame_Turret_TorpedoLauncher_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AInGame_Turret_TorpedoLauncher_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.ReceiveBeginPlay");
		
		AInGame_Turret_TorpedoLauncher_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.FiredTurrentEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SocketArrayNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AInGame_Turret_TorpedoLauncher_C::FiredTurrentEvent(int32_t SocketArrayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.FiredTurrentEvent");
		
		AInGame_Turret_TorpedoLauncher_C_FiredTurrentEvent_Params params {};
		params.SocketArrayNum = SocketArrayNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.ExecuteUbergraph_InGame_Turret_TorpedoLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AInGame_Turret_TorpedoLauncher_C::ExecuteUbergraph_InGame_Turret_TorpedoLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C.ExecuteUbergraph_InGame_Turret_TorpedoLauncher");
		
		AInGame_Turret_TorpedoLauncher_C_ExecuteUbergraph_InGame_Turret_TorpedoLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInGame_Turret_TorpedoLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInGame_Turret_TorpedoLauncher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InGame_Turret_TorpedoLauncher.InGame_Turret_TorpedoLauncher_C");
		return ptr;
	}

}


