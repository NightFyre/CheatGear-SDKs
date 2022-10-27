/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_MenuPlayerController.BP_MenuPlayerController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MenuPlayerController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController.BP_MenuPlayerController_C.ReceiveTick");
		
		ABP_MenuPlayerController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MouseReleased
	 * 		Flags  -> ()
	 */
	void ABP_MenuPlayerController_C::InputComponent_MouseReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MouseReleased");
		
		ABP_MenuPlayerController_C_InputComponent_MouseReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MousePressed
	 * 		Flags  -> ()
	 */
	void ABP_MenuPlayerController_C::InputComponent_MousePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MousePressed");
		
		ABP_MenuPlayerController_C_InputComponent_MousePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MenuPlayerController.BP_MenuPlayerController_C.ExecuteUbergraph_BP_MenuPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MenuPlayerController_C::ExecuteUbergraph_BP_MenuPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MenuPlayerController.BP_MenuPlayerController_C.ExecuteUbergraph_BP_MenuPlayerController");
		
		ABP_MenuPlayerController_C_ExecuteUbergraph_BP_MenuPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MenuPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MenuPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MenuPlayerController.BP_MenuPlayerController_C");
		return ptr;
	}

}


