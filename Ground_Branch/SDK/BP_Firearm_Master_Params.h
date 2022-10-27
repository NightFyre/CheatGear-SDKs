#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.GetLeftHandOverlay
	 */
	struct ABP_Firearm_Master_C_GetLeftHandOverlay_Params
	{
	public:
		class UAnimSequence*                                       OutLeftHandOverlay;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OutLeftHandOffset;                                       // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.GetBoltHeldOpen
	 */
	struct ABP_Firearm_Master_C_GetBoltHeldOpen_Params
	{
	public:
		bool                                                       bBoltHeldOpen;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KHZH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.SetBoltHeldOpen
	 */
	struct ABP_Firearm_Master_C_SetBoltHeldOpen_Params
	{
	public:
		bool                                                       bNewBoltHeldOpen;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YFJT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.GetWeaponsPositionTransitionTime
	 */
	struct ABP_Firearm_Master_C_GetWeaponsPositionTransitionTime_Params
	{
	public:
		EGBWeaponPosition                                          FromPosition;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGBWeaponPosition                                          ToPosition;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SI0D[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.ShowReloadHint
	 */
	struct ABP_Firearm_Master_C_ShowReloadHint_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.ShowSightHintMaybe
	 */
	struct ABP_Firearm_Master_C_ShowSightHintMaybe_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.HasAttachedSight
	 */
	struct ABP_Firearm_Master_C_HasAttachedSight_Params
	{
	public:
		bool                                                       OutHasSIght;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.GetFireModeAudioSwitchName
	 */
	struct ABP_Firearm_Master_C_GetFireModeAudioSwitchName_Params
	{
	public:
		class FName                                                FireMode;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.LockOnEmpty
	 */
	struct ABP_Firearm_Master_C_LockOnEmpty_Params
	{
	public:
		bool                                                       bShouldLock;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.GetCharAnimInstance
	 */
	struct ABP_Firearm_Master_C_GetCharAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyEnum
	 */
	struct ABP_Firearm_Master_C_NotifyEnum_Params
	{
	public:
		unsigned char                                              InEnumAsByte;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateBeginEnum
	 */
	struct ABP_Firearm_Master_C_NotifyStateBeginEnum_Params
	{
	public:
		unsigned char                                              InEnumAsByte;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateBeginName
	 */
	struct ABP_Firearm_Master_C_NotifyStateBeginName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateEndEnum
	 */
	struct ABP_Firearm_Master_C_NotifyStateEndEnum_Params
	{
	public:
		unsigned char                                              InEnumAsByte;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateEndName
	 */
	struct ABP_Firearm_Master_C_NotifyStateEndName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateTickEnum
	 */
	struct ABP_Firearm_Master_C_NotifyStateTickEnum_Params
	{
	public:
		unsigned char                                              InEnumAsByte;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DJL7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FrameDeltaTime;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyStateTickName
	 */
	struct ABP_Firearm_Master_C_NotifyStateTickName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FrameDeltaTime;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.ReceiveBeginPlay
	 */
	struct ABP_Firearm_Master_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnSetFiringModeIndexEvent
	 */
	struct ABP_Firearm_Master_C_OnSetFiringModeIndexEvent_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.UpdateSafetyAlpha
	 */
	struct ABP_Firearm_Master_C_UpdateSafetyAlpha_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnStoppedFiringEvent
	 */
	struct ABP_Firearm_Master_C_OnStoppedFiringEvent_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.UpdateAudioValues
	 */
	struct ABP_Firearm_Master_C_UpdateAudioValues_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnEmptyShotEvent
	 */
	struct ABP_Firearm_Master_C_OnEmptyShotEvent_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnReloadDoubleTappedEvent
	 */
	struct ABP_Firearm_Master_C_OnReloadDoubleTappedEvent_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnReloadTappedEvent
	 */
	struct ABP_Firearm_Master_C_OnReloadTappedEvent_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.DisplayReloadMenuEvent
	 */
	struct ABP_Firearm_Master_C_DisplayReloadMenuEvent_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.PlayerReload
	 */
	struct ABP_Firearm_Master_C_PlayerReload_Params
	{
	public:
		struct FGameplayTag                                        FalseSection;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        TrueSection;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.UseOffHandPressed
	 */
	struct ABP_Firearm_Master_C_UseOffHandPressed_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.ReadyAndShootHint
	 */
	struct ABP_Firearm_Master_C_ReadyAndShootHint_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.UseMainHandReleased
	 */
	struct ABP_Firearm_Master_C_UseMainHandReleased_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnFiringEvent
	 */
	struct ABP_Firearm_Master_C_OnFiringEvent_Params
	{
	public:
		int32_t                                                    RecoilCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnSpatialSoundTagChangedEvent
	 */
	struct ABP_Firearm_Master_C_OnSpatialSoundTagChangedEvent_Params
	{
	public:
		class FName                                                OldSpatialSoundTag;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewSpatialSoundTag;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.PositionAlphaMet
	 */
	struct ABP_Firearm_Master_C_PositionAlphaMet_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.PlayFiringSound
	 */
	struct ABP_Firearm_Master_C_PlayFiringSound_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnBeingEquipped
	 */
	struct ABP_Firearm_Master_C_OnBeingEquipped_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.PlayCameraShake
	 */
	struct ABP_Firearm_Master_C_PlayCameraShake_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnEndViewTarget_Event_1
	 */
	struct ABP_Firearm_Master_C_OnEndViewTarget_Event_1_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBCharacter*                                        Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnBecomeViewTarget_Event_1
	 */
	struct ABP_Firearm_Master_C_OnBecomeViewTarget_Event_1_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBCharacter*                                        Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.BindViewTargetDelegates
	 */
	struct ABP_Firearm_Master_C_BindViewTargetDelegates_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.UnbindViewTargetDelegates
	 */
	struct ABP_Firearm_Master_C_UnbindViewTargetDelegates_Params
	{
	public:
		class AGBCharacter*                                        OldParentCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnBeingUnequipped
	 */
	struct ABP_Firearm_Master_C_OnBeingUnequipped_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.StopFiringSound
	 */
	struct ABP_Firearm_Master_C_StopFiringSound_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.PlayFiringAnim
	 */
	struct ABP_Firearm_Master_C_PlayFiringAnim_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnAddedToCharacter
	 */
	struct ABP_Firearm_Master_C_OnAddedToCharacter_Params
	{
	public:
		class AGBCharacter*                                        NewParentCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.NotifyName
	 */
	struct ABP_Firearm_Master_C_NotifyName_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.ShowAmmoRelatedMessage
	 */
	struct ABP_Firearm_Master_C_ShowAmmoRelatedMessage_Params
	{
	public:
		class FText                                                AmmoRelatedMessage;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.OnChangeFiringModeEvent
	 */
	struct ABP_Firearm_Master_C_OnChangeFiringModeEvent_Params
	{	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.AIReload
	 */
	struct ABP_Firearm_Master_C_AIReload_Params
	{
	public:
		class AGBAIController*                                     AIController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ReloadType;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.SetLeftHandOverlayOverrideRef
	 */
	struct ABP_Firearm_Master_C_SetLeftHandOverlayOverrideRef_Params
	{
	public:
		class UAnimSequence*                                       NewLeftHandOverlayRefOverride;                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NewLeftHandRelativeOffsetOverride;                       // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_Master.BP_Firearm_Master_C.ExecuteUbergraph_BP_Firearm_Master
	 */
	struct ABP_Firearm_Master_C_ExecuteUbergraph_BP_Firearm_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
