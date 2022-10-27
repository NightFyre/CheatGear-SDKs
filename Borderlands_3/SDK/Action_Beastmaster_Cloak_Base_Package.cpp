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
	 * 		Name   -> Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_Stealth
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_Cloak_Base_C::Notify_Stealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_Stealth");
		
		UAction_Beastmaster_Cloak_Base_C_Notify_Stealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_StealthFeedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_Cloak_Base_C::Notify_StealthFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.Notify_StealthFeedback");
		
		UAction_Beastmaster_Cloak_Base_C_Notify_StealthFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.ExecuteUbergraph_Action_Beastmaster_Cloak_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_Cloak_Base_C::ExecuteUbergraph_Action_Beastmaster_Cloak_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C.ExecuteUbergraph_Action_Beastmaster_Cloak_Base");
		
		UAction_Beastmaster_Cloak_Base_C_ExecuteUbergraph_Action_Beastmaster_Cloak_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Beastmaster_Cloak_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Beastmaster_Cloak_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C");
		return ptr;
	}

}


