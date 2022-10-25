#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BPI_Spiderant.BPI_Spiderant_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Spiderant_C : public UInterface
	{
	public:
		void Spiderant_TargetChanged(class AActor* TargetActor);
		void Spiderant_LeapTrailOff();
		void Spiderant_LeapTrailOn();
		void Spiderant_SetCocoonProj();
		void Spiderant_PhaseLockVulnerable();
		void Spiderant_PhaseLockImmune();
		void Spiderant_RollChargeCleanUp();
		void Spiderant_KingDeathYellStop();
		void Spiderant_EnrageTransformEnd();
		void Spiderant_KingDeathYellStart();
		void Spiderant_ThrowWebCocoon();
		void Spiderant_StartBurrowDig();
		void Spiderant_BurrowExit_Burst();
		void Spiderant_QueenDeathSpawn();
		void Spiderant_QueenStompSummon4(const struct FVector& SummonLocation);
		void Spiderant_ThrowWebBallSmallStraight();
		void Spiderant_ThrowBallTiny();
		void Spiderant_WebBeamYankReset();
		void Spiderant_BurrowExit();
		void Spiderant_BurrowStartDistanceCheck();
		void Spiderant_WebBeamThrow();
		void Spiderant_WebBeamDetach();
		void Spiderant_WebBeamYank(class AActor* WhoToYank);
		void Spiderant_KingDeathThrowStop();
		void Spiderant_KingDeathThrowStart(bool AbdomenGone);
		void Spiderant_KingDeathThrow(bool AbdomenGone);
		void Spiderant_ThrowSmallWebBallSpread();
		void Spiderant_ThrowAiExplosive();
		void Spiderant_SummonAiExplosive();
		void Spiderant_QueenStompSummonRight(const struct FVector& SummonLocation);
		void Spiderant_QueenStompSummonLeft(const struct FVector& SummonLocation);
		void Spiderant_MeleeAttack_OverTimeOneHit();
		void Spiderant_LeapAttackBig();
		void Spiderant_ClearLeapTicket();
		void Spiderant_Burrowing();
		void Spiderant_Reinforce();
		void Spiderant_LeapAttack();
		void Spiderant_MeleeAttack_JumpStrike();
		void Spiderant_StartEnrage();
		void Spiderant_AbodomenDeath();
		void Spiderant_ReleaseSurroundWeb();
		void Spiderant_MeleeAttack_Simple();
		void Spiderant_QueenStompSummon(const struct FVector& SummonLocation);
		void Spiderant_ThrowWebBallLarge();
		void Spiderant_SpawnWebBallLarge();
		void Spiderant_ThrowWebBallBounce(bool bIsDirectThrow);
		void Spiderant_RollChargeStrike();
		void Spiderant_RollChargeMiss();
		void Spiderant_RollChargeStart();
		void Spiderant_ThrowWebBall();
		void Spiderant_SetEnrangedState();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
