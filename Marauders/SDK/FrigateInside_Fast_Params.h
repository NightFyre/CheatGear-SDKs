#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.SetStateOnInAirlockWidget
	 */
	struct AFrigateInside_Fast_C_SetStateOnInAirlockWidget_Params
	{
	public:
		E_HangarDoorStates                                         StateToUse;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5NB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.SetInteractPartNames
	 */
	struct AFrigateInside_Fast_C_SetInteractPartNames_Params
	{
	public:
		bool                                                       isDocked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4X44[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.SetEngineAnimationBasedOnHealth
	 */
	struct AFrigateInside_Fast_C_SetEngineAnimationBasedOnHealth_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R4RN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.SoundForBrokenPart
	 */
	struct AFrigateInside_Fast_C_SoundForBrokenPart_Params
	{
	public:
		class UAudioComponent*                                     Audio_FireSound;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		float                                                      PartHealth;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.SetStateOnUIWidget
	 */
	struct AFrigateInside_Fast_C_SetStateOnUIWidget_Params
	{
	public:
		E_HangarDoorStates                                         StateToUse;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NRR8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.HasLifeSupportBeenDamaged
	 */
	struct AFrigateInside_Fast_C_HasLifeSupportBeenDamaged_Params
	{
	public:
		float                                                      HealthCurrent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthMax;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.UserConstructionScript
	 */
	struct AFrigateInside_Fast_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_0__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_0__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_1__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_1__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_2__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_2__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_3__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_3__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_3__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_3__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_4__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_4__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_4__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_4__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_5__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_5__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_5__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_5__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_6__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_6__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_6__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_6__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_7__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_7__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_7__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_7__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_8__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_8__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_8__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_8__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_9__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_9__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_9__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_9__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_10__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_10__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_10__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_10__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_11__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_11__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_11__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_11__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_12__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_12__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_12__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_12__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_13__FinishedFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_13__FinishedFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Timeline_13__UpdateFunc
	 */
	struct AFrigateInside_Fast_C_Timeline_13__UpdateFunc_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.ReceiveBeginPlay
	 */
	struct AFrigateInside_Fast_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.ReceiveTick
	 */
	struct AFrigateInside_Fast_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.ReadyToDock
	 */
	struct AFrigateInside_Fast_C_ReadyToDock_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.NotReadyToDock
	 */
	struct AFrigateInside_Fast_C_NotReadyToDock_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.OnEngineDestroyed
	 */
	struct AFrigateInside_Fast_C_OnEngineDestroyed_Params
	{
	public:
		bool                                                       JustFixed;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.OnLifeSupportDestroyed
	 */
	struct AFrigateInside_Fast_C_OnLifeSupportDestroyed_Params
	{
	public:
		bool                                                       JustFixed;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.PartHealthChange_LifeSupport
	 */
	struct AFrigateInside_Fast_C_PartHealthChange_LifeSupport_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      currMaxHealth;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.DoorOpenEvent
	 */
	struct AFrigateInside_Fast_C_DoorOpenEvent_Params
	{
	public:
		bool                                                       BopenDoor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.OnPlayCompAnimNotify
	 */
	struct AFrigateInside_Fast_C_OnPlayCompAnimNotify_Params
	{
	public:
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NotifyName;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod01
	 */
	struct AFrigateInside_Fast_C_UsingDropPod01_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod02
	 */
	struct AFrigateInside_Fast_C_UsingDropPod02_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod03
	 */
	struct AFrigateInside_Fast_C_UsingDropPod03_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.UsingDropPod04
	 */
	struct AFrigateInside_Fast_C_UsingDropPod04_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Using_GunnerSeat01
	 */
	struct AFrigateInside_Fast_C_Using_GunnerSeat01_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Turret01_LightFadeIn
	 */
	struct AFrigateInside_Fast_C_Turret01_LightFadeIn_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Turret01_LightFadeOut
	 */
	struct AFrigateInside_Fast_C_Turret01_LightFadeOut_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Using_PilotSeat01
	 */
	struct AFrigateInside_Fast_C_Using_PilotSeat01_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Pilot01_LightFadeIn
	 */
	struct AFrigateInside_Fast_C_Pilot01_LightFadeIn_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.Pilot01_LightFadeOut
	 */
	struct AFrigateInside_Fast_C_Pilot01_LightFadeOut_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.EnableCollisionOnDoor
	 */
	struct AFrigateInside_Fast_C_EnableCollisionOnDoor_Params
	{
	public:
		bool                                                       EnableCollision;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.AirLockOpenCloseState
	 */
	struct AFrigateInside_Fast_C_AirLockOpenCloseState_Params
	{
	public:
		EUseState                                                  OldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUseState                                                  NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.CriticalDamage_AmbientLighting
	 */
	struct AFrigateInside_Fast_C_CriticalDamage_AmbientLighting_Params
	{
	public:
		bool                                                       CriticalStateActivate;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.TakeDamage_MakeLightsOnShipFlicker
	 */
	struct AFrigateInside_Fast_C_TakeDamage_MakeLightsOnShipFlicker_Params
	{	};

	/**
	 * Function FrigateInside_Fast.FrigateInside_Fast_C.ExecuteUbergraph_FrigateInside_Fast
	 */
	struct AFrigateInside_Fast_C_ExecuteUbergraph_FrigateInside_Fast_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
