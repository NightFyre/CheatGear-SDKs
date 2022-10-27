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
	 * 		Name   -> Function BPInterface_IronBear.BPInterface_IronBear_C.IronBear_DoMeleeAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPInterface_IronBear_C::IronBear_DoMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPInterface_IronBear.BPInterface_IronBear_C.IronBear_DoMeleeAttack");
		
		UBPInterface_IronBear_C_IronBear_DoMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPInterface_IronBear.BPInterface_IronBear_C.ActivateNukeScreenIcons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EIronBearHardPointOrientation                      HardpointOrientation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPInterface_IronBear_C::ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPInterface_IronBear.BPInterface_IronBear_C.ActivateNukeScreenIcons");
		
		UBPInterface_IronBear_C_ActivateNukeScreenIcons_Params params {};
		params.HardpointOrientation = HardpointOrientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPInterface_IronBear.BPInterface_IronBear_C.SetBubbleShieldFXModOverrideEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPInterface_IronBear_C::SetBubbleShieldFXModOverrideEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPInterface_IronBear.BPInterface_IronBear_C.SetBubbleShieldFXModOverrideEnabled");
		
		UBPInterface_IronBear_C_SetBubbleShieldFXModOverrideEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPInterface_IronBear_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInterface_IronBear_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInterface_IronBear.BPInterface_IronBear_C");
		return ptr;
	}

}


