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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepairTypeId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepairTypeId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Repair.RepairTypeId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03710010
	 * 		Name   -> Function Repair.RepairableInterface.HandleDestroy
	 * 		Flags  -> (Native, Public)
	 */
	void URepairableInterface::HandleDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.HandleDestroy");
		
		URepairableInterface_HandleDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0370FF70
	 * 		Name   -> Function Repair.RepairableInterface.GetUndoRepairTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Interactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float URepairableInterface::GetUndoRepairTime(class AActor* Interactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetUndoRepairTime");
		
		URepairableInterface_GetUndoRepairTime_Params params {};
		params.Interactor = Interactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0370FEC0
	 * 		Name   -> Function Repair.RepairableInterface.GetRepairType
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* URepairableInterface::GetRepairType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairType");
		
		URepairableInterface_GetRepairType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0370FE90
	 * 		Name   -> Function Repair.RepairableInterface.GetRepairTime
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float URepairableInterface::GetRepairTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairTime");
		
		URepairableInterface_GetRepairTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0370FF40
	 * 		Name   -> Function Repair.RepairableInterface.GetRepairableState
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ERepairableState URepairableInterface::GetRepairableState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Repair.RepairableInterface.GetRepairableState");
		
		URepairableInterface_GetRepairableState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepairableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepairableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Repair.RepairableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0370FF00
	 * 		Name   -> Function Repair.RepairingInterface.GetRepairType
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* URepairingInterface::GetRepairType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Repair.RepairingInterface.GetRepairType");
		
		URepairingInterface_GetRepairType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepairingInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepairingInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Repair.RepairingInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWoodRepairTypeId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWoodRepairTypeId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Repair.WoodRepairTypeId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipRepairInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipRepairInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Repair.ShipRepairInterface");
		return ptr;
	}

}


