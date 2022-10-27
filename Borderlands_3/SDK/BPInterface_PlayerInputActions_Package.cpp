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
	 * 		Name   -> Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.DoMelee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPInterface_PlayerInputActions_C::DoMelee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.DoMelee");
		
		UBPInterface_PlayerInputActions_C_DoMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.GroundSlam_End
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPInterface_PlayerInputActions_C::GroundSlam_End(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.GroundSlam_End");
		
		UBPInterface_PlayerInputActions_C_GroundSlam_End_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPInterface_PlayerInputActions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInterface_PlayerInputActions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C");
		return ptr;
	}

}


