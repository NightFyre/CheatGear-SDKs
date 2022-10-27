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
	 * 		Name   -> Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.OnInitChallengeInstance");
		
		UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.CheckKillConditions
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C::CheckKillConditions(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.CheckKillConditions");
		
		UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_CheckKillConditions_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C::ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted");
		
		UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C");
		return ptr;
	}

}


