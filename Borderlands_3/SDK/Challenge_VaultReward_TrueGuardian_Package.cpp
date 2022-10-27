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
	 * 		Name   -> Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedAllPlotMissions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UChallenge_VaultReward_TrueGuardian_C::CompletedAllPlotMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedAllPlotMissions");
		
		UChallenge_VaultReward_TrueGuardian_C_CompletedAllPlotMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.SetBinds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UChallengesComponent*                        ChallengeComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_VaultReward_TrueGuardian_C::SetBinds(class UChallengesComponent* ChallengeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.SetBinds");
		
		UChallenge_VaultReward_TrueGuardian_C_SetBinds_Params params {};
		params.ChallengeComponent = ChallengeComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedChallenge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        CompletedPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_VaultReward_TrueGuardian_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedChallenge");
		
		UChallenge_VaultReward_TrueGuardian_C_CompletedChallenge_Params params {};
		params.CompletedPlayer = CompletedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_VaultReward_TrueGuardian_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.OnInitChallengeInstance");
		
		UChallenge_VaultReward_TrueGuardian_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.ExecuteUbergraph_Challenge_VaultReward_TrueGuardian
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_VaultReward_TrueGuardian_C::ExecuteUbergraph_Challenge_VaultReward_TrueGuardian(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.ExecuteUbergraph_Challenge_VaultReward_TrueGuardian");
		
		UChallenge_VaultReward_TrueGuardian_C_ExecuteUbergraph_Challenge_VaultReward_TrueGuardian_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_VaultReward_TrueGuardian_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_VaultReward_TrueGuardian_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C");
		return ptr;
	}

}


