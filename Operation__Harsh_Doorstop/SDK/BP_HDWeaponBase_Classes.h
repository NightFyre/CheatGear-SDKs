#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BP_HDWeaponBase.BP_HDWeaponBase_C
	 * Size -> 0x01A8 (FullSize[0x0A08] - InheritedSize[0x0860])
	 */
	class ABP_HDWeaponBase_C : public AHDBaseWeapon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0860(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Muzzle;                                                  // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultBipod;                                            // 0x0870(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultGrip;                                             // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultBarrel;                                           // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSight;                                            // 0x0888(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UAnimSequenceBase*>                LocoAnimSet;                                             // 0x0890(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay
		TMap<class FName, class UAnimSequenceBase*>                LocoTPPAnimSet;                                          // 0x08E0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay
		bool                                                       bUseMirroredLowerBodyLocomotion;                         // 0x0930(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_67N5[0x3];                                   // 0x0931(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FirstPersonPositionOffset;                               // 0x0934(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasGrip;                                                // 0x0940(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHasBipod;                                               // 0x0941(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KCKU[0x2];                                   // 0x0942(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BracedAimPosition;                                       // 0x0944(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CurrentSight;                                            // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CurrentBarrel;                                           // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CurrentGrip;                                             // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     CurrentBipod;                                            // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USceneComponent*>                             Sights;                                                  // 0x0970(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUpdateAttachments;                                     // 0x0980(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ADSOffset;                                               // 0x0990(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BipodPlayerDistance;                                     // 0x0994(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BipodCameraHeight;                                       // 0x0998(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4PA2[0x4];                                   // 0x099C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FiringScreenShake;                                       // 0x09A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BracedAimTilt;                                           // 0x09A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ThirdPersonPositionOffset;                               // 0x09AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ThirdPersonAimOffset;                                    // 0x09B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickAmount;                                              // 0x09C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KickNoiseAmount;                                         // 0x09C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4W8M[0x4];                                   // 0x09CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BasePoseBonesToHide;                                     // 0x09D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash
		class FName                                                SecondMagBoneName;                                       // 0x09E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BulletBoneName;                                          // 0x09E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LowReadyRotationOffset;                                  // 0x09F0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             LowReadyPositionOffset;                                  // 0x09FC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ShouldUseMirroredLowerBodyLoco(bool* bOutUseMirrored);
		void GetLocoTPPAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet);
		void GetLocoAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet);
		bool CanFire();
		void InternalSetVisibilityForAttachment(class USceneComponent* Attachment, bool bFirstPerson);
		void UpdateAttachmentVisibility(bool bFirstPerson);
		bool RemoveLegacyLocomotionAnims(bool bFPP);
		TMap<class FName, class UAnimSequenceBase*> GetLegacyLocomotionAnims(bool bFPP);
		void UserConstructionScript();
		void CycleSight();
		void SetCurrentSight(class USceneComponent* Sight);
		void ReceiveFire();
		void ReceiveVisibilityChanged(bool bFirstPerson);
		void ExecuteUbergraph_BP_HDWeaponBase(int32_t EntryPoint);
		void OnUpdateAttachments__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
