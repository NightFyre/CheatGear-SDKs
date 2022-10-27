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
	 * 		Name   -> Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.CheckKillCondition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UChallenge_Weapon_FabricatorKill_C::CheckKillCondition(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.CheckKillCondition");
		
		UChallenge_Weapon_FabricatorKill_C_CheckKillCondition_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Weapon_FabricatorKill_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.OnInitChallengeInstance");
		
		UChallenge_Weapon_FabricatorKill_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.ExecuteUbergraph_Challenge_Weapon_FabricatorKill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Weapon_FabricatorKill_C::ExecuteUbergraph_Challenge_Weapon_FabricatorKill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.ExecuteUbergraph_Challenge_Weapon_FabricatorKill");
		
		UChallenge_Weapon_FabricatorKill_C_ExecuteUbergraph_Challenge_Weapon_FabricatorKill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_Weapon_FabricatorKill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Weapon_FabricatorKill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C");
		return ptr;
	}

}


