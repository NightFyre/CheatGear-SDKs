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
	 * 		Name   -> Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Takedown at the Guardian Breach]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Takedown2_C::Takedown_at_the_Guardian_Breach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Takedown at the Guardian Breach]");
		
		UMissionGraph_Takedown2_C_Takedown_at_the_Guardian_Breach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Discovery: Takedown at the Guardian Breach]
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMissionGraph_Takedown2_C::Discovery_Takedown_at_the_Guardian_Breach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Discovery: Takedown at the Guardian Breach]");
		
		UMissionGraph_Takedown2_C_Discovery_Takedown_at_the_Guardian_Breach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.ExecuteUbergraph_MissionGraph_Takedown2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMissionGraph_Takedown2_C::ExecuteUbergraph_MissionGraph_Takedown2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.ExecuteUbergraph_MissionGraph_Takedown2");
		
		UMissionGraph_Takedown2_C_ExecuteUbergraph_MissionGraph_Takedown2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMissionGraph_Takedown2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionGraph_Takedown2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MissionGraph_Takedown2.MissionGraph_Takedown2_C");
		return ptr;
	}

}


