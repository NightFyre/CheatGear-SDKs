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
	 * 		RVA    -> 0x02EA1A90
	 * 		Name   -> Function GbxProbesCore.GbxProbeInterface.GetGbxProbeId
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGbxProbeId                                 OutId                                                      (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGbxProbeInterface::GetGbxProbeId(struct FGbxProbeId* OutId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GbxProbesCore.GbxProbeInterface.GetGbxProbeId");
		
		UGbxProbeInterface_GetGbxProbeId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutId != nullptr)
			*OutId = params.OutId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGbxProbeInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGbxProbeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GbxProbesCore.GbxProbeInterface");
		return ptr;
	}

}


