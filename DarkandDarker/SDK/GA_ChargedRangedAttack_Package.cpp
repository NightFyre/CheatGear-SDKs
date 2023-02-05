/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.OnSuccess_1109563B47783EC02F381C99DD38D5C5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ProjectileActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_ChargedRangedAttack_C::OnSuccess_1109563B47783EC02F381C99DD38D5C5(class AActor* ProjectileActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.OnSuccess_1109563B47783EC02F381C99DD38D5C5");
		
		UGA_ChargedRangedAttack_C_OnSuccess_1109563B47783EC02F381C99DD38D5C5_Params params {};
		params.ProjectileActor = ProjectileActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.CreateMultiShotProjectiles
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                EventTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayEventData                          EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              FirePower                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     StartLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_ChargedRangedAttack_C::CreateMultiShotProjectiles(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, float FirePower, const struct FVector& StartLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.CreateMultiShotProjectiles");
		
		UGA_ChargedRangedAttack_C_CreateMultiShotProjectiles_Params params {};
		params.EventTag = EventTag;
		params.EventData = EventData;
		params.FirePower = FirePower;
		params.StartLocation = StartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.ExecuteUbergraph_GA_ChargedRangedAttack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_ChargedRangedAttack_C::ExecuteUbergraph_GA_ChargedRangedAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.ExecuteUbergraph_GA_ChargedRangedAttack");
		
		UGA_ChargedRangedAttack_C_ExecuteUbergraph_GA_ChargedRangedAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_ChargedRangedAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_ChargedRangedAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_ChargedRangedAttack.GA_ChargedRangedAttack_C");
		return ptr;
	}

}


