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
	 * 		Name   -> Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_Console_PlanetDiscovery_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.OnInitChallengeInstance");
		
		UBP_Challenge_Console_PlanetDiscovery_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.AreaDiscovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DisplayText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UWwiseEvent*                                 DiscoverySound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_Console_PlanetDiscovery_C::AreaDiscovered(const class FText& DisplayText, class UWwiseEvent* DiscoverySound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.AreaDiscovered");
		
		UBP_Challenge_Console_PlanetDiscovery_C_AreaDiscovered_Params params {};
		params.DisplayText = DisplayText;
		params.DiscoverySound = DiscoverySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.ExecuteUbergraph_BP_Challenge_Console_PlanetDiscovery
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_Console_PlanetDiscovery_C::ExecuteUbergraph_BP_Challenge_Console_PlanetDiscovery(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C.ExecuteUbergraph_BP_Challenge_Console_PlanetDiscovery");
		
		UBP_Challenge_Console_PlanetDiscovery_C_ExecuteUbergraph_BP_Challenge_Console_PlanetDiscovery_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Challenge_Console_PlanetDiscovery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Challenge_Console_PlanetDiscovery_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Console_PlanetDiscovery.BP_Challenge_Console_PlanetDiscovery_C");
		return ptr;
	}

}


