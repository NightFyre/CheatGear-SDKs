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
	 * 		Name   -> Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.Notify_SpawnTrap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Beastmaster_DLCSkill_Start_Parent_C::Notify_SpawnTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.Notify_SpawnTrap");
		
		UAction_Beastmaster_DLCSkill_Start_Parent_C_Notify_SpawnTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.OnServerBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_DLCSkill_Start_Parent_C::OnServerBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.OnServerBegin");
		
		UAction_Beastmaster_DLCSkill_Start_Parent_C_OnServerBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Beastmaster_DLCSkill_Start_Parent_C::ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C.ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent");
		
		UAction_Beastmaster_DLCSkill_Start_Parent_C_ExecuteUbergraph_Action_Beastmaster_DLCSkill_Start_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Beastmaster_DLCSkill_Start_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Beastmaster_DLCSkill_Start_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_DLCSkill_Start_Parent.Action_Beastmaster_DLCSkill_Start_Parent_C");
		return ptr;
	}

}


