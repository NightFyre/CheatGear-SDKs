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
	 * 		RVA    -> 0x034C4670
	 * 		Name   -> Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	float UCalmWaterMappingInterface::GetDampeningFactor(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor");
		
		UCalmWaterMappingInterface_GetDampeningFactor_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C45D0
	 * 		Name   -> Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	float UCalmWaterMappingInterface::GetChoppinessFactor(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor");
		
		UCalmWaterMappingInterface_GetChoppinessFactor_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCalmWaterMappingInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCalmWaterMappingInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CalmWaterMapping.CalmWaterMappingInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAthenaCalmWaterZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAthenaCalmWaterZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CalmWaterMapping.AthenaCalmWaterZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x034C4710
	 * 		Name   -> Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	float UCalmWaterMappingService::STATIC_GetMaxWindSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed");
		
		UCalmWaterMappingService_GetMaxWindSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCalmWaterMappingService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCalmWaterMappingService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CalmWaterMapping.CalmWaterMappingService");
		return ptr;
	}

}


