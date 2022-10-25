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
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_animation_C::OnReturnToPirateSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection");
		
		Asot_frontend_01_a_animation_C_OnReturnToPirateSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPirateSelector*                             PirateSelectorComponent                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_animation_C::GetPirateSelector(class UPirateSelector** PirateSelectorComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector");
		
		Asot_frontend_01_a_animation_C_GetPirateSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PirateSelectorComponent != nullptr)
			*PirateSelectorComponent = params.PirateSelectorComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UFrontendCameraComponent*                    Frontend_Camera_Component                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_animation_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Frontend_Camera_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent");
		
		Asot_frontend_01_a_animation_C_GetFrontendCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Frontend_Camera_Component != nullptr)
			*Frontend_Camera_Component = params.Frontend_Camera_Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_animation_C::goToShipSelCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam");
		
		Asot_frontend_01_a_animation_C_goToShipSelCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void Asot_frontend_01_a_animation_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay");
		
		Asot_frontend_01_a_animation_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_animation_C::ShipSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect");
		
		Asot_frontend_01_a_animation_C_ShipSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_animation_C::GenerateShipSelectionPirate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate");
		
		Asot_frontend_01_a_animation_C_GenerateShipSelectionPirate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void Asot_frontend_01_a_animation_C::HideShipSelectionPirate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate");
		
		Asot_frontend_01_a_animation_C_HideShipSelectionPirate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Asot_frontend_01_a_animation_C::ExecuteUbergraph_sot_frontend_01_a_animation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation");
		
		Asot_frontend_01_a_animation_C_ExecuteUbergraph_sot_frontend_01_a_animation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Asot_frontend_01_a_animation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Asot_frontend_01_a_animation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_animation.sot_frontend_01_a_animation_C");
		return ptr;
	}

}


