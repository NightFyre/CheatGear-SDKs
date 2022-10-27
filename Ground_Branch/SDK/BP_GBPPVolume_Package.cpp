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
	 * 		Name   -> Function BP_GBPPVolume.BP_GBPPVolume_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_GBPPVolume_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBPPVolume.BP_GBPPVolume_C.UserConstructionScript");
		
		ABP_GBPPVolume_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBPPVolume.BP_GBPPVolume_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GBPPVolume_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBPPVolume.BP_GBPPVolume_C.ReceiveBeginPlay");
		
		ABP_GBPPVolume_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBPPVolume.BP_GBPPVolume_C.BindToSkyActor
	 * 		Flags  -> ()
	 */
	void ABP_GBPPVolume_C::BindToSkyActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBPPVolume.BP_GBPPVolume_C.BindToSkyActor");
		
		ABP_GBPPVolume_C_BindToSkyActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBPPVolume.BP_GBPPVolume_C.OnTimeSpanChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Timespan                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GBPPVolume_C::OnTimeSpanChanged_Event_1(const class FName& Timespan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBPPVolume.BP_GBPPVolume_C.OnTimeSpanChanged_Event_1");
		
		ABP_GBPPVolume_C_OnTimeSpanChanged_Event_1_Params params {};
		params.Timespan = Timespan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBPPVolume.BP_GBPPVolume_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GBPPVolume_C::SetEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBPPVolume.BP_GBPPVolume_C.SetEnabled");
		
		ABP_GBPPVolume_C_SetEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBPPVolume.BP_GBPPVolume_C.ExecuteUbergraph_BP_GBPPVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GBPPVolume_C::ExecuteUbergraph_BP_GBPPVolume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBPPVolume.BP_GBPPVolume_C.ExecuteUbergraph_BP_GBPPVolume");
		
		ABP_GBPPVolume_C_ExecuteUbergraph_BP_GBPPVolume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GBPPVolume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GBPPVolume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GBPPVolume.BP_GBPPVolume_C");
		return ptr;
	}

}


