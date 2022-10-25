#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass 00_ActionParent.00_ActionParent_C
	 * Size -> 0x0001 (FullSize[0x01A9] - InheritedSize[0x01A8])
	 */
	class U00_ActionParent_C : public UGOAPAction
	{
	public:
		bool                                                       ActionRunning;                                           // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CheckLineOfSightForShooting(float ChanceToStillShootIfNoLOS, bool* IsAbleToShoot);
		void GetTotalMissRate(float Modifier_Amount, float* MissRate);
		void StopRunning_IfAlreadyRunning();
		void StartRunning_IfNotAlreadyRunning();
		void StopCrouching_IfAlreadyCrouching();
		void StartCrouching_IfNotAlreadyCrouching();
		void isGroupAiWithValidCaptainMoveToLoc(bool* CaptainWithValidLocation, struct FVector* MoveToLocation);
		void Group_MoveWithCaptain();
		void SetGroupTargetSameAsCaptain(bool* Success);
		void isAGroupAiWithAliveCaptain(bool* isGroupAiWithAliveCaptain);
		void SetActionRunning(bool ActionRunning);
		void IsActionRunning(bool* IsActionRunning);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
