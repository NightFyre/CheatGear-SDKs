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
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.InitTrapMods
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::InitTrapMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.InitTrapMods");
		
		AIO_Beastmaster_AntiGravityTrap_C_InitTrapMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanConfuseEnemy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::CanConfuseEnemy(class AActor* Actor, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanConfuseEnemy");
		
		AIO_Beastmaster_AntiGravityTrap_C_CanConfuseEnemy_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanKnockUpEnemy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::CanKnockUpEnemy(class AActor* Actor, bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.CanKnockUpEnemy");
		
		AIO_Beastmaster_AntiGravityTrap_C_CanKnockUpEnemy_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetupEmitters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::SetupEmitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetupEmitters");
		
		AIO_Beastmaster_AntiGravityTrap_C_SetupEmitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.UserConstructionScript");
		
		AIO_Beastmaster_AntiGravityTrap_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.KnockupTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::KnockupTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.KnockupTarget");
		
		AIO_Beastmaster_AntiGravityTrap_C_KnockupTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.TrapOnActionSkillEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility*                           ActionAbility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::TrapOnActionSkillEnd(class UOakActionAbility* ActionAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.TrapOnActionSkillEnd");
		
		AIO_Beastmaster_AntiGravityTrap_C_TrapOnActionSkillEnd_Params params {};
		params.ActionAbility = ActionAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveDestroyed");
		
		AIO_Beastmaster_AntiGravityTrap_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.FindAntiGravTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::FindAntiGravTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.FindAntiGravTargets");
		
		AIO_Beastmaster_AntiGravityTrap_C_FindAntiGravTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ConfuseTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::ConfuseTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ConfuseTargets");
		
		AIO_Beastmaster_AntiGravityTrap_C_ConfuseTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetTrapEndCondition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::SetTrapEndCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SetTrapEndCondition");
		
		AIO_Beastmaster_AntiGravityTrap_C_SetTrapEndCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.DestroyTrap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::DestroyTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.DestroyTrap");
		
		AIO_Beastmaster_AntiGravityTrap_C_DestroyTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SpawnMod5Loot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::SpawnMod5Loot(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.SpawnMod5Loot");
		
		AIO_Beastmaster_AntiGravityTrap_C_SpawnMod5Loot_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ReceiveBeginPlay");
		
		AIO_Beastmaster_AntiGravityTrap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FUseEvent                                   UseEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap(const struct FUseEvent& UseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap");
		
		AIO_Beastmaster_AntiGravityTrap_C_BndEvt__OakUsable_K2Node_ComponentBoundEvent_2_UsableUsedSignature__DelegateSignature_IO_Beastmaster_AntiGravityTrap_Params params {};
		params.UseEvent = UseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Beastmaster_AntiGravityTrap_C::ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap");
		
		AIO_Beastmaster_AntiGravityTrap_C_ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIO_Beastmaster_AntiGravityTrap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIO_Beastmaster_AntiGravityTrap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IO_Beastmaster_AntiGravityTrap.IO_Beastmaster_AntiGravityTrap_C");
		return ptr;
	}

}


