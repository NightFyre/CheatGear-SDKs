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
	 * 		Name   -> Function BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DroppedItemImpact_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C.ReceiveBeginPlay");
		
		ABP_DroppedItemImpact_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C.PlaySound
	 * 		Flags  -> ()
	 */
	void ABP_DroppedItemImpact_Master_C::PlaySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C.PlaySound");
		
		ABP_DroppedItemImpact_Master_C_PlaySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C.SpawnParticleFX
	 * 		Flags  -> ()
	 */
	void ABP_DroppedItemImpact_Master_C::SpawnParticleFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C.SpawnParticleFX");
		
		ABP_DroppedItemImpact_Master_C_SpawnParticleFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C.ExecuteUbergraph_BP_DroppedItemImpact_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DroppedItemImpact_Master_C::ExecuteUbergraph_BP_DroppedItemImpact_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C.ExecuteUbergraph_BP_DroppedItemImpact_Master");
		
		ABP_DroppedItemImpact_Master_C_ExecuteUbergraph_BP_DroppedItemImpact_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DroppedItemImpact_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DroppedItemImpact_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroppedItemImpact_Master.BP_DroppedItemImpact_Master_C");
		return ptr;
	}

}


