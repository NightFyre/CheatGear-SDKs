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
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.CheckLineOfSightForShooting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChanceToStillShootIfNoLOS                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAbleToShoot                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U00_ActionParent_C::CheckLineOfSightForShooting(float ChanceToStillShootIfNoLOS, bool* IsAbleToShoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.CheckLineOfSightForShooting");
		
		U00_ActionParent_C_CheckLineOfSightForShooting_Params params {};
		params.ChanceToStillShootIfNoLOS = ChanceToStillShootIfNoLOS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAbleToShoot != nullptr)
			*IsAbleToShoot = params.IsAbleToShoot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.GetTotalMissRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Modifier_Amount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MissRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U00_ActionParent_C::GetTotalMissRate(float Modifier_Amount, float* MissRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.GetTotalMissRate");
		
		U00_ActionParent_C_GetTotalMissRate_Params params {};
		params.Modifier_Amount = Modifier_Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissRate != nullptr)
			*MissRate = params.MissRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.StopRunning_IfAlreadyRunning
	 * 		Flags  -> ()
	 */
	void U00_ActionParent_C::StopRunning_IfAlreadyRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.StopRunning_IfAlreadyRunning");
		
		U00_ActionParent_C_StopRunning_IfAlreadyRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.StartRunning_IfNotAlreadyRunning
	 * 		Flags  -> ()
	 */
	void U00_ActionParent_C::StartRunning_IfNotAlreadyRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.StartRunning_IfNotAlreadyRunning");
		
		U00_ActionParent_C_StartRunning_IfNotAlreadyRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.StopCrouching_IfAlreadyCrouching
	 * 		Flags  -> ()
	 */
	void U00_ActionParent_C::StopCrouching_IfAlreadyCrouching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.StopCrouching_IfAlreadyCrouching");
		
		U00_ActionParent_C_StopCrouching_IfAlreadyCrouching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.StartCrouching_IfNotAlreadyCrouching
	 * 		Flags  -> ()
	 */
	void U00_ActionParent_C::StartCrouching_IfNotAlreadyCrouching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.StartCrouching_IfNotAlreadyCrouching");
		
		U00_ActionParent_C_StartCrouching_IfNotAlreadyCrouching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.isGroupAiWithValidCaptainMoveToLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CaptainWithValidLocation                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     MoveToLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U00_ActionParent_C::isGroupAiWithValidCaptainMoveToLoc(bool* CaptainWithValidLocation, struct FVector* MoveToLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.isGroupAiWithValidCaptainMoveToLoc");
		
		U00_ActionParent_C_isGroupAiWithValidCaptainMoveToLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CaptainWithValidLocation != nullptr)
			*CaptainWithValidLocation = params.CaptainWithValidLocation;
		if (MoveToLocation != nullptr)
			*MoveToLocation = params.MoveToLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.Group_MoveWithCaptain
	 * 		Flags  -> ()
	 */
	void U00_ActionParent_C::Group_MoveWithCaptain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.Group_MoveWithCaptain");
		
		U00_ActionParent_C_Group_MoveWithCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.SetGroupTargetSameAsCaptain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U00_ActionParent_C::SetGroupTargetSameAsCaptain(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.SetGroupTargetSameAsCaptain");
		
		U00_ActionParent_C_SetGroupTargetSameAsCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.isAGroupAiWithAliveCaptain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isGroupAiWithAliveCaptain                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U00_ActionParent_C::isAGroupAiWithAliveCaptain(bool* isGroupAiWithAliveCaptain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.isAGroupAiWithAliveCaptain");
		
		U00_ActionParent_C_isAGroupAiWithAliveCaptain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isGroupAiWithAliveCaptain != nullptr)
			*isGroupAiWithAliveCaptain = params.isGroupAiWithAliveCaptain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.SetActionRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActionRunning                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U00_ActionParent_C::SetActionRunning(bool ActionRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.SetActionRunning");
		
		U00_ActionParent_C_SetActionRunning_Params params {};
		params.ActionRunning = ActionRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function 00_ActionParent.00_ActionParent_C.IsActionRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActionRunning                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void U00_ActionParent_C::IsActionRunning(bool* IsActionRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 00_ActionParent.00_ActionParent_C.IsActionRunning");
		
		U00_ActionParent_C_IsActionRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActionRunning != nullptr)
			*IsActionRunning = params.IsActionRunning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction U00_ActionParent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U00_ActionParent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass 00_ActionParent.00_ActionParent_C");
		return ptr;
	}

}


