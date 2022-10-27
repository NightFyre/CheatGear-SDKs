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
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDetonate
	 */
	struct UAIStolenProjDetector_C_AIStolenProj_AttemptDetonate_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDisarm
	 */
	struct UAIStolenProjDetector_C_AIStolenProj_AttemptDisarm_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptDestroy
	 */
	struct UAIStolenProjDetector_C_AIStolenProj_AttemptDestroy_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptAttach
	 */
	struct UAIStolenProjDetector_C_AIStolenProj_AttemptAttach_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptReturnTo
	 */
	struct UAIStolenProjDetector_C_AIStolenProj_AttemptReturnTo_Params
	{
	public:
		Enum_AIThrowAtStyle                                        ReturnTo;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3ET6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                TargetSocket;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxPrediction;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Speed;                                                   // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnglePercent;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            DirectionOffset;                                         // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetOffset;                                            // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AXHE[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              SpecifiedActor;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_AttemptLerpToSocket
	 */
	struct UAIStolenProjDetector_C_AIStolenProj_AttemptLerpToSocket_Params
	{
	public:
		class FName                                                SocketToLerpTo;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LerpDuration;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProj_GetElementalTypeFromStolenProjectile
	 */
	struct UAIStolenProjDetector_C_AIStolenProj_GetElementalTypeFromStolenProjectile_Params
	{
	public:
		EOakElementalType                                          StolenProjectileElement;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.ReceiveBeginPlay
	 */
	struct UAIStolenProjDetector_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileUpdated_Event_1
	 */
	struct UAIStolenProjDetector_C_OnStolenProjectileUpdated_Event_1_Params
	{
	public:
		class AActor*                                              StolenProjectile;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileDestroyed_Event_1
	 */
	struct UAIStolenProjDetector_C_OnStolenProjectileDestroyed_Event_1_Params
	{
	public:
		class AActor*                                              StolenProjectile;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.OnStolenProjectileReturned_Event_1
	 */
	struct UAIStolenProjDetector_C_OnStolenProjectileReturned_Event_1_Params
	{
	public:
		class AActor*                                              StolenProjectile;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.ExecuteUbergraph_AIStolenProjDetector
	 */
	struct UAIStolenProjDetector_C_ExecuteUbergraph_AIStolenProjDetector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NCHF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileDestroyFX__DelegateSignature
	 */
	struct UAIStolenProjDetector_C_AIStolenProjectileDestroyFX__DelegateSignature_Params
	{
	public:
		class AActor*                                              MyStolenProjectile;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileReturnFX__DelegateSignature
	 */
	struct UAIStolenProjDetector_C_AIStolenProjectileReturnFX__DelegateSignature_Params
	{
	public:
		class AActor*                                              MyStolenProjectile;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIStolenProjDetector.AIStolenProjDetector_C.AIStolenProjectileUpdated__DelegateSignature
	 */
	struct UAIStolenProjDetector_C_AIStolenProjectileUpdated__DelegateSignature_Params
	{
	public:
		class AActor*                                              MyStolenProjectile;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
