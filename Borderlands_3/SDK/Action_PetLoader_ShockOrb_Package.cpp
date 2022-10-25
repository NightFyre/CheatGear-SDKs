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
	 * 		Name   -> Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.AN_FireShockOrb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_ShockOrb_C::AN_FireShockOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.AN_FireShockOrb");
		
		UAction_PetLoader_ShockOrb_C_AN_FireShockOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.AN_ChargeShockOrb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_PetLoader_ShockOrb_C::AN_ChargeShockOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.AN_ChargeShockOrb");
		
		UAction_PetLoader_ShockOrb_C_AN_ChargeShockOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.ExecuteUbergraph_Action_PetLoader_ShockOrb
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_PetLoader_ShockOrb_C::ExecuteUbergraph_Action_PetLoader_ShockOrb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C.ExecuteUbergraph_Action_PetLoader_ShockOrb");
		
		UAction_PetLoader_ShockOrb_C_ExecuteUbergraph_Action_PetLoader_ShockOrb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_PetLoader_ShockOrb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_PetLoader_ShockOrb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_ShockOrb.Action_PetLoader_ShockOrb_C");
		return ptr;
	}

}


