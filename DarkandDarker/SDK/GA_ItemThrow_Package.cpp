/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_ItemThrow.GA_ItemThrow_C.ProjectileFired
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_ItemThrow_C::ProjectileFired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_ItemThrow.GA_ItemThrow_C.ProjectileFired");
		
		UGA_ItemThrow_C_ProjectileFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function GA_ItemThrow.GA_ItemThrow_C.ExecuteUbergraph_GA_ItemThrow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_ItemThrow_C::ExecuteUbergraph_GA_ItemThrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_ItemThrow.GA_ItemThrow_C.ExecuteUbergraph_GA_ItemThrow");
		
		UGA_ItemThrow_C_ExecuteUbergraph_GA_ItemThrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_ItemThrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_ItemThrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_ItemThrow.GA_ItemThrow_C");
		return ptr;
	}

}


