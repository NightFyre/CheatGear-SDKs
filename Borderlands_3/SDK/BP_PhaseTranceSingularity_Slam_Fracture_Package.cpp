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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.GetSingularityAttachComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBoxComponent*                               res                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhaseTranceSingularity_Slam_Fracture_C::GetSingularityAttachComponent(class UBoxComponent** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.GetSingularityAttachComponent");
		
		ABP_PhaseTranceSingularity_Slam_Fracture_C_GetSingularityAttachComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_Slam_Fracture_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.UserConstructionScript");
		
		ABP_PhaseTranceSingularity_Slam_Fracture_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.ConfigureSingularity
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_Slam_Fracture_C::ConfigureSingularity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.ConfigureSingularity");
		
		ABP_PhaseTranceSingularity_Slam_Fracture_C_ConfigureSingularity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhaseTranceSingularity_Slam_Fracture_C::ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C.ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture");
		
		ABP_PhaseTranceSingularity_Slam_Fracture_C_ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Fracture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PhaseTranceSingularity_Slam_Fracture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PhaseTranceSingularity_Slam_Fracture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhaseTranceSingularity_Slam_Fracture.BP_PhaseTranceSingularity_Slam_Fracture_C");
		return ptr;
	}

}


