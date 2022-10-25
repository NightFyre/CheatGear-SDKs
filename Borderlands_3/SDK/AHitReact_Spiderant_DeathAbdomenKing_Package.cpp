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
	 * 		Name   -> Function AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAHitReact_Spiderant_DeathAbdomenKing_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C.OnBegin");
		
		UAHitReact_Spiderant_DeathAbdomenKing_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C.ExecuteUbergraph_AHitReact_Spiderant_DeathAbdomenKing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAHitReact_Spiderant_DeathAbdomenKing_C::ExecuteUbergraph_AHitReact_Spiderant_DeathAbdomenKing(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C.ExecuteUbergraph_AHitReact_Spiderant_DeathAbdomenKing");
		
		UAHitReact_Spiderant_DeathAbdomenKing_C_ExecuteUbergraph_AHitReact_Spiderant_DeathAbdomenKing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAHitReact_Spiderant_DeathAbdomenKing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAHitReact_Spiderant_DeathAbdomenKing_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Spiderant_DeathAbdomenKing.AHitReact_Spiderant_DeathAbdomenKing_C");
		return ptr;
	}

}


