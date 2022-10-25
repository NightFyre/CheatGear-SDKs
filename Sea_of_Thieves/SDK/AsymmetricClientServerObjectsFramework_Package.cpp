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
	 * 		Name   -> PredefinedFunction AAsymmetricClientObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAsymmetricClientObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AsymmetricClientServerObjectsFramework.AsymmetricClientObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0027ED30
	 * 		Name   -> Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset
	 * 		Flags  -> (Final, RequiredAPI, Native, Private)
	 */
	void AAsymmetricObjectServerManager::OnRep_AsymmetricObjectAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset");
		
		AAsymmetricObjectServerManager_OnRep_AsymmetricObjectAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAsymmetricObjectServerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAsymmetricObjectServerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager");
		return ptr;
	}

}


