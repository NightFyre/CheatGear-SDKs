/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.SetStateOnInAirlockWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_HangarDoorStates                                 StateToUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::SetStateOnInAirlockWidget(E_HangarDoorStates StateToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.SetStateOnInAirlockWidget");
		
		AFrigateInside_Fast_C_SetStateOnInAirlockWidget_Params params {};
		params.StateToUse = StateToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.SetInteractPartNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrigateInside_Fast_C::SetInteractPartNames(bool isDocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.SetInteractPartNames");
		
		AFrigateInside_Fast_C_SetInteractPartNames_Params params {};
		params.isDocked = isDocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.SetEngineAnimationBasedOnHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::SetEngineAnimationBasedOnHealth(float HealthPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.SetEngineAnimationBasedOnHealth");
		
		AFrigateInside_Fast_C_SetEngineAnimationBasedOnHealth_Params params {};
		params.HealthPercent = HealthPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.SoundForBrokenPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             Audio_FireSound                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		float                                              PartHealth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::SoundForBrokenPart(class UAudioComponent* Audio_FireSound, float PartHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.SoundForBrokenPart");
		
		AFrigateInside_Fast_C_SoundForBrokenPart_Params params {};
		params.Audio_FireSound = Audio_FireSound;
		params.PartHealth = PartHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.SetStateOnUIWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_HangarDoorStates                                 StateToUse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::SetStateOnUIWidget(E_HangarDoorStates StateToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.SetStateOnUIWidget");
		
		AFrigateInside_Fast_C_SetStateOnUIWidget_Params params {};
		params.StateToUse = StateToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.HasLifeSupportBeenDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthCurrent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::HasLifeSupportBeenDamaged(float HealthCurrent, float HealthMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.HasLifeSupportBeenDamaged");
		
		AFrigateInside_Fast_C_HasLifeSupportBeenDamaged_Params params {};
		params.HealthCurrent = HealthCurrent;
		params.HealthMax = HealthMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.UserConstructionScript");
		
		AFrigateInside_Fast_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_0__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_0__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_1__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_1__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_2__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_2__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_3__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_3__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_3__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_3__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_4__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_4__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_4__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_4__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_4__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_4__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_4__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_4__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_5__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_5__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_5__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_5__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_5__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_5__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_5__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_5__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_6__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_6__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_6__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_6__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_6__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_6__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_6__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_6__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_7__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_7__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_7__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_7__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_7__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_7__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_7__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_7__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_8__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_8__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_8__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_8__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_8__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_8__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_8__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_8__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_9__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_9__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_9__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_9__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_9__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_9__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_9__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_9__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_10__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_10__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_10__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_10__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_10__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_10__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_10__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_10__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_11__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_11__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_11__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_11__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_11__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_11__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_11__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_11__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_12__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_12__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_12__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_12__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_12__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_12__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_12__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_12__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_13__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_13__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_13__FinishedFunc");
		
		AFrigateInside_Fast_C_Timeline_13__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_13__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Timeline_13__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_13__UpdateFunc");
		
		AFrigateInside_Fast_C_Timeline_13__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.ReceiveBeginPlay");
		
		AFrigateInside_Fast_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.ReceiveTick");
		
		AFrigateInside_Fast_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.ReadyToDock
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::ReadyToDock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.ReadyToDock");
		
		AFrigateInside_Fast_C_ReadyToDock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.NotReadyToDock
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::NotReadyToDock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.NotReadyToDock");
		
		AFrigateInside_Fast_C_NotReadyToDock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.OnEngineDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustFixed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrigateInside_Fast_C::OnEngineDestroyed(bool JustFixed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.OnEngineDestroyed");
		
		AFrigateInside_Fast_C_OnEngineDestroyed_Params params {};
		params.JustFixed = JustFixed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.OnLifeSupportDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustFixed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrigateInside_Fast_C::OnLifeSupportDestroyed(bool JustFixed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.OnLifeSupportDestroyed");
		
		AFrigateInside_Fast_C_OnLifeSupportDestroyed_Params params {};
		params.JustFixed = JustFixed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.PartHealthChange_LifeSupport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currMaxHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::PartHealthChange_LifeSupport(float Health, float currMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.PartHealthChange_LifeSupport");
		
		AFrigateInside_Fast_C_PartHealthChange_LifeSupport_Params params {};
		params.Health = Health;
		params.currMaxHealth = currMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.DoorOpenEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               BopenDoor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrigateInside_Fast_C::DoorOpenEvent(bool BopenDoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.DoorOpenEvent");
		
		AFrigateInside_Fast_C_DoorOpenEvent_Params params {};
		params.BopenDoor = BopenDoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.OnPlayCompAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::OnPlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.OnPlayCompAnimNotify");
		
		AFrigateInside_Fast_C_OnPlayCompAnimNotify_Params params {};
		params.CompToPlayOn = CompToPlayOn;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod01
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::UsingDropPod01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod01");
		
		AFrigateInside_Fast_C_UsingDropPod01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod02
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::UsingDropPod02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod02");
		
		AFrigateInside_Fast_C_UsingDropPod02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod03
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::UsingDropPod03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod03");
		
		AFrigateInside_Fast_C_UsingDropPod03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod04
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::UsingDropPod04()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod04");
		
		AFrigateInside_Fast_C_UsingDropPod04_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Using_GunnerSeat01
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Using_GunnerSeat01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Using_GunnerSeat01");
		
		AFrigateInside_Fast_C_Using_GunnerSeat01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Turret01_LightFadeIn
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Turret01_LightFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Turret01_LightFadeIn");
		
		AFrigateInside_Fast_C_Turret01_LightFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Turret01_LightFadeOut
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Turret01_LightFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Turret01_LightFadeOut");
		
		AFrigateInside_Fast_C_Turret01_LightFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Using_PilotSeat01
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Using_PilotSeat01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Using_PilotSeat01");
		
		AFrigateInside_Fast_C_Using_PilotSeat01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Pilot01_LightFadeIn
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Pilot01_LightFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Pilot01_LightFadeIn");
		
		AFrigateInside_Fast_C_Pilot01_LightFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.Pilot01_LightFadeOut
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::Pilot01_LightFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.Pilot01_LightFadeOut");
		
		AFrigateInside_Fast_C_Pilot01_LightFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.EnableCollisionOnDoor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableCollision                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrigateInside_Fast_C::EnableCollisionOnDoor(bool EnableCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.EnableCollisionOnDoor");
		
		AFrigateInside_Fast_C_EnableCollisionOnDoor_Params params {};
		params.EnableCollision = EnableCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.AirLockOpenCloseState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUseState                                          OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUseState                                          NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::AirLockOpenCloseState(EUseState OldState, EUseState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.AirLockOpenCloseState");
		
		AFrigateInside_Fast_C_AirLockOpenCloseState_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.CriticalDamage_AmbientLighting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CriticalStateActivate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFrigateInside_Fast_C::CriticalDamage_AmbientLighting(bool CriticalStateActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.CriticalDamage_AmbientLighting");
		
		AFrigateInside_Fast_C_CriticalDamage_AmbientLighting_Params params {};
		params.CriticalStateActivate = CriticalStateActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.TakeDamage_MakeLightsOnShipFlicker
	 * 		Flags  -> ()
	 */
	void AFrigateInside_Fast_C::TakeDamage_MakeLightsOnShipFlicker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.TakeDamage_MakeLightsOnShipFlicker");
		
		AFrigateInside_Fast_C_TakeDamage_MakeLightsOnShipFlicker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FrigateInside_Fast.FrigateInside_Fast_C.ExecuteUbergraph_FrigateInside_Fast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrigateInside_Fast_C::ExecuteUbergraph_FrigateInside_Fast(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrigateInside_Fast.FrigateInside_Fast_C.ExecuteUbergraph_FrigateInside_Fast");
		
		AFrigateInside_Fast_C_ExecuteUbergraph_FrigateInside_Fast_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFrigateInside_Fast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrigateInside_Fast_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrigateInside_Fast.FrigateInside_Fast_C");
		return ptr;
	}

}


