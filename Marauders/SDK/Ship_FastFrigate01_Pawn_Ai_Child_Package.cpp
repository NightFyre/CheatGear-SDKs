/**
 * Name: Marauders
 * Version: 642675-attempt2
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C.OnMoveFinished_ADC20B3C4BE69DED40CBB3B9DF357C69
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_FastFrigate01_Pawn_Ai_Child_C::OnMoveFinished_ADC20B3C4BE69DED40CBB3B9DF357C69(EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C.OnMoveFinished_ADC20B3C4BE69DED40CBB3B9DF357C69");
		
		AShip_FastFrigate01_Pawn_Ai_Child_C_OnMoveFinished_ADC20B3C4BE69DED40CBB3B9DF357C69_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C.OnRequestFailed_ADC20B3C4BE69DED40CBB3B9DF357C69
	 * 		Flags  -> ()
	 */
	void AShip_FastFrigate01_Pawn_Ai_Child_C::OnRequestFailed_ADC20B3C4BE69DED40CBB3B9DF357C69()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C.OnRequestFailed_ADC20B3C4BE69DED40CBB3B9DF357C69");
		
		AShip_FastFrigate01_Pawn_Ai_Child_C_OnRequestFailed_ADC20B3C4BE69DED40CBB3B9DF357C69_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AShip_FastFrigate01_Pawn_Ai_Child_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C.ReceiveBeginPlay");
		
		AShip_FastFrigate01_Pawn_Ai_Child_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C.ExecuteUbergraph_Ship_FastFrigate01_Pawn_Ai_Child
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AShip_FastFrigate01_Pawn_Ai_Child_C::ExecuteUbergraph_Ship_FastFrigate01_Pawn_Ai_Child(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C.ExecuteUbergraph_Ship_FastFrigate01_Pawn_Ai_Child");
		
		AShip_FastFrigate01_Pawn_Ai_Child_C_ExecuteUbergraph_Ship_FastFrigate01_Pawn_Ai_Child_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShip_FastFrigate01_Pawn_Ai_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShip_FastFrigate01_Pawn_Ai_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ship_FastFrigate01_Pawn_Ai_Child.Ship_FastFrigate01_Pawn_Ai_Child_C");
		return ptr;
	}

}


