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
	 * 		Name   -> Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_Slam_Barrage_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.UserConstructionScript");
		
		ABP_PhaseTranceSingularity_Slam_Barrage_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PhaseTranceSingularity_Slam_Barrage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.ReceiveBeginPlay");
		
		ABP_PhaseTranceSingularity_Slam_Barrage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhaseTranceSingularity_Slam_Barrage_C::ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C.ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage");
		
		ABP_PhaseTranceSingularity_Slam_Barrage_C_ExecuteUbergraph_BP_PhaseTranceSingularity_Slam_Barrage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PhaseTranceSingularity_Slam_Barrage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PhaseTranceSingularity_Slam_Barrage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhaseTranceSingularity_Slam_Barrage.BP_PhaseTranceSingularity_Slam_Barrage_C");
		return ptr;
	}

}


