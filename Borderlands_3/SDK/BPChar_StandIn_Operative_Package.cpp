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
	 * 		Name   -> Function BPChar_StandIn_Operative.BPChar_StandIn_Operative_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_StandIn_Operative_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Operative.BPChar_StandIn_Operative_C.UserConstructionScript");
		
		ABPChar_StandIn_Operative_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_StandIn_Operative.BPChar_StandIn_Operative_C.ShowActionSkillDevice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_StandIn_Operative_C::ShowActionSkillDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Operative.BPChar_StandIn_Operative_C.ShowActionSkillDevice");
		
		ABPChar_StandIn_Operative_C_ShowActionSkillDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_StandIn_Operative.BPChar_StandIn_Operative_C.HideActionSkillDevice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_StandIn_Operative_C::HideActionSkillDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Operative.BPChar_StandIn_Operative_C.HideActionSkillDevice");
		
		ABPChar_StandIn_Operative_C_HideActionSkillDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_StandIn_Operative.BPChar_StandIn_Operative_C.ExecuteUbergraph_BPChar_StandIn_Operative
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_StandIn_Operative_C::ExecuteUbergraph_BPChar_StandIn_Operative(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Operative.BPChar_StandIn_Operative_C.ExecuteUbergraph_BPChar_StandIn_Operative");
		
		ABPChar_StandIn_Operative_C_ExecuteUbergraph_BPChar_StandIn_Operative_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_StandIn_Operative_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_StandIn_Operative_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_StandIn_Operative.BPChar_StandIn_Operative_C");
		return ptr;
	}

}


