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
	 * 		Name   -> Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ShowInvalidOwnerMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDLC2_Challenge_Crew_C::ShowInvalidOwnerMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ShowInvalidOwnerMessage");
		
		UDLC2_Challenge_Crew_C_ShowInvalidOwnerMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.PlayActivationAudio
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDLC2_Challenge_Crew_C::PlayActivationAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.PlayActivationAudio");
		
		UDLC2_Challenge_Crew_C_PlayActivationAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ShowTutorialPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameInstance*                               GameInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AOakPlayerController*                        TargetPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDLC2_Challenge_Crew_C::ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ShowTutorialPopup");
		
		UDLC2_Challenge_Crew_C_ShowTutorialPopup_Params params {};
		params.GameInstance = GameInstance;
		params.TargetPlayer = TargetPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.PlayCompletionAudio
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayedAudio                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDLC2_Challenge_Crew_C::PlayCompletionAudio(class AGbxPlayerController* InputPin, bool* PlayedAudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.PlayCompletionAudio");
		
		UDLC2_Challenge_Crew_C_PlayCompletionAudio_Params params {};
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
	 * 		Name   -> Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.OnInitChallengeInstance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UChallengesComponent*                        OwningChallenges                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGbxCharacter*                               AssociatedCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDLC2_Challenge_Crew_C::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.OnInitChallengeInstance");
		
		UDLC2_Challenge_Crew_C_OnInitChallengeInstance_Params params {};
		params.OwningChallenges = OwningChallenges;
		params.AssociatedCharacter = AssociatedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.OnChallengeActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UDLC2_Challenge_Crew_C::OnChallengeActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.OnChallengeActivated");
		
		UDLC2_Challenge_Crew_C_OnChallengeActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.CompletedChallenge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        CompletedPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDLC2_Challenge_Crew_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.CompletedChallenge");
		
		UDLC2_Challenge_Crew_C_CompletedChallenge_Params params {};
		params.CompletedPlayer = CompletedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ExecuteUbergraph_DLC2_Challenge_Crew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDLC2_Challenge_Crew_C::ExecuteUbergraph_DLC2_Challenge_Crew(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC2_Challenge_Crew.DLC2_Challenge_Crew_C.ExecuteUbergraph_DLC2_Challenge_Crew");
		
		UDLC2_Challenge_Crew_C_ExecuteUbergraph_DLC2_Challenge_Crew_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLC2_Challenge_Crew_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDLC2_Challenge_Crew_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DLC2_Challenge_Crew.DLC2_Challenge_Crew_C");
		return ptr;
	}

}


