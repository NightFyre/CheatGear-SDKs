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
	 * 		Name   -> Function Challenge_Shield_KillWithBuff.Challenge_Shield_KillWithBuff_C.SetBinds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 */
	void UChallenge_Shield_KillWithBuff_C::SetBinds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Shield_KillWithBuff.Challenge_Shield_KillWithBuff_C.SetBinds");
		
		UChallenge_Shield_KillWithBuff_C_SetBinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Shield_KillWithBuff.Challenge_Shield_KillWithBuff_C.CheckKillCondition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         DeathDetails                                               (BlueprintVisible, Parm, OutParm, ReferenceParm)
	 */
	void UChallenge_Shield_KillWithBuff_C::CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Shield_KillWithBuff.Challenge_Shield_KillWithBuff_C.CheckKillCondition");
		
		UChallenge_Shield_KillWithBuff_C_CheckKillCondition_Params params {};
		params.DamageReceiver = DamageReceiver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeathDetails != nullptr)
			*DeathDetails = params.DeathDetails;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Shield_KillWithBuff.Challenge_Shield_KillWithBuff_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Shield_KillWithBuff_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Shield_KillWithBuff.Challenge_Shield_KillWithBuff_C.OnInitChallengeInstance");
		
		UChallenge_Shield_KillWithBuff_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_Shield_KillWithBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Shield_KillWithBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Shield_KillWithBuff.Challenge_Shield_KillWithBuff_C");
		return ptr;
	}

}


