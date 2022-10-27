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
	 * 		Name   -> Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.NotifyUsed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAction_IronBear_BearFist_Base_C::NotifyUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.NotifyUsed");
		
		UAction_IronBear_BearFist_Base_C_NotifyUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.DoBearFistMeleeHit
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NormalFireMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAction_IronBear_BearFist_Base_C::DoBearFistMeleeHit(bool NormalFireMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.DoBearFistMeleeHit");
		
		UAction_IronBear_BearFist_Base_C_DoBearFistMeleeHit_Params params {};
		params.NormalFireMode = NormalFireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronBear_BearFist_Base_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.OnBegin");
		
		UAction_IronBear_BearFist_Base_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.ExecuteUbergraph_Action_IronBear_BearFist_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronBear_BearFist_Base_C::ExecuteUbergraph_Action_IronBear_BearFist_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.ExecuteUbergraph_Action_IronBear_BearFist_Base");
		
		UAction_IronBear_BearFist_Base_C_ExecuteUbergraph_Action_IronBear_BearFist_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_IronBear_BearFist_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_IronBear_BearFist_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C");
		return ptr;
	}

}


