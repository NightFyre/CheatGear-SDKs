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
	 * 		RVA    -> 0x03F81D80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindTriggerChange
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ChangeInstantly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::WindTriggerChange(int32_t ChangeInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindTriggerChange");
		
		UAthenaCheatManager_WindTriggerChange_Params params {};
		params.ChangeInstantly = ChangeInstantly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81CC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindSetVector
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::WindSetVector(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetVector");
		
		UAthenaCheatManager_WindSetVector_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81C40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindSetMagnitude
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Magnitude                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::WindSetMagnitude(float Magnitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetMagnitude");
		
		UAthenaCheatManager_WindSetMagnitude_Params params {};
		params.Magnitude = Magnitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81B80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindSetDirection
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::WindSetDirection(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetDirection");
		
		UAthenaCheatManager_WindSetDirection_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81B60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindReloadParams
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::WindReloadParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindReloadParams");
		
		UAthenaCheatManager_WindReloadParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81B40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindPrintDirection
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::WindPrintDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindPrintDirection");
		
		UAthenaCheatManager_WindPrintDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81B20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindEnableDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::WindEnableDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindEnableDebug");
		
		UAthenaCheatManager_WindEnableDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81B00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindDisableDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::WindDisableDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindDisableDebug");
		
		UAthenaCheatManager_WindDisableDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81AE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::WindAlignWithCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera");
		
		UAthenaCheatManager_WindAlignWithCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81AC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.Walk
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAthenaCheatManager::Walk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Walk");
		
		UAthenaCheatManager_Walk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F819F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.VomitWithType
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        VomitType                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::VomitWithType(const class FName& VomitType, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.VomitWithType");
		
		UAthenaCheatManager_VomitWithType_Params params {};
		params.VomitType = VomitType;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F819D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.Vomit
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::Vomit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Vomit");
		
		UAthenaCheatManager_Vomit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F819B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ValidateNPCCullingDistance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ValidateNPCCullingDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ValidateNPCCullingDistance");
		
		UAthenaCheatManager_ValidateNPCCullingDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81910
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UpdateInvasionAggressivePassiveTeleportOffsetDistance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InDistance                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::UpdateInvasionAggressivePassiveTeleportOffsetDistance(const class FString& InDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UpdateInvasionAggressivePassiveTeleportOffsetDistance");
		
		UAthenaCheatManager_UpdateInvasionAggressivePassiveTeleportOffsetDistance_Params params {};
		params.InDistance = InDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F818F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::UnlockTradeRouteSelectionForMyCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew");
		
		UAthenaCheatManager_UnlockTradeRouteSelectionForMyCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81850
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FGuid                                       CrewId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::UnlockTradeRouteSelectionForCrew(const struct FGuid& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew");
		
		UAthenaCheatManager_UnlockTradeRouteSelectionForCrew_Params params {};
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F817B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockEntitlementCategory
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EntitlementMapToUnlock                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::UnlockEntitlementCategory(const class FString& EntitlementMapToUnlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockEntitlementCategory");
		
		UAthenaCheatManager_UnlockEntitlementCategory_Params params {};
		params.EntitlementMapToUnlock = EntitlementMapToUnlock;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81710
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockEntitlement
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EntitlementId                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::UnlockEntitlement(const class FString& EntitlementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockEntitlement");
		
		UAthenaCheatManager_UnlockEntitlement_Params params {};
		params.EntitlementId = EntitlementId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F816F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockAndEquipSkeletonCurse
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::UnlockAndEquipSkeletonCurse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAndEquipSkeletonCurse");
		
		UAthenaCheatManager_UnlockAndEquipSkeletonCurse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81650
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockAndEquipItemFromEntitlement
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EntitlementId                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::UnlockAndEquipItemFromEntitlement(const class FString& EntitlementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAndEquipItemFromEntitlement");
		
		UAthenaCheatManager_UnlockAndEquipItemFromEntitlement_Params params {};
		params.EntitlementId = EntitlementId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81630
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGhostCurse
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::UnlockAndEquipGhostCurse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAndEquipGhostCurse");
		
		UAthenaCheatManager_UnlockAndEquipGhostCurse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81610
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockAllSkeletonClothes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::UnlockAllSkeletonClothes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAllSkeletonClothes");
		
		UAthenaCheatManager_UnlockAllSkeletonClothes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81590
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            TrueFalse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::UnlockAllEntitlements(int32_t TrueFalse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements");
		
		UAthenaCheatManager_UnlockAllEntitlements_Params params {};
		params.TrueFalse = TrueFalse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81570
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::UnlockAllEmblemsAndAchievements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements");
		
		UAthenaCheatManager_UnlockAllEmblemsAndAchievements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81550
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.UnBreakLeg
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::UnBreakLeg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnBreakLeg");
		
		UAthenaCheatManager_UnBreakLeg_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F814B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TutorialAction
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActionTypeString                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TutorialAction(const class FString& ActionTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TutorialAction");
		
		UAthenaCheatManager_TutorialAction_Params params {};
		params.ActionTypeString = ActionTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81420
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        Identifier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TriggerRewardNotification(class FName* Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification");
		
		UAthenaCheatManager_TriggerRewardNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Identifier != nullptr)
			*Identifier = params.Identifier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F813A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TriggerLandmarkReaction(int32_t ActionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction");
		
		UAthenaCheatManager_TriggerLandmarkReaction_Params params {};
		params.ActionType = ActionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81380
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TriggerFogManagerAtNearestIsland()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland");
		
		UAthenaCheatManager_TriggerFogManagerAtNearestIsland_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F812E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerEmergentInvasion
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InCrewId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TriggerEmergentInvasion(const class FString& InCrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerEmergentInvasion");
		
		UAthenaCheatManager_TriggerEmergentInvasion_Params params {};
		params.InCrewId = InCrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81240
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EmblemFriendlyName                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TriggerEmblemUnlockedMessage(const class FString& EmblemFriendlyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage");
		
		UAthenaCheatManager_TriggerEmblemUnlockedMessage_Params params {};
		params.EmblemFriendlyName = EmblemFriendlyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F811A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressivePassiveInvasion
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InCrewId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TriggerDebugAggressivePassiveInvasion(const class FString& InCrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressivePassiveInvasion");
		
		UAthenaCheatManager_TriggerDebugAggressivePassiveInvasion_Params params {};
		params.InCrewId = InCrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81100
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressiveAggressiveInvasion
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InCrewId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TriggerDebugAggressiveAggressiveInvasion(const class FString& InCrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerDebugAggressiveAggressiveInvasion");
		
		UAthenaCheatManager_TriggerDebugAggressiveAggressiveInvasion_Params params {};
		params.InCrewId = InCrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F81000
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               IsConnect                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UserId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ControllerId                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TriggerControllerConnectionChange(bool IsConnect, int32_t UserId, int32_t ControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange");
		
		UAthenaCheatManager_TriggerControllerConnectionChange_Params params {};
		params.IsConnect = IsConnect;
		params.UserId = UserId;
		params.ControllerId = ControllerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80FE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingPvPMigration
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TriggerContestMatchmakingPvPMigration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingPvPMigration");
		
		UAthenaCheatManager_TriggerContestMatchmakingPvPMigration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80FC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TriggerContestMatchmakingMigration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration");
		
		UAthenaCheatManager_TriggerContestMatchmakingMigration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80FA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TriggerContestBannerUnfurl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl");
		
		UAthenaCheatManager_TriggerContestBannerUnfurl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80F80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TriggerAIShipTimerBattle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle");
		
		UAthenaCheatManager_TriggerAIShipTimerBattle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80F60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TriggerAIShipPassive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive");
		
		UAthenaCheatManager_TriggerAIShipPassive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80F40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TriggerAIShipEncounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter");
		
		UAthenaCheatManager_TriggerAIShipEncounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80F20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TriggerAIShipAggressive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive");
		
		UAthenaCheatManager_TriggerAIShipAggressive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80E80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleVideprinter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Id                                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ToggleVideprinter(const class FString& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleVideprinter");
		
		UAthenaCheatManager_ToggleVideprinter_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80E60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleThirdPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson");
		
		UAthenaCheatManager_ToggleThirdPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80E40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleStoryRefresh
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleStoryRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleStoryRefresh");
		
		UAthenaCheatManager_ToggleStoryRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80D50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleStoryDisplayFilter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               IsIncludeFilter                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Filter                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ToggleStoryDisplayFilter(bool IsIncludeFilter, const class FString& Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleStoryDisplayFilter");
		
		UAthenaCheatManager_ToggleStoryDisplayFilter_Params params {};
		params.IsIncludeFilter = IsIncludeFilter;
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80D30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleSeaClueLocationQueryDebugDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay");
		
		UAthenaCheatManager_ToggleSeaClueLocationQueryDebugDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80D10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleRetailDrawDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug");
		
		UAthenaCheatManager_ToggleRetailDrawDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80CF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleNoClip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleNoClip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleNoClip");
		
		UAthenaCheatManager_ToggleNoClip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80CD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleNearestSuperheatedWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater");
		
		UAthenaCheatManager_ToggleNearestSuperheatedWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80CB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleNearestLava
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleNearestLava()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleNearestLava");
		
		UAthenaCheatManager_ToggleNearestLava_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80C20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::ToggleMigrationPointOfInterestChecks(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks");
		
		UAthenaCheatManager_ToggleMigrationPointOfInterestChecks_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80C00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleIslandSelectionDebugDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay");
		
		UAthenaCheatManager_ToggleIslandSelectionDebugDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80BE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleGlint
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleGlint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleGlint");
		
		UAthenaCheatManager_ToggleGlint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80BC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleFastShipControls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls");
		
		UAthenaCheatManager_ToggleFastShipControls_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80BA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleFactionDebugDisplay
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleFactionDebugDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleFactionDebugDisplay");
		
		UAthenaCheatManager_ToggleFactionDebugDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80B80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDrowning
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleDrowning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDrowning");
		
		UAthenaCheatManager_ToggleDrowning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80B60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleDrawShipSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed");
		
		UAthenaCheatManager_ToggleDrawShipSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80B40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleDrawAboveIslandBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds");
		
		UAthenaCheatManager_ToggleDrawAboveIslandBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80B20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDisplayStories
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleDisplayStories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDisplayStories");
		
		UAthenaCheatManager_ToggleDisplayStories_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80B00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDisplayEmergentBattleBanners
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleDisplayEmergentBattleBanners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDisplayEmergentBattleBanners");
		
		UAthenaCheatManager_ToggleDisplayEmergentBattleBanners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80AE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleDisplayCannonAISpawnerZones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones");
		
		UAthenaCheatManager_ToggleDisplayCannonAISpawnerZones_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80AC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::ToggleDebugFlying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying");
		
		UAthenaCheatManager_ToggleDebugFlying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80AA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleDeathCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera");
		
		UAthenaCheatManager_ToggleDeathCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80A80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleDamageAllowedToPlayerShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip");
		
		UAthenaCheatManager_ToggleDamageAllowedToPlayerShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F809E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleCrewIdToBeBlockedFromBeingInvaded
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InCrewId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ToggleCrewIdToBeBlockedFromBeingInvaded(const class FString& InCrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleCrewIdToBeBlockedFromBeingInvaded");
		
		UAthenaCheatManager_ToggleCrewIdToBeBlockedFromBeingInvaded_Params params {};
		params.InCrewId = InCrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F809C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleContestScoreDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug");
		
		UAthenaCheatManager_ToggleContestScoreDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F809A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleCinematicCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera");
		
		UAthenaCheatManager_ToggleCinematicCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80980
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleAttributeOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride");
		
		UAthenaCheatManager_ToggleAttributeOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80960
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ToggleAggressivePassiveTeleportUseEQS
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ToggleAggressivePassiveTeleportUseEQS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleAggressivePassiveTeleportUseEQS");
		
		UAthenaCheatManager_ToggleAggressivePassiveTeleportUseEQS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80940
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TestForceArchiveAsyncPoolCanaryCrash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TestForceArchiveAsyncPoolCanaryCrash");
		
		UAthenaCheatManager_TestForceArchiveAsyncPoolCanaryCrash_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80920
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TestCrashDumpCreationOnRunnableThread()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread");
		
		UAthenaCheatManager_TestCrashDumpCreationOnRunnableThread_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80900
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TestCrashDumpCreationOnMainThread()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread");
		
		UAthenaCheatManager_TestCrashDumpCreationOnMainThread_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F808E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportToShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportToShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToShip");
		
		UAthenaCheatManager_TeleportToShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F808C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportToPlayerStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart");
		
		UAthenaCheatManager_TeleportToPlayerStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F808A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportToNearestTreasureLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation");
		
		UAthenaCheatManager_TeleportToNearestTreasureLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80790
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportToLocation
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              LocationX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationY                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportToLocation(float LocationX, float LocationY, float LocationZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToLocation");
		
		UAthenaCheatManager_TeleportToLocation_Params params {};
		params.LocationX = LocationX;
		params.LocationY = LocationY;
		params.LocationZ = LocationZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80770
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportToHideout
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportToHideout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToHideout");
		
		UAthenaCheatManager_TeleportToHideout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80670
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DestinationId                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportToDebugDestinationLocation(const class FString& ActorIdString, const class FString& DestinationId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation");
		
		UAthenaCheatManager_TeleportToDebugDestinationLocation_Params params {};
		params.ActorIdString = ActorIdString;
		params.DestinationId = DestinationId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80650
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportToAggressiveGhostShipEncounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter");
		
		UAthenaCheatManager_TeleportToAggressiveGhostShipEncounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80540
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              X                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportShip(float X, float Y, float Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportShip");
		
		UAthenaCheatManager_TeleportShip_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F804A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            SpireIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportPlayerToSpireLocation(int32_t SpireIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation");
		
		UAthenaCheatManager_TeleportPlayerToSpireLocation_Params params {};
		params.SpireIndex = SpireIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80480
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportPlayerToSafety()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety");
		
		UAthenaCheatManager_TeleportPlayerToSafety_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80330
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              OffsetX                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetY                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetZ                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ReturnTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn");
		
		UAthenaCheatManager_TeleportPlayerToOffsetAndReturn_Params params {};
		params.OffsetX = OffsetX;
		params.OffsetY = OffsetY;
		params.OffsetZ = OffsetZ;
		params.ReturnTime = ReturnTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80310
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportPlayerToKraken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken");
		
		UAthenaCheatManager_TeleportPlayerToKraken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80520
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::TeleportPlayersCrewShipToPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation");
		
		UAthenaCheatManager_TeleportPlayersCrewShipToPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F802F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportOutOfHideout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout");
		
		UAthenaCheatManager_TeleportOutOfHideout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80250
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CrewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportCrewToShip(const class FString& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip");
		
		UAthenaCheatManager_TeleportCrewToShip_Params params {};
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80150
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CrewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportCrewToSafeSpawnLocationFromRemoteActor(const class FString& ActorIdString, const class FString& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor");
		
		UAthenaCheatManager_TeleportCrewToSafeSpawnLocationFromRemoteActor_Params params {};
		params.ActorIdString = ActorIdString;
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F800B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CrewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportCrewToSafeSpawnLocation(const class FString& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation");
		
		UAthenaCheatManager_TeleportCrewToSafeSpawnLocation_Params params {};
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F80010
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportCrewMemberToShip(const class FString& ActorIdString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip");
		
		UAthenaCheatManager_TeleportCrewMemberToShip_Params params {};
		params.ActorIdString = ActorIdString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FFF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportAllPlayersToShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip");
		
		UAthenaCheatManager_TeleportAllPlayersToShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FFD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportAllPlayersToPlayerStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart");
		
		UAthenaCheatManager_TeleportAllPlayersToPlayerStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FFB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportAllCrewsToShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips");
		
		UAthenaCheatManager_TeleportAllCrewsToShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FF90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::TeleportAllCrewsToCrewSpawnLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations");
		
		UAthenaCheatManager_TeleportAllCrewsToCrewSpawnLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FEB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            DestinationActorType                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportActorToTrackedActorType(const class FString& ActorIdString, int32_t DestinationActorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType");
		
		UAthenaCheatManager_TeleportActorToTrackedActorType_Params params {};
		params.ActorIdString = ActorIdString;
		params.DestinationActorType = DestinationActorType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FDB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ControllerActorIdString                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      TeleportLocationActorIdString                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportActorToTeleportLocationActor(const class FString& ControllerActorIdString, const class FString& TeleportLocationActorIdString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor");
		
		UAthenaCheatManager_TeleportActorToTeleportLocationActor_Params params {};
		params.ControllerActorIdString = ControllerActorIdString;
		params.TeleportLocationActorIdString = TeleportLocationActorIdString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FD10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportActorToPlayerBuriedDigSite(const class FString& ActorIdString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToPlayerBuriedDigSite");
		
		UAthenaCheatManager_TeleportActorToPlayerBuriedDigSite_Params params {};
		params.ActorIdString = ActorIdString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FB50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              LocationX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationY                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportActorToLocation(const class FString& ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation");
		
		UAthenaCheatManager_TeleportActorToLocation_Params params {};
		params.ActorIdString = ActorIdString;
		params.LocationX = LocationX;
		params.LocationY = LocationY;
		params.LocationZ = LocationZ;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7FA50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      IslandName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportActorToIsland(const class FString& ActorIdString, const class FString& IslandName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland");
		
		UAthenaCheatManager_TeleportActorToIsland_Params params {};
		params.ActorIdString = ActorIdString;
		params.IslandName = IslandName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F960
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               WasBuriedByPlayer                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::TeleportActorToDigSite(const class FString& ActorIdString, bool WasBuriedByPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite");
		
		UAthenaCheatManager_TeleportActorToDigSite_Params params {};
		params.ActorIdString = ActorIdString;
		params.WasBuriedByPlayer = WasBuriedByPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F7A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DestinationActorIdString                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              OffsetX                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetY                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetZ                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::TeleportActorToActorWithOffset(const class FString& ActorIdString, const class FString& DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset");
		
		UAthenaCheatManager_TeleportActorToActorWithOffset_Params params {};
		params.ActorIdString = ActorIdString;
		params.DestinationActorIdString = DestinationActorIdString;
		params.OffsetX = OffsetX;
		params.OffsetY = OffsetY;
		params.OffsetZ = OffsetZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F660
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SwitchActiveStory
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      StoryNameToRemove                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      StoryNameToAdd                                             (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               AddIfNonExistentStory                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SwitchActiveStory(const class FString& StoryNameToRemove, const class FString& StoryNameToAdd, bool AddIfNonExistentStory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SwitchActiveStory");
		
		UAthenaCheatManager_SwitchActiveStory_Params params {};
		params.StoryNameToRemove = StoryNameToRemove;
		params.StoryNameToAdd = StoryNameToAdd;
		params.AddIfNonExistentStory = AddIfNonExistentStory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F640
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SuperShovel
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SuperShovel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SuperShovel");
		
		UAthenaCheatManager_SuperShovel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F620
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SuperSailor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SuperSailor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SuperSailor");
		
		UAthenaCheatManager_SuperSailor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F600
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnOwnShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StraightenAllTrinketsOnOwnShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnOwnShip");
		
		UAthenaCheatManager_StraightenAllTrinketsOnOwnShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F5E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnAllShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StraightenAllTrinketsOnAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StraightenAllTrinketsOnAllShips");
		
		UAthenaCheatManager_StraightenAllTrinketsOnAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F5C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StoreWieldedItemInBootyStorageInCurrentIsland()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland");
		
		UAthenaCheatManager_StoreWieldedItemInBootyStorageInCurrentIsland_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F520
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      IslandName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::StoreWieldedItemInBootyStorage(const class FString& IslandName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage");
		
		UAthenaCheatManager_StoreWieldedItemInBootyStorage_Params params {};
		params.IslandName = IslandName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F3D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StoreShipLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              LocationX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationY                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StoreShipLocation");
		
		UAthenaCheatManager_StoreShipLocation_Params params {};
		params.LocationX = LocationX;
		params.LocationY = LocationY;
		params.LocationZ = LocationZ;
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F3B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StopShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::StopShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopShip");
		
		UAthenaCheatManager_StopShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F390
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StopPetHangout
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StopPetHangout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopPetHangout");
		
		UAthenaCheatManager_StopPetHangout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F370
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StopLocalSequences
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StopLocalSequences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopLocalSequences");
		
		UAthenaCheatManager_StopLocalSequences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F350
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StopAllShips
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::StopAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopAllShips");
		
		UAthenaCheatManager_StopAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F330
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StopAllPetsHangout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout");
		
		UAthenaCheatManager_StopAllPetsHangout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F290
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StockShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      EntitlementAndAmountString                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::StockShip(const class FString& EntitlementAndAmountString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StockShip");
		
		UAthenaCheatManager_StockShip_Params params {};
		params.EntitlementAndAmountString = EntitlementAndAmountString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F1A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartVoyage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      SourceAssetName                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Development                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::StartVoyage(const class FString& SourceAssetName, bool Development)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartVoyage");
		
		UAthenaCheatManager_StartVoyage_Params params {};
		params.SourceAssetName = SourceAssetName;
		params.Development = Development;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F180
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartSicknessOnPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer");
		
		UAthenaCheatManager_StartSicknessOnPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F0E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      RomeVoyageString                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::StartSelectedRomeVoyage(const class FString& RomeVoyageString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage");
		
		UAthenaCheatManager_StartSelectedRomeVoyage_Params params {};
		params.RomeVoyageString = RomeVoyageString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F0C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartNearestVolcano
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartNearestVolcano()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestVolcano");
		
		UAthenaCheatManager_StartNearestVolcano_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F0A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartNearestGeysers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartNearestGeysers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestGeysers");
		
		UAthenaCheatManager_StartNearestGeysers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F080
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartNearestEarthquake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake");
		
		UAthenaCheatManager_StartNearestEarthquake_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F060
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartInvasionMatchmaking
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartInvasionMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartInvasionMatchmaking");
		
		UAthenaCheatManager_StartInvasionMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7F040
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartDemoSession
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartDemoSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartDemoSession");
		
		UAthenaCheatManager_StartDemoSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EFC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            NumOfCrates                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::StartCargoRunFromNearestNPC(int32_t NumOfCrates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC");
		
		UAthenaCheatManager_StartCargoRunFromNearestNPC_Params params {};
		params.NumOfCrates = NumOfCrates;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EFA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartCaptaincySessionAsNewCrew
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartCaptaincySessionAsNewCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartCaptaincySessionAsNewCrew");
		
		UAthenaCheatManager_StartCaptaincySessionAsNewCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EF80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartAshenLordGeysers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers");
		
		UAthenaCheatManager_StartAshenLordGeysers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EF60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartAllVolcanos
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartAllVolcanos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartAllVolcanos");
		
		UAthenaCheatManager_StartAllVolcanos_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EF40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::StartAllCrewVoyages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages");
		
		UAthenaCheatManager_StartAllCrewVoyages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EEC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpireStreamOut
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            SpireIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpireStreamOut(int32_t SpireIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpireStreamOut");
		
		UAthenaCheatManager_SpireStreamOut_Params params {};
		params.SpireIndex = SpireIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EE40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpireStreamIn
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            SpireIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpireStreamIn(int32_t SpireIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpireStreamIn");
		
		UAthenaCheatManager_SpireStreamIn_Params params {};
		params.SpireIndex = SpireIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EDC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpinShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              YawSpdInDegreesPerSecond                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpinShip(float YawSpdInDegreesPerSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpinShip");
		
		UAthenaCheatManager_SpinShip_Params params {};
		params.YawSpdInDegreesPerSecond = YawSpdInDegreesPerSecond;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7ED20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnWatercraft
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      WatercraftClassString                                      (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnWatercraft(const class FString& WatercraftClassString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnWatercraft");
		
		UAthenaCheatManager_SpawnWatercraft_Params params {};
		params.WatercraftClassString = WatercraftClassString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EC70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FString                                      ChestTypeString                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnTreasureChestOfType(class FString* ChestTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType");
		
		UAthenaCheatManager_SpawnTreasureChestOfType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChestTypeString != nullptr)
			*ChestTypeString = params.ChestTypeString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EBD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      TypeString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnTreasureArtifact(const class FString& TypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact");
		
		UAthenaCheatManager_SpawnTreasureArtifact_Params params {};
		params.TypeString = TypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7EA80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnTinySharkAtLocation(float X, float Y, float Z, int32_t PartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation");
		
		UAthenaCheatManager_SpawnTinySharkAtLocation_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.PartIndex = PartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E9C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ControllerParamIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnTinySharkAtCurrentLocation(int32_t ControllerParamIndex, int32_t PartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation");
		
		UAthenaCheatManager_SpawnTinySharkAtCurrentLocation_Params params {};
		params.ControllerParamIndex = ControllerParamIndex;
		params.PartIndex = PartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E910
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FString                                      FortEventName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnStrongholdKeyFromGameEventType(const class FString& FortEventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType");
		
		UAthenaCheatManager_SpawnStrongholdKeyFromGameEventType_Params params {};
		params.FortEventName = FortEventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E8F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnStrongholdKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey");
		
		UAthenaCheatManager_SpawnStrongholdKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E850
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IslandName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnSmallShipAtIsland(const class FString& IslandName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland");
		
		UAthenaCheatManager_SpawnSmallShipAtIsland_Params params {};
		params.IslandName = IslandName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E700
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnSmallShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SpawnLocationX                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationY                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationZ                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSmallShip");
		
		UAthenaCheatManager_SpawnSmallShip_Params params {};
		params.SpawnLocationX = SpawnLocationX;
		params.SpawnLocationY = SpawnLocationY;
		params.SpawnLocationZ = SpawnLocationZ;
		params.SpawnYaw = SpawnYaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E6E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnSkeletonAtNearestAISpawnPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint");
		
		UAthenaCheatManager_SpawnSkeletonAtNearestAISpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E520
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnShipOfType
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SpawnLocationX                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationY                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationZ                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      TypeString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, const class FString& TypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipOfType");
		
		UAthenaCheatManager_SpawnShipOfType_Params params {};
		params.SpawnLocationX = SpawnLocationX;
		params.SpawnLocationY = SpawnLocationY;
		params.SpawnLocationZ = SpawnLocationZ;
		params.SpawnYaw = SpawnYaw;
		params.TypeString = TypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E3A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              XProportion                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              YProportion                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      TypeString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, const class FString& TypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable");
		
		UAthenaCheatManager_SpawnShipInFrontOfNearestAIInteractable_Params params {};
		params.XProportion = XProportion;
		params.YProportion = YProportion;
		params.Yaw = Yaw;
		params.TypeString = TypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E1E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InShipDescAssetString                                      (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationX                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationY                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationZ                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnShipFromDesc(const class FString& InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc");
		
		UAthenaCheatManager_SpawnShipFromDesc_Params params {};
		params.InShipDescAssetString = InShipDescAssetString;
		params.SpawnLocationX = SpawnLocationX;
		params.SpawnLocationY = SpawnLocationY;
		params.SpawnLocationZ = SpawnLocationZ;
		params.SpawnYaw = SpawnYaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7E140
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IslandName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnShipAtIsland(const class FString& IslandName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland");
		
		UAthenaCheatManager_SpawnShipAtIsland_Params params {};
		params.IslandName = IslandName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DFF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              SpawnLocationX                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationY                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationZ                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnYaw                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShip");
		
		UAthenaCheatManager_SpawnShip_Params params {};
		params.SpawnLocationX = SpawnLocationX;
		params.SpawnLocationY = SpawnLocationY;
		params.SpawnLocationZ = SpawnLocationZ;
		params.SpawnYaw = SpawnYaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DFD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnSeagull
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnSeagull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSeagull");
		
		UAthenaCheatManager_SpawnSeagull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DF30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ChestTypeString                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnRomeTreasureChestOfType(const class FString& ChestTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType");
		
		UAthenaCheatManager_SpawnRomeTreasureChestOfType_Params params {};
		params.ChestTypeString = ChestTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DF10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnRandomSeagull
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnRandomSeagull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnRandomSeagull");
		
		UAthenaCheatManager_SpawnRandomSeagull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DEF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnOceanCrawlersOnShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnOceanCrawlersOnShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnOceanCrawlersOnShip");
		
		UAthenaCheatManager_SpawnOceanCrawlersOnShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DE10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIDescString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumToSpawn                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnNumberOfAI(const class FString& AIDescString, int32_t NumToSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI");
		
		UAthenaCheatManager_SpawnNumberOfAI_Params params {};
		params.AIDescString = AIDescString;
		params.NumToSpawn = NumToSpawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DDF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnNightmareAggressiveGhostShipEncountersRandom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom");
		
		UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersRandom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DDD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnNightmareAggressiveGhostShipEncountersNearToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer");
		
		UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersNearToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DCD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FString                                      ChestTypeString                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnMultipleTreasureChestsOfType(class FString* ChestTypeString, int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType");
		
		UAthenaCheatManager_SpawnMultipleTreasureChestsOfType_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChestTypeString != nullptr)
			*ChestTypeString = params.ChestTypeString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DC30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      MessageInABottleTypeString                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnMessageInABottle(const class FString& MessageInABottleTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle");
		
		UAthenaCheatManager_SpawnMessageInABottle_Params params {};
		params.MessageInABottleTypeString = MessageInABottleTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DC10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnMermaid
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnMermaid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMermaid");
		
		UAthenaCheatManager_SpawnMermaid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DB70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      FaunaTypeString                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnMerchantFauna(const class FString& FaunaTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna");
		
		UAthenaCheatManager_SpawnMerchantFauna_Params params {};
		params.FaunaTypeString = FaunaTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DAD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      MerchantCrateTypeString                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnMerchantCrate(const class FString& MerchantCrateTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate");
		
		UAthenaCheatManager_SpawnMerchantCrate_Params params {};
		params.MerchantCrateTypeString = MerchantCrateTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7DA30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      MerchantCargoTypeString                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnMerchantCargo(const class FString& MerchantCargoTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo");
		
		UAthenaCheatManager_SpawnMerchantCargo_Params params {};
		params.MerchantCargoTypeString = MerchantCargoTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D9B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		uint32_t                                           NumTentacles                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles");
		
		UAthenaCheatManager_SpawnKrakenAtCurrentLocationWithNumTentacles_Params params {};
		params.NumTentacles = NumTentacles;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D990
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnKrakenAtCurrentLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation");
		
		UAthenaCheatManager_SpawnKrakenAtCurrentLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D8F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ItemString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnItemOnFloor(const class FString& ItemString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor");
		
		UAthenaCheatManager_SpawnItemOnFloor_Params params {};
		params.ItemString = ItemString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D850
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnItemInHand
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ItemString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnItemInHand(const class FString& ItemString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnItemInHand");
		
		UAthenaCheatManager_SpawnItemInHand_Params params {};
		params.ItemString = ItemString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D7B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnGoldMound
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      GoldMoundTypeString                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnGoldMound(const class FString& GoldMoundTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGoldMound");
		
		UAthenaCheatManager_SpawnGoldMound_Params params {};
		params.GoldMoundTypeString = GoldMoundTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D730
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Dormancy                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy");
		
		UAthenaCheatManager_SpawnGeyserAtPlayerLocationWithDormancy_Params params {};
		params.Dormancy = Dormancy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D710
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnGeyserAtPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation");
		
		UAthenaCheatManager_SpawnGeyserAtPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D5C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              LocationX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationY                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Dormancy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation");
		
		UAthenaCheatManager_SpawnGeyserAtLocation_Params params {};
		params.LocationX = LocationX;
		params.LocationY = LocationY;
		params.LocationZ = LocationZ;
		params.Dormancy = Dormancy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D5A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnFogAtPlayerPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition");
		
		UAthenaCheatManager_SpawnFogAtPlayerPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D500
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InBaitType                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnFishAtPlayerLocation(const class FString& InBaitType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation");
		
		UAthenaCheatManager_SpawnFishAtPlayerLocation_Params params {};
		params.InBaitType = InBaitType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D460
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnFirework
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      FireworkItemString                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnFirework(const class FString& FireworkItemString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnFirework");
		
		UAthenaCheatManager_SpawnFirework_Params params {};
		params.FireworkItemString = FireworkItemString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D3C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CannonballTypeString                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnCursedCannonball(const class FString& CannonballTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball");
		
		UAthenaCheatManager_SpawnCursedCannonball_Params params {};
		params.CannonballTypeString = CannonballTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D320
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      PromptAccessKey                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnContextualPrompt(const class FString& PromptAccessKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnContextualPrompt");
		
		UAthenaCheatManager_SpawnContextualPrompt_Params params {};
		params.PromptAccessKey = PromptAccessKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D270
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FString                                      ChestTypeString                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnCollectorsChestOfType(class FString* ChestTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType");
		
		UAthenaCheatManager_SpawnCollectorsChestOfType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChestTypeString != nullptr)
			*ChestTypeString = params.ChestTypeString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D1D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      SpawnCargoRunCrateString                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnCargoRunCrate(const class FString& SpawnCargoRunCrateString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate");
		
		UAthenaCheatManager_SpawnCargoRunCrate_Params params {};
		params.SpawnCargoRunCrateString = SpawnCargoRunCrateString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D150
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Distance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnCabinDoorInFrontOfPlayer(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer");
		
		UAthenaCheatManager_SpawnCabinDoorInFrontOfPlayer_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D0B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnBountyReward
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      BountyTypeString                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnBountyReward(const class FString& BountyTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnBountyReward");
		
		UAthenaCheatManager_SpawnBountyReward_Params params {};
		params.BountyTypeString = BountyTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D090
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnBootyPickupPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint");
		
		UAthenaCheatManager_SpawnBootyPickupPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7D000
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               ForcedCloseSpawn                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SpawnBarrelGroup(bool ForcedCloseSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup");
		
		UAthenaCheatManager_SpawnBarrelGroup_Params params {};
		params.ForcedCloseSpawn = ForcedCloseSpawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CEA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnAThousandTreasureChests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests");
		
		UAthenaCheatManager_SpawnAThousandTreasureChests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CF60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      DebugWieldableTypeString                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnAndEquipDebugWieldable(const class FString& DebugWieldableTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable");
		
		UAthenaCheatManager_SpawnAndEquipDebugWieldable_Params params {};
		params.DebugWieldableTypeString = DebugWieldableTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CE00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIDescString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnAINoTrigger(const class FString& AIDescString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger");
		
		UAthenaCheatManager_SpawnAINoTrigger_Params params {};
		params.AIDescString = AIDescString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CD60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIEncounterString                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnAIEncounter(const class FString& AIEncounterString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter");
		
		UAthenaCheatManager_SpawnAIEncounter_Params params {};
		params.AIEncounterString = AIEncounterString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CCC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIDescString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnAIAtNearestAISpawnPoint(const class FString& AIDescString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint");
		
		UAthenaCheatManager_SpawnAIAtNearestAISpawnPoint_Params params {};
		params.AIDescString = AIDescString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CAD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIDescString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              LocationX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationY                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Yaw                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnAIAtLocationDelayed(const class FString& AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed");
		
		UAthenaCheatManager_SpawnAIAtLocationDelayed_Params params {};
		params.AIDescString = AIDescString;
		params.LocationX = LocationX;
		params.LocationY = LocationY;
		params.LocationZ = LocationZ;
		params.Yaw = Yaw;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C9E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIDescString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnAIAtCurrentLocationDelayed(const class FString& AIDescString, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed");
		
		UAthenaCheatManager_SpawnAIAtCurrentLocationDelayed_Params params {};
		params.AIDescString = AIDescString;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C940
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIDescString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SpawnAI(const class FString& AIDescString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAI");
		
		UAthenaCheatManager_SpawnAI_Params params {};
		params.AIDescString = AIDescString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CF40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid");
		
		UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CF20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireFriendlyFormation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation");
		
		UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireFriendlyFormation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CF00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireEnemyFormation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation");
		
		UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireEnemyFormation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CEE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire");
		
		UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7CEC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SpawnAggressiveGhostShipEncounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter");
		
		UAthenaCheatManager_SpawnAggressiveGhostShipEncounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C920
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::SmoulderClosestShipFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire");
		
		UAthenaCheatManager_SmoulderClosestShipFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C900
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::SmoulderAllShipFires()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires");
		
		UAthenaCheatManager_SmoulderAllShipFires_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C870
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SlowMotionOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SlowMotionOverride(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SlowMotionOverride");
		
		UAthenaCheatManager_SlowMotionOverride_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C850
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SkipToEndOfOnboarding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding");
		
		UAthenaCheatManager_SkipToEndOfOnboarding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C7D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            KeelOverConfigIndex                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SinkShipWithKeelOverIndex(int32_t KeelOverConfigIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex");
		
		UAthenaCheatManager_SinkShipWithKeelOverIndex_Params params {};
		params.KeelOverConfigIndex = KeelOverConfigIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C730
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SinkShipByActorId
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ShipActorIdString                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SinkShipByActorId(const class FString& ShipActorIdString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShipByActorId");
		
		UAthenaCheatManager_SinkShipByActorId_Params params {};
		params.ShipActorIdString = ShipActorIdString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C710
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SinkShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SinkShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShip");
		
		UAthenaCheatManager_SinkShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C6F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SinkClosestItemProxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy");
		
		UAthenaCheatManager_SinkClosestItemProxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C6D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SinkAllBarrels
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SinkAllBarrels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkAllBarrels");
		
		UAthenaCheatManager_SinkAllBarrels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C6B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SinkAllAIShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SinkAllAIShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkAllAIShips");
		
		UAthenaCheatManager_SinkAllAIShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C690
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SingleStickSwap
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SingleStickSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SingleStickSwap");
		
		UAthenaCheatManager_SingleStickSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C670
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SingleStickRight
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SingleStickRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SingleStickRight");
		
		UAthenaCheatManager_SingleStickRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C650
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SingleStickOff
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SingleStickOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SingleStickOff");
		
		UAthenaCheatManager_SingleStickOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C630
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SingleStickLeft
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SingleStickLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SingleStickLeft");
		
		UAthenaCheatManager_SingleStickLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C610
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SimulateTunnelFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure");
		
		UAthenaCheatManager_SimulateTunnelFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C570
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Id                                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SimulatePetReactRequest(const class FString& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest");
		
		UAthenaCheatManager_SimulatePetReactRequest_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C4D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Id                                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SimulatePetReactCancellation(const class FString& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation");
		
		UAthenaCheatManager_SimulatePetReactCancellation_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C4B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SignalActiveGlobalVoyageDelaySteps
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SignalActiveGlobalVoyageDelaySteps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SignalActiveGlobalVoyageDelaySteps");
		
		UAthenaCheatManager_SignalActiveGlobalVoyageDelaySteps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C490
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowTavernBanners
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShowTavernBanners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowTavernBanners");
		
		UAthenaCheatManager_ShowTavernBanners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C470
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShowTaleDebug_WithVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables");
		
		UAthenaCheatManager_ShowTaleDebug_WithVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C450
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowTaleDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShowTaleDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowTaleDebug");
		
		UAthenaCheatManager_ShowTaleDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C2C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowShipMilestoneToast
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      MilestoneGuid                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MilestoneAlignment                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		uint64_t                                           MilestoneLevel                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ShipName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ShowShipMilestoneToast(const class FString& MilestoneGuid, const class FString& MilestoneAlignment, uint64_t MilestoneLevel, const class FString& ShipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowShipMilestoneToast");
		
		UAthenaCheatManager_ShowShipMilestoneToast_Params params {};
		params.MilestoneGuid = MilestoneGuid;
		params.MilestoneAlignment = MilestoneAlignment;
		params.MilestoneLevel = MilestoneLevel;
		params.ShipName = ShipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C2A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShowRandomCrewMemberGamerCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard");
		
		UAthenaCheatManager_ShowRandomCrewMemberGamerCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C160
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowPlayerMilestoneToast
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      MilestoneGuid                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      MilestoneAlignment                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		uint64_t                                           MilestoneLevel                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ShowPlayerMilestoneToast(const class FString& MilestoneGuid, const class FString& MilestoneAlignment, uint64_t MilestoneLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowPlayerMilestoneToast");
		
		UAthenaCheatManager_ShowPlayerMilestoneToast_Params params {};
		params.MilestoneGuid = MilestoneGuid;
		params.MilestoneAlignment = MilestoneAlignment;
		params.MilestoneLevel = MilestoneLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C140
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShowEmissaryVoteIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators");
		
		UAthenaCheatManager_ShowEmissaryVoteIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C080
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowAllWelds
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShowAllWelds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllWelds");
		
		UAthenaCheatManager_ShowAllWelds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C060
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShowAllRomeBeacons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons");
		
		UAthenaCheatManager_ShowAllRomeBeacons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7C0A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CrewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ShowAllianceStatus(const class FString& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus");
		
		UAthenaCheatManager_ShowAllianceStatus_Params params {};
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BF50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              SpawnLocationX                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationY                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationZ                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne");
		
		UAthenaCheatManager_ShipwrecksSpawnOne_Params params {};
		params.SpawnLocationX = SpawnLocationX;
		params.SpawnLocationY = SpawnLocationY;
		params.SpawnLocationZ = SpawnLocationZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BDD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              SpawnLocationX                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationY                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpawnLocationZ                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      WreckAsset                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, const class FString& WreckAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom");
		
		UAthenaCheatManager_ShipwrecksSpawnCustom_Params params {};
		params.SpawnLocationX = SpawnLocationX;
		params.SpawnLocationY = SpawnLocationY;
		params.SpawnLocationZ = SpawnLocationZ;
		params.WreckAsset = WreckAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BDB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShipwrecksRemoveCustom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom");
		
		UAthenaCheatManager_ShipwrecksRemoveCustom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BD90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShipwrecksRegen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen");
		
		UAthenaCheatManager_ShipwrecksRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BD70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShipUpdateMassProperies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies");
		
		UAthenaCheatManager_ShipUpdateMassProperies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BD50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShipSurface
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShipSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipSurface");
		
		UAthenaCheatManager_ShipSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BD30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ShipDive
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ShipDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipDive");
		
		UAthenaCheatManager_ShipDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BCB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetWheelAngle
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Angle                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetWheelAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWheelAngle");
		
		UAthenaCheatManager_SetWheelAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BC20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               WeaponsLockedOut                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetWeaponsLockedOut(bool WeaponsLockedOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut");
		
		UAthenaCheatManager_SetWeaponsLockedOut_Params params {};
		params.WeaponsLockedOut = WeaponsLockedOut;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BBA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetWaveFlag
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InFlag                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetWaveFlag(int32_t InFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWaveFlag");
		
		UAthenaCheatManager_SetWaveFlag_Params params {};
		params.InFlag = InFlag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BA90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Amplitude                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WaveLength                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PropagationSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams");
		
		UAthenaCheatManager_SetWaterWaveParams_Params params {};
		params.Amplitude = Amplitude;
		params.WaveLength = WaveLength;
		params.PropagationSpeed = PropagationSpeed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BA70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetVoiceChatEndpointXAudio2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2");
		
		UAthenaCheatManager_SetVoiceChatEndpointXAudio2_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BA50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetVoiceChatEndpointWwise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise");
		
		UAthenaCheatManager_SetVoiceChatEndpointWwise_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BA30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUseWwise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise");
		
		UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUseWwise_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7BA10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUsePlatform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform");
		
		UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUsePlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B980
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetTrinketsEnabled
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InTrinketsEnabled                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetTrinketsEnabled(bool InTrinketsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTrinketsEnabled");
		
		UAthenaCheatManager_SetTrinketsEnabled_Params params {};
		params.InTrinketsEnabled = InTrinketsEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B960
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetTrinketNudgeChanceMaxOnAllShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetTrinketNudgeChanceMaxOnAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTrinketNudgeChanceMaxOnAllShips");
		
		UAthenaCheatManager_SetTrinketNudgeChanceMaxOnAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B940
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetTinySharkToOneHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth");
		
		UAthenaCheatManager_SetTinySharkToOneHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B8C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetTimeScalar
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              TimeScalar                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetTimeScalar(float TimeScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTimeScalar");
		
		UAthenaCheatManager_SetTimeScalar_Params params {};
		params.TimeScalar = TimeScalar;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B800
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Hours                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minutes                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetTimeHoursAndMinutes(int32_t Hours, int32_t Minutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes");
		
		UAthenaCheatManager_SetTimeHoursAndMinutes_Params params {};
		params.Hours = Hours;
		params.Minutes = Minutes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B780
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetTime
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Hours                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetTime(int32_t Hours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTime");
		
		UAthenaCheatManager_SetTime_Params params {};
		params.Hours = Hours;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B700
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetTaleSelectorSeed(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed");
		
		UAthenaCheatManager_SetTaleSelectorSeed_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B670
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetShroudbreakerActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive");
		
		UAthenaCheatManager_SetShroudbreakerActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B5F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipYaw
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Yaw                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetShipYaw(float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipYaw");
		
		UAthenaCheatManager_SetShipYaw_Params params {};
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B5D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetShipWheelFullyRepaired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired");
		
		UAthenaCheatManager_SetShipWheelFullyRepaired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B5B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetShipWheelFullyDamaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged");
		
		UAthenaCheatManager_SetShipWheelFullyDamaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B530
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipRoll
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Roll                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetShipRoll(float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipRoll");
		
		UAthenaCheatManager_SetShipRoll_Params params {};
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B490
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipName
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InShipName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetShipName(const class FString& InShipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipName");
		
		UAthenaCheatManager_SetShipName_Params params {};
		params.InShipName = InShipName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B470
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetShipFullyDamaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged");
		
		UAthenaCheatManager_SetShipFullyDamaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B450
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetShipCapstanFullyRepaired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired");
		
		UAthenaCheatManager_SetShipCapstanFullyRepaired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B430
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetShipCapstanFullyDamaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged");
		
		UAthenaCheatManager_SetShipCapstanFullyDamaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B3B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              UnaryBlend                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetShipBuoyancyBlend(float UnaryBlend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend");
		
		UAthenaCheatManager_SetShipBuoyancyBlend_Params params {};
		params.UnaryBlend = UnaryBlend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B330
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Proportion                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetSailLoweredProportions(float Proportion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions");
		
		UAthenaCheatManager_SetSailLoweredProportions_Params params {};
		params.Proportion = Proportion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B2B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetSailAngles
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Angle                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetSailAngles(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetSailAngles");
		
		UAthenaCheatManager_SetSailAngles_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B230
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetRitualTableRequiredPlayersOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            RequiredPlayerCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetRitualTableRequiredPlayersOverride(int32_t RequiredPlayerCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetRitualTableRequiredPlayersOverride");
		
		UAthenaCheatManager_SetRitualTableRequiredPlayersOverride_Params params {};
		params.RequiredPlayerCount = RequiredPlayerCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B210
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetPreventLeakingOnAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips");
		
		UAthenaCheatManager_SetPreventLeakingOnAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B180
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               PreventLeaking                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetPreventLeakingOnAllDamageZones(bool PreventLeaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones");
		
		UAthenaCheatManager_SetPreventLeakingOnAllDamageZones_Params params {};
		params.PreventLeaking = PreventLeaking;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B160
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetPlayerVisibleToAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI");
		
		UAthenaCheatManager_SetPlayerVisibleToAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B0E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InMaxTicksPerFrame                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetPlayerMaxTicks(int32_t InMaxTicksPerFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPlayerMaxTicks");
		
		UAthenaCheatManager_SetPlayerMaxTicks_Params params {};
		params.InMaxTicksPerFrame = InMaxTicksPerFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B0C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetPlayerInvisibleToAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI");
		
		UAthenaCheatManager_SetPlayerInvisibleToAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7B030
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetPlayerInert
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               IsInert                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetPlayerInert(bool IsInert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPlayerInert");
		
		UAthenaCheatManager_SetPlayerInert_Params params {};
		params.IsInert = IsInert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AFA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetPhotoMode
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetPhotoMode(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPhotoMode");
		
		UAthenaCheatManager_SetPhotoMode_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AF20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              TimeWindow                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetPetMovementTimeWindow(float TimeWindow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow");
		
		UAthenaCheatManager_SetPetMovementTimeWindow_Params params {};
		params.TimeWindow = TimeWindow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AE90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetNonCrewChatSpatialisation(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation");
		
		UAthenaCheatManager_SetNonCrewChatSpatialisation_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AE10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            MaxNumOfSpawnedActors                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetMaxNumOfSpawnedAI(int32_t MaxNumOfSpawnedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI");
		
		UAthenaCheatManager_SetMaxNumOfSpawnedAI_Params params {};
		params.MaxNumOfSpawnedActors = MaxNumOfSpawnedActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AD90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            MaxMovingPets                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetMaxMovingPetsOnShips(int32_t MaxMovingPets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips");
		
		UAthenaCheatManager_SetMaxMovingPetsOnShips_Params params {};
		params.MaxMovingPets = MaxMovingPets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AD10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            MaxMovingPets                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetMaxMovingPetsOnServer(int32_t MaxMovingPets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer");
		
		UAthenaCheatManager_SetMaxMovingPetsOnServer_Params params {};
		params.MaxMovingPets = MaxMovingPets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AC90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            MaxMovingPets                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetMaxMovingPetsOnLand(int32_t MaxMovingPets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand");
		
		UAthenaCheatManager_SetMaxMovingPetsOnLand_Params params {};
		params.MaxMovingPets = MaxMovingPets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AC70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetMastsFullyRepaired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired");
		
		UAthenaCheatManager_SetMastsFullyRepaired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AC50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetMastsFullyDamaged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged");
		
		UAthenaCheatManager_SetMastsFullyDamaged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7ABC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled
	 * 		Flags  -> (Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Disabled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetKnockbackDisabled(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled");
		
		UAthenaCheatManager_SetKnockbackDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AB30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetIsTinSession
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InIsCaptainedSession                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetIsTinSession(bool InIsCaptainedSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetIsTinSession");
		
		UAthenaCheatManager_SetIsTinSession_Params params {};
		params.InIsCaptainedSession = InIsCaptainedSession;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AAA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetIsShipCustomizationTinOnly
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InIsShipCustomizationCaptainOnly                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetIsShipCustomizationTinOnly(bool InIsShipCustomizationCaptainOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetIsShipCustomizationTinOnly");
		
		UAthenaCheatManager_SetIsShipCustomizationTinOnly_Params params {};
		params.InIsShipCustomizationCaptainOnly = InIsShipCustomizationCaptainOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7AA10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetIsCaptain
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InIsCaptain                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetIsCaptain(bool InIsCaptain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetIsCaptain");
		
		UAthenaCheatManager_SetIsCaptain_Params params {};
		params.InIsCaptain = InIsCaptain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A980
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetIdleDisconnectEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled");
		
		UAthenaCheatManager_SetIdleDisconnectEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A8F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bActive                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetHealthInfoReplicateOverride(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride");
		
		UAthenaCheatManager_SetHealthInfoReplicateOverride_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A860
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetGrogSecondary
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetGrogSecondary(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetGrogSecondary");
		
		UAthenaCheatManager_SetGrogSecondary_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A7D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetGodMode
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               GodModeOn                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetGodMode(bool GodModeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetGodMode");
		
		UAthenaCheatManager_SetGodMode_Params params {};
		params.GodModeOn = GodModeOn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A750
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            RequiredPlayerCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetGlitterbeardRequiredPlayersOverride(int32_t RequiredPlayerCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride");
		
		UAthenaCheatManager_SetGlitterbeardRequiredPlayersOverride_Params params {};
		params.RequiredPlayerCount = RequiredPlayerCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A550
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetFOV
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              InNewFOV                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetFOV(float InNewFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetFOV");
		
		UAthenaCheatManager_SetFOV_Params params {};
		params.InNewFOV = InNewFOV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A6D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetForceLocalPlayerMoveForwardFlipDistance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              FlipDistance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetForceLocalPlayerMoveForwardFlipDistance(float FlipDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetForceLocalPlayerMoveForwardFlipDistance");
		
		UAthenaCheatManager_SetForceLocalPlayerMoveForwardFlipDistance_Params params {};
		params.FlipDistance = FlipDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A650
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InFlameOfFateType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetFlameOfFateColour(int32_t InFlameOfFateType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour");
		
		UAthenaCheatManager_SetFlameOfFateColour_Params params {};
		params.InFlameOfFateType = InFlameOfFateType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A5D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetFactionStreak
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InStreak                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetFactionStreak(int32_t InStreak)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetFactionStreak");
		
		UAthenaCheatManager_SetFactionStreak_Params params {};
		params.InStreak = InStreak;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A4B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetDebugItemSource
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetDebugItemSource(const class FString& Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDebugItemSource");
		
		UAthenaCheatManager_SetDebugItemSource_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A430
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InStage                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetDebugHealthStage(int32_t InStage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage");
		
		UAthenaCheatManager_SetDebugHealthStage_Params params {};
		params.InStage = InStage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A3A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               bUseProjectileChannel                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel");
		
		UAthenaCheatManager_SetDebugCameraUseProjectileCollisionChannel_Params params {};
		params.bUseProjectileChannel = bUseProjectileChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A320
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              InSpawnTimer                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetDeathPenaltyRespawnTimer(float InSpawnTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer");
		
		UAthenaCheatManager_SetDeathPenaltyRespawnTimer_Params params {};
		params.InSpawnTimer = InSpawnTimer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A1D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyCrewBasedRespawnTimes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              CrewOfOne                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CrewOfTwo                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CrewOfThree                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CrewOfFour                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetDeathPenaltyCrewBasedRespawnTimes(float CrewOfOne, float CrewOfTwo, float CrewOfThree, float CrewOfFour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyCrewBasedRespawnTimes");
		
		UAthenaCheatManager_SetDeathPenaltyCrewBasedRespawnTimes_Params params {};
		params.CrewOfOne = CrewOfOne;
		params.CrewOfTwo = CrewOfTwo;
		params.CrewOfThree = CrewOfThree;
		params.CrewOfFour = CrewOfFour;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A140
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InAllowDamage                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetDamageAllowedToPlayerShip(bool InAllowDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip");
		
		UAthenaCheatManager_SetDamageAllowedToPlayerShip_Params params {};
		params.InAllowDamage = InAllowDamage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A0B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetCutsceneResponseCoordinatorDebug(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug");
		
		UAthenaCheatManager_SetCutsceneResponseCoordinatorDebug_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F7A010
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetCurrentCulture
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Culture                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetCurrentCulture(const class FString& Culture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCurrentCulture");
		
		UAthenaCheatManager_SetCurrentCulture_Params params {};
		params.Culture = Culture;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79F80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetCrestTextVisibility
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               InShouldShowText                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::SetCrestTextVisibility(bool InShouldShowText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCrestTextVisibility");
		
		UAthenaCheatManager_SetCrestTextVisibility_Params params {};
		params.InShouldShowText = InShouldShowText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79F00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            AssetIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetCoordinatedKrakenPhaseAsset(int32_t AssetIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset");
		
		UAthenaCheatManager_SetCoordinatedKrakenPhaseAsset_Params params {};
		params.AssetIndex = AssetIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79EE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetCoordinatedKrakenCurrentPhaseAssetInactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive");
		
		UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetInactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79EC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SetCoordinatedKrakenCurrentPhaseAssetActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive");
		
		UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79E40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetCapstanPosition
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Position                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetCapstanPosition(float Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCapstanPosition");
		
		UAthenaCheatManager_SetCapstanPosition_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79D40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetAxisBinding
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InBindingName                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InKeyName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetAxisBinding(const class FString& InBindingName, const class FString& InKeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAxisBinding");
		
		UAthenaCheatManager_SetAxisBinding_Params params {};
		params.InBindingName = InBindingName;
		params.InKeyName = InKeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79CC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              HitChance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetAllAIOverrideCannonShotHitChance(float HitChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance");
		
		UAthenaCheatManager_SetAllAIOverrideCannonShotHitChance_Params params {};
		params.HitChance = HitChance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79AC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      TeamAString                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      TeamBString                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      AttitudeString                                             (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetAITeamAttitude(const class FString& TeamAString, const class FString& TeamBString, const class FString& AttitudeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude");
		
		UAthenaCheatManager_SetAITeamAttitude_Params params {};
		params.TeamAString = TeamAString;
		params.TeamBString = TeamBString;
		params.AttitudeString = AttitudeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79A20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIAbilityString                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetAIExclusiveAbility(const class FString& AIAbilityString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility");
		
		UAthenaCheatManager_SetAIExclusiveAbility_Params params {};
		params.AIAbilityString = AIAbilityString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F798F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIAbilityString                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              IntervalCooldownMultiplier                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ActivationCooldownMultiplier                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetAIAbilityTimeMultiplier(const class FString& AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier");
		
		UAthenaCheatManager_SetAIAbilityTimeMultiplier_Params params {};
		params.AIAbilityString = AIAbilityString;
		params.IntervalCooldownMultiplier = IntervalCooldownMultiplier;
		params.ActivationCooldownMultiplier = ActivationCooldownMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79C20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AIAbilityString                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SetAbilityAlwaysOn(const class FString& AIAbilityString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn");
		
		UAthenaCheatManager_SetAbilityAlwaysOn_Params params {};
		params.AIAbilityString = AIAbilityString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F798D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SendUpdateVoyageProgressEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent");
		
		UAthenaCheatManager_SendUpdateVoyageProgressEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79810
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SendStatEvent
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		uint32_t                                           StatId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		uint64_t                                           StatValue                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SendStatEvent(uint32_t StatId, uint64_t StatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendStatEvent");
		
		UAthenaCheatManager_SendStatEvent_Params params {};
		params.StatId = StatId;
		params.StatValue = StatValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79770
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CompanyNameAndRewardIdSeparatedByColon                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SendRewardRequestEvent(const class FString& CompanyNameAndRewardIdSeparatedByColon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent");
		
		UAthenaCheatManager_SendRewardRequestEvent_Params params {};
		params.CompanyNameAndRewardIdSeparatedByColon = CompanyNameAndRewardIdSeparatedByColon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79750
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SendResetReaperLevelEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent");
		
		UAthenaCheatManager_SendResetReaperLevelEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79730
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ScuttleShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::ScuttleShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScuttleShip");
		
		UAthenaCheatManager_ScuttleShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79710
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ScreenFadeStart
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ScreenFadeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScreenFadeStart");
		
		UAthenaCheatManager_ScreenFadeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F796F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ScreenFadeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd");
		
		UAthenaCheatManager_ScreenFadeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F796D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerToggleDebugDraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw");
		
		UAthenaCheatManager_SchedulerToggleDebugDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F796B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerSkipToNext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext");
		
		UAthenaCheatManager_SchedulerSkipToNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79690
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitTinyShark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark");
		
		UAthenaCheatManager_SchedulerInitTinyShark_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79670
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitSkellyFort()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort");
		
		UAthenaCheatManager_SchedulerInitSkellyFort_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79650
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitKraken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken");
		
		UAthenaCheatManager_SchedulerInitKraken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79630
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault");
		
		UAthenaCheatManager_SchedulerInitDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79610
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitAshenLord()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord");
		
		UAthenaCheatManager_SchedulerInitAshenLord_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F795D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitAIShipPassive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive");
		
		UAthenaCheatManager_SchedulerInitAIShipPassive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F795B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitAIShipBattle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle");
		
		UAthenaCheatManager_SchedulerInitAIShipBattle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79590
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitAIShipAggro()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro");
		
		UAthenaCheatManager_SchedulerInitAIShipAggro_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F795F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::SchedulerInitAggroGhostShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip");
		
		UAthenaCheatManager_SchedulerInitAggroGhostShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79510
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SchedulerAdvance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::SchedulerAdvance(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerAdvance");
		
		UAthenaCheatManager_SchedulerAdvance_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F794F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SaveMyShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::SaveMyShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SaveMyShip");
		
		UAthenaCheatManager_SaveMyShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F794D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SailShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::SailShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SailShip");
		
		UAthenaCheatManager_SailShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F794B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.SailAllShips
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::SailAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SailAllShips");
		
		UAthenaCheatManager_SailAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79430
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              SecondsToRewindBy                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::RewindPhysicsSceneBy(float SecondsToRewindBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy");
		
		UAthenaCheatManager_RewindPhysicsSceneBy_Params params {};
		params.SecondsToRewindBy = SecondsToRewindBy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79410
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ReviveLocalPlayerInstantly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly");
		
		UAthenaCheatManager_ReviveLocalPlayerInstantly_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F793F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ReviveLocalPlayerAccordingToReviveTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime");
		
		UAthenaCheatManager_ReviveLocalPlayerAccordingToReviveTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F793D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RetrieveItemsFromBootyStorageInCurrentIsland()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland");
		
		UAthenaCheatManager_RetrieveItemsFromBootyStorageInCurrentIsland_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79330
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      IslandName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::RetrieveItemsFromBootyStorage(const class FString& IslandName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage");
		
		UAthenaCheatManager_RetrieveItemsFromBootyStorage_Params params {};
		params.IslandName = IslandName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79290
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ShipActorIdString                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ResurfaceShipByActorId(const class FString& ShipActorIdString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId");
		
		UAthenaCheatManager_ResurfaceShipByActorId_Params params {};
		params.ShipActorIdString = ShipActorIdString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79270
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RestoreAndRestockShipAndPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer");
		
		UAthenaCheatManager_RestoreAndRestockShipAndPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79250
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RestockIslandBarrels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels");
		
		UAthenaCheatManager_RestockIslandBarrels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79230
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RestockAllReplenishables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables");
		
		UAthenaCheatManager_RestockAllReplenishables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79210
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RespawnAllIslandItemSpawners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners");
		
		UAthenaCheatManager_RespawnAllIslandItemSpawners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79190
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Timer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ResetTinySharkSpawnTimerWithTime(float Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime");
		
		UAthenaCheatManager_ResetTinySharkSpawnTimerWithTime_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79170
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetTinySharkSpawnTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer");
		
		UAthenaCheatManager_ResetTinySharkSpawnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79150
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetTaleSelectorSeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed");
		
		UAthenaCheatManager_ResetTaleSelectorSeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79130
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetStats
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetStats");
		
		UAthenaCheatManager_ResetStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79110
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetRitualTable
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetRitualTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetRitualTable");
		
		UAthenaCheatManager_ResetRitualTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F790F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetRepairedShipDamage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetRepairedShipDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetRepairedShipDamage");
		
		UAthenaCheatManager_ResetRepairedShipDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F790D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetNearestVault
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetNearestVault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetNearestVault");
		
		UAthenaCheatManager_ResetNearestVault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F790B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetNearestSeaFort
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetNearestSeaFort()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetNearestSeaFort");
		
		UAthenaCheatManager_ResetNearestSeaFort_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79090
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetNearestEventRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom");
		
		UAthenaCheatManager_ResetNearestEventRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79070
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetMouseDelta
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetMouseDelta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetMouseDelta");
		
		UAthenaCheatManager_ResetMouseDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79050
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetMaxNumOfSpawnedAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI");
		
		UAthenaCheatManager_ResetMaxNumOfSpawnedAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79030
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetMaxMovingPetsOnServerToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault");
		
		UAthenaCheatManager_ResetMaxMovingPetsOnServerToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F79010
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetInvasionMatchmakingCooldown
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetInvasionMatchmakingCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetInvasionMatchmakingCooldown");
		
		UAthenaCheatManager_ResetInvasionMatchmakingCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78FF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetInitialMatchmakingCooldown
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetInitialMatchmakingCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetInitialMatchmakingCooldown");
		
		UAthenaCheatManager_ResetInitialMatchmakingCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78FD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetGlitterbeardTree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree");
		
		UAthenaCheatManager_ResetGlitterbeardTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78F40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetDemoSession
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               StartNewSession                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::ResetDemoSession(bool StartNewSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetDemoSession");
		
		UAthenaCheatManager_ResetDemoSession_Params params {};
		params.StartNewSession = StartNewSession;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78F20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetAllShipDamage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetAllShipDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAllShipDamage");
		
		UAthenaCheatManager_ResetAllShipDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78F00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetAllOverrideCannonShotHitChance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance");
		
		UAthenaCheatManager_ResetAllOverrideCannonShotHitChance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78EE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetAllMechanisms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms");
		
		UAthenaCheatManager_ResetAllMechanisms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78E80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetAITeamAttitudes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes");
		
		UAthenaCheatManager_ResetAITeamAttitudes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78E60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetAIExclusiveAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities");
		
		UAthenaCheatManager_ResetAIExclusiveAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78EC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetActiveStories
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetActiveStories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetActiveStories");
		
		UAthenaCheatManager_ResetActiveStories_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78EA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ResetAbilityAlwaysOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn");
		
		UAthenaCheatManager_ResetAbilityAlwaysOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78E40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RequestSmallPassiveAIShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip");
		
		UAthenaCheatManager_RequestSmallPassiveAIShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78E20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RequestSmallAggressiveAIShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip");
		
		UAthenaCheatManager_RequestSmallAggressiveAIShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78E00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RequestMysteriousNotesForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer");
		
		UAthenaCheatManager_RequestMysteriousNotesForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78DE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RequestLargePassiveAIShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip");
		
		UAthenaCheatManager_RequestLargePassiveAIShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78DC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RequestLargeAggressiveAIShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip");
		
		UAthenaCheatManager_RequestLargeAggressiveAIShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78DA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RequestCaptainedSessionCrewData
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RequestCaptainedSessionCrewData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestCaptainedSessionCrewData");
		
		UAthenaCheatManager_RequestCaptainedSessionCrewData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78D80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ReplenishShipWithDebugSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner");
		
		UAthenaCheatManager_ReplenishShipWithDebugSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78D60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ReplenishShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ReplenishShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReplenishShip");
		
		UAthenaCheatManager_ReplenishShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78CC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ShipActorIdConsoleString                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ReplaceShipWithSmallShip(const class FString& ShipActorIdConsoleString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip");
		
		UAthenaCheatManager_ReplaceShipWithSmallShip_Params params {};
		params.ShipActorIdConsoleString = ShipActorIdConsoleString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78CA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RepairShipAndClearInternalWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater");
		
		UAthenaCheatManager_RepairShipAndClearInternalWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78C80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RepairAndClearInternalWaterOnAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips");
		
		UAthenaCheatManager_RepairAndClearInternalWaterOnAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78BE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RenameTreasure
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InVendorName                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::RenameTreasure(const class FString& InVendorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RenameTreasure");
		
		UAthenaCheatManager_RenameTreasure_Params params {};
		params.InVendorName = InVendorName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78B40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveVoyageFromShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SourceAssetName                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::RemoveVoyageFromShip(const class FString& SourceAssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveVoyageFromShip");
		
		UAthenaCheatManager_RemoveVoyageFromShip_Params params {};
		params.SourceAssetName = SourceAssetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78B20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveSkeletonCurseEntitlement
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RemoveSkeletonCurseEntitlement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveSkeletonCurseEntitlement");
		
		UAthenaCheatManager_RemoveSkeletonCurseEntitlement_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78B00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RemovePetsFromAllPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers");
		
		UAthenaCheatManager_RemovePetsFromAllPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78AE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RemovePetFromPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer");
		
		UAthenaCheatManager_RemovePetFromPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78AC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RemoveLostShipmentsDebugging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging");
		
		UAthenaCheatManager_RemoveLostShipmentsDebugging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78AA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveLastAddedVoyageFromShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::RemoveLastAddedVoyageFromShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveLastAddedVoyageFromShip");
		
		UAthenaCheatManager_RemoveLastAddedVoyageFromShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78A20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            SlotIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::RemoveItemInSlot(int32_t SlotIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot");
		
		UAthenaCheatManager_RemoveItemInSlot_Params params {};
		params.SlotIndex = SlotIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78A00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveGhostCurseEntitlement
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RemoveGhostCurseEntitlement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveGhostCurseEntitlement");
		
		UAthenaCheatManager_RemoveGhostCurseEntitlement_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F789E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RemoveDebugPetSpawners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners");
		
		UAthenaCheatManager_RemoveDebugPetSpawners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F789C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RemoveDebugHealthStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage");
		
		UAthenaCheatManager_RemoveDebugHealthStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F789A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveAllFog
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RemoveAllFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveAllFog");
		
		UAthenaCheatManager_RemoveAllFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78860
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ContextName                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::RemoveAISpawnContext(const class FString& ContextName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext");
		
		UAthenaCheatManager_RemoveAISpawnContext_Params params {};
		params.ContextName = ContextName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78900
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RemoveActiveStory
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      StoryName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::RemoveActiveStory(const class FString& StoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveActiveStory");
		
		UAthenaCheatManager_RemoveActiveStory_Params params {};
		params.StoryName = StoryName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78840
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RefreshActiveStories
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::RefreshActiveStories()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RefreshActiveStories");
		
		UAthenaCheatManager_RefreshActiveStories_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F787C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::RebuildPirateFromSeed(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed");
		
		UAthenaCheatManager_RebuildPirateFromSeed_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F787A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ReallyScrambleMyGamertag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag");
		
		UAthenaCheatManager_ReallyScrambleMyGamertag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78780
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.QueryShipStocks
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::QueryShipStocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.QueryShipStocks");
		
		UAthenaCheatManager_QueryShipStocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F786A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLockByIndex
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      TargetActor                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            LockIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::Puzzle_UnlockLockByIndex(const class FString& TargetActor, int32_t LockIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLockByIndex");
		
		UAthenaCheatManager_Puzzle_UnlockLockByIndex_Params params {};
		params.TargetActor = TargetActor;
		params.LockIndex = LockIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F785A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLock
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class FString                                      TargetActor                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       Guid                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::Puzzle_UnlockLock(const class FString& TargetActor, const struct FGuid& Guid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockLock");
		
		UAthenaCheatManager_Puzzle_UnlockLock_Params params {};
		params.TargetActor = TargetActor;
		params.Guid = Guid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78500
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockAllLocks
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      TargetActor                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::Puzzle_UnlockAllLocks(const class FString& TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Puzzle_UnlockAllLocks");
		
		UAthenaCheatManager_Puzzle_UnlockAllLocks_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78460
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.Puzzle_ResetUnlock
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      TargetActor                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::Puzzle_ResetUnlock(const class FString& TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Puzzle_ResetUnlock");
		
		UAthenaCheatManager_Puzzle_ResetUnlock_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F783C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.Puzzle_ActivateAllLocks
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      TargetActor                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::Puzzle_ActivateAllLocks(const class FString& TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Puzzle_ActivateAllLocks");
		
		UAthenaCheatManager_Puzzle_ActivateAllLocks_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78340
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PushShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              FwdSpdInMetersPerSecond                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::PushShip(float FwdSpdInMetersPerSecond)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PushShip");
		
		UAthenaCheatManager_PushShip_Params params {};
		params.FwdSpdInMetersPerSecond = FwdSpdInMetersPerSecond;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78320
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PullLatestEmblemProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress");
		
		UAthenaCheatManager_PullLatestEmblemProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78280
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ProposeVoyageFromShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SourceAssetName                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ProposeVoyageFromShip(const class FString& SourceAssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ProposeVoyageFromShip");
		
		UAthenaCheatManager_ProposeVoyageFromShip_Params params {};
		params.SourceAssetName = SourceAssetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78260
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ProposeLastAddedVoyageFromShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::ProposeLastAddedVoyageFromShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ProposeLastAddedVoyageFromShip");
		
		UAthenaCheatManager_ProposeLastAddedVoyageFromShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78240
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ProceedToNextContestState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState");
		
		UAthenaCheatManager_ProceedToNextContestState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78220
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PrintTime
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PrintTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintTime");
		
		UAthenaCheatManager_PrintTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78200
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PrintNPCs
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PrintNPCs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintNPCs");
		
		UAthenaCheatManager_PrintNPCs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F781E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PrintAllNetworkActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors");
		
		UAthenaCheatManager_PrintAllNetworkActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F781C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PrintAISpawners
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PrintAISpawners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintAISpawners");
		
		UAthenaCheatManager_PrintAISpawners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F781A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PrintAISpawnContexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts");
		
		UAthenaCheatManager_PrintAISpawnContexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78180
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PrimeRitualTable
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PrimeRitualTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrimeRitualTable");
		
		UAthenaCheatManager_PrimeRitualTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78160
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PreventShipMotion
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PreventShipMotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PreventShipMotion");
		
		UAthenaCheatManager_PreventShipMotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78030
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PlayWorldSequence
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InReference                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::PlayWorldSequence(const class FString& InReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PlayWorldSequence");
		
		UAthenaCheatManager_PlayWorldSequence_Params params {};
		params.InReference = InReference;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F78010
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PlayLocalSequences
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::PlayLocalSequences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PlayLocalSequences");
		
		UAthenaCheatManager_PlayLocalSequences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F780D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::PlayerAnimationOverride(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride");
		
		UAthenaCheatManager_PlayerAnimationOverride_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77EF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InShipActorIdConsoleString                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCataloguePartIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCataloguePartCustomisationIndex                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::OverrideShipPartFromCatalogue(const class FString& InShipActorIdConsoleString, int32_t InCataloguePartIndex, int32_t InCataloguePartCustomisationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue");
		
		UAthenaCheatManager_OverrideShipPartFromCatalogue_Params params {};
		params.InShipActorIdConsoleString = InShipActorIdConsoleString;
		params.InCataloguePartIndex = InCataloguePartIndex;
		params.InCataloguePartCustomisationIndex = InCataloguePartCustomisationIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77ED0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::OpenSkeletonFortDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor");
		
		UAthenaCheatManager_OpenSkeletonFortDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77EB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnOwnShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::NudgeAllTrinketsOnOwnShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnOwnShip");
		
		UAthenaCheatManager_NudgeAllTrinketsOnOwnShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77E90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnAllShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::NudgeAllTrinketsOnAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.NudgeAllTrinketsOnAllShips");
		
		UAthenaCheatManager_NudgeAllTrinketsOnAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77E70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::MoveStormToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer");
		
		UAthenaCheatManager_MoveStormToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77DB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.MoveStormToLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              LocationX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LocationY                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::MoveStormToLocation(float LocationX, float LocationY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MoveStormToLocation");
		
		UAthenaCheatManager_MoveStormToLocation_Params params {};
		params.LocationX = LocationX;
		params.LocationY = LocationY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77D10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.MoveStormToIsland
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      IslandNameString                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::MoveStormToIsland(const class FString& IslandNameString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MoveStormToIsland");
		
		UAthenaCheatManager_MoveStormToIsland_Params params {};
		params.IslandNameString = IslandNameString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77CF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::MessageBoxOnGraphicsThreadTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest");
		
		UAthenaCheatManager_MessageBoxOnGraphicsThreadTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77CD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::MakeSharksBrainDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead");
		
		UAthenaCheatManager_MakeSharksBrainDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77CB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::MakeDebugPetSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner");
		
		UAthenaCheatManager_MakeDebugPetSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77C90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LogShipHierarchy
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::LogShipHierarchy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogShipHierarchy");
		
		UAthenaCheatManager_LogShipHierarchy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77C70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::LogServerShipHierarchy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy");
		
		UAthenaCheatManager_LogServerShipHierarchy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77C50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::LogAITeamAttitudes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes");
		
		UAthenaCheatManager_LogAITeamAttitudes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77BB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      RouteReferencePath                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::LockTradeRouteSelectionToSpecificRouteForMyCrew(const class FString& RouteReferencePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew");
		
		UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForMyCrew_Params params {};
		params.RouteReferencePath = RouteReferencePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77AB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FGuid                                       CrewId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FString                                      RouteReferencePath                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::LockTradeRouteSelectionToSpecificRouteForCrew(const struct FGuid& CrewId, const class FString& RouteReferencePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew");
		
		UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForCrew_Params params {};
		params.CrewId = CrewId;
		params.RouteReferencePath = RouteReferencePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77A90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::LocallyUnBreakLeg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg");
		
		UAthenaCheatManager_LocallyUnBreakLeg_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77A70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::LocallyDisableTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial");
		
		UAthenaCheatManager_LocallyDisableTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77A50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LoadMyShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::LoadMyShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LoadMyShip");
		
		UAthenaCheatManager_LoadMyShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77A30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LightLocalBraziers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::LightLocalBraziers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LightLocalBraziers");
		
		UAthenaCheatManager_LightLocalBraziers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F779B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Radius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::LightBraziersInRadius(float Radius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius");
		
		UAthenaCheatManager_LightBraziersInRadius_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77990
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LeaveFaction
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::LeaveFaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LeaveFaction");
		
		UAthenaCheatManager_LeaveFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F778F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LeaveAlliance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CrewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::LeaveAlliance(const class FString& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LeaveAlliance");
		
		UAthenaCheatManager_LeaveAlliance_Params params {};
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77850
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LayerSpawn
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      LayerAsset                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::LayerSpawn(const class FString& LayerAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LayerSpawn");
		
		UAthenaCheatManager_LayerSpawn_Params params {};
		params.LayerAsset = LayerAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77830
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LayerClearAll
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::LayerClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LayerClearAll");
		
		UAthenaCheatManager_LayerClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77790
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LayerClear
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      LayerAsset                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::LayerClear(const class FString& LayerAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LayerClear");
		
		UAthenaCheatManager_LayerClear_Params params {};
		params.LayerAsset = LayerAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F776D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.LaunchPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Velocity                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::LaunchPlayer(float Velocity, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LaunchPlayer");
		
		UAthenaCheatManager_LaunchPlayer_Params params {};
		params.Velocity = Velocity;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F776B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenSetTentaclesToOneHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth");
		
		UAthenaCheatManager_KrakenSetTentaclesToOneHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77690
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleThrowPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer");
		
		UAthenaCheatManager_KrakenAnimatedTentacleThrowPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77610
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Damage                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleTakeDamage(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage");
		
		UAthenaCheatManager_KrakenAnimatedTentacleTakeDamage_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F775F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleSwallowPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer");
		
		UAthenaCheatManager_KrakenAnimatedTentacleSwallowPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F775D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleSuckPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer");
		
		UAthenaCheatManager_KrakenAnimatedTentacleSuckPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F775B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentaclePowerSlamPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer");
		
		UAthenaCheatManager_KrakenAnimatedTentaclePowerSlamPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77590
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleKill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill");
		
		UAthenaCheatManager_KrakenAnimatedTentacleKill_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77570
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleIngestPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer");
		
		UAthenaCheatManager_KrakenAnimatedTentacleIngestPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77550
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleDropPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer");
		
		UAthenaCheatManager_KrakenAnimatedTentacleDropPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77530
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleDespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn");
		
		UAthenaCheatManager_KrakenAnimatedTentacleDespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77510
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleDefeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat");
		
		UAthenaCheatManager_KrakenAnimatedTentacleDefeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77470
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      HoldState                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::KrakenAnimatedTentacleChangePlayerHoldState(const class FString& HoldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState");
		
		UAthenaCheatManager_KrakenAnimatedTentacleChangePlayerHoldState_Params params {};
		params.HoldState = HoldState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77450
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KindleClosestShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::KindleClosestShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KindleClosestShip");
		
		UAthenaCheatManager_KindleClosestShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77430
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KindleAllShipFires
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::KindleAllShipFires()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KindleAllShipFires");
		
		UAthenaCheatManager_KindleAllShipFires_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77410
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillPlayer");
		
		UAthenaCheatManager_KillPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77370
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillCrew
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CrewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::KillCrew(const class FString& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillCrew");
		
		UAthenaCheatManager_KillCrew_Params params {};
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77350
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllSkeletons
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllSkeletons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllSkeletons");
		
		UAthenaCheatManager_KillAllSkeletons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77330
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllPlayers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllPlayers");
		
		UAthenaCheatManager_KillAllPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77310
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllOtherPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers");
		
		UAthenaCheatManager_KillAllOtherPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F772F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllOtherPlayerCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters");
		
		UAthenaCheatManager_KillAllOtherPlayerCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F772D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllDebugAISpawners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners");
		
		UAthenaCheatManager_KillAllDebugAISpawners_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F772B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllCrews
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllCrews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllCrews");
		
		UAthenaCheatManager_KillAllCrews_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77250
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllAI");
		
		UAthenaCheatManager_KillAllAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77290
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllAggressiveGhostShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips");
		
		UAthenaCheatManager_KillAllAggressiveGhostShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77270
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::KillAllAggressiveGhostShipEncounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters");
		
		UAthenaCheatManager_KillAllAggressiveGhostShipEncounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F771B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.JoinFaction
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      FactionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::JoinFaction(const class FString& FactionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.JoinFaction");
		
		UAthenaCheatManager_JoinFaction_Params params {};
		params.FactionName = FactionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F770B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.JoinAlliance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      OfferingCrew                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      AcceptingCrew                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::JoinAlliance(const class FString& OfferingCrew, const class FString& AcceptingCrew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.JoinAlliance");
		
		UAthenaCheatManager_JoinAlliance_Params params {};
		params.OfferingCrew = OfferingCrew;
		params.AcceptingCrew = AcceptingCrew;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76D10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IPGOverride
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        BodyShape                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::IPGOverride(const class FName& BodyShape, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGOverride");
		
		UAthenaCheatManager_IPGOverride_Params params {};
		params.BodyShape = BodyShape;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76C10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::IPGLoadWithoutClothing(const class FString& ActorIdString, const class FString& path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing");
		
		UAthenaCheatManager_IPGLoadWithoutClothing_Params params {};
		params.ActorIdString = ActorIdString;
		params.path = path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76B10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::IPGLoadWithClothing(const class FString& ActorIdString, const class FString& path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing");
		
		UAthenaCheatManager_IPGLoadWithClothing_Params params {};
		params.ActorIdString = ActorIdString;
		params.path = path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76A70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IPGLoad
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::IPGLoad(const class FString& path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGLoad");
		
		UAthenaCheatManager_IPGLoad_Params params {};
		params.path = path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77090
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.InvincibleEverything
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::InvincibleEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.InvincibleEverything");
		
		UAthenaCheatManager_InvincibleEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F77070
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::InterruptSicknessOnPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer");
		
		UAthenaCheatManager_InterruptSicknessOnPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76FE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::InfiniteGunAmmo(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo");
		
		UAthenaCheatManager_InfiniteGunAmmo_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76F20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IncrementTime
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Hours                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minutes                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::IncrementTime(int32_t Hours, int32_t Minutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IncrementTime");
		
		UAthenaCheatManager_IncrementTime_Params params {};
		params.Hours = Hours;
		params.Minutes = Minutes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76F00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IncrementFactionStreak
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::IncrementFactionStreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IncrementFactionStreak");
		
		UAthenaCheatManager_IncrementFactionStreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76EE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::IncrementDebugHealthStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage");
		
		UAthenaCheatManager_IncrementDebugHealthStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76E60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::IncreaseEmissaryCount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount");
		
		UAthenaCheatManager_IncreaseEmissaryCount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76E40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::IgniteShipAtPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation");
		
		UAthenaCheatManager_IgniteShipAtPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76E20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::IgniteLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer");
		
		UAthenaCheatManager_IgniteLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76E00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IgniteClosestShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::IgniteClosestShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IgniteClosestShip");
		
		UAthenaCheatManager_IgniteClosestShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76DE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::IgniteAllShipFires()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires");
		
		UAthenaCheatManager_IgniteAllShipFires_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76A50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueSuccess
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HuntersCryForceRescueSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueSuccess");
		
		UAthenaCheatManager_HuntersCryForceRescueSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76A30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueFail
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HuntersCryForceRescueFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HuntersCryForceRescueFail");
		
		UAthenaCheatManager_HuntersCryForceRescueFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76A10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HuntersCryDisableTimedFail
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HuntersCryDisableTimedFail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HuntersCryDisableTimedFail");
		
		UAthenaCheatManager_HuntersCryDisableTimedFail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F769F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HitRegSnapshotsToggleOnScreenStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsToggleOnScreenStatus");
		
		UAthenaCheatManager_HitRegSnapshotsToggleOnScreenStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F768D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowPreCorrectedCapsules
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               ShowPreCorrectedCapsules                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AffectAllSnapshots                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocalClientOnly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetShowPreCorrectedCapsules(bool ShowPreCorrectedCapsules, bool AffectAllSnapshots, bool LocalClientOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowPreCorrectedCapsules");
		
		UAthenaCheatManager_HitRegSnapshotsSetShowPreCorrectedCapsules_Params params {};
		params.ShowPreCorrectedCapsules = ShowPreCorrectedCapsules;
		params.AffectAllSnapshots = AffectAllSnapshots;
		params.LocalClientOnly = LocalClientOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F767B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowFullRewindData
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               ShowFullRewindData                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AffectAllSnapshots                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocalClientOnly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetShowFullRewindData(bool ShowFullRewindData, bool AffectAllSnapshots, bool LocalClientOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetShowFullRewindData");
		
		UAthenaCheatManager_HitRegSnapshotsSetShowFullRewindData_Params params {};
		params.ShowFullRewindData = ShowFullRewindData;
		params.AffectAllSnapshots = AffectAllSnapshots;
		params.LocalClientOnly = LocalClientOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76690
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               ShowSnapshots                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AffectAllSnapshots                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocalClientOnly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetDisplaySnapshots(bool ShowSnapshots, bool AffectAllSnapshots, bool LocalClientOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplaySnapshots");
		
		UAthenaCheatManager_HitRegSnapshotsSetDisplaySnapshots_Params params {};
		params.ShowSnapshots = ShowSnapshots;
		params.AffectAllSnapshots = AffectAllSnapshots;
		params.LocalClientOnly = LocalClientOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76570
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               ShowServerData                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AffectAllSnapshots                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocalClientOnly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetDisplayServerData(bool ShowServerData, bool AffectAllSnapshots, bool LocalClientOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayServerData");
		
		UAthenaCheatManager_HitRegSnapshotsSetDisplayServerData_Params params {};
		params.ShowServerData = ShowServerData;
		params.AffectAllSnapshots = AffectAllSnapshots;
		params.LocalClientOnly = LocalClientOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76450
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               ShowExplanations                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AffectAllSnapshots                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocalClientOnly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetDisplayDetailedExplanations(bool ShowExplanations, bool AffectAllSnapshots, bool LocalClientOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayDetailedExplanations");
		
		UAthenaCheatManager_HitRegSnapshotsSetDisplayDetailedExplanations_Params params {};
		params.ShowExplanations = ShowExplanations;
		params.AffectAllSnapshots = AffectAllSnapshots;
		params.LocalClientOnly = LocalClientOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76330
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               ShowClientData                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AffectAllSnapshots                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocalClientOnly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetDisplayAttackingClientData(bool ShowClientData, bool AffectAllSnapshots, bool LocalClientOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisplayAttackingClientData");
		
		UAthenaCheatManager_HitRegSnapshotsSetDisplayAttackingClientData_Params params {};
		params.ShowClientData = ShowClientData;
		params.AffectAllSnapshots = AffectAllSnapshots;
		params.LocalClientOnly = LocalClientOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76310
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetDisagreementModeToComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToComponents");
		
		UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F762F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetDisagreementModeToAllShots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToAllShots");
		
		UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToAllShots_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F762D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HitRegSnapshotsSetDisagreementModeToActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsSetDisagreementModeToActors");
		
		UAthenaCheatManager_HitRegSnapshotsSetDisagreementModeToActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76200
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               AffectAllSnapshots                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LocalClientOnly                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::HitRegSnapshotsResetVisibilitySettingsToDefault(bool AffectAllSnapshots, bool LocalClientOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsResetVisibilitySettingsToDefault");
		
		UAthenaCheatManager_HitRegSnapshotsResetVisibilitySettingsToDefault_Params params {};
		params.AffectAllSnapshots = AffectAllSnapshots;
		params.LocalClientOnly = LocalClientOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F761E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HitRegSnapshotsEnableSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsEnableSystem");
		
		UAthenaCheatManager_HitRegSnapshotsEnableSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F761C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HitRegSnapshotsDisableSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDisableSystem");
		
		UAthenaCheatManager_HitRegSnapshotsDisableSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F761A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HitRegSnapshotsDestroyAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSnapshotsDestroyAll");
		
		UAthenaCheatManager_HitRegSnapshotsDestroyAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76110
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HitRegSetPlayerProjectilesHitScan
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::HitRegSetPlayerProjectilesHitScan(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HitRegSetPlayerProjectilesHitScan");
		
		UAthenaCheatManager_HitRegSetPlayerProjectilesHitScan_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F760F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HideTaleDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HideTaleDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HideTaleDebug");
		
		UAthenaCheatManager_HideTaleDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F760D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HideEmissaryVoteIndicators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators");
		
		UAthenaCheatManager_HideEmissaryVoteIndicators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F760B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HideAllRomeBeacons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons");
		
		UAthenaCheatManager_HideAllRomeBeacons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76030
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthSet
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::HealthSet(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthSet");
		
		UAthenaCheatManager_HealthSet_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F76010
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthReset
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HealthReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthReset");
		
		UAthenaCheatManager_HealthReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75FF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HealthRegenResetToEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty");
		
		UAthenaCheatManager_HealthRegenResetToEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75F70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthRegenAdd
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::HealthRegenAdd(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthRegenAdd");
		
		UAthenaCheatManager_HealthRegenAdd_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75F50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::HealthContinuousStopWithTestReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason");
		
		UAthenaCheatManager_HealthContinuousStopWithTestReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75EB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::HealthContinuousStopWithReason(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason");
		
		UAthenaCheatManager_HealthContinuousStopWithReason_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75E30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::HealthContinuousStartWithTestReason(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason");
		
		UAthenaCheatManager_HealthContinuousStartWithTestReason_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75D40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::HealthContinuousStartWithReason(float Value, const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason");
		
		UAthenaCheatManager_HealthContinuousStartWithReason_Params params {};
		params.Value = Value;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75CC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HealthAdjust
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::HealthAdjust(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthAdjust");
		
		UAthenaCheatManager_HealthAdjust_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75C40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.HandInMegalodonSoulToRitualTable
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            SoulType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::HandInMegalodonSoulToRitualTable(int32_t SoulType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HandInMegalodonSoulToRitualTable");
		
		UAthenaCheatManager_HandInMegalodonSoulToRitualTable_Params params {};
		params.SoulType = SoulType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75C20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.God
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAthenaCheatManager::God()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.God");
		
		UAthenaCheatManager_God_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75C00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceStopAllPetsDanger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger");
		
		UAthenaCheatManager_ForceStopAllPetsDanger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75B10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ResponseType                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              UpdateThreatLocationTime                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceStartAllPetsDangerWithChangingThreatLocation(const class FString& ResponseType, float UpdateThreatLocationTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation");
		
		UAthenaCheatManager_ForceStartAllPetsDangerWithChangingThreatLocation_Params params {};
		params.ResponseType = ResponseType;
		params.UpdateThreatLocationTime = UpdateThreatLocationTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75A70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ResponseType                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceStartAllPetsDanger(const class FString& ResponseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger");
		
		UAthenaCheatManager_ForceStartAllPetsDanger_Params params {};
		params.ResponseType = ResponseType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75A50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceSkipTallTaleSteps_WaitAndCutscenes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes");
		
		UAthenaCheatManager_ForceSkipTallTaleSteps_WaitAndCutscenes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75A30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceRequestCampaignsFromServices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices");
		
		UAthenaCheatManager_ForceRequestCampaignsFromServices_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75970
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForcePetHangout
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FName                                        HangoutName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PositionIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForcePetHangout(const class FName& HangoutName, int32_t PositionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForcePetHangout");
		
		UAthenaCheatManager_ForcePetHangout_Params params {};
		params.HangoutName = HangoutName;
		params.PositionIndex = PositionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75950
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceOpenShop
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceOpenShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceOpenShop");
		
		UAthenaCheatManager_ForceOpenShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75880
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               FastMove                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               KeepCurrentLocation                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::ForceNPCOnSurfaceToMove(bool FastMove, bool KeepCurrentLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove");
		
		UAthenaCheatManager_ForceNPCOnSurfaceToMove_Params params {};
		params.FastMove = FastMove;
		params.KeepCurrentLocation = KeepCurrentLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F757C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            LoctationIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LoctationPointIndex                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceNPCOnSurfaceLocation(int32_t LoctationIndex, int32_t LoctationPointIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation");
		
		UAthenaCheatManager_ForceNPCOnSurfaceLocation_Params params {};
		params.LoctationIndex = LoctationIndex;
		params.LoctationPointIndex = LoctationPointIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75730
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               IsCurrentlyInDanger                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::ForceNPCOnShipIsCurrentlyInDanger(bool IsCurrentlyInDanger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger");
		
		UAthenaCheatManager_ForceNPCOnShipIsCurrentlyInDanger_Params params {};
		params.IsCurrentlyInDanger = IsCurrentlyInDanger;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F756B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMoveForward
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ScaleValue                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceLocalPlayerMoveForward(float ScaleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceLocalPlayerMoveForward");
		
		UAthenaCheatManager_ForceLocalPlayerMoveForward_Params params {};
		params.ScaleValue = ScaleValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75690
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceGarbageCollect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceGarbageCollect");
		
		UAthenaCheatManager_ForceGarbageCollect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75590
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceEmoteWithEmoteProp
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        EmoteIdentifier                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      EmotePropAssetLocation                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceEmoteWithEmoteProp(const class FName& EmoteIdentifier, const class FString& EmotePropAssetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceEmoteWithEmoteProp");
		
		UAthenaCheatManager_ForceEmoteWithEmoteProp_Params params {};
		params.EmoteIdentifier = EmoteIdentifier;
		params.EmotePropAssetLocation = EmotePropAssetLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F753F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescriptionAndEmoteProp
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        EmoteIdentifier                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      AudioDescription                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      EmotePropAssetLocation                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceEmoteWithDescriptionAndEmoteProp(const class FName& EmoteIdentifier, const class FString& DisplayName, const class FString& AudioDescription, const class FString& EmotePropAssetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescriptionAndEmoteProp");
		
		UAthenaCheatManager_ForceEmoteWithDescriptionAndEmoteProp_Params params {};
		params.EmoteIdentifier = EmoteIdentifier;
		params.DisplayName = DisplayName;
		params.AudioDescription = AudioDescription;
		params.EmotePropAssetLocation = EmotePropAssetLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75290
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        EmoteIdentifier                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      AudioDescription                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceEmoteWithDescription(const class FName& EmoteIdentifier, const class FString& DisplayName, const class FString& AudioDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription");
		
		UAthenaCheatManager_ForceEmoteWithDescription_Params params {};
		params.EmoteIdentifier = EmoteIdentifier;
		params.DisplayName = DisplayName;
		params.AudioDescription = AudioDescription;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75200
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceEmote
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        EmoteIdentifier                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceEmote(const class FName& EmoteIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceEmote");
		
		UAthenaCheatManager_ForceEmote_Params params {};
		params.EmoteIdentifier = EmoteIdentifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F751E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceCloseShop
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceCloseShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceCloseShop");
		
		UAthenaCheatManager_ForceCloseShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F750F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ResponseType                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              UpdateThreatLocationTime                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(const class FString& ResponseType, float UpdateThreatLocationTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation");
		
		UAthenaCheatManager_ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation_Params params {};
		params.ResponseType = ResponseType;
		params.UpdateThreatLocationTime = UpdateThreatLocationTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75050
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ResponseType                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ForceAllPetsDangerWithNoiseEvent(const class FString& ResponseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent");
		
		UAthenaCheatManager_ForceAllPetsDangerWithNoiseEvent_Params params {};
		params.ResponseType = ResponseType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75030
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceAggressiveGhostShipStartSinkingAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation");
		
		UAthenaCheatManager_ForceAggressiveGhostShipStartSinkingAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F75010
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceAggressiveGhostShipStartDisappearAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation");
		
		UAthenaCheatManager_ForceAggressiveGhostShipStartDisappearAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74FF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceAggressiveGhostShipStartAppearAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation");
		
		UAthenaCheatManager_ForceAggressiveGhostShipStartAppearAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74FD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ForceAggressiveGhostShipPortalJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump");
		
		UAthenaCheatManager_ForceAggressiveGhostShipPortalJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74FB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.Fly
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAthenaCheatManager::Fly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Fly");
		
		UAthenaCheatManager_Fly_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74EE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              NormalisedWaterAmount                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            KeelOverConfigIndex                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int32_t KeelOverConfigIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex");
		
		UAthenaCheatManager_FloodShipWithKeelOverIndex_Params params {};
		params.NormalisedWaterAmount = NormalisedWaterAmount;
		params.KeelOverConfigIndex = KeelOverConfigIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74E60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FloodShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              NormalisedWaterAmount                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::FloodShip(float NormalisedWaterAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FloodShip");
		
		UAthenaCheatManager_FloodShip_Params params {};
		params.NormalisedWaterAmount = NormalisedWaterAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74E40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireStartedCaptainedSessionEvent
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::FireStartedCaptainedSessionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireStartedCaptainedSessionEvent");
		
		UAthenaCheatManager_FireStartedCaptainedSessionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74D40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InNumSeason                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRewardsLevel                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InMultipleRewards                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::FireSeasonRewardEarnedMessage(int32_t InNumSeason, int32_t InRewardsLevel, bool InMultipleRewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage");
		
		UAthenaCheatManager_FireSeasonRewardEarnedMessage_Params params {};
		params.InNumSeason = InNumSeason;
		params.InRewardsLevel = InRewardsLevel;
		params.InMultipleRewards = InMultipleRewards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74B70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InNumSeason                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InPreviousProgress                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCurrentProgress                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCompletionTreshold                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InGoalType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InGoalCategory                                             (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::FireSeasonGoalProgressionMessage(int32_t InNumSeason, int32_t InPreviousProgress, int32_t InCurrentProgress, int32_t InCompletionTreshold, int32_t InGoalType, const class FString& InGoalCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage");
		
		UAthenaCheatManager_FireSeasonGoalProgressionMessage_Params params {};
		params.InNumSeason = InNumSeason;
		params.InPreviousProgress = InPreviousProgress;
		params.InCurrentProgress = InCurrentProgress;
		params.InCompletionTreshold = InCompletionTreshold;
		params.InGoalType = InGoalType;
		params.InGoalCategory = InGoalCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74A50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InNumSeason                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InGoalType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InGoalCategory                                             (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::FireSeasonGoalCompletionMessage(int32_t InNumSeason, int32_t InGoalType, const class FString& InGoalCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage");
		
		UAthenaCheatManager_FireSeasonGoalCompletionMessage_Params params {};
		params.InNumSeason = InNumSeason;
		params.InGoalType = InGoalType;
		params.InGoalCategory = InGoalCategory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74850
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InNumSeason                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLevel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTimeSpentInLevel                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTier                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTimeSpentInTier                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InTierCompleted                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InSeasonCompleted                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::FireLevelCompletionMessage(int32_t InNumSeason, int32_t InLevel, int32_t InTimeSpentInLevel, int32_t InTier, int32_t InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage");
		
		UAthenaCheatManager_FireLevelCompletionMessage_Params params {};
		params.InNumSeason = InNumSeason;
		params.InLevel = InLevel;
		params.InTimeSpentInLevel = InTimeSpentInLevel;
		params.InTier = InTier;
		params.InTimeSpentInTier = InTimeSpentInTier;
		params.InTierCompleted = InTierCompleted;
		params.InSeasonCompleted = InSeasonCompleted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74830
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::FireCreatorCrewSignedUpStat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat");
		
		UAthenaCheatManager_FireCreatorCrewSignedUpStat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F747B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InNumMinutes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::FireCreatorCrewMinutesViewedStat(int32_t InNumMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat");
		
		UAthenaCheatManager_FireCreatorCrewMinutesViewedStat_Params params {};
		params.InNumMinutes = InNumMinutes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74730
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InNumMinutes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::FireCreatorCrewMinutesStreamedStat(int32_t InNumMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat");
		
		UAthenaCheatManager_FireCreatorCrewMinutesStreamedStat_Params params {};
		params.InNumMinutes = InNumMinutes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F746B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            InNumViewers                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::FireCreatorCrewCurrentViewersStat(int32_t InNumViewers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat");
		
		UAthenaCheatManager_FireCreatorCrewCurrentViewersStat_Params params {};
		params.InNumViewers = InNumViewers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F745B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FindText
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Namespace                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::FindText(const class FString& Namespace, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FindText");
		
		UAthenaCheatManager_FindText_Params params {};
		params.Namespace = Namespace;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74590
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FillNearestShipWithTrinkets
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::FillNearestShipWithTrinkets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FillNearestShipWithTrinkets");
		
		UAthenaCheatManager_FillNearestShipWithTrinkets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74570
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::FakeMigrateBountyQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests");
		
		UAthenaCheatManager_FakeMigrateBountyQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74550
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ExitedStormShipEvent
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ExitedStormShipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ExitedStormShipEvent");
		
		UAthenaCheatManager_ExitedStormShipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F744B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EquipPirateTitle
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      PirateTitleType                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::EquipPirateTitle(const class FString& PirateTitleType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EquipPirateTitle");
		
		UAthenaCheatManager_EquipPirateTitle_Params params {};
		params.PirateTitleType = PirateTitleType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74490
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EquipCompassInLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout");
		
		UAthenaCheatManager_EquipCompassInLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74470
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnteredStormShipEvent
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EnteredStormShipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnteredStormShipEvent");
		
		UAthenaCheatManager_EnteredStormShipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74450
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EndDemoSession
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EndDemoSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EndDemoSession");
		
		UAthenaCheatManager_EndDemoSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74430
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EndCurrentCaptainedSession
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EndCurrentCaptainedSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EndCurrentCaptainedSession");
		
		UAthenaCheatManager_EndCurrentCaptainedSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F743A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::EnableVoiceChatMeteringForOutgoingSignals(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals");
		
		UAthenaCheatManager_EnableVoiceChatMeteringForOutgoingSignals_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74310
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::EnableVoiceChatMeteringForIncomingSignals(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals");
		
		UAthenaCheatManager_EnableVoiceChatMeteringForIncomingSignals_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F742F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableStoryServiceCheat
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EnableStoryServiceCheat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableStoryServiceCheat");
		
		UAthenaCheatManager_EnableStoryServiceCheat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74270
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableStormEffects
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		unsigned char                                      LockReason                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::EnableStormEffects(unsigned char LockReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableStormEffects");
		
		UAthenaCheatManager_EnableStormEffects_Params params {};
		params.LockReason = LockReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F741F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            TrueFalse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int32_t TrueFalse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay");
		
		UAthenaCheatManager_EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay_Params params {};
		params.TrueFalse = TrueFalse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74160
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableNTP
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::EnableNTP(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableNTP");
		
		UAthenaCheatManager_EnableNTP_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F740E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::EnableMermaidSpawning(int32_t Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning");
		
		UAthenaCheatManager_EnableMermaidSpawning_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F74060
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::EnableMermaidDeletion(int32_t Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion");
		
		UAthenaCheatManager_EnableMermaidDeletion_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73FD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::EnableHeadphoneMixing(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing");
		
		UAthenaCheatManager_EnableHeadphoneMixing_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73FB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableFactionDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EnableFactionDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableFactionDebug");
		
		UAthenaCheatManager_EnableFactionDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73F90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EnableEmergentSirenSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning");
		
		UAthenaCheatManager_EnableEmergentSirenSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73F70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EnableEmergentSharkSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning");
		
		UAthenaCheatManager_EnableEmergentSharkSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73F50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EnableConsoleLogging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging");
		
		UAthenaCheatManager_EnableConsoleLogging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73F30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera
	 * 		Flags  -> (Final, Exec, Native, Protected)
	 */
	void UAthenaCheatManager::EnableCinematicCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera");
		
		UAthenaCheatManager_EnableCinematicCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73EB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::EnableBeaconOnAllMermaids(int32_t Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids");
		
		UAthenaCheatManager_EnableBeaconOnAllMermaids_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73E90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EnableAllEmergentWaterSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning");
		
		UAthenaCheatManager_EnableAllEmergentWaterSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73E70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EnableAIBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour");
		
		UAthenaCheatManager_EnableAIBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73E50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.EmptyNearestShipOfTrinkets
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::EmptyNearestShipOfTrinkets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EmptyNearestShipOfTrinkets");
		
		UAthenaCheatManager_EmptyNearestShipOfTrinkets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73D60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DrawVideprinter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Id                                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Active                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::DrawVideprinter(const class FString& Id, bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawVideprinter");
		
		UAthenaCheatManager_DrawVideprinter_Params params {};
		params.Id = Id;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73CE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DrawTreasureDebug(int32_t Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug");
		
		UAthenaCheatManager_DrawTreasureDebug_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73C50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::DrawTemporaryLandmarkDebug(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug");
		
		UAthenaCheatManager_DrawTemporaryLandmarkDebug_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73BD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Range                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DrawNearbyAISpawnPointsRanged(float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged");
		
		UAthenaCheatManager_DrawNearbyAISpawnPointsRanged_Params params {};
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73BB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DrawNearbyAISpawnPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints");
		
		UAthenaCheatManager_DrawNearbyAISpawnPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73B90
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DownPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DownPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DownPlayer");
		
		UAthenaCheatManager_DownPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73B70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DownAllPlayers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DownAllPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DownAllPlayers");
		
		UAthenaCheatManager_DownAllPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73B50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DownAllOtherPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers");
		
		UAthenaCheatManager_DownAllOtherPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73B30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DownAllOtherPlayerCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters");
		
		UAthenaCheatManager_DownAllOtherPlayerCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73B10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DouseClosestShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::DouseClosestShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DouseClosestShip");
		
		UAthenaCheatManager_DouseClosestShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73AF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DouseAllShipFires
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::DouseAllShipFires()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DouseAllShipFires");
		
		UAthenaCheatManager_DouseAllShipFires_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73A50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DiveShipByActorId
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ShipActorIdString                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DiveShipByActorId(const class FString& ShipActorIdString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DiveShipByActorId");
		
		UAthenaCheatManager_DiveShipByActorId_Params params {};
		params.ShipActorIdString = ShipActorIdString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F739D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DisplaySpireLocationsDebug(int32_t Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug");
		
		UAthenaCheatManager_DisplaySpireLocationsDebug_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73930
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DisplaySingleEmblemProgress(const class FString& StatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress");
		
		UAthenaCheatManager_DisplaySingleEmblemProgress_Params params {};
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73910
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisplayServersideHitsAtPlayerPosWithDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults");
		
		UAthenaCheatManager_DisplayServersideHitsAtPlayerPosWithDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73810
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		uint32_t                                           NumSamplesPerDimension                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistanceBetweenSamples                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TestHeight                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos");
		
		UAthenaCheatManager_DisplayServersideHitsAtPlayerPos_Params params {};
		params.NumSamplesPerDimension = NumSamplesPerDimension;
		params.DistanceBetweenSamples = DistanceBetweenSamples;
		params.TestHeight = TestHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F737F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayServerFPS
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisplayServerFPS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayServerFPS");
		
		UAthenaCheatManager_DisplayServerFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73760
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland");
		
		UAthenaCheatManager_DisplayNonVagueNonUniqueLandmarksForIsland_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73740
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisplayLoadingScreenTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport");
		
		UAthenaCheatManager_DisplayLoadingScreenTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73720
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisplayLoadingScreenBoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot");
		
		UAthenaCheatManager_DisplayLoadingScreenBoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73700
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisplayLoadingScreenAdventure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure");
		
		UAthenaCheatManager_DisplayLoadingScreenAdventure_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F736E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisplayLandmarkValidTreasureLocationsForPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer");
		
		UAthenaCheatManager_DisplayLandmarkValidTreasureLocationsForPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F736C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisplayLandmarkRegions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions");
		
		UAthenaCheatManager_DisplayLandmarkRegions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F736A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisplayLandmarkNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames");
		
		UAthenaCheatManager_DisplayLandmarkNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73620
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DisplayFallDamageDebug(int32_t Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug");
		
		UAthenaCheatManager_DisplayFallDamageDebug_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73590
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Flag                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::DisplayDrunkenness(bool Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness");
		
		UAthenaCheatManager_DisplayDrunkenness_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73570
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DismissAllPickupPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints");
		
		UAthenaCheatManager_DismissAllPickupPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F734F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisableStormEffects
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		unsigned char                                      LockReason                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DisableStormEffects(unsigned char LockReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableStormEffects");
		
		UAthenaCheatManager_DisableStormEffects_Params params {};
		params.LockReason = LockReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F734D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisableEmergentSirenSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning");
		
		UAthenaCheatManager_DisableEmergentSirenSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F734B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisableEmergentSharkSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning");
		
		UAthenaCheatManager_DisableEmergentSharkSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73490
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisableConsoleLogging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging");
		
		UAthenaCheatManager_DisableConsoleLogging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73470
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera
	 * 		Flags  -> (Final, Exec, Native, Protected)
	 */
	void UAthenaCheatManager::DisableCinematicCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera");
		
		UAthenaCheatManager_DisableCinematicCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73450
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisableAllEmergentWaterSpawning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning");
		
		UAthenaCheatManager_DisableAllEmergentWaterSpawning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73430
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DisableAIBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour");
		
		UAthenaCheatManager_DisableAIBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73410
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DisableAIAbilities
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::DisableAIAbilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableAIAbilities");
		
		UAthenaCheatManager_DisableAIAbilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73310
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DioramaStartNearest
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      Spawner                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DioramaDesc                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DioramaStartNearest(const class FString& Spawner, const class FString& DioramaDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DioramaStartNearest");
		
		UAthenaCheatManager_DioramaStartNearest_Params params {};
		params.Spawner = Spawner;
		params.DioramaDesc = DioramaDesc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F731B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DioramaStart
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Spawner                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DioramaDesc                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DioramaStart(const class FString& ActorName, const class FString& Spawner, const class FString& DioramaDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DioramaStart");
		
		UAthenaCheatManager_DioramaStart_Params params {};
		params.ActorName = ActorName;
		params.Spawner = Spawner;
		params.DioramaDesc = DioramaDesc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73190
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DioramaKillAllDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug");
		
		UAthenaCheatManager_DioramaKillAllDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F730F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DestroyShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ShipActorIdConsoleString                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DestroyShip(const class FString& ShipActorIdConsoleString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyShip");
		
		UAthenaCheatManager_DestroyShip_Params params {};
		params.ShipActorIdConsoleString = ShipActorIdConsoleString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F730D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DestroyNearestDebugReapersChestMarker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker");
		
		UAthenaCheatManager_DestroyNearestDebugReapersChestMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F730B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DestroyMyShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::DestroyMyShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyMyShip");
		
		UAthenaCheatManager_DestroyMyShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73090
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DestroyKraken
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DestroyKraken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyKraken");
		
		UAthenaCheatManager_DestroyKraken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73070
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DestroyAllTreasureChests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests");
		
		UAthenaCheatManager_DestroyAllTreasureChests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73050
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DestroyAllTinySharks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks");
		
		UAthenaCheatManager_DestroyAllTinySharks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73030
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DestroyAllSirenStatues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues");
		
		UAthenaCheatManager_DestroyAllSirenStatues_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F73010
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DestroyAllShips
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::DestroyAllShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllShips");
		
		UAthenaCheatManager_DestroyAllShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72F30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AITypeString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumToDespawn                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DespawnNumberOfAI(const class FString& AITypeString, int32_t NumToDespawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI");
		
		UAthenaCheatManager_DespawnNumberOfAI_Params params {};
		params.AITypeString = AITypeString;
		params.NumToDespawn = NumToDespawn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72F10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DespawnFirstAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DespawnFirstAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnFirstAI");
		
		UAthenaCheatManager_DespawnFirstAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72EF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DespawnAllAggressiveGhostShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips");
		
		UAthenaCheatManager_DespawnAllAggressiveGhostShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72E50
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DespawnAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      AITypeString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DespawnAI(const class FString& AITypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnAI");
		
		UAthenaCheatManager_DespawnAI_Params params {};
		params.AITypeString = AITypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72E30
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DeleteVoyageHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory");
		
		UAthenaCheatManager_DeleteVoyageHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72E10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DeleteAllMermaids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids");
		
		UAthenaCheatManager_DeleteAllMermaids_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72DF0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DecrementFactionStreak
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DecrementFactionStreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DecrementFactionStreak");
		
		UAthenaCheatManager_DecrementFactionStreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72DD0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DecrementDebugHealthStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage");
		
		UAthenaCheatManager_DecrementDebugHealthStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72DB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DebugIslandDelta
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DebugIslandDelta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DebugIslandDelta");
		
		UAthenaCheatManager_DebugIslandDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72D00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FString                                      FortName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DeactivateSkellyFort(const class FString& FortName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort");
		
		UAthenaCheatManager_DeactivateSkellyFort_Params params {};
		params.FortName = FortName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72CE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DeactivateEmissaryFlagCompany()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany");
		
		UAthenaCheatManager_DeactivateEmissaryFlagCompany_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72CC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::DeactivateDeathEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect");
		
		UAthenaCheatManager_DeactivateDeathEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72A40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraLocationX                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraLocationY                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraLocationZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraForwardDirectionX                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraForwardDirectionY                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraForwardDirectionZ                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DamageShipFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor");
		
		UAthenaCheatManager_DamageShipFromRemoteActor_Params params {};
		params.ActorIdString = ActorIdString;
		params.Strength = Strength;
		params.CameraLocationX = CameraLocationX;
		params.CameraLocationY = CameraLocationY;
		params.CameraLocationZ = CameraLocationZ;
		params.CameraForwardDirectionX = CameraForwardDirectionX;
		params.CameraForwardDirectionY = CameraForwardDirectionY;
		params.CameraForwardDirectionZ = CameraForwardDirectionZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F729C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DamageShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Strength                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DamageShip(float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamageShip");
		
		UAthenaCheatManager_DamageShip_Params params {};
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72740
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraLocationX                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraLocationY                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraLocationZ                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraForwardDirectionX                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraForwardDirectionY                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraForwardDirectionZ                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DamagePlayerFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor");
		
		UAthenaCheatManager_DamagePlayerFromRemoteActor_Params params {};
		params.ActorIdString = ActorIdString;
		params.Strength = Strength;
		params.CameraLocationX = CameraLocationX;
		params.CameraLocationY = CameraLocationY;
		params.CameraLocationZ = CameraLocationZ;
		params.CameraForwardDirectionX = CameraForwardDirectionX;
		params.CameraForwardDirectionY = CameraForwardDirectionY;
		params.CameraForwardDirectionZ = CameraForwardDirectionZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F726C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.DamagePlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Strength                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::DamagePlayer(float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamagePlayer");
		
		UAthenaCheatManager_DamagePlayer_Params params {};
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F726A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CureAllAilings
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::CureAllAilings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CureAllAilings");
		
		UAthenaCheatManager_CureAllAilings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72680
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CreateDebugReapersChestMarkerAtPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation");
		
		UAthenaCheatManager_CreateDebugReapersChestMarkerAtPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72580
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      SpawnerAssetName                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      LocationActorName                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::CreateDebugAISpawnerAt(const class FString& SpawnerAssetName, const class FString& LocationActorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt");
		
		UAthenaCheatManager_CreateDebugAISpawnerAt_Params params {};
		params.SpawnerAssetName = SpawnerAssetName;
		params.LocationActorName = LocationActorName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F724E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      SpawnerAssetName                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::CreateDebugAISpawner(const class FString& SpawnerAssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner");
		
		UAthenaCheatManager_CreateDebugAISpawner_Params params {};
		params.SpawnerAssetName = SpawnerAssetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F724C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CreateCaptainsLogForCrew
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CreateCaptainsLogForCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CreateCaptainsLogForCrew");
		
		UAthenaCheatManager_CreateCaptainsLogForCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F724A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CoordinatedKrakenToggleAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI");
		
		UAthenaCheatManager_CoordinatedKrakenToggleAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72400
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActionName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::CoordinatedKrakenRequestAction(const class FString& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction");
		
		UAthenaCheatManager_CoordinatedKrakenRequestAction_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72380
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::CoordinatedKrakenEnableDebugging(int32_t Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging");
		
		UAthenaCheatManager_CoordinatedKrakenEnableDebugging_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72360
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ContextualPromptCountersToggleDebugDraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw");
		
		UAthenaCheatManager_ContextualPromptCountersToggleDebugDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72340
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CompleteVoyage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CompleteVoyage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteVoyage");
		
		UAthenaCheatManager_CompleteVoyage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72320
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CompleteCurrentChecklistMap
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CompleteCurrentChecklistMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteCurrentChecklistMap");
		
		UAthenaCheatManager_CompleteCurrentChecklistMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72300
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CompleteAllActivePuzzleVaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults");
		
		UAthenaCheatManager_CompleteAllActivePuzzleVaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F722E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CompleteActiveQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests");
		
		UAthenaCheatManager_CompleteActiveQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F722C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CloseSkeletonFortDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor");
		
		UAthenaCheatManager_CloseSkeletonFortDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F722A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CloseLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen");
		
		UAthenaCheatManager_CloseLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72280
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearWorldSequences
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearWorldSequences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearWorldSequences");
		
		UAthenaCheatManager_ClearWorldSequences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72260
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearVoiceChatMeters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters");
		
		UAthenaCheatManager_ClearVoiceChatMeters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72240
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearStoryDisplayFilter
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearStoryDisplayFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearStoryDisplayFilter");
		
		UAthenaCheatManager_ClearStoryDisplayFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72220
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearSlowMotionOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride");
		
		UAthenaCheatManager_ClearSlowMotionOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72200
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearShipVoyages
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 */
	void UAthenaCheatManager::ClearShipVoyages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearShipVoyages");
		
		UAthenaCheatManager_ClearShipVoyages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F721E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearRitualTableRequiredPlayersOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearRitualTableRequiredPlayersOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearRitualTableRequiredPlayersOverride");
		
		UAthenaCheatManager_ClearRitualTableRequiredPlayersOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F721C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearGrogSecondary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary");
		
		UAthenaCheatManager_ClearGrogSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F721A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearGlitterbeardRequiredPlayersOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride");
		
		UAthenaCheatManager_ClearGlitterbeardRequiredPlayersOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72180
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearDebugStormLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation");
		
		UAthenaCheatManager_ClearDebugStormLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72160
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearCampaignOverrides
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearCampaignOverrides()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearCampaignOverrides");
		
		UAthenaCheatManager_ClearCampaignOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F720C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearAxisBinding
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InBindingName                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ClearAxisBinding(const class FString& InBindingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearAxisBinding");
		
		UAthenaCheatManager_ClearAxisBinding_Params params {};
		params.InBindingName = InBindingName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F720A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ClearAIAbilityTimeMultipliers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers");
		
		UAthenaCheatManager_ClearAIAbilityTimeMultipliers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72080
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CheckLandmarkValidTreasureLocationsAtPlayerPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos");
		
		UAthenaCheatManager_CheckLandmarkValidTreasureLocationsAtPlayerPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72060
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CheckLandmarkRelativeToIslandCalculation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation");
		
		UAthenaCheatManager_CheckLandmarkRelativeToIslandCalculation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72040
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CapsizeShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CapsizeShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CapsizeShip");
		
		UAthenaCheatManager_CapsizeShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72020
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelVoyage
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelVoyage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelVoyage");
		
		UAthenaCheatManager_CancelVoyage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F72000
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelTale
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelTale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelTale");
		
		UAthenaCheatManager_CancelTale_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71FE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelInvasionMatchmakingCooldown
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelInvasionMatchmakingCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelInvasionMatchmakingCooldown");
		
		UAthenaCheatManager_CancelInvasionMatchmakingCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71FC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelInitialMatchmakingCooldown
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelInitialMatchmakingCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelInitialMatchmakingCooldown");
		
		UAthenaCheatManager_CancelInitialMatchmakingCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71FA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelEmergentVoyages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages");
		
		UAthenaCheatManager_CancelEmergentVoyages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71F00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelDebugInvasion
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      InCrewId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::CancelDebugInvasion(const class FString& InCrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelDebugInvasion");
		
		UAthenaCheatManager_CancelDebugInvasion_Params params {};
		params.InCrewId = InCrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71EE0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelCurrentMatchmakingCooldownForAllCrews
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelCurrentMatchmakingCooldownForAllCrews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelCurrentMatchmakingCooldownForAllCrews");
		
		UAthenaCheatManager_CancelCurrentMatchmakingCooldownForAllCrews_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71EC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelAllDebugInvasions
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelAllDebugInvasions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelAllDebugInvasions");
		
		UAthenaCheatManager_CancelAllDebugInvasions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71EA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelAllCrewVoyages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages");
		
		UAthenaCheatManager_CancelAllCrewVoyages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71E80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::CancelActiveAIShipEncounters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters");
		
		UAthenaCheatManager_CancelActiveAIShipEncounters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71E60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::BuryNearestBuriable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable");
		
		UAthenaCheatManager_BuryNearestBuriable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71DC0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.BuryItem
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      NameOfItemToBury                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::BuryItem(const class FString& NameOfItemToBury)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BuryItem");
		
		UAthenaCheatManager_BuryItem_Params params {};
		params.NameOfItemToBury = NameOfItemToBury;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71DA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.BreakLeg
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::BreakLeg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BreakLeg");
		
		UAthenaCheatManager_BreakLeg_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71D10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::BlockMigrationForPlayer(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer");
		
		UAthenaCheatManager_BlockMigrationForPlayer_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71C20
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      StatusIdentifier                                           (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ApplyStatusToPlayer(const class FString& StatusIdentifier, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer");
		
		UAthenaCheatManager_ApplyStatusToPlayer_Params params {};
		params.StatusIdentifier = StatusIdentifier;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71BA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Damage                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ApplyDamageToAllDamageZones(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones");
		
		UAthenaCheatManager_ApplyDamageToAllDamageZones_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71B00
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CannonballTypeString                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ApplyCursedCannonballStatusToShip(const class FString& CannonballTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip");
		
		UAthenaCheatManager_ApplyCursedCannonballStatusToShip_Params params {};
		params.CannonballTypeString = CannonballTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71A60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CannonballTypeString                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ApplyCursedCannonballStatusToPlayer(const class FString& CannonballTypeString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer");
		
		UAthenaCheatManager_ApplyCursedCannonballStatusToPlayer_Params params {};
		params.CannonballTypeString = CannonballTypeString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F719D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               CanTeleport                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::AllowTeleportWithItems(bool CanTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems");
		
		UAthenaCheatManager_AllowTeleportWithItems_Params params {};
		params.CanTeleport = CanTeleport;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F719B0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AllowShipMotion
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AllowShipMotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AllowShipMotion");
		
		UAthenaCheatManager_AllowShipMotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71910
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      TunnelDescAssetPath                                        (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AllocatePortalToTunnelOfTheDamned(const class FString& TunnelDescAssetPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned");
		
		UAthenaCheatManager_AllocatePortalToTunnelOfTheDamned_Params params {};
		params.TunnelDescAssetPath = TunnelDescAssetPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F718F0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AllJoinAlliance
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AllJoinAlliance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AllJoinAlliance");
		
		UAthenaCheatManager_AllJoinAlliance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70A60
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AIPlayerShip
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AIPlayerShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AIPlayerShip");
		
		UAthenaCheatManager_AIPlayerShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F718D0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AggressiveGhostShipRebuildSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline");
		
		UAthenaCheatManager_AggressiveGhostShipRebuildSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F716C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AdjustGhostShader
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InStartingAmount                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InTargetAmount                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InVengeanceStartingAmount                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InVengeanceTargetAmount                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InDelayBeforeStart                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InBlendDuration                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AdjustGhostShader");
		
		UAthenaCheatManager_AdjustGhostShader_Params params {};
		params.Enabled = Enabled;
		params.InStartingAmount = InStartingAmount;
		params.InTargetAmount = InTargetAmount;
		params.InVengeanceStartingAmount = InVengeanceStartingAmount;
		params.InVengeanceTargetAmount = InVengeanceTargetAmount;
		params.InDelayBeforeStart = InDelayBeforeStart;
		params.InBlendDuration = InBlendDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71620
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddVoyageToShip
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SourceAssetName                                            (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddVoyageToShip(const class FString& SourceAssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddVoyageToShip");
		
		UAthenaCheatManager_AddVoyageToShip_Params params {};
		params.SourceAssetName = SourceAssetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71600
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation");
		
		UAthenaCheatManager_AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F715E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation");
		
		UAthenaCheatManager_AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F715C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AddTradeRouteClueMarkToMapAtCurrentLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation");
		
		UAthenaCheatManager_AddTradeRouteClueMarkToMapAtCurrentLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F715A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddTornMapPiece
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AddTornMapPiece()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddTornMapPiece");
		
		UAthenaCheatManager_AddTornMapPiece_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F714A0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddShipToCrew
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CrewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddShipToCrew(const class FString& ActorIdString, const class FString& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddShipToCrew");
		
		UAthenaCheatManager_AddShipToCrew_Params params {};
		params.ActorIdString = ActorIdString;
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71480
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AddRandomPetForAllPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers");
		
		UAthenaCheatManager_AddRandomPetForAllPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71380
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ActorIdString                                              (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CrewId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddPlayerToCrew(const class FString& ActorIdString, const class FString& CrewId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew");
		
		UAthenaCheatManager_AddPlayerToCrew_Params params {};
		params.ActorIdString = ActorIdString;
		params.CrewId = CrewId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F712C0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddPetForPlayer
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            PetTypeIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PetPartIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddPetForPlayer(int32_t PetTypeIndex, int32_t PetPartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddPetForPlayer");
		
		UAthenaCheatManager_AddPetForPlayer_Params params {};
		params.PetTypeIndex = PetTypeIndex;
		params.PetPartIndex = PetPartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71200
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            PetTypeIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PetPartIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddPetForAllPlayers(int32_t PetTypeIndex, int32_t PetPartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers");
		
		UAthenaCheatManager_AddPetForAllPlayers_Params params {};
		params.PetTypeIndex = PetTypeIndex;
		params.PetPartIndex = PetPartIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F711E0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddNoParameterEventLogEntryToCaptainsLog
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AddNoParameterEventLogEntryToCaptainsLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddNoParameterEventLogEntryToCaptainsLog");
		
		UAthenaCheatManager_AddNoParameterEventLogEntryToCaptainsLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71030
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddMysteriousNote
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      NoteType                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NoteTitle                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NoteBody                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      CompletionStrings                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddMysteriousNote(const class FString& NoteType, const class FString& NoteTitle, const class FString& NoteBody, const class FString& CompletionStrings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddMysteriousNote");
		
		UAthenaCheatManager_AddMysteriousNote_Params params {};
		params.NoteType = NoteType;
		params.NoteTitle = NoteTitle;
		params.NoteBody = NoteBody;
		params.CompletionStrings = CompletionStrings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F71010
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddLongEventLogEntryToCaptainsLog
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::AddLongEventLogEntryToCaptainsLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddLongEventLogEntryToCaptainsLog");
		
		UAthenaCheatManager_AddLongEventLogEntryToCaptainsLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70F70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddInactiveCampaignOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CampaignName                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddInactiveCampaignOverride(const class FString& CampaignName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddInactiveCampaignOverride");
		
		UAthenaCheatManager_AddInactiveCampaignOverride_Params params {};
		params.CampaignName = CampaignName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70EA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddDrunkenness
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		int32_t                                            DrunkennessType                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DrunkennessChange                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddDrunkenness(int32_t DrunkennessType, float DrunkennessChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddDrunkenness");
		
		UAthenaCheatManager_AddDrunkenness_Params params {};
		params.DrunkennessType = DrunkennessType;
		params.DrunkennessChange = DrunkennessChange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70C70
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddAISpawnContext
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      ContextName                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddAISpawnContext(const class FString& ContextName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddAISpawnContext");
		
		UAthenaCheatManager_AddAISpawnContext_Params params {};
		params.ContextName = ContextName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70DB0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddActiveStory
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      StoryName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               AddIfNonExistentStory                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAthenaCheatManager::AddActiveStory(const class FString& StoryName, bool AddIfNonExistentStory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddActiveStory");
		
		UAthenaCheatManager_AddActiveStory_Params params {};
		params.StoryName = StoryName;
		params.AddIfNonExistentStory = AddIfNonExistentStory;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70D10
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.AddActiveCampaignOverride
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CampaignName                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::AddActiveCampaignOverride(const class FString& CampaignName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddActiveCampaignOverride");
		
		UAthenaCheatManager_AddActiveCampaignOverride_Params params {};
		params.CampaignName = CampaignName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70B40
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort
	 * 		Flags  -> (Final, Exec, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class FString                                      FortEventName                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		class FString                                      FortName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ActivateSkellyFort(const class FString& FortEventName, const class FString& FortName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort");
		
		UAthenaCheatManager_ActivateSkellyFort_Params params {};
		params.FortEventName = FortEventName;
		params.FortName = FortName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70AA0
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		class FString                                      CompanyId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAthenaCheatManager::ActivateEmissaryFlagCompany(const class FString& CompanyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany");
		
		UAthenaCheatManager_ActivateEmissaryFlagCompany_Params params {};
		params.CompanyId = CompanyId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03F70A80
	 * 		Name   -> Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UAthenaCheatManager::ActivateDebugTeleportationDestinationService()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService");
		
		UAthenaCheatManager_ActivateDebugTeleportationDestinationService_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAthenaCheatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAthenaCheatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaCheat.AthenaCheatManager");
		return ptr;
	}

}


