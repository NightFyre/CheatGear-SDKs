#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function Kraken.KrakenTentacle.OnDamageToTentacle
	 */
	struct AKrakenTentacle_OnDamageToTentacle_Params
	{
	public:
		struct FImpactDamageEvent                                  ImpactDamageEvent;                                       // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Kraken.Murk.DeactivateMurkBP
	 */
	struct AMurk_DeactivateMurkBP_Params
	{	};

	/**
	 * Function Kraken.Murk.ActivateMurkBP
	 */
	struct AMurk_ActivateMurkBP_Params
	{	};

	/**
	 * Function Kraken.KrakenShipWrappingTentacle.OnRep_CurrentServerAnimationState
	 */
	struct AKrakenShipWrappingTentacle_OnRep_CurrentServerAnimationState_Params
	{	};

	/**
	 * Function Kraken.Kraken.Multicast_OnTentacleTakenDamage
	 */
	struct AKraken_Multicast_OnTentacleTakenDamage_Params
	{	};

	/**
	 * Function Kraken.Kraken.AddActorToKnownTargets
	 */
	struct AKraken_AddActorToKnownTargets_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Kraken.KrakenHead.TestSetDamageEnabled
	 */
	struct AKrakenHead_TestSetDamageEnabled_Params
	{
	public:
		bool                                                       InEnabled;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kraken.KrakenHead.RequestState
	 */
	struct AKrakenHead_RequestState_Params
	{
	public:
		class UClass*                                              NewState;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Kraken.KrakenHead.OnRep_IsDamageEnabled
	 */
	struct AKrakenHead_OnRep_IsDamageEnabled_Params
	{	};

	/**
	 * Function Kraken.KrakenHead.OnRep_HeadStateRequest
	 */
	struct AKrakenHead_OnRep_HeadStateRequest_Params
	{	};

	/**
	 * Function Kraken.KrakenHead.OnCoordinatedKrakenSpecialEvent
	 */
	struct AKrakenHead_OnCoordinatedKrakenSpecialEvent_Params
	{
	public:
		ECoordinatedKrakenSpecialEventTypes                        InEventType;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Kraken.KrakenService.RequestKrakenWithLocation
	 */
	struct AKrakenService_RequestKrakenWithLocation_Params
	{
	public:
		struct FVector                                             SpawnLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4J77[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              SpawnedForActor;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Kraken.KrakenService.IsServiceInitialized
	 */
	struct AKrakenService_IsServiceInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kraken.KrakenService.IsKrakenActive
	 */
	struct AKrakenService_IsKrakenActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kraken.KrakenService.DismissKraken
	 */
	struct AKrakenService_DismissKraken_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
