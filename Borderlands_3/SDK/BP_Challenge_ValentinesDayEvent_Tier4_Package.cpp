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
	 * 		Name   -> Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.PlayCompletionAudio
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayedAudio                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Challenge_ValentinesDayEvent_Tier4_C::PlayCompletionAudio(class AGbxPlayerController* InputPin, bool* PlayedAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.PlayCompletionAudio");
		
		UBP_Challenge_ValentinesDayEvent_Tier4_C_PlayCompletionAudio_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayedAudio != nullptr)
			*PlayedAudio = params.PlayedAudio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_ValentinesDayEvent_Tier4_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.OnInitChallengeInstance");
		
		UBP_Challenge_ValentinesDayEvent_Tier4_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.CompletedChallenge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        CompletedPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_ValentinesDayEvent_Tier4_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.CompletedChallenge");
		
		UBP_Challenge_ValentinesDayEvent_Tier4_C_CompletedChallenge_Params params {};
		params.CompletedPlayer = CompletedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Challenge_ValentinesDayEvent_Tier4_C::ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C.ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier4");
		
		UBP_Challenge_ValentinesDayEvent_Tier4_C_ExecuteUbergraph_BP_Challenge_ValentinesDayEvent_Tier4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Challenge_ValentinesDayEvent_Tier4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Challenge_ValentinesDayEvent_Tier4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_ValentinesDayEvent_Tier4.BP_Challenge_ValentinesDayEvent_Tier4_C");
		return ptr;
	}

}


