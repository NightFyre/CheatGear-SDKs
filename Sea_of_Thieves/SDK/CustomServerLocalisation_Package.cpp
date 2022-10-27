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
	 * 		Name   -> PredefinedFunction UCustomServerLocalisationInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomServerLocalisationInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomServerLocalisation.CustomServerLocalisationInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03B2E440
	 * 		Name   -> Function CustomServerLocalisation.CustomServerLocalisationService.OnRep_GenerateLocalisationData
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ACustomServerLocalisationService::OnRep_GenerateLocalisationData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomServerLocalisation.CustomServerLocalisationService.OnRep_GenerateLocalisationData");
		
		ACustomServerLocalisationService_OnRep_GenerateLocalisationData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03B2E420
	 * 		Name   -> Function CustomServerLocalisation.CustomServerLocalisationService.BeginPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ACustomServerLocalisationService::BeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomServerLocalisation.CustomServerLocalisationService.BeginPlay");
		
		ACustomServerLocalisationService_BeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACustomServerLocalisationService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACustomServerLocalisationService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CustomServerLocalisation.CustomServerLocalisationService");
		return ptr;
	}

}


