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
	 * 		Name   -> Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronCub_DespawnIronCub_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.OnServerEnd");
		
		UAction_IronCub_DespawnIronCub_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.ExecuteUbergraph_Action_IronCub_DespawnIronCub
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_IronCub_DespawnIronCub_C::ExecuteUbergraph_Action_IronCub_DespawnIronCub(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C.ExecuteUbergraph_Action_IronCub_DespawnIronCub");
		
		UAction_IronCub_DespawnIronCub_C_ExecuteUbergraph_Action_IronCub_DespawnIronCub_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_IronCub_DespawnIronCub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_IronCub_DespawnIronCub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_IronCub_DespawnIronCub.Action_IronCub_DespawnIronCub_C");
		return ptr;
	}

}


