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
	 * 		Name   -> Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.LeaveArenaTutorialAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_arena_start_anim_C::LeaveArenaTutorialAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.LeaveArenaTutorialAnimation");
		
		Asot_frontend_01_arena_start_anim_C_LeaveArenaTutorialAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.GetFrontendCameraComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFrontendCameraComponent*                    Camera_Component                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_arena_start_anim_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.GetFrontendCameraComponent");
		
		Asot_frontend_01_arena_start_anim_C_GetFrontendCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Camera_Component != nullptr)
			*Camera_Component = params.Camera_Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.K2Node_MatineeController_35_Finished
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Asot_frontend_01_arena_start_anim_C::K2Node_MatineeController_35_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.K2Node_MatineeController_35_Finished");
		
		Asot_frontend_01_arena_start_anim_C_K2Node_MatineeController_35_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void Asot_frontend_01_arena_start_anim_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ReceiveBeginPlay");
		
		Asot_frontend_01_arena_start_anim_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.StartArenaTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_arena_start_anim_C::StartArenaTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.StartArenaTutorial");
		
		Asot_frontend_01_arena_start_anim_C_StartArenaTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.EndArenaTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_arena_start_anim_C::EndArenaTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.EndArenaTutorial");
		
		Asot_frontend_01_arena_start_anim_C_EndArenaTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.SkipArenaTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_arena_start_anim_C::SkipArenaTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.SkipArenaTutorial");
		
		Asot_frontend_01_arena_start_anim_C_SkipArenaTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ExecuteUbergraph_sot_frontend_01_arena_start_anim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_arena_start_anim_C::ExecuteUbergraph_sot_frontend_01_arena_start_anim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ExecuteUbergraph_sot_frontend_01_arena_start_anim");
		
		Asot_frontend_01_arena_start_anim_C_ExecuteUbergraph_sot_frontend_01_arena_start_anim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Asot_frontend_01_arena_start_anim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_arena_start_anim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C");
		return ptr;
	}

}


