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
	 * 		RVA    -> 0x038B6AE0
	 * 		Name   -> Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TimeLimit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UMerchantContractsBlueprintLibrary::STATIC_GetDateFromTimeLimit(float TimeLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit");
		
		UMerchantContractsBlueprintLibrary_GetDateFromTimeLimit_Params params {};
		params.TimeLimit = TimeLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMerchantContractsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMerchantContractsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MerchantContracts.MerchantContractsBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMerchantContractsServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMerchantContractsServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MerchantContracts.MerchantContractsServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMerchantContractsService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMerchantContractsService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MerchantContracts.MerchantContractsService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMerchantContractsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMerchantContractsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MerchantContracts.PlayerMerchantContractsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerMerchantContractsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMerchantContractsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MerchantContracts.PlayerMerchantContractsComponent");
		return ptr;
	}

}


