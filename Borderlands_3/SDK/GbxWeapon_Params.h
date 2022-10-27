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
	 * Function GbxWeapon.Weapon.Unlock
	 */
	struct AWeapon_Unlock_Params
	{
	public:
		bool                                                       bReplicate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.TryAutoReload
	 */
	struct AWeapon_TryAutoReload_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.ToggleMode
	 */
	struct AWeapon_ToggleMode_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SwitchPendingUseMode
	 */
	struct AWeapon_SwitchPendingUseMode_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.SwitchMode
	 */
	struct AWeapon_SwitchMode_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NextUseModeIndex;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForced;                                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.StopZooming
	 */
	struct AWeapon_StopZooming_Params
	{
	public:
		bool                                                       bSkipTransitions;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bClearInput;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.StopWeaponAction
	 */
	struct AWeapon_StopWeaponAction_Params
	{
	public:
		EWeaponActionType                                          WeaponAction;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.StopUsing
	 */
	struct AWeapon_StopUsing_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForced;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.StopReloading
	 */
	struct AWeapon_StopReloading_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.StopModeSwitch
	 */
	struct AWeapon_StopModeSwitch_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.StopEffects
	 */
	struct AWeapon_StopEffects_Params
	{
	public:
		EWeaponEffectType                                          EffectType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UseModeIndex;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.StopDynamicMaterialEffect
	 */
	struct AWeapon_StopDynamicMaterialEffect_Params
	{
	public:
		int32_t                                                    EffectID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.StopAnimation
	 */
	struct AWeapon_StopAnimation_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFirstPerson;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.StartZooming
	 */
	struct AWeapon_StartZooming_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.StartUsing
	 */
	struct AWeapon_StartUsing_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.StartReloading
	 */
	struct AWeapon_StartReloading_Params
	{
	public:
		bool                                                       bAuto;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetTargetLocked
	 */
	struct AWeapon_SetTargetLocked_Params
	{
	public:
		bool                                                       bIsLocked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetPreUseState
	 */
	struct AWeapon_SetPreUseState_Params
	{
	public:
		unsigned char                                              UseModeIndex;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnabled;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetMaterialVectorParameterValue
	 */
	struct AWeapon_SetMaterialVectorParameterValue_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ParamValue;                                              // 0x0008(0x0010)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetMaterialScalarParameterValue
	 */
	struct AWeapon_SetMaterialScalarParameterValue_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ParamValue;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetEffectVectorParameter
	 */
	struct AWeapon_SetEffectVectorParameter_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ParamValue;                                              // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponEffectQueryData                              QueryData;                                               // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetEffectMaterialParameter
	 */
	struct AWeapon_SetEffectMaterialParameter_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  ParamValue;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponEffectQueryData                              QueryData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetEffectFloatParameter
	 */
	struct AWeapon_SetEffectFloatParameter_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ParamValue;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponEffectQueryData                              QueryData;                                               // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetEffectEmitterState
	 */
	struct AWeapon_SetEffectEmitterState_Params
	{
	public:
		class FName                                                EmitterName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnabled;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PEO5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWeaponEffectQueryData                              QueryData;                                               // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetEffectColorParameter
	 */
	struct AWeapon_SetEffectColorParameter_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ParamValue;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponEffectQueryData                              QueryData;                                               // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.SetBoneVisibility
	 */
	struct AWeapon_SetBoneVisibility_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisible;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponAttachmentVisibilityType                            AttachmentType;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerUnlock
	 */
	struct AWeapon_ServerUnlock_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.ServerSwitchMode
	 */
	struct AWeapon_ServerSwitchMode_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NextUseModeIndex;                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForced;                                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerStopUsing
	 */
	struct AWeapon_ServerStopUsing_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForced;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerStopModeSwitch
	 */
	struct AWeapon_ServerStopModeSwitch_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientUseModeIndex;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerStartUsing
	 */
	struct AWeapon_ServerStartUsing_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ClientPatternSeed;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerStartReloading
	 */
	struct AWeapon_ServerStartReloading_Params
	{
	public:
		unsigned char                                              UseModeIndex;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAuto;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerSetZoomState
	 */
	struct AWeapon_ServerSetZoomState_Params
	{
	public:
		unsigned char                                              UseModeIndex;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponZoomState                                    NewState;                                                // 0x0001(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VJFN[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ZoomStartOffset;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerSetPatternSeed
	 */
	struct AWeapon_ServerSetPatternSeed_Params
	{
	public:
		unsigned char                                              ClientPatternSeed;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerRestartAutoUse
	 */
	struct AWeapon_ServerRestartAutoUse_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.ServerLock
	 */
	struct AWeapon_ServerLock_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerInterruptReloadToUse
	 */
	struct AWeapon_ServerInterruptReloadToUse_Params
	{
	public:
		int32_t                                                    ClientLoadedAmmo;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ServerEquipInterruptible
	 */
	struct AWeapon_ServerEquipInterruptible_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.RegisterTrinketAttachment
	 */
	struct AWeapon_RegisterTrinketAttachment_Params
	{
	public:
		struct FWeaponRegisterTrinketAttachmentData                Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.RegisterSkeletalControl
	 */
	struct AWeapon_RegisterSkeletalControl_Params
	{
	public:
		struct FWeaponRegisterSkeletalControlData                  Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.RegisterSimpleEffect
	 */
	struct AWeapon_RegisterSimpleEffect_Params
	{
	public:
		EWeaponEffectType                                          EffectType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U4L8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     Effect;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EffectSocket;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.RegisterMaterialEffect
	 */
	struct AWeapon_RegisterMaterialEffect_Params
	{
	public:
		struct FWeaponRegisterMaterialEffectData                   Data;                                                    // 0x0000(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.RegisterEffect
	 */
	struct AWeapon_RegisterEffect_Params
	{
	public:
		struct FWeaponRegisterAttachmentEffectData                 Data;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.ReevaluateConditionalEffects
	 */
	struct AWeapon_ReevaluateConditionalEffects_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.PrevZoomLevel
	 */
	struct AWeapon_PrevZoomLevel_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.PlayEffects
	 */
	struct AWeapon_PlayEffects_Params
	{
	public:
		EWeaponEffectType                                          EffectType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UseModeIndex;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3GXN[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    EffectID;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.PlayDynamicMaterialEffect
	 */
	struct AWeapon_PlayDynamicMaterialEffect_Params
	{
	public:
		struct FWeaponMaterialEffectData                           Data;                                                    // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.PlayAnimation
	 */
	struct AWeapon_PlayAnimation_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFirstPerson;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S9PC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayRate;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.OnZoomedOut
	 */
	struct AWeapon_OnZoomedOut_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnUseStarted
	 */
	struct AWeapon_OnUseStarted_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnUseFinished
	 */
	struct AWeapon_OnUseFinished_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUseFinishes
	 */
	struct AWeapon_OnUpdateSkeletalControlsWhenUseFinishes_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenUsed
	 */
	struct AWeapon_OnUpdateSkeletalControlsWhenUsed_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnUpdateSkeletalControlsWhenAmmoChanges
	 */
	struct AWeapon_OnUpdateSkeletalControlsWhenAmmoChanges_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnRep_TargetLockedChanged
	 */
	struct AWeapon_OnRep_TargetLockedChanged_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnRep_PendingUseModeIndex
	 */
	struct AWeapon_OnRep_PendingUseModeIndex_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnRep_PendingAttachState
	 */
	struct AWeapon_OnRep_PendingAttachState_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.OnRep_CurrentUseModeIndex
	 */
	struct AWeapon_OnRep_CurrentUseModeIndex_Params
	{
	public:
		unsigned char                                              PreviousUseModeIndex;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.OnReloadEnded
	 */
	struct AWeapon_OnReloadEnded_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.OnAmmoGivenToEmptyWeapon
	 */
	struct AWeapon_OnAmmoGivenToEmptyWeapon_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.NotifySkeletalControl
	 */
	struct AWeapon_NotifySkeletalControl_Params
	{
	public:
		EWeaponEffectType                                          ControlType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GYW5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ControlName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponSkeletalControlEvent                                Event;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V5BH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      EventValue;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.NextZoomLevel
	 */
	struct AWeapon_NextZoomLevel_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.Lock
	 */
	struct AWeapon_Lock_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReplicate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.K2_StopWeaponActionObj
	 */
	struct AWeapon_K2_StopWeaponActionObj_Params
	{
	public:
		class UGbxAction*                                          WeaponAction;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.K2_PlayWeaponActionEx
	 */
	struct AWeapon_K2_PlayWeaponActionEx_Params
	{
	public:
		EWeaponActionType                                          WeaponAction;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DIKW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FActionState_Base                                   ActionParams;                                            // 0x0008(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bCheckForRelevancy;                                      // 0x00D0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CEU4[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxAction*                                          ReturnValue;                                             // 0x00D8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.K2_PlayWeaponAction
	 */
	struct AWeapon_K2_PlayWeaponAction_Params
	{
	public:
		EWeaponActionType                                          WeaponAction;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0UOA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayRate;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCheckForRelevancy;                                      // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3MEU[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxAction*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsZoomedIn
	 */
	struct AWeapon_IsZoomedIn_Params
	{
	public:
		bool                                                       bIncludeTransitions;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsZoomed
	 */
	struct AWeapon_IsZoomed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsUsing
	 */
	struct AWeapon_IsUsing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsTargetLocked
	 */
	struct AWeapon_IsTargetLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsSwitchingModes
	 */
	struct AWeapon_IsSwitchingModes_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsReloading
	 */
	struct AWeapon_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsPuttingDown
	 */
	struct AWeapon_IsPuttingDown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsPendingUse
	 */
	struct AWeapon_IsPendingUse_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsLocked
	 */
	struct AWeapon_IsLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsLocalAuthority
	 */
	struct AWeapon_IsLocalAuthority_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsInactive
	 */
	struct AWeapon_IsInactive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsEquipping
	 */
	struct AWeapon_IsEquipping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsAuthorityUsing
	 */
	struct AWeapon_IsAuthorityUsing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsAuthoritySwitchingModes
	 */
	struct AWeapon_IsAuthoritySwitchingModes_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsAuthorityReloading
	 */
	struct AWeapon_IsAuthorityReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsAuthorityPuttingDown
	 */
	struct AWeapon_IsAuthorityPuttingDown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsAuthorityEquipping
	 */
	struct AWeapon_IsAuthorityEquipping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.IsActive
	 */
	struct AWeapon_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GivenTo
	 */
	struct AWeapon_GivenTo_Params
	{
	public:
		class APawn*                                               NewOwner;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetZoomFOVScale
	 */
	struct AWeapon_GetZoomFOVScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetZoomEffect
	 */
	struct AWeapon_GetZoomEffect_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetZoomDuration
	 */
	struct AWeapon_GetZoomDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetUseModeComponentByClass
	 */
	struct AWeapon_GetUseModeComponentByClass_Params
	{
	public:
		class UClass*                                              ComponentClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UseModeIndex;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F1JC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetMuteADSAlpha
	 */
	struct AWeapon_GetMuteADSAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetMaxZoomFOVScale
	 */
	struct AWeapon_GetMaxZoomFOVScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetLastInputChannel
	 */
	struct AWeapon_GetLastInputChannel_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetCurrentReloadPartType
	 */
	struct AWeapon_GetCurrentReloadPartType_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetAttachmentMesh
	 */
	struct AWeapon_GetAttachmentMesh_Params
	{
	public:
		bool                                                       bFirstPerson;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              SlotIndex;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NX06[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMeshComponent*                                      ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetAssociatedUseModeComponentByClass
	 */
	struct AWeapon_GetAssociatedUseModeComponentByClass_Params
	{
	public:
		class UClass*                                              ComponentClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorComponent*                                     ReferenceComponent;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorComponent*                                     ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.GetAimAssistParameters
	 */
	struct AWeapon_GetAimAssistParameters_Params
	{
	public:
		class UAimAssistParameters*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.EquipInterruptible
	 */
	struct AWeapon_EquipInterruptible_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.Dropped
	 */
	struct AWeapon_Dropped_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.CycleZoomLevel
	 */
	struct AWeapon_CycleZoomLevel_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.ClientUnlock
	 */
	struct AWeapon_ClientUnlock_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.ClientStopReloading
	 */
	struct AWeapon_ClientStopReloading_Params
	{	};

	/**
	 * Function GbxWeapon.Weapon.ClientLock
	 */
	struct AWeapon_ClientLock_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.AddUseMode
	 */
	struct AWeapon_AddUseMode_Params
	{
	public:
		class UWeaponUseComponent*                                 UseComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UActorComponent*>                             OtherComponents;                                         // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    InputChannels;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Weapon.Activate
	 */
	struct AWeapon_Activate_Params
	{
	public:
		class APawn*                                               WeaponOwner;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InSlot;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponEquipType                                           InEquipType;                                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponPreUseComponent.K2_OnDeactivated
	 */
	struct UWeaponPreUseComponent_K2_OnDeactivated_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponPreUseComponent.K2_OnActivated
	 */
	struct UWeaponPreUseComponent_K2_OnActivated_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponUseComponent.ToggleMode
	 */
	struct UWeaponUseComponent_ToggleMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponUseComponent.SwitchToZoomedMode
	 */
	struct UWeaponUseComponent_SwitchToZoomedMode_Params
	{
	public:
		unsigned char                                              ZoomLevel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponUseComponent.SwitchFromZoomedMode
	 */
	struct UWeaponUseComponent_SwitchFromZoomedMode_Params
	{
	public:
		unsigned char                                              ZoomLevel;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponUseComponent.OnPreUseFinished
	 */
	struct UWeaponUseComponent_OnPreUseFinished_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponUseComponent.K2_OnDeactivated
	 */
	struct UWeaponUseComponent_K2_OnDeactivated_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponUseComponent.K2_OnActivated
	 */
	struct UWeaponUseComponent_K2_OnActivated_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponUseComponent.CanActivateMode
	 */
	struct UWeaponUseComponent_CanActivateMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.ServerResetFireSequence
	 */
	struct UWeaponFireComponent_ServerResetFireSequence_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnStopFireRateDeceleration
	 */
	struct UWeaponFireComponent_OnStopFireRateDeceleration_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnStopFireRateAcceleration
	 */
	struct UWeaponFireComponent_OnStopFireRateAcceleration_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnStartFireRateDeceleration
	 */
	struct UWeaponFireComponent_OnStartFireRateDeceleration_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnStartFireRateAcceleration
	 */
	struct UWeaponFireComponent_OnStartFireRateAcceleration_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnRep_ImpactLocation
	 */
	struct UWeaponFireComponent_OnRep_ImpactLocation_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnRep_FlashCount
	 */
	struct UWeaponFireComponent_OnRep_FlashCount_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnRep_FireRateAccelChanged
	 */
	struct UWeaponFireComponent_OnRep_FireRateAccelChanged_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnRep_ClientFireSequenceState
	 */
	struct UWeaponFireComponent_OnRep_ClientFireSequenceState_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnReloadAmmoGiven
	 */
	struct UWeaponFireComponent_OnReloadAmmoGiven_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnLoopingFireActionEnd
	 */
	struct UWeaponFireComponent_OnLoopingFireActionEnd_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.OnGivenTo
	 */
	struct UWeaponFireComponent_OnGivenTo_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.IsFireRateAccelEnabled
	 */
	struct UWeaponFireComponent_IsFireRateAccelEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.GetLockedTarget
	 */
	struct UWeaponFireComponent_GetLockedTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.GetFireRatePercent
	 */
	struct UWeaponFireComponent_GetFireRatePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponFireComponent.ClientStopResetFireSequence
	 */
	struct UWeaponFireComponent_ClientStopResetFireSequence_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireProjectileComponent.GetShotProjectileData
	 */
	struct UWeaponFireProjectileComponent_GetShotProjectileData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponFireProjectileComponent.GetShotLightProjectileData
	 */
	struct UWeaponFireProjectileComponent_GetShotLightProjectileData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.StopBlockingPawns
	 */
	struct AProjectile_StopBlockingPawns_Params
	{	};

	/**
	 * Function GbxWeapon.Projectile.SetProjectileDamageType
	 */
	struct AProjectile_SetProjectileDamageType_Params
	{
	public:
		class UClass*                                              DamageType;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.SetProjectileDamageSource
	 */
	struct AProjectile_SetProjectileDamageSource_Params
	{
	public:
		class UClass*                                              DamageSource;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.SetProjectileDamageRadius
	 */
	struct AProjectile_SetProjectileDamageRadius_Params
	{
	public:
		float                                                      DamageRadius;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.SetProjectileDamage
	 */
	struct AProjectile_SetProjectileDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.ResetCollisionWith
	 */
	struct AProjectile_ResetCollisionWith_Params
	{
	public:
		class AActor*                                              ActorToCollide;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnRep_SpawnModifierType
	 */
	struct AProjectile_OnRep_SpawnModifierType_Params
	{	};

	/**
	 * Function GbxWeapon.Projectile.OnLastBounce
	 */
	struct AProjectile_OnLastBounce_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnHitWorld
	 */
	struct AProjectile_OnHitWorld_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnHitNeutral
	 */
	struct AProjectile_OnHitNeutral_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnHitFriendly
	 */
	struct AProjectile_OnHitFriendly_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnHitEnemy
	 */
	struct AProjectile_OnHitEnemy_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnHitDamagableObject
	 */
	struct AProjectile_OnHitDamagableObject_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnExplode
	 */
	struct AProjectile_OnExplode_Params
	{	};

	/**
	 * Function GbxWeapon.Projectile.OnComponentDetachedFromParent
	 */
	struct AProjectile_OnComponentDetachedFromParent_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnBounce
	 */
	struct AProjectile_OnBounce_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.OnBeginExplode
	 */
	struct AProjectile_OnBeginExplode_Params
	{	};

	/**
	 * Function GbxWeapon.Projectile.IgnoreCollisionWith
	 */
	struct AProjectile_IgnoreCollisionWith_Params
	{
	public:
		class AActor*                                              ActorToIgnore;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.HandleDetachRequest
	 */
	struct AProjectile_HandleDetachRequest_Params
	{	};

	/**
	 * Function GbxWeapon.Projectile.GetProjectileMovementComponent
	 */
	struct AProjectile_GetProjectileMovementComponent_Params
	{
	public:
		class UGbxProjectileMovementComponent*                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.GetProjectileDamageType
	 */
	struct AProjectile_GetProjectileDamageType_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.GetProjectileDamageSource
	 */
	struct AProjectile_GetProjectileDamageSource_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.GetProjectileDamageRadius
	 */
	struct AProjectile_GetProjectileDamageRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.GetProjectileDamage
	 */
	struct AProjectile_GetProjectileDamage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.GetExplosionComponent
	 */
	struct AProjectile_GetExplosionComponent_Params
	{
	public:
		class UExplosionComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.Projectile.Explode
	 */
	struct AProjectile_Explode_Params
	{	};

	/**
	 * Function GbxWeapon.Projectile.CheckProjectileAttachment
	 */
	struct AProjectile_CheckProjectileAttachment_Params
	{	};

	/**
	 * Function GbxWeapon.Projectile.BounceDelegate
	 */
	struct AProjectile_BounceDelegate_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.GbxProjectileMovementComponent.ScaleVelocity
	 */
	struct UGbxProjectileMovementComponent_ScaleVelocity_Params
	{
	public:
		float                                                      InScale;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.GbxProjectileMovementComponent.OnRep_InitialProjectileGravity
	 */
	struct UGbxProjectileMovementComponent_OnRep_InitialProjectileGravity_Params
	{	};

	/**
	 * DelegateFunction GbxWeapon.GbxProjectileMovementComponent.OnProjectilePostLastBounceDelegate__DelegateSignature
	 */
	struct UGbxProjectileMovementComponent_OnProjectilePostLastBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.GbxProjectileMovementComponent.OnHit
	 */
	struct UGbxProjectileMovementComponent_OnHit_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_71K8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.GbxProjectileMovementComponent.OnBounce
	 */
	struct UGbxProjectileMovementComponent_OnBounce_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0090(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileManager.ServerSendDebugProjectileImpact
	 */
	struct ALightProjectileManager_ServerSendDebugProjectileImpact_Params
	{
	public:
		int32_t                                                    ProjSyncID;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7Y7E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint16_t                                                   ProjFlags;                                               // 0x0018(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileManager.OnParticleSystemFinished
	 */
	struct ALightProjectileManager_OnParticleSystemFinished_Params
	{
	public:
		class UParticleSystemComponent*                            FinishedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.SetLifetime
	 */
	struct ULightProjectile_SetLifetime_Params
	{
	public:
		float                                                      NewLifetime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.SetHomingTargetLocation
	 */
	struct ULightProjectile_SetHomingTargetLocation_Params
	{
	public:
		struct FVector                                             HomingLocation;                                          // 0x0000(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.SetHomingTarget
	 */
	struct ULightProjectile_SetHomingTarget_Params
	{
	public:
		class AActor*                                              HomingTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetOffset;                                            // 0x0008(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.PlayFeedbackSoundEvent
	 */
	struct ULightProjectile_PlayFeedbackSoundEvent_Params
	{
	public:
		class UWwiseEvent*                                         Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.OnRep_Shutdown
	 */
	struct ULightProjectile_OnRep_Shutdown_Params
	{	};

	/**
	 * Function GbxWeapon.LightProjectile.OnRep_InitialClientState
	 */
	struct ULightProjectile_OnRep_InitialClientState_Params
	{	};

	/**
	 * Function GbxWeapon.LightProjectile.OnRep_Impact
	 */
	struct ULightProjectile_OnRep_Impact_Params
	{	};

	/**
	 * Function GbxWeapon.LightProjectile.OnRep_Exploded
	 */
	struct ULightProjectile_OnRep_Exploded_Params
	{	};

	/**
	 * Function GbxWeapon.LightProjectile.OnRep_Attached
	 */
	struct ULightProjectile_OnRep_Attached_Params
	{	};

	/**
	 * Function GbxWeapon.LightProjectile.OnParticleSystemFinished
	 */
	struct ULightProjectile_OnParticleSystemFinished_Params
	{
	public:
		class UParticleSystemComponent*                            FinishedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.OnAttachedComponentUnregistered
	 */
	struct ULightProjectile_OnAttachedComponentUnregistered_Params
	{
	public:
		class UActorComponent*                                     UnregisteredComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.OnAttachedComponentCollisionChanged
	 */
	struct ULightProjectile_OnAttachedComponentCollisionChanged_Params
	{
	public:
		class UPrimitiveComponent*                                 ChangedComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.OnAttachedActorFractured
	 */
	struct ULightProjectile_OnAttachedActorFractured_Params
	{
	public:
		struct FVector                                             HitPoint;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitDirection;                                            // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.OnAttachedActorDestroyed
	 */
	struct ULightProjectile_OnAttachedActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.K2_ApplyImpactDamage
	 */
	struct ULightProjectile_K2_ApplyImpactDamage_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      ImpactDamage;                                            // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPenetrated;                                             // 0x0094(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanReflect;                                             // 0x0095(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.IsHomingMovingDirectlyTowardsTarget
	 */
	struct ULightProjectile_IsHomingMovingDirectlyTowardsTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.IsHoming
	 */
	struct ULightProjectile_IsHoming_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.InitChildData
	 */
	struct ULightProjectile_InitChildData_Params
	{
	public:
		struct FLightProjectileInitializationData                  InitData;                                                // 0x0000(0x0140)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetTarget
	 */
	struct ULightProjectile_GetTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetSource
	 */
	struct ULightProjectile_GetSource_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetModifierValue
	 */
	struct ULightProjectile_GetModifierValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetModifierType
	 */
	struct ULightProjectile_GetModifierType_Params
	{
	public:
		EWeaponShotModifierType                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetInstigator
	 */
	struct ULightProjectile_GetInstigator_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetImpactDataOverride
	 */
	struct ULightProjectile_GetImpactDataOverride_Params
	{
	public:
		class UImpactData*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetImpactData
	 */
	struct ULightProjectile_GetImpactData_Params
	{
	public:
		class UImpactData*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetHomingStartTime
	 */
	struct ULightProjectile_GetHomingStartTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetFiringPatternID
	 */
	struct ULightProjectile_GetFiringPatternID_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetDamageType
	 */
	struct ULightProjectile_GetDamageType_Params
	{
	public:
		class UGbxDamageType*                                      ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetDamageCauser
	 */
	struct ULightProjectile_GetDamageCauser_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetAttitudeTowards
	 */
	struct ULightProjectile_GetAttitudeTowards_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETeamAttitude                                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetAttachedImpactNormal
	 */
	struct ULightProjectile_GetAttachedImpactNormal_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetAttachedDamageReceiverActor
	 */
	struct ULightProjectile_GetAttachedDamageReceiverActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetAttachedActor
	 */
	struct ULightProjectile_GetAttachedActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.GetAssociatedActor
	 */
	struct ULightProjectile_GetAssociatedActor_Params
	{
	public:
		ELightProjectileQueryActorType                             ActorType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2J5H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.Explode
	 */
	struct ULightProjectile_Explode_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectile.EnableHoming
	 */
	struct ULightProjectile_EnableHoming_Params
	{	};

	/**
	 * Function GbxWeapon.LightProjectile.DisableHoming
	 */
	struct ULightProjectile_DisableHoming_Params
	{	};

	/**
	 * Function GbxWeapon.LightProjectile.Destroy
	 */
	struct ULightProjectile_Destroy_Params
	{	};

	/**
	 * Function GbxWeapon.LightProjectile.ApplyAreaDamage
	 */
	struct ULightProjectile_ApplyAreaDamage_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XA26[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0018(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.OnRicochet
	 */
	struct ULightProjectileData_OnRicochet_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0098(0x000C)  (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.OnProxyImpact
	 */
	struct ULightProjectileData_OnProxyImpact_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.OnLifetimeExpired
	 */
	struct ULightProjectileData_OnLifetimeExpired_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.OnImpact
	 */
	struct ULightProjectileData_OnImpact_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.OnExplode
	 */
	struct ULightProjectileData_OnExplode_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.OnDamage
	 */
	struct ULightProjectileData_OnDamage_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bCritical;                                               // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.OnBegin
	 */
	struct ULightProjectileData_OnBegin_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.OnAttached
	 */
	struct ULightProjectileData_OnAttached_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              AttachedActor;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileData.GetTimedEventNameList
	 */
	struct ULightProjectileData_GetTimedEventNameList_Params
	{
	public:
		TArray<class FName>                                        FuncList;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamManager.OnParticleSystemFinished
	 */
	struct ALightBeamManager_OnParticleSystemFinished_Params
	{
	public:
		class UParticleSystemComponent*                            FinishedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.SetTargetSocket
	 */
	struct ULightBeam_SetTargetSocket_Params
	{
	public:
		class FName                                                Socket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.OnTrackedImpactParticleSystemFinished
	 */
	struct ULightBeam_OnTrackedImpactParticleSystemFinished_Params
	{
	public:
		class UParticleSystemComponent*                            PSC;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.OnRep_ModifierValue
	 */
	struct ULightBeam_OnRep_ModifierValue_Params
	{	};

	/**
	 * Function GbxWeapon.LightBeam.OnRep_ModifierType
	 */
	struct ULightBeam_OnRep_ModifierType_Params
	{	};

	/**
	 * Function GbxWeapon.LightBeam.OnRep_ClientState
	 */
	struct ULightBeam_OnRep_ClientState_Params
	{	};

	/**
	 * Function GbxWeapon.LightBeam.LockOntoTarget
	 */
	struct ULightBeam_LockOntoTarget_Params
	{
	public:
		struct FLightBeamAttachment                                Target;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.InitChildData
	 */
	struct ULightBeam_InitChildData_Params
	{
	public:
		struct FLightBeamInitializationData                        InitData;                                                // 0x0000(0x0128)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetTargetActor
	 */
	struct ULightBeam_GetTargetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetTarget
	 */
	struct ULightBeam_GetTarget_Params
	{
	public:
		struct FLightBeamAttachment                                ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetSourceActor
	 */
	struct ULightBeam_GetSourceActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetSource
	 */
	struct ULightBeam_GetSource_Params
	{
	public:
		struct FLightBeamAttachment                                ReturnValue;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetInstigator
	 */
	struct ULightBeam_GetInstigator_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetImpactForce
	 */
	struct ULightBeam_GetImpactForce_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetDamageType
	 */
	struct ULightBeam_GetDamageType_Params
	{
	public:
		class UGbxDamageType*                                      ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetDamageCauser
	 */
	struct ULightBeam_GetDamageCauser_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetDamage
	 */
	struct ULightBeam_GetDamage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeam.GetAssociatedActor
	 */
	struct ULightBeam_GetAssociatedActor_Params
	{
	public:
		ELightBeamQueryActorType                                   ActorType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EQHU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamData.UpdateTarget
	 */
	struct ULightBeamData_UpdateTarget_Params
	{
	public:
		class ULightBeam*                                          Beam;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamData.CanLockOn
	 */
	struct ULightBeamData_CanLockOn_Params
	{
	public:
		class ULightBeam*                                          Beam;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetActor;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponAnimInstance.BlueprintSwitchedMode
	 */
	struct UWeaponAnimInstance_BlueprintSwitchedMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponAmmoComponent.ClientRefillAmmo
	 */
	struct UWeaponAmmoComponent_ClientRefillAmmo_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.SetCanUseWhenOverheated
	 */
	struct UWeaponHeatComponent_SetCanUseWhenOverheated_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnUseFinished
	 */
	struct UWeaponHeatComponent_OnUseFinished_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnUsed
	 */
	struct UWeaponHeatComponent_OnUsed_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnStopOverheat
	 */
	struct UWeaponHeatComponent_OnStopOverheat_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnStartOverheat
	 */
	struct UWeaponHeatComponent_OnStartOverheat_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnRep_ReplicatedHeat
	 */
	struct UWeaponHeatComponent_OnRep_ReplicatedHeat_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnRep_Overheated
	 */
	struct UWeaponHeatComponent_OnRep_Overheated_Params
	{
	public:
		bool                                                       bWasOverheated;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnPutDown
	 */
	struct UWeaponHeatComponent_OnPutDown_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnEquipped
	 */
	struct UWeaponHeatComponent_OnEquipped_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnDetached
	 */
	struct UWeaponHeatComponent_OnDetached_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponHeatComponent.OnAttached
	 */
	struct UWeaponHeatComponent_OnAttached_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponZoomComponent.OnSwitchedWeaponMode
	 */
	struct UWeaponZoomComponent_OnSwitchedWeaponMode_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponZoomComponent.OnRep_ReplicatedZoomState
	 */
	struct UWeaponZoomComponent_OnRep_ReplicatedZoomState_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponZoomComponent.OnDetached
	 */
	struct UWeaponZoomComponent_OnDetached_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponZoomComponent.OnAttached
	 */
	struct UWeaponZoomComponent_OnAttached_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScaleWithMode
	 */
	struct UWeaponZoomComponent_GetMaxZoomFOVScaleWithMode_Params
	{
	public:
		unsigned char                                              ModeIndex;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F16H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponZoomComponent.GetMaxZoomFOVScale
	 */
	struct UWeaponZoomComponent_GetMaxZoomFOVScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.GbxTrajectometerComponent.UpdateCollisionShape
	 */
	struct UGbxTrajectometerComponent_UpdateCollisionShape_Params
	{	};

	/**
	 * DelegateFunction GbxWeapon.GbxTrajectometerComponent.SimulationResultEvent__DelegateSignature
	 */
	struct UGbxTrajectometerComponent_SimulationResultEvent__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.GbxTrajectometerComponent.SetTrajectometerEnabled
	 */
	struct UGbxTrajectometerComponent_SetTrajectometerEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.SetBeamFlag
	 */
	struct ULightBeamStatics_SetBeamFlag_Params
	{
	public:
		struct FLightBeamInitializationData                        InitData;                                                // 0x0000(0x0128)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ELightBeamFlag                                             Flag;                                                    // 0x0128(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.RemoveLightBeamsBySource
	 */
	struct ULightBeamStatics_RemoveLightBeamsBySource_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NameId;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.RemoveLightBeamsByActor
	 */
	struct ULightBeamStatics_RemoveLightBeamsByActor_Params
	{
	public:
		struct FLightBeamQueryData                                 Query;                                                   // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.IsBeamFlagSet
	 */
	struct ULightBeamStatics_IsBeamFlagSet_Params
	{
	public:
		struct FLightBeamInitializationData                        InitData;                                                // 0x0000(0x0128)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ELightBeamFlag                                             Flag;                                                    // 0x0128(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0129(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.ForEachLightBeam
	 */
	struct ULightBeamStatics_ForEachLightBeam_Params
	{
	public:
		struct FLightBeamQueryData                                 Query;                                                   // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.DoesLightBeamExist
	 */
	struct ULightBeamStatics_DoesLightBeamExist_Params
	{
	public:
		struct FLightBeamQueryData                                 Query;                                                   // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.CreateLightBeamFromData
	 */
	struct ULightBeamStatics_CreateLightBeamFromData_Params
	{
	public:
		struct FLightBeamInitializationData                        InitData;                                                // 0x0000(0x0128)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.CreateLightBeam
	 */
	struct ULightBeamStatics_CreateLightBeam_Params
	{
	public:
		class UClass*                                              Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLightBeamAttachment                                Source;                                                  // 0x0010(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FLightBeamAttachment                                Target;                                                  // 0x0038(0x0028)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bTargetLocked;                                           // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BBFU[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                NameId;                                                  // 0x0068(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2NVS[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageType;                                              // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              DamageSource;                                            // 0x0080(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DamageRadius;                                            // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7O82[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageCauser;                                            // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UImpactData*                                         ImpactDataOverride;                                      // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FForceSelection                                     ImpactForce;                                             // 0x00A0(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      LifetimeOverride;                                        // 0x00C0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bViewDependent;                                          // 0x00C4(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightBeamStatics.ClearBeamFlag
	 */
	struct ULightBeamStatics_ClearBeamFlag_Params
	{
	public:
		struct FLightBeamInitializationData                        InitData;                                                // 0x0000(0x0128)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ELightBeamFlag                                             Flag;                                                    // 0x0128(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.SplitLightProjectile
	 */
	struct ULightProjectileStatics_SplitLightProjectile_Params
	{
	public:
		class ULightProjectile*                                    Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Data;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELightProjectileSplitPattern                               Pattern;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VHQF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpreadAngle;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotateAngle;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OffsetDistance;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDestroySource;                                          // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.SetProjectileFlag
	 */
	struct ULightProjectileStatics_SetProjectileFlag_Params
	{
	public:
		struct FLightProjectileInitializationData                  InitData;                                                // 0x0000(0x0140)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ELightProjectileFlag                                       Flag;                                                    // 0x0140(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.SetHomingState
	 */
	struct ULightProjectileStatics_SetHomingState_Params
	{
	public:
		struct FLightProjectileQueryData                           Query;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIsHoming;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.RemoveLightProjectilesByActor
	 */
	struct ULightProjectileStatics_RemoveLightProjectilesByActor_Params
	{
	public:
		struct FLightProjectileQueryData                           Query;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.IsProjectileFlagSet
	 */
	struct ULightProjectileStatics_IsProjectileFlagSet_Params
	{
	public:
		struct FLightProjectileInitializationData                  InitData;                                                // 0x0000(0x0140)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ELightProjectileFlag                                       Flag;                                                    // 0x0140(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0141(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.ForEachLightProjectile
	 */
	struct ULightProjectileStatics_ForEachLightProjectile_Params
	{
	public:
		struct FLightProjectileQueryData                           Query;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.DetonateLightProjectiles
	 */
	struct ULightProjectileStatics_DetonateLightProjectiles_Params
	{
	public:
		struct FLightProjectileQueryData                           Query;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      StackingEnemyBonusDamage;                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDetonationDelay;                                      // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDetonationDelay;                                      // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromSource
	 */
	struct ULightProjectileStatics_CreateLightProjectileFromSource_Params
	{
	public:
		class ULightProjectile*                                    SourceProjectile;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Data;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x001C(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromDataAsync
	 */
	struct ULightProjectileStatics_CreateLightProjectileFromDataAsync_Params
	{
	public:
		struct FLightProjectileInitializationData                  InitData;                                                // 0x0000(0x0140)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      ForceSpawnTimer;                                         // 0x0140(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.CreateLightProjectileFromData
	 */
	struct ULightProjectileStatics_CreateLightProjectileFromData_Params
	{
	public:
		struct FLightProjectileInitializationData                  InitData;                                                // 0x0000(0x0140)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.CreateLightProjectile
	 */
	struct ULightProjectileStatics_CreateLightProjectile_Params
	{
	public:
		class UClass*                                              Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x0014(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Source;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_95J0[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageType;                                              // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              DamageSource;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UImpactData*                                         ImpactDataOverride;                                      // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.LightProjectileStatics.ClearProjectileFlag
	 */
	struct ULightProjectileStatics_ClearProjectileFlag_Params
	{
	public:
		struct FLightProjectileInitializationData                  InitData;                                                // 0x0000(0x0140)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		ELightProjectileFlag                                       Flag;                                                    // 0x0140(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.ThrowProjectileAsync
	 */
	struct UProjectileBlueprintLibrary_ThrowProjectileAsync_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FThrowProjectileAsyncRequest                        Request;                                                 // 0x0008(0x0188)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0190(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.ThrowActorAt
	 */
	struct UProjectileBlueprintLibrary_ThrowActorAt_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetVelocity;                                          // 0x0014(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxPrediction;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AnglePercent;                                            // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            DirectionOffset;                                         // 0x002C(0x000C)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             LocalTargetOffset;                                       // 0x0038(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.PredictProjectilePathAsync
	 */
	struct UProjectileBlueprintLibrary_PredictProjectilePathAsync_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPredictProjectilePathAsyncRequest                  Request;                                                 // 0x0008(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform_Component
	 */
	struct UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Component_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SourceComponent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WVEO[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.GetSafeProjectileThrowTransform
	 */
	struct UProjectileBlueprintLibrary_GetSafeProjectileThrowTransform_Params
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      IgnoreActors;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bThrowFromFirstPersonSocket;                             // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisionChannel                                          TraceChannel;                                            // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O22S[0xE];                                   // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnFan
	 */
	struct UProjectileBlueprintLibrary_GeneratePointsOnFan_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SampleCount;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpreadAngle;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotateAngle;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OriginOffset;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.GeneratePointsOnCone
	 */
	struct UProjectileBlueprintLibrary_GeneratePointsOnCone_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SampleCount;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpreadAngle;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotateAngle;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OriginOffset;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.DetachProjectilesFromActor
	 */
	struct UProjectileBlueprintLibrary_DetachProjectilesFromActor_Params
	{
	public:
		class AActor*                                              BaseActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.CalculateConeVector
	 */
	struct UProjectileBlueprintLibrary_CalculateConeVector_Params
	{
	public:
		float                                                      Fraction;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Origin;                                                  // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AngleWidth;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AngleHeight;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocityAtActor
	 */
	struct UProjectileBlueprintLibrary_CalcThrowVelocityAtActor_Params
	{
	public:
		struct FVector                                             ResultVelocity;                                          // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ResultGravityScale;                                      // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             StartLocation;                                           // 0x0010(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_36HH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Target;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxPrediction;                                           // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AnglePercent;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            DirectionOffset;                                         // 0x0034(0x000C)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             LocalTargetOffset;                                       // 0x0040(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.ProjectileBlueprintLibrary.CalcThrowVelocity
	 */
	struct UProjectileBlueprintLibrary_CalcThrowVelocity_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ResultVelocity;                                          // 0x0008(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ResultGravityScale;                                      // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             StartLocation;                                           // 0x0018(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0024(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetVelocity;                                          // 0x0030(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxPrediction;                                           // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AnglePercent;                                            // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            DirectionOffset;                                         // 0x0048(0x000C)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             LocalTargetOffset;                                       // 0x0054(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.RecoilControlComponent.ServerApplyInput
	 */
	struct URecoilControlComponent_ServerApplyInput_Params
	{
	public:
		uint32_t                                                   CompressedInputRot;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponAmmoPoolComponent.ServerSendAmmoState
	 */
	struct UWeaponAmmoPoolComponent_ServerSendAmmoState_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_SpareAmmo
	 */
	struct UWeaponAmmoPoolComponent_OnRep_SpareAmmo_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponAmmoPoolComponent.OnRep_ServerSyncedLoadedAmmo
	 */
	struct UWeaponAmmoPoolComponent_OnRep_ServerSyncedLoadedAmmo_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponAmmoPoolComponent.OnMaxLoadedAmmoChanged
	 */
	struct UWeaponAmmoPoolComponent_OnMaxLoadedAmmoChanged_Params
	{
	public:
		float                                                      OldValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponAmmoPoolComponent.OnGivenTo
	 */
	struct UWeaponAmmoPoolComponent_OnGivenTo_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponAmmoPoolComponent.ClientSetLoadedAmmo
	 */
	struct UWeaponAmmoPoolComponent_ClientSetLoadedAmmo_Params
	{
	public:
		int32_t                                                    NewLoadedAmmo;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponAmmoPoolComponent.ClientConsumeAmmo
	 */
	struct UWeaponAmmoPoolComponent_ClientConsumeAmmo_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponAttachmentSlot.SetMesh
	 */
	struct UWeaponAttachmentSlot_SetMesh_Params
	{
	public:
		class UMeshComponent*                                      InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.StopEffects
	 */
	struct UWeaponChargeComponent_StopEffects_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.Overcharged
	 */
	struct UWeaponChargeComponent_Overcharged_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.OnRep_ChargeState
	 */
	struct UWeaponChargeComponent_OnRep_ChargeState_Params
	{
	public:
		EWeaponChargeState                                         PrevChargeState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.OnChargeActionEnd
	 */
	struct UWeaponChargeComponent_OnChargeActionEnd_Params
	{
	public:
		EGbxActionEndState                                         EndState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.GetDischargeDuration
	 */
	struct UWeaponChargeComponent_GetDischargeDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.GetChargePercent
	 */
	struct UWeaponChargeComponent_GetChargePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.GetChargeDuration
	 */
	struct UWeaponChargeComponent_GetChargeDuration_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.FullyDischarged
	 */
	struct UWeaponChargeComponent_FullyDischarged_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.FullyCharged
	 */
	struct UWeaponChargeComponent_FullyCharged_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponChargeComponent.DelayChargeFinished
	 */
	struct UWeaponChargeComponent_DelayChargeFinished_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponClipReloadComponent.OnRep_ClientReloadState
	 */
	struct UWeaponClipReloadComponent_OnRep_ClientReloadState_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponFireBeamComponent.GetShotLightBeamData
	 */
	struct UWeaponFireBeamComponent_GetShotLightBeamData_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponRecoilComponent.OnUsed
	 */
	struct UWeaponRecoilComponent_OnUsed_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponRecoilComponent.OnDetached
	 */
	struct UWeaponRecoilComponent_OnDetached_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponRecoilComponent.OnAttached
	 */
	struct UWeaponRecoilComponent_OnAttached_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponRecoilPatternComponent.ResetPattern
	 */
	struct UWeaponRecoilPatternComponent_ResetPattern_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponRecoilPatternComponent.OnUseFinished
	 */
	struct UWeaponRecoilPatternComponent_OnUseFinished_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternWidthGoodness
	 */
	struct UWeaponRecoilPatternComponent_GetRecoilPatternWidthGoodness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternHeightGoodness
	 */
	struct UWeaponRecoilPatternComponent_GetRecoilPatternHeightGoodness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponRecoilPatternComponent.GetRecoilPatternGoodness
	 */
	struct UWeaponRecoilPatternComponent_GetRecoilPatternGoodness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponSingleFeedReloadComponent.OnUserInput
	 */
	struct UWeaponSingleFeedReloadComponent_OnUserInput_Params
	{
	public:
		unsigned char                                              InputChannel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponSingleFeedReloadComponent.OnRep_ClientReloadState
	 */
	struct UWeaponSingleFeedReloadComponent_OnRep_ClientReloadState_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponStatics.UpdateVisibleAmmo
	 */
	struct UWeaponStatics_UpdateVisibleAmmo_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.UnhideWeapons
	 */
	struct UWeaponStatics_UnhideWeapons_Params
	{
	public:
		class AActor*                                              WeaponUser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Reason;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.UnhideWeapon
	 */
	struct UWeaponStatics_UnhideWeapon_Params
	{
	public:
		class AActor*                                              WeaponUser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Slot;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I0IO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Reason;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.SetVisibleAmmoUpdateMethod
	 */
	struct UWeaponStatics_SetVisibleAmmoUpdateMethod_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponVisibleAmmoUpdateMethod                             NewUpdateMethod;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.SetVisibleAmmoState
	 */
	struct UWeaponStatics_SetVisibleAmmoState_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponVisibleAmmoState                                    NewState;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.ResetVisibleAmmoState
	 */
	struct UWeaponStatics_ResetVisibleAmmoState_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.RefillAmmo
	 */
	struct UWeaponStatics_RefillAmmo_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAsPercent;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldActionEx
	 */
	struct UWeaponStatics_K2_PlayWeaponHoldActionEx_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponActionType                                          WeaponAction;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2OI5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AWeapon*                                             Weapon;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FActionState_Base                                   ActionParams;                                            // 0x0018(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		class UGbxAction*                                          ReturnValue;                                             // 0x00E0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.K2_PlayWeaponHoldAction
	 */
	struct UWeaponStatics_K2_PlayWeaponHoldAction_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponActionType                                          WeaponAction;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UW3J[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AWeapon*                                             Weapon;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlayRate;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxAction*                                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.HideWeapons
	 */
	struct UWeaponStatics_HideWeapons_Params
	{
	public:
		class AActor*                                              WeaponUser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Reason;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.HideWeapon
	 */
	struct UWeaponStatics_HideWeapon_Params
	{
	public:
		class AActor*                                              WeaponUser;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Slot;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T0P1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Reason;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.GiveAmmo
	 */
	struct UWeaponStatics_GiveAmmo_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLoaded;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAsPercent;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.GetWeapon
	 */
	struct UWeaponStatics_GetWeapon_Params
	{
	public:
		class UObject*                                             Context;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AWeapon*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.GetMaxZoomFOVScale
	 */
	struct UWeaponStatics_GetMaxZoomFOVScale_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UseMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IXLR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.GetLoadedAmmo
	 */
	struct UWeaponStatics_GetLoadedAmmo_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UseMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TEEP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.GetFireRateAccelPercent
	 */
	struct UWeaponStatics_GetFireRateAccelPercent_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UseMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3J7E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.GetFireRate
	 */
	struct UWeaponStatics_GetFireRate_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UseMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0TWF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.GetDamageType
	 */
	struct UWeaponStatics_GetDamageType_Params
	{
	public:
		class AWeapon*                                             Weapon;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UseMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VPGC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      ReturnValue;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponStatics.CreateProjectileEQSProxy
	 */
	struct UWeaponStatics_CreateProjectileEQSProxy_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class AActor*                                              ReferenceActor;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProjectileEQSProxy*                                 ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponVisibleAmmoComponent.UpdateBoneVisibility
	 */
	struct UWeaponVisibleAmmoComponent_UpdateBoneVisibility_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoUpdateMethod
	 */
	struct UWeaponVisibleAmmoComponent_SetVisibleAmmoUpdateMethod_Params
	{
	public:
		EWeaponVisibleAmmoUpdateMethod                             NewUpdateMethod;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponVisibleAmmoComponent.SetVisibleAmmoState
	 */
	struct UWeaponVisibleAmmoComponent_SetVisibleAmmoState_Params
	{
	public:
		EWeaponVisibleAmmoState                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxWeapon.WeaponVisibleAmmoComponent.ResetVisibleAmmoState
	 */
	struct UWeaponVisibleAmmoComponent_ResetVisibleAmmoState_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponVisibleAmmoComponent.OnRep_ServerAmmoCount
	 */
	struct UWeaponVisibleAmmoComponent_OnRep_ServerAmmoCount_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponVisibleAmmoComponent.OnDetached
	 */
	struct UWeaponVisibleAmmoComponent_OnDetached_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponVisibleAmmoComponent.OnAttached
	 */
	struct UWeaponVisibleAmmoComponent_OnAttached_Params
	{	};

	/**
	 * Function GbxWeapon.WeaponVisibleAmmoComponent.OnAmmoChanged
	 */
	struct UWeaponVisibleAmmoComponent_OnAmmoChanged_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
