#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_TargetChanged
	 */
	struct UBPI_Spiderant_C_Spiderant_TargetChanged_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_LeapTrailOff
	 */
	struct UBPI_Spiderant_C_Spiderant_LeapTrailOff_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_LeapTrailOn
	 */
	struct UBPI_Spiderant_C_Spiderant_LeapTrailOn_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_SetCocoonProj
	 */
	struct UBPI_Spiderant_C_Spiderant_SetCocoonProj_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_PhaseLockVulnerable
	 */
	struct UBPI_Spiderant_C_Spiderant_PhaseLockVulnerable_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_PhaseLockImmune
	 */
	struct UBPI_Spiderant_C_Spiderant_PhaseLockImmune_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_RollChargeCleanUp
	 */
	struct UBPI_Spiderant_C_Spiderant_RollChargeCleanUp_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_KingDeathYellStop
	 */
	struct UBPI_Spiderant_C_Spiderant_KingDeathYellStop_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_EnrageTransformEnd
	 */
	struct UBPI_Spiderant_C_Spiderant_EnrageTransformEnd_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_KingDeathYellStart
	 */
	struct UBPI_Spiderant_C_Spiderant_KingDeathYellStart_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ThrowWebCocoon
	 */
	struct UBPI_Spiderant_C_Spiderant_ThrowWebCocoon_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_StartBurrowDig
	 */
	struct UBPI_Spiderant_C_Spiderant_StartBurrowDig_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_BurrowExit_Burst
	 */
	struct UBPI_Spiderant_C_Spiderant_BurrowExit_Burst_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_QueenDeathSpawn
	 */
	struct UBPI_Spiderant_C_Spiderant_QueenDeathSpawn_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_QueenStompSummon4
	 */
	struct UBPI_Spiderant_C_Spiderant_QueenStompSummon4_Params
	{
	public:
		struct FVector                                             SummonLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ThrowWebBallSmallStraight
	 */
	struct UBPI_Spiderant_C_Spiderant_ThrowWebBallSmallStraight_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ThrowBallTiny
	 */
	struct UBPI_Spiderant_C_Spiderant_ThrowBallTiny_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_WebBeamYankReset
	 */
	struct UBPI_Spiderant_C_Spiderant_WebBeamYankReset_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_BurrowExit
	 */
	struct UBPI_Spiderant_C_Spiderant_BurrowExit_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_BurrowStartDistanceCheck
	 */
	struct UBPI_Spiderant_C_Spiderant_BurrowStartDistanceCheck_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_WebBeamThrow
	 */
	struct UBPI_Spiderant_C_Spiderant_WebBeamThrow_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_WebBeamDetach
	 */
	struct UBPI_Spiderant_C_Spiderant_WebBeamDetach_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_WebBeamYank
	 */
	struct UBPI_Spiderant_C_Spiderant_WebBeamYank_Params
	{
	public:
		class AActor*                                              WhoToYank;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_KingDeathThrowStop
	 */
	struct UBPI_Spiderant_C_Spiderant_KingDeathThrowStop_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_KingDeathThrowStart
	 */
	struct UBPI_Spiderant_C_Spiderant_KingDeathThrowStart_Params
	{
	public:
		bool                                                       AbdomenGone;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_KingDeathThrow
	 */
	struct UBPI_Spiderant_C_Spiderant_KingDeathThrow_Params
	{
	public:
		bool                                                       AbdomenGone;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ThrowSmallWebBallSpread
	 */
	struct UBPI_Spiderant_C_Spiderant_ThrowSmallWebBallSpread_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ThrowAiExplosive
	 */
	struct UBPI_Spiderant_C_Spiderant_ThrowAiExplosive_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_SummonAiExplosive
	 */
	struct UBPI_Spiderant_C_Spiderant_SummonAiExplosive_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_QueenStompSummonRight
	 */
	struct UBPI_Spiderant_C_Spiderant_QueenStompSummonRight_Params
	{
	public:
		struct FVector                                             SummonLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_QueenStompSummonLeft
	 */
	struct UBPI_Spiderant_C_Spiderant_QueenStompSummonLeft_Params
	{
	public:
		struct FVector                                             SummonLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_MeleeAttack_OverTimeOneHit
	 */
	struct UBPI_Spiderant_C_Spiderant_MeleeAttack_OverTimeOneHit_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_LeapAttackBig
	 */
	struct UBPI_Spiderant_C_Spiderant_LeapAttackBig_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ClearLeapTicket
	 */
	struct UBPI_Spiderant_C_Spiderant_ClearLeapTicket_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_Burrowing
	 */
	struct UBPI_Spiderant_C_Spiderant_Burrowing_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_Reinforce
	 */
	struct UBPI_Spiderant_C_Spiderant_Reinforce_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_LeapAttack
	 */
	struct UBPI_Spiderant_C_Spiderant_LeapAttack_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_MeleeAttack_JumpStrike
	 */
	struct UBPI_Spiderant_C_Spiderant_MeleeAttack_JumpStrike_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_StartEnrage
	 */
	struct UBPI_Spiderant_C_Spiderant_StartEnrage_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_AbodomenDeath
	 */
	struct UBPI_Spiderant_C_Spiderant_AbodomenDeath_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ReleaseSurroundWeb
	 */
	struct UBPI_Spiderant_C_Spiderant_ReleaseSurroundWeb_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_MeleeAttack_Simple
	 */
	struct UBPI_Spiderant_C_Spiderant_MeleeAttack_Simple_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_QueenStompSummon
	 */
	struct UBPI_Spiderant_C_Spiderant_QueenStompSummon_Params
	{
	public:
		struct FVector                                             SummonLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ThrowWebBallLarge
	 */
	struct UBPI_Spiderant_C_Spiderant_ThrowWebBallLarge_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_SpawnWebBallLarge
	 */
	struct UBPI_Spiderant_C_Spiderant_SpawnWebBallLarge_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ThrowWebBallBounce
	 */
	struct UBPI_Spiderant_C_Spiderant_ThrowWebBallBounce_Params
	{
	public:
		bool                                                       bIsDirectThrow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_RollChargeStrike
	 */
	struct UBPI_Spiderant_C_Spiderant_RollChargeStrike_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_RollChargeMiss
	 */
	struct UBPI_Spiderant_C_Spiderant_RollChargeMiss_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_RollChargeStart
	 */
	struct UBPI_Spiderant_C_Spiderant_RollChargeStart_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_ThrowWebBall
	 */
	struct UBPI_Spiderant_C_Spiderant_ThrowWebBall_Params
	{	};

	/**
	 * Function BPI_Spiderant.BPI_Spiderant_C.Spiderant_SetEnrangedState
	 */
	struct UBPI_Spiderant_C_Spiderant_SetEnrangedState_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
