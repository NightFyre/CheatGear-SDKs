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
	 * 		Name   -> Function BP_GBSkyActor.BP_GBSkyActor_C.GetNVGMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutMultiplier                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GBSkyActor_C::GetNVGMultiplier(float* OutMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBSkyActor.BP_GBSkyActor_C.GetNVGMultiplier");
		
		ABP_GBSkyActor_C_GetNVGMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMultiplier != nullptr)
			*OutMultiplier = params.OutMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBSkyActor.BP_GBSkyActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_GBSkyActor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBSkyActor.BP_GBSkyActor_C.UserConstructionScript");
		
		ABP_GBSkyActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBSkyActor.BP_GBSkyActor_C.OnTimeSpanChangeEvent
	 * 		Flags  -> ()
	 */
	void ABP_GBSkyActor_C::OnTimeSpanChangeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBSkyActor.BP_GBSkyActor_C.OnTimeSpanChangeEvent");
		
		ABP_GBSkyActor_C_OnTimeSpanChangeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBSkyActor.BP_GBSkyActor_C.InternalOnTimeSpanChanged
	 * 		Flags  -> ()
	 */
	void ABP_GBSkyActor_C::InternalOnTimeSpanChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBSkyActor.BP_GBSkyActor_C.InternalOnTimeSpanChanged");
		
		ABP_GBSkyActor_C_InternalOnTimeSpanChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBSkyActor.BP_GBSkyActor_C.ExecuteUbergraph_BP_GBSkyActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GBSkyActor_C::ExecuteUbergraph_BP_GBSkyActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBSkyActor.BP_GBSkyActor_C.ExecuteUbergraph_BP_GBSkyActor");
		
		ABP_GBSkyActor_C_ExecuteUbergraph_BP_GBSkyActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GBSkyActor.BP_GBSkyActor_C.OnTimeSpanChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Timespan                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GBSkyActor_C::OnTimeSpanChanged__DelegateSignature(const class FName& Timespan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GBSkyActor.BP_GBSkyActor_C.OnTimeSpanChanged__DelegateSignature");
		
		ABP_GBSkyActor_C_OnTimeSpanChanged__DelegateSignature_Params params {};
		params.Timespan = Timespan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GBSkyActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GBSkyActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GBSkyActor.BP_GBSkyActor_C");
		return ptr;
	}

}


