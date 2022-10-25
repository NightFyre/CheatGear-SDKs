/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_MissionObjective.BP_MissionObjective_C.OnChanged
	 * 		Flags  -> ()
	 */
	void ABP_MissionObjective_C::OnChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.OnChanged");
		
		ABP_MissionObjective_C_OnChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionObjective.BP_MissionObjective_C.GetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 */
	void ABP_MissionObjective_C::GetDescription(class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.GetDescription");
		
		ABP_MissionObjective_C_GetDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionObjective.BP_MissionObjective_C.IsCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MissionObjective_C::IsCompleted(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.IsCompleted");
		
		ABP_MissionObjective_C_IsCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionObjective.BP_MissionObjective_C.Changed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MissionObjective_C*                      sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MissionObjective_C::Changed__DelegateSignature(class ABP_MissionObjective_C* sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.Changed__DelegateSignature");
		
		ABP_MissionObjective_C_Changed__DelegateSignature_Params params {};
		params.sender = sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MissionObjective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MissionObjective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionObjective.BP_MissionObjective_C");
		return ptr;
	}

}


