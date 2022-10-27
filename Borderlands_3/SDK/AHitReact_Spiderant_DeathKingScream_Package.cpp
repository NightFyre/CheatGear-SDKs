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
	 * 		Name   -> Function AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAHitReact_Spiderant_DeathKingScream_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C.OnBegin");
		
		UAHitReact_Spiderant_DeathKingScream_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C.ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAHitReact_Spiderant_DeathKingScream_C::ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C.ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream");
		
		UAHitReact_Spiderant_DeathKingScream_C_ExecuteUbergraph_AHitReact_Spiderant_DeathKingScream_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAHitReact_Spiderant_DeathKingScream_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAHitReact_Spiderant_DeathKingScream_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Spiderant_DeathKingScream.AHitReact_Spiderant_DeathKingScream_C");
		return ptr;
	}

}


