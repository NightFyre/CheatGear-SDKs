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
	 * 		RVA    -> 0x05038B20
	 * 		Name   -> Function ConsoleCertificationRequirements.AccountNickname.GetActiveAccountNickname
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UAccountNickname::GetActiveAccountNickname()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleCertificationRequirements.AccountNickname.GetActiveAccountNickname");
		
		UAccountNickname_GetActiveAccountNickname_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function ConsoleCertificationRequirements.AccountNickname.BP_OnAccountChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ActiveControllerId                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAccountNickname::BP_OnAccountChanged(int32_t ActiveControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleCertificationRequirements.AccountNickname.BP_OnAccountChanged");
		
		UAccountNickname_BP_OnAccountChanged_Params params {};
		params.ActiveControllerId = ActiveControllerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAccountNickname.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAccountNickname::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConsoleCertificationRequirements.AccountNickname");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function ConsoleCertificationRequirements.NetworkConnectionStatus.BP_OnConnectionStatusChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bConnected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNetworkConnectionStatus::BP_OnConnectionStatusChanged(bool bConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConsoleCertificationRequirements.NetworkConnectionStatus.BP_OnConnectionStatusChanged");
		
		UNetworkConnectionStatus_BP_OnConnectionStatusChanged_Params params {};
		params.bConnected = bConnected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkConnectionStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkConnectionStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ConsoleCertificationRequirements.NetworkConnectionStatus");
		return ptr;
	}

}


