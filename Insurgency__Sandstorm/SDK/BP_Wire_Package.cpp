/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04DB3DC0
	 * 		Name   -> Function BP_Wire.BP_Wire_C.UserConstructionScript
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void ABP_Wire_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire.BP_Wire_C.UserConstructionScript");
		
		ABP_Wire_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD00A0
	 * 		Name   -> Function BP_Wire.BP_Wire_C.ExecuteUbergraph_BP_Wire
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Wire_C::ExecuteUbergraph_BP_Wire(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Wire.BP_Wire_C.ExecuteUbergraph_BP_Wire");
		
		ABP_Wire_C_ExecuteUbergraph_BP_Wire_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Wire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Wire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Wire.BP_Wire_C");
		return ptr;
	}

}


