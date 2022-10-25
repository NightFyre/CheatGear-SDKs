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
	 * 		Name   -> Function AnimAction_HandGun_Reload_Charge.AnimAction_HandGun_Reload_Charge_C.TriggerAction
	 * 		Flags  -> ()
	 */
	void UAnimAction_HandGun_Reload_Charge_C::TriggerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_HandGun_Reload_Charge.AnimAction_HandGun_Reload_Charge_C.TriggerAction");
		
		UAnimAction_HandGun_Reload_Charge_C_TriggerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AnimAction_HandGun_Reload_Charge.AnimAction_HandGun_Reload_Charge_C.ExecuteUbergraph_AnimAction_HandGun_Reload_Charge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnimAction_HandGun_Reload_Charge_C::ExecuteUbergraph_AnimAction_HandGun_Reload_Charge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimAction_HandGun_Reload_Charge.AnimAction_HandGun_Reload_Charge_C.ExecuteUbergraph_AnimAction_HandGun_Reload_Charge");
		
		UAnimAction_HandGun_Reload_Charge_C_ExecuteUbergraph_AnimAction_HandGun_Reload_Charge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimAction_HandGun_Reload_Charge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimAction_HandGun_Reload_Charge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnimAction_HandGun_Reload_Charge.AnimAction_HandGun_Reload_Charge_C");
		return ptr;
	}

}


