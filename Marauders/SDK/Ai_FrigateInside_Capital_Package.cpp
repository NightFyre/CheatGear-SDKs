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
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.HasHelmGunBeenDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthCurrent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::HasHelmGunBeenDamaged(float HealthCurrent, float HealthMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.HasHelmGunBeenDamaged");
		
		AAi_FrigateInside_Capital_C_HasHelmGunBeenDamaged_Params params {};
		params.HealthCurrent = HealthCurrent;
		params.HealthMax = HealthMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.HasLifeSupportBeenDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthCurrent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::HasLifeSupportBeenDamaged(float HealthCurrent, float HealthMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.HasLifeSupportBeenDamaged");
		
		AAi_FrigateInside_Capital_C_HasLifeSupportBeenDamaged_Params params {};
		params.HealthCurrent = HealthCurrent;
		params.HealthMax = HealthMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.HasTurretBecomeDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthCurrent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::HasTurretBecomeDamaged(float HealthCurrent, float HealthMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.HasTurretBecomeDamaged");
		
		AAi_FrigateInside_Capital_C_HasTurretBecomeDamaged_Params params {};
		params.HealthCurrent = HealthCurrent;
		params.HealthMax = HealthMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.HasEngineBecomeDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthCurrent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::HasEngineBecomeDamaged(float HealthCurrent, float HealthMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.HasEngineBecomeDamaged");
		
		AAi_FrigateInside_Capital_C_HasEngineBecomeDamaged_Params params {};
		params.HealthCurrent = HealthCurrent;
		params.HealthMax = HealthMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_0__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_0__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_1__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_1__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_2__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_2__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_3__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_3__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_3__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_3__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_4__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_4__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_4__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_4__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_4__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_4__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_4__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_4__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_5__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_5__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_5__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_5__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_5__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_5__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_5__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_5__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_6__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_6__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_6__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_6__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_6__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_6__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_6__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_6__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_7__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_7__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_7__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_7__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_7__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_7__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_7__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_7__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_8__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_8__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_8__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_8__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_8__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_8__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_8__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_8__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_9__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_9__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_9__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_9__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_9__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_9__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_9__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_9__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_10__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_10__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_10__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_10__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_10__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_10__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_10__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_10__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_11__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_11__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_11__FinishedFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_11__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_11__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::Timeline_11__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.Timeline_11__UpdateFunc");
		
		AAi_FrigateInside_Capital_C_Timeline_11__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.ReceiveTick");
		
		AAi_FrigateInside_Capital_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.ReceiveBeginPlay");
		
		AAi_FrigateInside_Capital_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.PartHealthChange_Engine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currMaxHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::PartHealthChange_Engine(float Health, float currMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.PartHealthChange_Engine");
		
		AAi_FrigateInside_Capital_C_PartHealthChange_Engine_Params params {};
		params.Health = Health;
		params.currMaxHealth = currMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.OnEngineDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustFixed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAi_FrigateInside_Capital_C::OnEngineDestroyed(bool JustFixed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.OnEngineDestroyed");
		
		AAi_FrigateInside_Capital_C_OnEngineDestroyed_Params params {};
		params.JustFixed = JustFixed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.PartHealthChange_Turret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currMaxHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::PartHealthChange_Turret(float Health, float currMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.PartHealthChange_Turret");
		
		AAi_FrigateInside_Capital_C_PartHealthChange_Turret_Params params {};
		params.Health = Health;
		params.currMaxHealth = currMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.OnLifeSupportDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               JustFixed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAi_FrigateInside_Capital_C::OnLifeSupportDestroyed(bool JustFixed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.OnLifeSupportDestroyed");
		
		AAi_FrigateInside_Capital_C_OnLifeSupportDestroyed_Params params {};
		params.JustFixed = JustFixed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.PartHealthChange_LifeSupport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currMaxHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::PartHealthChange_LifeSupport(float Health, float currMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.PartHealthChange_LifeSupport");
		
		AAi_FrigateInside_Capital_C_PartHealthChange_LifeSupport_Params params {};
		params.Health = Health;
		params.currMaxHealth = currMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.PartHealthChange_HelmGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              currMaxHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::PartHealthChange_HelmGun(float Health, float currMaxHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.PartHealthChange_HelmGun");
		
		AAi_FrigateInside_Capital_C_PartHealthChange_HelmGun_Params params {};
		params.Health = Health;
		params.currMaxHealth = currMaxHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.NotReadyToDock
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::NotReadyToDock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.NotReadyToDock");
		
		AAi_FrigateInside_Capital_C_NotReadyToDock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.ReadyToDock
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::ReadyToDock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.ReadyToDock");
		
		AAi_FrigateInside_Capital_C_ReadyToDock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.OnPlayCompAnimNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      CompToPlayOn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::OnPlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.OnPlayCompAnimNotify");
		
		AAi_FrigateInside_Capital_C_OnPlayCompAnimNotify_Params params {};
		params.CompToPlayOn = CompToPlayOn;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingDropPod01
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::UsingDropPod01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingDropPod01");
		
		AAi_FrigateInside_Capital_C_UsingDropPod01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingDropPod02
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::UsingDropPod02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingDropPod02");
		
		AAi_FrigateInside_Capital_C_UsingDropPod02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingDropPod03
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::UsingDropPod03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingDropPod03");
		
		AAi_FrigateInside_Capital_C_UsingDropPod03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingDropPod04
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::UsingDropPod04()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingDropPod04");
		
		AAi_FrigateInside_Capital_C_UsingDropPod04_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.RefreshIdCodeForShip
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::RefreshIdCodeForShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.RefreshIdCodeForShip");
		
		AAi_FrigateInside_Capital_C_RefreshIdCodeForShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingPilotChair01
	 * 		Flags  -> ()
	 */
	void AAi_FrigateInside_Capital_C::UsingPilotChair01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.UsingPilotChair01");
		
		AAi_FrigateInside_Capital_C_UsingPilotChair01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.ExecuteUbergraph_Ai_FrigateInside_Capital
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAi_FrigateInside_Capital_C::ExecuteUbergraph_Ai_FrigateInside_Capital(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C.ExecuteUbergraph_Ai_FrigateInside_Capital");
		
		AAi_FrigateInside_Capital_C_ExecuteUbergraph_Ai_FrigateInside_Capital_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAi_FrigateInside_Capital_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAi_FrigateInside_Capital_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ai_FrigateInside_Capital.Ai_FrigateInside_Capital_C");
		return ptr;
	}

}


