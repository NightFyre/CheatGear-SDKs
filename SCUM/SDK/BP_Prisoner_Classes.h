#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_Prisoner.BP_Prisoner_C
	 * Size -> 0x01A8 (FullSize[0x1FB8] - InheritedSize[0x1E10])
	 */
	class ABP_Prisoner_C : public APrisoner
	{
	public:
		class UPrisonerFirstPersonSubviewComponent*                FPV_Mounted;                                             // 0x1E10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 VehicleSpringArm;                                        // 0x1E18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonAerialSubviewComponent*          TPV_Falling;                                             // 0x1E20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Grappled;                                            // 0x1E28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonVehicleAimingSubviewComponent*   FPV_MountedLeaningStanceAimingDownTheSights;             // 0x1E30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonVehicleAimingSubviewComponent*   FPV_MountedDefaultStanceAimingDownTheSights;             // 0x1E38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonVehicleAimingSubviewComponent*   FPV_MountedLeaningStanceAiming;                          // 0x1E40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonVehicleAimingSubviewComponent*   FPV_MountedDefaultStanceAiming;                          // 0x1E48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FPViewsMouintedAiming;                                   // 0x1E50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Throwing;                                            // 0x1E58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_Lying;                                               // 0x1E60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Swimming;                                            // 0x1E68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    DangerDetectionSphere;                                   // 0x1E70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVoiceAudioComponent*                                VoiceAudio;                                              // 0x1E78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsuleFoot_R;                       // 0x1E80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsuleFoot_L;                       // 0x1E88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsuleHead;                         // 0x1E90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsuleLeg_R;                        // 0x1E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsuleLeg_L;                        // 0x1EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsuleHand_R;                       // 0x1EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsuleHand_L;                       // 0x1EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    BulletFlyBySoundCollision;                               // 0x1EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVisionEffectsComponent*                             VisionEffectsComponent;                                  // 0x1EC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Defecating;                                          // 0x1EC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_ClimbingWindow;                                      // 0x1ED0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_ClimbingWindow;                                      // 0x1ED8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Diving;                                              // 0x1EE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TPViews;                                                 // 0x1EE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_NarrowLadder;                                        // 0x1EF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Ragdoll;                                             // 0x1EF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    NameWidget;                                              // 0x1F00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_StandingMelee;                                       // 0x1F08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_StandingMelee;                                       // 0x1F10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_ProneAimingDownTheSights;                            // 0x1F18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_CrouchingAimingDownTheSights;                        // 0x1F20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_StandingAimingDownTheSights;                         // 0x1F28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_ProneAiming;                                         // 0x1F30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_CrouchingAiming;                                     // 0x1F38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_StandingAiming;                                      // 0x1F40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FPViewsAiming;                                           // 0x1F48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_ProneAiming;                                         // 0x1F50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_CrouchingAiming;                                     // 0x1F58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_StandingAiming;                                      // 0x1F60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_Prone;                                               // 0x1F68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_Crouching;                                           // 0x1F70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonSubviewComponent*                FPV_Standing;                                            // 0x1F78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FPViews;                                                 // 0x1F80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Standing;                                            // 0x1F88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Prone;                                               // 0x1F90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonSubviewComponent*                TPV_Crouching;                                           // 0x1F98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerFirstPersonViewComponent*                   FirstPersonView;                                         // 0x1FA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrisonerThirdPersonViewComponent*                   ThirdPersonView;                                         // 0x1FA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 BodyToMove;                                              // 0x1FB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
