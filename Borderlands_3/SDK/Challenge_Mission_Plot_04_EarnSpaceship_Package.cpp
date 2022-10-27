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
	 * 		Name   -> Function Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C.CompletedChallenge
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGbxPlayerController*                        CompletedPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Mission_Plot_04_EarnSpaceship_C::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C.CompletedChallenge");
		
		UChallenge_Mission_Plot_04_EarnSpaceship_C_CompletedChallenge_Params params {};
		params.CompletedPlayer = CompletedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C.ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Mission_Plot_04_EarnSpaceship_C::ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C.ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship");
		
		UChallenge_Mission_Plot_04_EarnSpaceship_C_ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_Mission_Plot_04_EarnSpaceship_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Mission_Plot_04_EarnSpaceship_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C");
		return ptr;
	}

}


