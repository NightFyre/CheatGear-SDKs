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
	 * 		Name   -> Function BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPWepFireBeam_Mutant_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C.ReceiveBeginPlay");
		
		UBPWepFireBeam_Mutant_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C.ExecuteUbergraph_BPWepFireBeam_Mutant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWepFireBeam_Mutant_C::ExecuteUbergraph_BPWepFireBeam_Mutant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C.ExecuteUbergraph_BPWepFireBeam_Mutant");
		
		UBPWepFireBeam_Mutant_C_ExecuteUbergraph_BPWepFireBeam_Mutant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWepFireBeam_Mutant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWepFireBeam_Mutant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWepFireBeam_Mutant.BPWepFireBeam_Mutant_C");
		return ptr;
	}

}


