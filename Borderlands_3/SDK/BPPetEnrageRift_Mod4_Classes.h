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
	 * BlueprintGeneratedClass BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C
	 * Size -> 0x0032 (FullSize[0x0510] - InheritedSize[0x04DE])
	 */
	class ABPPetEnrageRift_Mod4_C : public ABPPetEnrageRift_C
	{
	public:
		unsigned char                                              UnknownData_PED7[0x2];                                   // 0x04DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04E0(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WE_Cha_Beastmaster_Skill_Hulk_Out_Rift_Lp_Start;         // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TouchCylinder;                                           // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FXEmitter;                                               // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class APlayerController*                                   LinkedTarget;                                            // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPEventHub_Beastmaster_C*                           EventHubOwner;                                           // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayFeedback(class AActor* InLinkedTarget);
		class UPrimitiveComponent* GetOverlapComponent();
		void UserConstructionScript();
		void OnShutdownRequested(bool bForced);
		void OnLinkedTargetAdded(class AOakCharacter* InLinkedTarget);
		void OnLinkedTargetRemoved(class AOakCharacter* InLinkedTarget);
		void ExecuteUbergraph_BPPetEnrageRift_Mod4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
