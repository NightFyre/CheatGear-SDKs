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
	 * 		Name   -> Function Challenge_Mission_Plot_06_OvercomeHQBlockade.Challenge_Mission_Plot_06_OvercomeHQBlockade_C.CompletedChallenge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        CompletedPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Mission_Plot_06_OvercomeHQBlockade_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Plot_06_OvercomeHQBlockade.Challenge_Mission_Plot_06_OvercomeHQBlockade_C.CompletedChallenge");
		
		UChallenge_Mission_Plot_06_OvercomeHQBlockade_C_CompletedChallenge_Params params {};
		params.CompletedPlayer = CompletedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Mission_Plot_06_OvercomeHQBlockade.Challenge_Mission_Plot_06_OvercomeHQBlockade_C.ExecuteUbergraph_Challenge_Mission_Plot_06_OvercomeHQBlockade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Mission_Plot_06_OvercomeHQBlockade_C::ExecuteUbergraph_Challenge_Mission_Plot_06_OvercomeHQBlockade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Plot_06_OvercomeHQBlockade.Challenge_Mission_Plot_06_OvercomeHQBlockade_C.ExecuteUbergraph_Challenge_Mission_Plot_06_OvercomeHQBlockade");
		
		UChallenge_Mission_Plot_06_OvercomeHQBlockade_C_ExecuteUbergraph_Challenge_Mission_Plot_06_OvercomeHQBlockade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_Mission_Plot_06_OvercomeHQBlockade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Mission_Plot_06_OvercomeHQBlockade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Mission_Plot_06_OvercomeHQBlockade.Challenge_Mission_Plot_06_OvercomeHQBlockade_C");
		return ptr;
	}

}


