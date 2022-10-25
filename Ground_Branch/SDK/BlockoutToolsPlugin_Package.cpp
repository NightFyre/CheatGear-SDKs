/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript
	 * 		Flags  -> ()
	 */
	void ABlockoutToolsParent::RerunConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript");
		
		ABlockoutToolsParent_RerunConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial
	 * 		Flags  -> ()
	 */
	void ABlockoutToolsParent::BlockoutSetMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial");
		
		ABlockoutToolsParent_BlockoutSetMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
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

}


