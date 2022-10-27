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
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.FinalizeCombatants
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABPDuelTotem_C::FinalizeCombatants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.FinalizeCombatants");
		
		ABPDuelTotem_C_FinalizeCombatants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.SetCombatant
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter_Player*                        Combatant                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxSkeletalMeshComponent*                   SceneSkMesh                                                (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPDuelTotem_C::SetCombatant(class AOakCharacter_Player* Combatant, class UGbxSkeletalMeshComponent** SceneSkMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.SetCombatant");
		
		ABPDuelTotem_C_SetCombatant_Params params {};
		params.Combatant = Combatant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SceneSkMesh != nullptr)
			*SceneSkMesh = params.SceneSkMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPDuelTotem_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.UserConstructionScript");
		
		ABPDuelTotem_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPDuelTotem_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.Timeline_0__FinishedFunc");
		
		ABPDuelTotem_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPDuelTotem_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.Timeline_0__UpdateFunc");
		
		ABPDuelTotem_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.OnDuelStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EPotentialDuelState                                NewDuelState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPDuelTotem_C::OnDuelStateChanged(EPotentialDuelState NewDuelState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.OnDuelStateChanged");
		
		ABPDuelTotem_C_OnDuelStateChanged_Params params {};
		params.NewDuelState = NewDuelState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.UpdateCombatants
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AOakCharacter_Player*>                Players                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABPDuelTotem_C::UpdateCombatants(TArray<class AOakCharacter_Player*> Players)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.UpdateCombatants");
		
		ABPDuelTotem_C_UpdateCombatants_Params params {};
		params.Players = Players;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.OnDestroyTotem
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EDuelTotemDestroyReason                            TheDestroyReason                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPDuelTotem_C::OnDestroyTotem(EDuelTotemDestroyReason TheDestroyReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.OnDestroyTotem");
		
		ABPDuelTotem_C_OnDestroyTotem_Params params {};
		params.TheDestroyReason = TheDestroyReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPDuelTotem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.ReceiveBeginPlay");
		
		ABPDuelTotem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.OnAcceptedPlayersChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPDuelTotem_C::OnAcceptedPlayersChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.OnAcceptedPlayersChanged");
		
		ABPDuelTotem_C_OnAcceptedPlayersChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPDuelTotem.BPDuelTotem_C.ExecuteUbergraph_BPDuelTotem
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPDuelTotem_C::ExecuteUbergraph_BPDuelTotem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPDuelTotem.BPDuelTotem_C.ExecuteUbergraph_BPDuelTotem");
		
		ABPDuelTotem_C_ExecuteUbergraph_BPDuelTotem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPDuelTotem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPDuelTotem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPDuelTotem.BPDuelTotem_C");
		return ptr;
	}

}


