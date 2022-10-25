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
	 * 		Name   -> Function BP_PhotoModeController.BP_PhotoModeController_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PhotoModeController_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeController.BP_PhotoModeController_C.UserConstructionScript");
		
		ABP_PhotoModeController_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhotoModeController.BP_PhotoModeController_C.OnEnterPhotoMode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PhotoModeController_C::OnEnterPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeController.BP_PhotoModeController_C.OnEnterPhotoMode");
		
		ABP_PhotoModeController_C_OnEnterPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhotoModeController.BP_PhotoModeController_C.OnExitPhotoMode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PhotoModeController_C::OnExitPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeController.BP_PhotoModeController_C.OnExitPhotoMode");
		
		ABP_PhotoModeController_C_OnExitPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_PhotoModeController.BP_PhotoModeController_C.ExecuteUbergraph_BP_PhotoModeController
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhotoModeController_C::ExecuteUbergraph_BP_PhotoModeController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeController.BP_PhotoModeController_C.ExecuteUbergraph_BP_PhotoModeController");
		
		ABP_PhotoModeController_C_ExecuteUbergraph_BP_PhotoModeController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PhotoModeController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PhotoModeController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhotoModeController.BP_PhotoModeController_C");
		return ptr;
	}

}


