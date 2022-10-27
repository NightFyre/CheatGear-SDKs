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
	 * 		RVA    -> 0x013E0660
	 * 		Name   -> Function FerretBlueprint.MemFerretBlueprintInterface.StopTracking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMemFerretBlueprintInterface::STATIC_StopTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FerretBlueprint.MemFerretBlueprintInterface.StopTracking");
		
		UMemFerretBlueprintInterface_StopTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013E0570
	 * 		Name   -> Function FerretBlueprint.MemFerretBlueprintInterface.StopAndSave
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FileName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FString UMemFerretBlueprintInterface::STATIC_StopAndSave(const class FString& FileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FerretBlueprint.MemFerretBlueprintInterface.StopAndSave");
		
		UMemFerretBlueprintInterface_StopAndSave_Params params {};
		params.FileName = FileName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013E0550
	 * 		Name   -> Function FerretBlueprint.MemFerretBlueprintInterface.StopAllocTracking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMemFerretBlueprintInterface::STATIC_StopAllocTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FerretBlueprint.MemFerretBlueprintInterface.StopAllocTracking");
		
		UMemFerretBlueprintInterface_StopAllocTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013E0530
	 * 		Name   -> Function FerretBlueprint.MemFerretBlueprintInterface.StartTracking
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMemFerretBlueprintInterface::STATIC_StartTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FerretBlueprint.MemFerretBlueprintInterface.StartTracking");
		
		UMemFerretBlueprintInterface_StartTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013E0400
	 * 		Name   -> Function FerretBlueprint.MemFerretBlueprintInterface.Snapshot
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FileName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldClearData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString UMemFerretBlueprintInterface::STATIC_Snapshot(const class FString& FileName, bool ShouldClearData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FerretBlueprint.MemFerretBlueprintInterface.Snapshot");
		
		UMemFerretBlueprintInterface_Snapshot_Params params {};
		params.FileName = FileName;
		params.ShouldClearData = ShouldClearData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013E0390
	 * 		Name   -> Function FerretBlueprint.MemFerretBlueprintInterface.SetMemoryStatCollectionInterval
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              CollectionInterval                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMemFerretBlueprintInterface::STATIC_SetMemoryStatCollectionInterval(float CollectionInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FerretBlueprint.MemFerretBlueprintInterface.SetMemoryStatCollectionInterval");
		
		UMemFerretBlueprintInterface_SetMemoryStatCollectionInterval_Params params {};
		params.CollectionInterval = CollectionInterval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013E0370
	 * 		Name   -> Function FerretBlueprint.MemFerretBlueprintInterface.Reset
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UMemFerretBlueprintInterface::STATIC_Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FerretBlueprint.MemFerretBlueprintInterface.Reset");
		
		UMemFerretBlueprintInterface_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMemFerretBlueprintInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMemFerretBlueprintInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FerretBlueprint.MemFerretBlueprintInterface");
		return ptr;
	}

}


