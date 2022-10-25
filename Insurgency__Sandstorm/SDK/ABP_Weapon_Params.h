#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function ABP_Weapon.ABP_Weapon_C.Update Optic Toggle Attachment
	 */
	struct UABP_Weapon_C_Update_Optic_Toggle_Attachment_Params
	{
	public:
		class UObject*                                             bpp__Upgrade__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      bpp__Delegate__pf__const;                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.Update Attached Weapon Sight Offset
	 */
	struct UABP_Weapon_C_Update_Attached_Weapon_Sight_Offset_Params
	{
	public:
		class AItemFirearm*                                        bpp__ParentFirearm__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateUsePointShoot
	 */
	struct UABP_Weapon_C_UpdateUsePointShoot_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateTransform
	 */
	struct UABP_Weapon_C_UpdateTransform_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateRevolverChamberState
	 */
	struct UABP_Weapon_C_UpdateRevolverChamberState_Params
	{
	public:
		TArray<ERevolverChamberState>                              bpp__Chambers__pf__const;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateRevolverChamberPostProcess
	 */
	struct UABP_Weapon_C_UpdateRevolverChamberPostProcess_Params
	{
	public:
		TArray<ERevolverChamberState>                              bpp__Chambers__pf;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateOpticToggleState
	 */
	struct UABP_Weapon_C_UpdateOpticToggleState_Params
	{
	public:
		int32_t                                                    bpp__LatchedMode__pf__const;                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__DesiredMode__pf__const;                             // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateOpticToggle
	 */
	struct UABP_Weapon_C_UpdateOpticToggle_Params
	{
	public:
		class UObject*                                             bpp__Upgrade__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      bpp__Delegate__pf__const;                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateOpticState
	 */
	struct UABP_Weapon_C_UpdateOpticState_Params
	{
	public:
		int32_t                                                    bpp__Mode__pf;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__DesiredMode__pf;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp__Upgrade__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateOpticOnAttachment
	 */
	struct UABP_Weapon_C_UpdateOpticOnAttachment_Params
	{
	public:
		int32_t                                                    bpp__LatchedMode__pf__const;                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__DesiredMode__pf__const;                             // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateMorphMagazine
	 */
	struct UABP_Weapon_C_UpdateMorphMagazine_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.UpdateEquipable
	 */
	struct UABP_Weapon_C_UpdateEquipable_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ToggleVisibilityOfNVG_On
	 */
	struct UABP_Weapon_C_ToggleVisibilityOfNVG_On_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ToggleVisibilityOfNVG_Off
	 */
	struct UABP_Weapon_C_ToggleVisibilityOfNVG_Off_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ToggleOpticState
	 */
	struct UABP_Weapon_C_ToggleOpticState_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ToggleADS
	 */
	struct UABP_Weapon_C_ToggleADS_Params
	{
	public:
		bool                                                       bpp__In__pf;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.StopToggleOpticMontage
	 */
	struct UABP_Weapon_C_StopToggleOpticMontage_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.StopAmmoCheck
	 */
	struct UABP_Weapon_C_StopAmmoCheck_Params
	{
	public:
		float                                                      bpp__BlendOutTime__pf;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.SightAlignment
	 */
	struct UABP_Weapon_C_SightAlignment_Params
	{
	public:
		class USkeletalMeshComponent*                              bpp__EquipableComponent__pf;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              bpp__AttachmentComponent__pf;                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__SightRotation__pf;                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__ModelFlattenScale__pf;                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Return__pf;                                         // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.SetupReloadVariables
	 */
	struct UABP_Weapon_C_SetupReloadVariables_Params
	{
	public:
		bool                                                       bpp__DryReload__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__SingleReload__pf;                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2TU9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__RateMultiplier__pf;                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.SetSprintAnimations
	 */
	struct UABP_Weapon_C_SetSprintAnimations_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.SetFireModeBase
	 */
	struct UABP_Weapon_C_SetFireModeBase_Params
	{
	public:
		bool                                                       bpp__TwoFireModes__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.SetEquipable
	 */
	struct UABP_Weapon_C_SetEquipable_Params
	{
	public:
		class AItemEquipable*                                      bpp__Item__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.SetAmmoContainer
	 */
	struct UABP_Weapon_C_SetAmmoContainer_Params
	{
	public:
		bool                                                       bpp__AlternateMag__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.SelectReload
	 */
	struct UABP_Weapon_C_SelectReload_Params
	{
	public:
		TArray<struct FReloadGroup>                                bpp__Reloads__pf;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        bpp__Reload__pf;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        bpp__ReloadEmpty__pf;                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        bpp__ReloadStages__pf;                                   // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__SelectedReload__pf;                                 // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ScavengeAnimation
	 */
	struct UABP_Weapon_C_ScavengeAnimation_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.PointShootToggle
	 */
	struct UABP_Weapon_C_PointShootToggle_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.Play Ready
	 */
	struct UABP_Weapon_C_Play_Ready_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.PlaySwitchMagazine
	 */
	struct UABP_Weapon_C_PlaySwitchMagazine_Params
	{
	public:
		TArray<class UAnimSequence*>                               bpp__Animation__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__Index__pf;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.PlayReady
	 */
	struct UABP_Weapon_C_PlayReady_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.PlayDetonatorActivate
	 */
	struct UABP_Weapon_C_PlayDetonatorActivate_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.PlayActorInteraction
	 */
	struct UABP_Weapon_C_PlayActorInteraction_Params
	{
	public:
		class AActor*                                              bpp__InteractingxActor__pfT;                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUseItem                                                   bpp__UsableActorType__pf;                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.PlantStart
	 */
	struct UABP_Weapon_C_PlantStart_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.PlantFinished
	 */
	struct UABP_Weapon_C_PlantFinished_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.PlantAbondoned
	 */
	struct UABP_Weapon_C_PlantAbondoned_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnUseActorInteracted
	 */
	struct UABP_Weapon_C_OnUseActorInteracted_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__InteractingActor__pf;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUseItem                                                   bpp__Item__pf;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnTakeDamage
	 */
	struct UABP_Weapon_C_OnTakeDamage_Params
	{
	public:
		class UDamageType*                                         bpp__DamageType__pf__const;                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNetHitReaction                                     bpp__HitReaction__pf;                                    // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnScavengeMagazine
	 */
	struct UABP_Weapon_C_OnScavengeMagazine_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayWeaponMelee
	 */
	struct UABP_Weapon_C_OnPlayWeaponMelee_Params
	{
	public:
		bool                                                       bpp__Bash__pf;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayRevolverReload
	 */
	struct UABP_Weapon_C_OnPlayRevolverReload_Params
	{
	public:
		bool                                                       bpp__DryReload__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Debug__pf;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P9X4[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        bpp__MontageReference__pf;                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayReload
	 */
	struct UABP_Weapon_C_OnPlayReload_Params
	{
	public:
		bool                                                       bpp__bDryReload__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O98H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        bpp__MontageReference__pf;                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayRechamber
	 */
	struct UABP_Weapon_C_OnPlayRechamber_Params
	{
	public:
		float                                                      bpp__BoltSpeed__pf;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WMO9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        bpp__Reference__pf;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayMeleeDamage
	 */
	struct UABP_Weapon_C_OnPlayMeleeDamage_Params
	{
	public:
		class UDamageType*                                         bpp__DamagexType__pfT__const;                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNetHitReaction                                     bpp__HitReaction__pf;                                    // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayKick
	 */
	struct UABP_Weapon_C_OnPlayKick_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayGearItemChangeState
	 */
	struct UABP_Weapon_C_OnPlayGearItemChangeState_Params
	{
	public:
		class AItemInteractableGear*                               bpp__ItemGear__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipableState                                            bpp__NewState__pf;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayFiremodeCycle
	 */
	struct UABP_Weapon_C_OnPlayFiremodeCycle_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayFireExplcit
	 */
	struct UABP_Weapon_C_OnPlayFireExplcit_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayFire
	 */
	struct UABP_Weapon_C_OnPlayFire_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayDetonate
	 */
	struct UABP_Weapon_C_OnPlayDetonate_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltReloadAfterSwitchMagazine
	 */
	struct UABP_Weapon_C_OnPlayBoltReloadAfterSwitchMagazine_Params
	{
	public:
		class UAnimMontage*                                        bpp__AnimReloadBoltAfterSwitchMagazine__pf;              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        bpp__MontagexReference__pfT;                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltReload
	 */
	struct UABP_Weapon_C_OnPlayBoltReload_Params
	{
	public:
		bool                                                       bpp__DryReload__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3YS0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        bpp__MontagexReference__pfT;                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltFire
	 */
	struct UABP_Weapon_C_OnPlayBoltFire_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnPlayAmmoCheck
	 */
	struct UABP_Weapon_C_OnPlayAmmoCheck_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnMeleeAttack
	 */
	struct UABP_Weapon_C_OnMeleeAttack_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnInterruptReload
	 */
	struct UABP_Weapon_C_OnInterruptReload_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnFireStart
	 */
	struct UABP_Weapon_C_OnFireStart_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnFireEnd
	 */
	struct UABP_Weapon_C_OnFireEnd_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.OnDoorKick
	 */
	struct UABP_Weapon_C_OnDoorKick_Params
	{
	public:
		bool                                                       bpp__bKickWillSucceed__pf;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.InterfaceUpdateSimulationBlend
	 */
	struct UABP_Weapon_C_InterfaceUpdateSimulationBlend_Params
	{
	public:
		float                                                      bpp__State__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.InteractOneHandNVG
	 */
	struct UABP_Weapon_C_InteractOneHandNVG_Params
	{
	public:
		class AItemInteractableGear*                               bpp__GearItem__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipableState                                            bpp__State__pf;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.IKCurve Alpha
	 */
	struct UABP_Weapon_C_IKCurve_Alpha_Params
	{
	public:
		bool                                                       bpp__Condition__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Subtract__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WD0V[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__CurveName__pf;                                      // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Alpha__pf;                                          // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.GetRevolverEmpty
	 */
	struct UABP_Weapon_C_GetRevolverEmpty_Params
	{
	public:
		bool                                                       bpp__Revolver__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VOU0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<ERevolverChamberState>                              bpp__RevolverChambers__pf;                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Debug__pf;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Return__pf;                                         // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ForceToggleOpticState
	 */
	struct UABP_Weapon_C_ForceToggleOpticState_Params
	{
	public:
		bool                                                       bpp__bEnable__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ForceRevolverChamberVisibility
	 */
	struct UABP_Weapon_C_ForceRevolverChamberVisibility_Params
	{
	public:
		int32_t                                                    bpp__RemainingAmmo__pf;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_94
	 */
	struct UABP_Weapon_C_ExecuteUbergraph_ABP_Weapon_94_Params
	{
	public:
		int32_t                                                    bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_5
	 */
	struct UABP_Weapon_C_ExecuteUbergraph_ABP_Weapon_5_Params
	{
	public:
		int32_t                                                    bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_119
	 */
	struct UABP_Weapon_C_ExecuteUbergraph_ABP_Weapon_119_Params
	{
	public:
		int32_t                                                    bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_1
	 */
	struct UABP_Weapon_C_ExecuteUbergraph_ABP_Weapon_1_Params
	{
	public:
		int32_t                                                    bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_D05DF7334956D02FDABC06967D6DB18B
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_D05DF7334956D02FDABC06967D6DB18B_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_C704FD43482A348C04E83AA7F446036E
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_C704FD43482A348C04E83AA7F446036E_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_80C9A5394F0DB721E336D89CD1B04247
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_80C9A5394F0DB721E336D89CD1B04247_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_32838D4E49D0EE64E90B138A2557C608
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_32838D4E49D0EE64E90B138A2557C608_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoBoneIK_62671E2741385919C2B2E4824E87120E
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoBoneIK_62671E2741385919C2B2E4824E87120E_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF2C5D5E4DD3D02165438A9010B218F6
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF2C5D5E4DD3D02165438A9010B218F6_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF0ADCCB46B5227C1316F68739EB3417
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF0ADCCB46B5227C1316F68739EB3417_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_F1516D9D44651050150432917B210B14
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_F1516D9D44651050150432917B210B14_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_EC5C4FC045217160D69661949735FC32
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_EC5C4FC045217160D69661949735FC32_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E8EA830547836E34099463A92709ECA0
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E8EA830547836E34099463A92709ECA0_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E7FE93A74E3C0526A2DDEBA13B6C8CC4
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E7FE93A74E3C0526A2DDEBA13B6C8CC4_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E16F1B184971F805AFE5C0A9EB6F5FDC
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E16F1B184971F805AFE5C0A9EB6F5FDC_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DDB1F0A8439BEFD483385BB757F7ED8F
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DDB1F0A8439BEFD483385BB757F7ED8F_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DAA7E5E14DFFA69B87CF06B2BC4AE068
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DAA7E5E14DFFA69B87CF06B2BC4AE068_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D47011F04F0E6BC9501C548735F577B0
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D47011F04F0E6BC9501C548735F577B0_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D44E03434EBDE256A926B9A4C1D52A05
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D44E03434EBDE256A926B9A4C1D52A05_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D43F921C46198B67713CF389BEBBF579
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D43F921C46198B67713CF389BEBBF579_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D2E951EC4563008F5B4E78A160DDD7C0
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D2E951EC4563008F5B4E78A160DDD7C0_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D137A3914FB912BACB71A799FBCF41D2
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D137A3914FB912BACB71A799FBCF41D2_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_CE0C86294CB03D0333FDB8BEA4AFF55A
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_CE0C86294CB03D0333FDB8BEA4AFF55A_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BFF8BF824D2754CFB94F5DADF231B6DF
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BFF8BF824D2754CFB94F5DADF231B6DF_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BB6FCAC5429167244B395ABE04097FA8
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BB6FCAC5429167244B395ABE04097FA8_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B83AEDEA4DA8599B38DD32AF7B0F5B9A
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B83AEDEA4DA8599B38DD32AF7B0F5B9A_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B7CDEF954329B13091AAC29488B9D1DF
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B7CDEF954329B13091AAC29488B9D1DF_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B40568A64924D63FDD795BA8335EBCD9
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B40568A64924D63FDD795BA8335EBCD9_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B277E5C04DC09D7CDC5AF7B79AB87231
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B277E5C04DC09D7CDC5AF7B79AB87231_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A70FB01D4E63C77A557C778651EBF30B
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A70FB01D4E63C77A557C778651EBF30B_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A5A5071B4E0DEE5B6CF92C9AB41E56BF
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A5A5071B4E0DEE5B6CF92C9AB41E56BF_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A32701024038EE781E0949965EDB75A0
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A32701024038EE781E0949965EDB75A0_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9D3694B54CAD4E0A45B70C90D7FA4290
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9D3694B54CAD4E0A45B70C90D7FA4290_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_98B7C0384F960422F5778581BCEB103A
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_98B7C0384F960422F5778581BCEB103A_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_91D454AD43B5E65818051EA62FCDE20C
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_91D454AD43B5E65818051EA62FCDE20C_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9160DAEF4DAC3A8F23C0859CF6DE9711
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9160DAEF4DAC3A8F23C0859CF6DE9711_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_90AF15E741B84946FD98938D7ADDF9A7
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_90AF15E741B84946FD98938D7ADDF9A7_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_8A45054148D983C3EF883BBE93F69D8B
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_8A45054148D983C3EF883BBE93F69D8B_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_88D4287C450AE59A213585BAB9CE9852
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_88D4287C450AE59A213585BAB9CE9852_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_832D6CCB499DCECB21622AA08FD991F1
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_832D6CCB499DCECB21622AA08FD991F1_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7D603A184B9BA5E4EFCB7587855575D6
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7D603A184B9BA5E4EFCB7587855575D6_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7C38881240B4B4ED1D00F5B0DF6970B5
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7C38881240B4B4ED1D00F5B0DF6970B5_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7ABF732341E0CA7204032BBB1A0C3948
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7ABF732341E0CA7204032BBB1A0C3948_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7A01DE9C411A171E0A23ECB3D3399EE2
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7A01DE9C411A171E0A23ECB3D3399EE2_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_76A2B7D9476333508731979CE1990C15
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_76A2B7D9476333508731979CE1990C15_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_75B7F0924C9201DE7CCECDA323CDD2E3
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_75B7F0924C9201DE7CCECDA323CDD2E3_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_6C69B9DB462DC354958973B30A024304
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_6C69B9DB462DC354958973B30A024304_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_68792CD04C569D14DBE46B9D98EE8132
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_68792CD04C569D14DBE46B9D98EE8132_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_65E0737B4083F4DE4BCDAABEF906899D
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_65E0737B4083F4DE4BCDAABEF906899D_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_655C53984D323E6D6C0298A4A93B87F7
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_655C53984D323E6D6C0298A4A93B87F7_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_652AE6214045C14021EA3EA239C1982E
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_652AE6214045C14021EA3EA239C1982E_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D819291447B316C7495F289BA0F0468
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D819291447B316C7495F289BA0F0468_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D6A972540B02DAFC23225B3432A056F
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D6A972540B02DAFC23225B3432A056F_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5BC41C974CFDE7DB1196B2A1B23509C7
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5BC41C974CFDE7DB1196B2A1B23509C7_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_56024C974594463E158264BF33F68851
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_56024C974594463E158264BF33F68851_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_52A6337C402795AE5EB0E78D87ACF4EC
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_52A6337C402795AE5EB0E78D87ACF4EC_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_42351C364F2CD942AE421CBBE75748AC
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_42351C364F2CD942AE421CBBE75748AC_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3F7E52E5441AA0F3694AF49B0C14E85B
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3F7E52E5441AA0F3694AF49B0C14E85B_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3E9C83724280CE2A81B7A8B1985FD7E5
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3E9C83724280CE2A81B7A8B1985FD7E5_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_38E42E1F4CCCEC8EAA8B89AA30ACE8E3
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_38E42E1F4CCCEC8EAA8B89AA30ACE8E3_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_372FC0C840519577B03AAB9F9F8EF936
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_372FC0C840519577B03AAB9F9F8EF936_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_2510FEA444B96F81E9A79BB9742B8E15
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_2510FEA444B96F81E9A79BB9742B8E15_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_21EBCEDD49E596111DE86880958C7D50
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_21EBCEDD49E596111DE86880958C7D50_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_10BDFA2C4DD49A79BE58FCBD99521355
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_10BDFA2C4DD49A79BE58FCBD99521355_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_100C2CF5454B71A8ADA27DA56812C62E
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_100C2CF5454B71A8ADA27DA56812C62E_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_0D35690D405A5207984977A725DC251F
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_0D35690D405A5207984977A725DC251F_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequencePlayer_B7C60A7E4906DA3A059838A3A3EF745C
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequencePlayer_B7C60A7E4906DA3A059838A3A3EF745C_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequenceEvaluator_14C3BE5C4F8430F338DF879A31193970
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequenceEvaluator_14C3BE5C4F8430F338DF879A31193970_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ModifyBone_E09466D44C3DBD94318260A724A9E313
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ModifyBone_E09466D44C3DBD94318260A724A9E313_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_F981A03149B0754D4D94849B08C3EBD8
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_F981A03149B0754D4D94849B08C3EBD8_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E69D7F9E4A7A4BB2138C57B26565E7AF
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E69D7F9E4A7A4BB2138C57B26565E7AF_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E42C4B2A45A7F2AC7730C2BFCFF3CCD6
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E42C4B2A45A7F2AC7730C2BFCFF3CCD6_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_DDA178AF428E54B397BE5BB4F9DDCA76
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_DDA178AF428E54B397BE5BB4F9DDCA76_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_D429301E4198A542471DE38B782187D5
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_D429301E4198A542471DE38B782187D5_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_9A009C694C8066608AFD4F821A53A033
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_9A009C694C8066608AFD4F821A53A033_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_6EAA26A94E7CDE475A0B89A986AF3F87
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_6EAA26A94E7CDE475A0B89A986AF3F87_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_65D151CB497C3FF02D40C092F551AE3A
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_65D151CB497C3FF02D40C092F551AE3A_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_45635F7D43BE422FC32ECB90A6676C51
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_45635F7D43BE422FC32ECB90A6676C51_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_3528CE2643E4CE894DD5B9BEBCA63443
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_3528CE2643E4CE894DD5B9BEBCA63443_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_072CEC504A41F7B6ECFA8288E3D5BB9D
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_072CEC504A41F7B6ECFA8288E3D5BB9D_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_BlendListByBool_BD9B9025401A098110AFBBACA80F85BA
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_BlendListByBool_BD9B9025401A098110AFBBACA80F85BA_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_B3241673466064B2C7078FAB2D4A53DC
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_B3241673466064B2C7078FAB2D4A53DC_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_903D504F466FBE7306E7B8B8E46A0E73
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_903D504F466FBE7306E7B8B8E46A0E73_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_8E68CF2D4A7C7A675ACF2BAE6F86B101
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_8E68CF2D4A7C7A675ACF2BAE6F86B101_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_6AA0099A4B6A9135EA2DA3B6370F90A1
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_6AA0099A4B6A9135EA2DA3B6370F90A1_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_318C1DFE464AD9977E820DBC9DA7F3E4
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_318C1DFE464AD9977E820DBC9DA7F3E4_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_08FA83924962E0B549A039B6931973E4
	 */
	struct UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_08FA83924962E0B549A039B6931973E4_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.DeltaRotatorAxis
	 */
	struct UABP_Weapon_C_DeltaRotatorAxis_Params
	{
	public:
		float                                                      bpp__A__pf;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__B__pf;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Output__pf;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ClampedFLerp
	 */
	struct UABP_Weapon_C_ClampedFLerp_Params
	{
	public:
		float                                                      bpp__A__pf;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__B__pf;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Alpha__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Return__pf;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CheckTickUpdate
	 */
	struct UABP_Weapon_C_CheckTickUpdate_Params
	{
	public:
		float                                                      bpp__DelayTime__pf;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__NextTickUpdate__pf;                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Reutrn__pf;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BB2J[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__ReturnNextTickUpdate__pf;                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CheckBelt
	 */
	struct UABP_Weapon_C_CheckBelt_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.ChangeRagPaticleState
	 */
	struct UABP_Weapon_C_ChangeRagPaticleState_Params
	{
	public:
		bool                                                       bpp__ForceKill__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CancelBolting
	 */
	struct UABP_Weapon_C_CancelBolting_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CancelBolting_3
	 */
	struct UABP_Weapon_C_CancelBolting_3_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.Calc Generic Float Alpha
	 */
	struct UABP_Weapon_C_Calc_Generic_Float_Alpha_Params
	{
	public:
		float                                                      bpp__Target__pf;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__AlphaInput__pf;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__AlphaOutput__pf;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Finished__pf;                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.Calc Axis Interp
	 */
	struct UABP_Weapon_C_Calc_Axis_Interp_Params
	{
	public:
		float                                                      bpp__Current__pf;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Target__pf;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Output__pf;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcVectorInterp
	 */
	struct UABP_Weapon_C_CalcVectorInterp_Params
	{
	public:
		struct FVector                                             bpp__Current__pf;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Target__pf;                                         // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Output__pf;                                         // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcVariableInterp
	 */
	struct UABP_Weapon_C_CalcVariableInterp_Params
	{
	public:
		float                                                      bpp__Current__pf;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Target__pf;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Output__pf;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.Calculate Magazine Offset
	 */
	struct UABP_Weapon_C_Calculate_Magazine_Offset_Params
	{
	public:
		class USceneComponent*                                     bpp__Magazine__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__ExtendedSocket__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__StandardSocket__pf;                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Position__pf;                                       // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            bpp__Rotation__pf;                                       // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcSprintIKAlpha
	 */
	struct UABP_Weapon_C_CalcSprintIKAlpha_Params
	{
	public:
		float                                                      bpp__Sprint__pf;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Charge__pf;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__BipodLegState__pf;                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcSinusoid
	 */
	struct UABP_Weapon_C_CalcSinusoid_Params
	{
	public:
		float                                                      bpp__Frequency__pf;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Amplitude__pf;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__GameTime__pf;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Positionx__pfzy;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BQ80[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__Output__pf;                                         // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcRotatorInterp
	 */
	struct UABP_Weapon_C_CalcRotatorInterp_Params
	{
	public:
		struct FRotator                                            bpp__Current__pf;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            bpp__Target__pf;                                         // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            bpp__Output__pf;                                         // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcLeanOffsets
	 */
	struct UABP_Weapon_C_CalcLeanOffsets_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcGenericAlpha
	 */
	struct UABP_Weapon_C_CalcGenericAlpha_Params
	{
	public:
		bool                                                       bpp__Target__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7JTJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__AlphaInput__pf;                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Constant__pf;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OX8J[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__AlphaOutput__pf;                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Finished__pf;                                       // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcFireOffsetLimits
	 */
	struct UABP_Weapon_C_CalcFireOffsetLimits_Params
	{
	public:
		struct FVector                                             bpp__OpticOffset__pf;                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcBobbing
	 */
	struct UABP_Weapon_C_CalcBobbing_Params
	{
	public:
		float                                                      bpp__BobbingxScale__pfT;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__BobbingxSpeed__pfT;                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__InputAdjustedTime__pf;                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Location__pf;                                       // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            bpp__Rotator__pf;                                        // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      bpp__AdjustedGameTime__pf;                               // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcAnimPositionLength
	 */
	struct UABP_Weapon_C_CalcAnimPositionLength_Params
	{
	public:
		class UAnimSequenceBase*                                   bpp__Sequence__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Reverse__pf;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZAYM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.CalcAlphaInterp
	 */
	struct UABP_Weapon_C_CalcAlphaInterp_Params
	{
	public:
		float                                                      bpp__Alpha__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Switch__pf;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FS5R[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__Speed__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Output__pf;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintUpdateAnimation
	 */
	struct UABP_Weapon_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnUpgradeMeshLoaded
	 */
	struct UABP_Weapon_C_BlueprintOnUpgradeMeshLoaded_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWeaponVisualUpgradeComponent*                       bpp__Upgrade__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnUpgradeInstalled
	 */
	struct UABP_Weapon_C_BlueprintOnUpgradeInstalled_Params
	{
	public:
		class UWeaponUpgradeComponent*                             bpp__Upgrade__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnSwitchMagazineInterrupt
	 */
	struct UABP_Weapon_C_BlueprintOnSwitchMagazineInterrupt_Params
	{
	public:
		float                                                      bpp__AnimationInterruptTime__pf__const;                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnSwitchMagazine
	 */
	struct UABP_Weapon_C_BlueprintOnSwitchMagazine_Params
	{
	public:
		float                                                      bpp__RateMultiplier__pf__const;                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bDryReload__pf__const;                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnRevolverChambersUpdated
	 */
	struct UABP_Weapon_C_BlueprintOnRevolverChambersUpdated_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReloadInterrupt
	 */
	struct UABP_Weapon_C_BlueprintOnReloadInterrupt_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReloadAfterSwitchMagazine
	 */
	struct UABP_Weapon_C_BlueprintOnReloadAfterSwitchMagazine_Params
	{
	public:
		bool                                                       bpp__bDryReload__pf__const;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bSingleReload__pf__const;                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EGHC[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__RateMultiplier__pf__const;                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReload
	 */
	struct UABP_Weapon_C_BlueprintOnReload_Params
	{
	public:
		bool                                                       bpp__bDryReload__pf__const;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bSingleReload__pf__const;                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JV9L[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__RateMultiplier__pf__const;                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnPlayerClassAttributesUpdated
	 */
	struct UABP_Weapon_C_BlueprintOnPlayerClassAttributesUpdated_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeshLoaded
	 */
	struct UABP_Weapon_C_BlueprintOnMeshLoaded_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeleeWeaponHit
	 */
	struct UABP_Weapon_C_BlueprintOnMeleeWeaponHit_Params
	{
	public:
		struct FHitResult                                          bpp__Hit__pf__const;                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeleeWeaponAttack
	 */
	struct UABP_Weapon_C_BlueprintOnMeleeWeaponAttack_Params
	{
	public:
		struct FMeleeConfig                                        bpp__SelectedAttack__pf__const;                          // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnItemUnequip
	 */
	struct UABP_Weapon_C_BlueprintOnItemUnequip_Params
	{
	public:
		bool                                                       bpp__bInstant__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZGY0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AItemEquipable*                                      bpp__SwitchingTo__pf;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnItemEquip
	 */
	struct UABP_Weapon_C_BlueprintOnItemEquip_Params
	{
	public:
		bool                                                       bpp__bInstant__pf__const;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GLNE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AItemEquipable*                                      bpp__SwitchingFrom__pf;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bWantsFirstEquip__pf__const;                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnGenericMeleeAttack
	 */
	struct UABP_Weapon_C_BlueprintOnGenericMeleeAttack_Params
	{
	public:
		bool                                                       bpp__bBash__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnGearInteracted
	 */
	struct UABP_Weapon_C_BlueprintOnGearInteracted_Params
	{
	public:
		class AItemInteractableGear*                               bpp__GearItem__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipableState                                            bpp__NewState__pf;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmStopFire
	 */
	struct UABP_Weapon_C_BlueprintOnFirearmStopFire_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmFired
	 */
	struct UABP_Weapon_C_BlueprintOnFirearmFired_Params
	{
	public:
		struct FVector                                             bpp__FireOrigin__pf__const;                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__FireDirection__pf__const;                           // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmDryFire
	 */
	struct UABP_Weapon_C_BlueprintOnFirearmDryFire_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFastReload
	 */
	struct UABP_Weapon_C_BlueprintOnFastReload_Params
	{
	public:
		bool                                                       bpp__bDryReload__pf__const;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DJ44[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bpp__RateMultiplier__pf__const;                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnCycleFiremode
	 */
	struct UABP_Weapon_C_BlueprintOnCycleFiremode_Params
	{
	public:
		EFirearmFiremode                                           bpp__OldFiremode__pf__const;                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFirearmFiremode                                           bpp__NewFiremode__pf__const;                             // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBoltCycle
	 */
	struct UABP_Weapon_C_BlueprintOnBoltCycle_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBipodLegsStateChanged
	 */
	struct UABP_Weapon_C_BlueprintOnBipodLegsStateChanged_Params
	{
	public:
		EBipodState                                                bpp__OldState__pf__const;                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBipodState                                                bpp__NewState__pf__const;                                // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBipodDeployedStateChanged
	 */
	struct UABP_Weapon_C_BlueprintOnBipodDeployedStateChanged_Params
	{
	public:
		EBipodState                                                bpp__OldState__pf__const;                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBipodState                                                bpp__NewState__pf__const;                                // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBecomeViewTarget
	 */
	struct UABP_Weapon_C_BlueprintOnBecomeViewTarget_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintOnAmmoCheck
	 */
	struct UABP_Weapon_C_BlueprintOnAmmoCheck_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.BlueprintInitializeAnimation
	 */
	struct UABP_Weapon_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AttachmentUpdateOpticDelegate
	 */
	struct UABP_Weapon_C_AttachmentUpdateOpticDelegate_Params
	{
	public:
		int32_t                                                    bpp__LatchedMode__pf__const;                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__DesiredMode__pf__const;                             // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_UnderbarrelBlend
	 */
	struct UABP_Weapon_C_AnimNotify_UnderbarrelBlend_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_TubeSwapFinished
	 */
	struct UABP_Weapon_C_AnimNotify_TubeSwapFinished_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_SwitchMagazineFinished
	 */
	struct UABP_Weapon_C_AnimNotify_SwitchMagazineFinished_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_StopReady
	 */
	struct UABP_Weapon_C_AnimNotify_StopReady_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_RevolverForceVisibility
	 */
	struct UABP_Weapon_C_AnimNotify_RevolverForceVisibility_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_ReloadResume
	 */
	struct UABP_Weapon_C_AnimNotify_ReloadResume_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_ReloadMagTypeChange
	 */
	struct UABP_Weapon_C_AnimNotify_ReloadMagTypeChange_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_PlayReady
	 */
	struct UABP_Weapon_C_AnimNotify_PlayReady_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_MolotovRag
	 */
	struct UABP_Weapon_C_AnimNotify_MolotovRag_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_MeleeBlend
	 */
	struct UABP_Weapon_C_AnimNotify_MeleeBlend_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_GrenadePullback
	 */
	struct UABP_Weapon_C_AnimNotify_GrenadePullback_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_FirePinState
	 */
	struct UABP_Weapon_C_AnimNotify_FirePinState_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_Finish Reload
	 */
	struct UABP_Weapon_C_AnimNotify_Finish_Reload_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_FinishedReload
	 */
	struct UABP_Weapon_C_AnimNotify_FinishedReload_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_EndScavenge
	 */
	struct UABP_Weapon_C_AnimNotify_EndScavenge_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_End_Equip_Animation
	 */
	struct UABP_Weapon_C_AnimNotify_End_Equip_Animation_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_End_Anim
	 */
	struct UABP_Weapon_C_AnimNotify_End_Anim_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_DrawChamber
	 */
	struct UABP_Weapon_C_AnimNotify_DrawChamber_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_DeployedLeftHand
	 */
	struct UABP_Weapon_C_AnimNotify_DeployedLeftHand_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimNotify_BeltReplace
	 */
	struct UABP_Weapon_C_AnimNotify_BeltReplace_Params
	{	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AnimGraph
	 */
	struct UABP_Weapon_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon.ABP_Weapon_C.AdjustMontageRate
	 */
	struct UABP_Weapon_C_AdjustMontageRate_Params
	{
	public:
		class UAnimMontage*                                        bpp__MontageReference__pf;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__RateMultiplier__pf;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.OnUsableInteractionDelegate__DelegateSignature
	 */
	struct UABP_Weapon_C_OnUsableInteractionDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__InteractingActor__pf;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUseItem                                                   bpp__Item__pf;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantStartDelegate__DelegateSignature
	 */
	struct UABP_Weapon_C_OnPlantStartDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantFinishedDelegate__DelegateSignature
	 */
	struct UABP_Weapon_C_OnPlantFinishedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantAbandonedDelegate__DelegateSignature
	 */
	struct UABP_Weapon_C_OnPlantAbandonedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.OnDetonatorUsedDelegate__DelegateSignature
	 */
	struct UABP_Weapon_C_OnDetonatorUsedDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.OnCycleOpticDelegate__DelegateSignature
	 */
	struct UABP_Weapon_C_OnCycleOpticDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    bpp__LatchedMode__pf;                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__DesiredMode__pf;                                    // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.OnCharacterTakeDamageDelegate__DelegateSignature
	 */
	struct UABP_Weapon_C_OnCharacterTakeDamageDelegate__DelegateSignature_Params
	{
	public:
		class UDamageType*                                         bpp__DamageType__pf;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNetHitReaction                                     bpp__HitReaction__pf;                                    // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.DelegateDoorKick__DelegateSignature
	 */
	struct UABP_Weapon_C_DelegateDoorKick__DelegateSignature_Params
	{
	public:
		bool                                                       bpp__bKickWillSucceed__pf;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction ABP_Weapon.ABP_Weapon_C.AmmoGatheredDelegate__DelegateSignature
	 */
	struct UABP_Weapon_C_AmmoGatheredDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
