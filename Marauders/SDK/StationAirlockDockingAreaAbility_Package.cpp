/**
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
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetOutsideSignText
	 * 		Flags  -> ()
	 */
	void AStationAirlockDockingAreaAbility_C::SetOutsideSignText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetOutsideSignText");
		
		AStationAirlockDockingAreaAbility_C_SetOutsideSignText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetStateOnInside_UIWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_HangarDoorStates                                 StateToUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStationAirlockDockingAreaAbility_C::SetStateOnInside_UIWidget(E_HangarDoorStates StateToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetStateOnInside_UIWidget");
		
		AStationAirlockDockingAreaAbility_C_SetStateOnInside_UIWidget_Params params {};
		params.StateToUse = StateToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetStateOnUIWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_HangarDoorStates                                 StateToUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStationAirlockDockingAreaAbility_C::SetStateOnUIWidget(E_HangarDoorStates StateToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.SetStateOnUIWidget");
		
		AStationAirlockDockingAreaAbility_C_SetStateOnUIWidget_Params params {};
		params.StateToUse = StateToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AStationAirlockDockingAreaAbility_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.UserConstructionScript");
		
		AStationAirlockDockingAreaAbility_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.DoorOpenEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BopenDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStationAirlockDockingAreaAbility_C::DoorOpenEvent(bool BopenDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.DoorOpenEvent");
		
		AStationAirlockDockingAreaAbility_C_DoorOpenEvent_Params params {};
		params.BopenDoor = BopenDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.EnableCollisionOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableCollision                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStationAirlockDockingAreaAbility_C::EnableCollisionOnDoor(bool EnableCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.EnableCollisionOnDoor");
		
		AStationAirlockDockingAreaAbility_C_EnableCollisionOnDoor_Params params {};
		params.EnableCollision = EnableCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AStationAirlockDockingAreaAbility_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.ReceiveBeginPlay");
		
		AStationAirlockDockingAreaAbility_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.AirLockOpenCloseState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUseState                                          OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUseState                                          NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStationAirlockDockingAreaAbility_C::AirLockOpenCloseState(EUseState OldState, EUseState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.AirLockOpenCloseState");
		
		AStationAirlockDockingAreaAbility_C_AirLockOpenCloseState_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.ExecuteUbergraph_StationAirlockDockingAreaAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStationAirlockDockingAreaAbility_C::ExecuteUbergraph_StationAirlockDockingAreaAbility(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C.ExecuteUbergraph_StationAirlockDockingAreaAbility");
		
		AStationAirlockDockingAreaAbility_C_ExecuteUbergraph_StationAirlockDockingAreaAbility_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStationAirlockDockingAreaAbility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStationAirlockDockingAreaAbility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StationAirlockDockingAreaAbility.StationAirlockDockingAreaAbility_C");
		return ptr;
	}

}


