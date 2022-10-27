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
	 * 		RVA    -> 0x03982950
	 * 		Name   -> Function Music.MusicZoneInterface.CanPlayForPlayer
	 * 		Flags  -> (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UMusicZoneInterface::CanPlayForPlayer(class AActor* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Music.MusicZoneInterface.CanPlayForPlayer");
		
		UMusicZoneInterface_CanPlayForPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicZoneInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicZoneInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Music.MusicZoneInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03982AB0
	 * 		Name   -> Function Music.MusicZoneComponent.GetEmitter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	struct FWwiseEmitter UMusicZoneComponent::GetEmitter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.GetEmitter");
		
		UMusicZoneComponent_GetEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03982A90
	 * 		Name   -> Function Music.MusicZoneComponent.DisableZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMusicZoneComponent::DisableZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.DisableZone");
		
		UMusicZoneComponent_DisableZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03982A70
	 * 		Name   -> Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void UMusicZoneComponent::Client_StopMusicAndDisableZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone");
		
		UMusicZoneComponent_Client_StopMusicAndDisableZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x039829F0
	 * 		Name   -> Function Music.MusicZoneComponent.Client_PlayOneShot
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMusicZoneComponent::Client_PlayOneShot(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.Client_PlayOneShot");
		
		UMusicZoneComponent_Client_PlayOneShot_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03982930
	 * 		Name   -> Function Music.MusicZoneComponent.ActivateZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMusicZoneComponent::ActivateZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.ActivateZone");
		
		UMusicZoneComponent_ActivateZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Music.MusicZoneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03982B30
	 * 		Name   -> Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAISpawnerMusicZoneComponent::OnRep_SpawnerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState");
		
		UAISpawnerMusicZoneComponent_OnRep_SpawnerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISpawnerMusicZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISpawnerMusicZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Music.AISpawnerMusicZoneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynchedMusicZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynchedMusicZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Music.SynchedMusicZoneComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMusicZoneServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMusicZoneServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Music.MusicZoneServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMusicZoneService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMusicZoneService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Music.MusicZoneService");
		return ptr;
	}

}


