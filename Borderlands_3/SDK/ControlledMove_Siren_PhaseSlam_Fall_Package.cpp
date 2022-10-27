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
	 * 		Name   -> Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.GroundSlam_End
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_Siren_PhaseSlam_Fall_C::GroundSlam_End(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.GroundSlam_End");
		
		UControlledMove_Siren_PhaseSlam_Fall_C_GroundSlam_End_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.DoMelee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UControlledMove_Siren_PhaseSlam_Fall_C::DoMelee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.DoMelee");
		
		UControlledMove_Siren_PhaseSlam_Fall_C_DoMelee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UControlledMove_Siren_PhaseSlam_Fall_C::ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C.ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall");
		
		UControlledMove_Siren_PhaseSlam_Fall_C_ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlledMove_Siren_PhaseSlam_Fall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlledMove_Siren_PhaseSlam_Fall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C");
		return ptr;
	}

}


