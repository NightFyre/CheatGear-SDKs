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
	 * 		RVA    -> 0x05025F80
	 * 		Name   -> Function GameStatsClient.GameStatsClientSubsystem.QueueXPRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForceUpdate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameStatsClientSubsystem::QueueXPRequest(bool bForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameStatsClient.GameStatsClientSubsystem.QueueXPRequest");
		
		UGameStatsClientSubsystem_QueueXPRequest_Params params {};
		params.bForceUpdate = bForceUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05025E40
	 * 		Name   -> Function GameStatsClient.GameStatsClientSubsystem.IsBoostActiveForPlaylist
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      PlaylistName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                                   Until                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameStatsClientSubsystem::IsBoostActiveForPlaylist(const class FString& PlaylistName, float* Multiplier, struct FDateTime* Until)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameStatsClient.GameStatsClientSubsystem.IsBoostActiveForPlaylist");
		
		UGameStatsClientSubsystem_IsBoostActiveForPlaylist_Params params {};
		params.PlaylistName = PlaylistName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
		if (Until != nullptr)
			*Until = params.Until;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05025E10
	 * 		Name   -> Function GameStatsClient.GameStatsClientSubsystem.HasXP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGameStatsClientSubsystem::HasXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameStatsClient.GameStatsClientSubsystem.HasXP");
		
		UGameStatsClientSubsystem_HasXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05025DE0
	 * 		Name   -> Function GameStatsClient.GameStatsClientSubsystem.GetXP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int64_t UGameStatsClientSubsystem::GetXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameStatsClient.GameStatsClientSubsystem.GetXP");
		
		UGameStatsClientSubsystem_GetXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameStatsClientSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameStatsClientSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameStatsClient.GameStatsClientSubsystem");
		return ptr;
	}

}


