/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x030F0E20
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.VisibleForAllPlayers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ADynamicRoomBase::VisibleForAllPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.VisibleForAllPlayers");
		
		ADynamicRoomBase_VisibleForAllPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BE5E0
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.UnloadRoom
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADynamicRoomBase::UnloadRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.UnloadRoom");
		
		ADynamicRoomBase_UnloadRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0E00
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomVisible
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ADynamicRoomBase::SelectedRoomVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomVisible");
		
		ADynamicRoomBase_SelectedRoomVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0DE0
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomLoaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ADynamicRoomBase::SelectedRoomLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomLoaded");
		
		ADynamicRoomBase_SelectedRoomLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0DC0
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomClassLoaded
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ADynamicRoomBase::SelectedRoomClassLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.SelectedRoomClassLoaded");
		
		ADynamicRoomBase_SelectedRoomClassLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0D30
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.OnRep_RoomInfoToLoad
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FDynamicRoomReplicationInfo                 OldRoomInfoToLoad                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ADynamicRoomBase::OnRep_RoomInfoToLoad(struct FDynamicRoomReplicationInfo* OldRoomInfoToLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.OnRep_RoomInfoToLoad");
		
		ADynamicRoomBase_OnRep_RoomInfoToLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OldRoomInfoToLoad != nullptr)
			*OldRoomInfoToLoad = params.OldRoomInfoToLoad;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013073C0
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.InstanceRoom
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDynamicRoomBaseData*                        RoomToLoad                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADynamicRoomBase::InstanceRoom(class UDynamicRoomBaseData* RoomToLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.InstanceRoom");
		
		ADynamicRoomBase_InstanceRoom_Params params {};
		params.RoomToLoad = RoomToLoad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E3500
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.InstanceRandomRoom
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ADynamicRoomBase::InstanceRandomRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.InstanceRandomRoom");
		
		ADynamicRoomBase_InstanceRandomRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0BC0
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.GetPlayersInLevel
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AGbxCharacter*>                       Players                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ADynamicRoomBase::GetPlayersInLevel(TArray<class AGbxCharacter*>* Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.GetPlayersInLevel");
		
		ADynamicRoomBase_GetPlayersInLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Players != nullptr)
			*Players = params.Players;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0BA0
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.GetCurrentRoomData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UDynamicRoomBaseData* ADynamicRoomBase::GetCurrentRoomData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.GetCurrentRoomData");
		
		ADynamicRoomBase_GetCurrentRoomData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0AF0
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.GetAvailableRoomData
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UDynamicRoomBaseData*>                AvailableRooms                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ADynamicRoomBase::GetAvailableRoomData(TArray<class UDynamicRoomBaseData*>* AvailableRooms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.GetAvailableRoomData");
		
		ADynamicRoomBase_GetAvailableRoomData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableRooms != nullptr)
			*AvailableRooms = params.AvailableRooms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0AD0
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomBase.AllPlayerVisibilityTest
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ADynamicRoomBase::AllPlayerVisibilityTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomBase.AllPlayerVisibilityTest");
		
		ADynamicRoomBase_AllPlayerVisibilityTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADynamicRoomBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADynamicRoomBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicRoomBaseData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicRoomBaseData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomBaseData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicRoomLevelData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicRoomLevelData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomLevelData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADynamicRoomActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADynamicRoomActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x030F0C70
	 * 		Name   -> Function GbxDynamicRoom.DynamicRoomActorData.HandleDynamicRoomActorSpawned
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicRoomActorData::HandleDynamicRoomActorSpawned(class AActor* SpawnedActor, int32_t InstanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxDynamicRoom.DynamicRoomActorData.HandleDynamicRoomActorSpawned");
		
		UDynamicRoomActorData_HandleDynamicRoomActorSpawned_Params params {};
		params.SpawnedActor = SpawnedActor;
		params.InstanceIndex = InstanceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicRoomActorData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicRoomActorData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomActorData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicRoomModuleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicRoomModuleSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxDynamicRoom.DynamicRoomModuleSettings");
		return ptr;
	}

}


