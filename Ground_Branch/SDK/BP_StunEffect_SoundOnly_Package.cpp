/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_StunEffect_SoundOnly.BP_StunEffect_SoundOnly_C.StunLocalPlayer
	 * 		Flags  -> ()
	 */
	void ABP_StunEffect_SoundOnly_C::StunLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StunEffect_SoundOnly.BP_StunEffect_SoundOnly_C.StunLocalPlayer");
		
		ABP_StunEffect_SoundOnly_C_StunLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StunEffect_SoundOnly.BP_StunEffect_SoundOnly_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_StunEffect_SoundOnly_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StunEffect_SoundOnly.BP_StunEffect_SoundOnly_C.ReceiveBeginPlay");
		
		ABP_StunEffect_SoundOnly_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StunEffect_SoundOnly.BP_StunEffect_SoundOnly_C.ExecuteUbergraph_BP_StunEffect_SoundOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StunEffect_SoundOnly_C::ExecuteUbergraph_BP_StunEffect_SoundOnly(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StunEffect_SoundOnly.BP_StunEffect_SoundOnly_C.ExecuteUbergraph_BP_StunEffect_SoundOnly");
		
		ABP_StunEffect_SoundOnly_C_ExecuteUbergraph_BP_StunEffect_SoundOnly_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_StunEffect_SoundOnly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StunEffect_SoundOnly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StunEffect_SoundOnly.BP_StunEffect_SoundOnly_C");
		return ptr;
	}

}


