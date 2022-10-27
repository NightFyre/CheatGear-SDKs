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
	 * 		Name   -> Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UADirection_Spiderant_Flinch_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.OnBegin");
		
		UADirection_Spiderant_Flinch_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.ExecuteUbergraph_ADirection_Spiderant_Flinch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UADirection_Spiderant_Flinch_C::ExecuteUbergraph_ADirection_Spiderant_Flinch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C.ExecuteUbergraph_ADirection_Spiderant_Flinch");
		
		UADirection_Spiderant_Flinch_C_ExecuteUbergraph_ADirection_Spiderant_Flinch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UADirection_Spiderant_Flinch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UADirection_Spiderant_Flinch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ADirection_Spiderant_Flinch.ADirection_Spiderant_Flinch_C");
		return ptr;
	}

}


