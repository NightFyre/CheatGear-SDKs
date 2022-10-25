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
	 * 		Name   -> Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.CheckRocketUnderbarrel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakWeapon*                                  Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CorrectUnderbarrel                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChallenge_Manufacturer_Vladof_Rockets_C::CheckRocketUnderbarrel(class AOakWeapon* Weapon, bool* CorrectUnderbarrel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.CheckRocketUnderbarrel");
		
		UChallenge_Manufacturer_Vladof_Rockets_C_CheckRocketUnderbarrel_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CorrectUnderbarrel != nullptr)
			*CorrectUnderbarrel = params.CorrectUnderbarrel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.CheckKillCondition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         DeathDetails                                               (BlueprintVisible, Parm, OutParm, ReferenceParm)
	 */
	void UChallenge_Manufacturer_Vladof_Rockets_C::CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.CheckKillCondition");
		
		UChallenge_Manufacturer_Vladof_Rockets_C_CheckKillCondition_Params params {};
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
	 * 		Name   -> Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Manufacturer_Vladof_Rockets_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.OnInitChallengeInstance");
		
		UChallenge_Manufacturer_Vladof_Rockets_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_Manufacturer_Vladof_Rockets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Manufacturer_Vladof_Rockets_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C");
		return ptr;
	}

}


