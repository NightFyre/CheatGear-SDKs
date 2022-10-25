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
	 * 		Name   -> Function Space_Alpha.Space_Alpha_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ASpace_Alpha_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Space_Alpha.Space_Alpha_C.ReceiveBeginPlay");
		
		ASpace_Alpha_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Space_Alpha.Space_Alpha_C.ExecuteUbergraph_Space_Alpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpace_Alpha_C::ExecuteUbergraph_Space_Alpha(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Space_Alpha.Space_Alpha_C.ExecuteUbergraph_Space_Alpha");
		
		ASpace_Alpha_C_ExecuteUbergraph_Space_Alpha_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpace_Alpha_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpace_Alpha_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Space_Alpha.Space_Alpha_C");
		return ptr;
	}

}


