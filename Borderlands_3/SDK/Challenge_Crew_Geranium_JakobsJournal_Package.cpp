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
	 * 		Name   -> Function Challenge_Crew_Geranium_JakobsJournal.Challenge_Crew_Geranium_JakobsJournal_C.CompletedChallenge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        CompletedPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Crew_Geranium_JakobsJournal_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Crew_Geranium_JakobsJournal.Challenge_Crew_Geranium_JakobsJournal_C.CompletedChallenge");
		
		UChallenge_Crew_Geranium_JakobsJournal_C_CompletedChallenge_Params params {};
		params.CompletedPlayer = CompletedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Crew_Geranium_JakobsJournal.Challenge_Crew_Geranium_JakobsJournal_C.ExecuteUbergraph_Challenge_Crew_Geranium_JakobsJournal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Crew_Geranium_JakobsJournal_C::ExecuteUbergraph_Challenge_Crew_Geranium_JakobsJournal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Crew_Geranium_JakobsJournal.Challenge_Crew_Geranium_JakobsJournal_C.ExecuteUbergraph_Challenge_Crew_Geranium_JakobsJournal");
		
		UChallenge_Crew_Geranium_JakobsJournal_C_ExecuteUbergraph_Challenge_Crew_Geranium_JakobsJournal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_Crew_Geranium_JakobsJournal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Crew_Geranium_JakobsJournal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Crew_Geranium_JakobsJournal.Challenge_Crew_Geranium_JakobsJournal_C");
		return ptr;
	}

}


