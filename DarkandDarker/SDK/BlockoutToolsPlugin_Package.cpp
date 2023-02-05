/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00D2BDF0
	 * 		Name   -> Function BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void ABlockoutToolsParent::RerunConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript");
		
		ABlockoutToolsParent_RerunConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00D2BDD0
	 * 		Name   -> Function BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void ABlockoutToolsParent::BlockoutSetMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial");
		
		ABlockoutToolsParent_BlockoutSetMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABlockoutToolsParent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlockoutToolsParent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlockoutToolsPlugin.BlockoutToolsParent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlockoutToolsSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlockoutToolsSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BlockoutToolsPlugin.BlockoutToolsSettings");
		return ptr;
	}

}


