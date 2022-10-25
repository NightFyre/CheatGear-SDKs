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
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.FirePetSummonStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UA_Beastmaster_Enrage_Base_C::FirePetSummonStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.FirePetSummonStarted");
		
		UA_Beastmaster_Enrage_Base_C_FirePetSummonStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetEnrageRiftActorClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Beastmaster_Enrage_Base_C::GetEnrageRiftActorClass(class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetEnrageRiftActorClass");
		
		UA_Beastmaster_Enrage_Base_C_GetEnrageRiftActorClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.InitRegisterProperties
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UA_Beastmaster_Enrage_Base_C::InitRegisterProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.InitRegisterProperties");
		
		UA_Beastmaster_Enrage_Base_C_InitRegisterProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetPetSpawnLoc
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     res                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Beastmaster_Enrage_Base_C::GetPetSpawnLoc(struct FVector* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetPetSpawnLoc");
		
		UA_Beastmaster_Enrage_Base_C_GetPetSpawnLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetOwnerPet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AOakCharacter*                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Beastmaster_Enrage_Base_C::GetOwnerPet(class AOakCharacter** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetOwnerPet");
		
		UA_Beastmaster_Enrage_Base_C_GetOwnerPet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.DoPreTeleportEffects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UA_Beastmaster_Enrage_Base_C::DoPreTeleportEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.DoPreTeleportEffects");
		
		UA_Beastmaster_Enrage_Base_C_DoPreTeleportEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Skill
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_Beastmaster_Enrage_Base_C::Notify_Skill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Skill");
		
		UA_Beastmaster_Enrage_Base_C_Notify_Skill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_SkillEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_Beastmaster_Enrage_Base_C::Notify_SkillEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_SkillEnd");
		
		UA_Beastmaster_Enrage_Base_C_Notify_SkillEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Beastmaster_Enrage_Base_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnBegin");
		
		UA_Beastmaster_Enrage_Base_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Beastmaster_Enrage_Base_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnEnd");
		
		UA_Beastmaster_Enrage_Base_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Rumble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_Beastmaster_Enrage_Base_C::Notify_Rumble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Rumble");
		
		UA_Beastmaster_Enrage_Base_C_Notify_Rumble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_Pitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_Beastmaster_Enrage_Base_C::Notify_CS_Pitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_Pitch");
		
		UA_Beastmaster_Enrage_Base_C_Notify_CS_Pitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_FoV
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_Beastmaster_Enrage_Base_C::Notify_CS_FoV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_FoV");
		
		UA_Beastmaster_Enrage_Base_C_Notify_CS_FoV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.ExecuteUbergraph_A_Beastmaster_Enrage_Base
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_Beastmaster_Enrage_Base_C::ExecuteUbergraph_A_Beastmaster_Enrage_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.ExecuteUbergraph_A_Beastmaster_Enrage_Base");
		
		UA_Beastmaster_Enrage_Base_C_ExecuteUbergraph_A_Beastmaster_Enrage_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UA_Beastmaster_Enrage_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_Beastmaster_Enrage_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C");
		return ptr;
	}

}


