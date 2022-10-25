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
	 * 		Name   -> Function Item_Season01_HalloweenShard_Intro_Remainder.Item_Season01_HalloweenShard_Intro_Remainder_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AItem_Season01_HalloweenShard_Intro_Remainder_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Item_Season01_HalloweenShard_Intro_Remainder.Item_Season01_HalloweenShard_Intro_Remainder_C.UserConstructionScript");
		
		AItem_Season01_HalloweenShard_Intro_Remainder_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AItem_Season01_HalloweenShard_Intro_Remainder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AItem_Season01_HalloweenShard_Intro_Remainder_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Item_Season01_HalloweenShard_Intro_Remainder.Item_Season01_HalloweenShard_Intro_Remainder_C");
		return ptr;
	}

}


