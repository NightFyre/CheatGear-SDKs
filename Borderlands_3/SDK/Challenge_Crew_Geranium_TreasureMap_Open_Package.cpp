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
	 * 		Name   -> Function Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C.OnChallengeActivated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UChallenge_Crew_Geranium_TreasureMap_Open_C::OnChallengeActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C.OnChallengeActivated");
		
		UChallenge_Crew_Geranium_TreasureMap_Open_C_OnChallengeActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C.ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChallenge_Crew_Geranium_TreasureMap_Open_C::ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C.ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open");
		
		UChallenge_Crew_Geranium_TreasureMap_Open_C_ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChallenge_Crew_Geranium_TreasureMap_Open_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChallenge_Crew_Geranium_TreasureMap_Open_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C");
		return ptr;
	}

}


