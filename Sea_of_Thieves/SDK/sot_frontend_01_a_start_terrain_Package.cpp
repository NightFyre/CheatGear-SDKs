/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.LeaveMapTableAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_start_terrain_C::LeaveMapTableAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.LeaveMapTableAnimation");
		
		Asot_frontend_01_a_start_terrain_C_LeaveMapTableAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.GetFrontendCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFrontendCameraComponent*                    CameraComponent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_start_terrain_C::GetFrontendCamera(class UFrontendCameraComponent** CameraComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.GetFrontendCamera");
		
		Asot_frontend_01_a_start_terrain_C_GetFrontendCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraComponent != nullptr)
			*CameraComponent = params.CameraComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_MatineeSequenceFinished
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Asot_frontend_01_a_start_terrain_C::K2Node_MatineeController_10_MatineeSequenceFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_MatineeSequenceFinished");
		
		Asot_frontend_01_a_start_terrain_C_K2Node_MatineeController_10_MatineeSequenceFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_Finished
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Asot_frontend_01_a_start_terrain_C::K2Node_MatineeController_10_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_Finished");
		
		Asot_frontend_01_a_start_terrain_C_K2Node_MatineeController_10_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.PlayIntroMatinee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_start_terrain_C::PlayIntroMatinee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.PlayIntroMatinee");
		
		Asot_frontend_01_a_start_terrain_C_PlayIntroMatinee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.EnteredEngageState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_start_terrain_C::EnteredEngageState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.EnteredEngageState");
		
		Asot_frontend_01_a_start_terrain_C_EnteredEngageState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.SetMatineePlaybackRate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PlaybackRate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_start_terrain_C::SetMatineePlaybackRate(float PlaybackRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.SetMatineePlaybackRate");
		
		Asot_frontend_01_a_start_terrain_C_SetMatineePlaybackRate_Params params {};
		params.PlaybackRate = PlaybackRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void Asot_frontend_01_a_start_terrain_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ReceiveBeginPlay");
		
		Asot_frontend_01_a_start_terrain_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExitIntroMatinee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_start_terrain_C::ExitIntroMatinee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExitIntroMatinee");
		
		Asot_frontend_01_a_start_terrain_C_ExitIntroMatinee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExecuteUbergraph_sot_frontend_01_a_start_terrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_start_terrain_C::ExecuteUbergraph_sot_frontend_01_a_start_terrain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExecuteUbergraph_sot_frontend_01_a_start_terrain");
		
		Asot_frontend_01_a_start_terrain_C_ExecuteUbergraph_sot_frontend_01_a_start_terrain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Asot_frontend_01_a_start_terrain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_a_start_terrain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C");
		return ptr;
	}

}


