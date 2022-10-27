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
	 * BlueprintGeneratedClass BPClass_Artifact.BPClass_Artifact_C
	 * Size -> 0x0034 (FullSize[0x04F4] - InheritedSize[0x04C0])
	 */
	class ABPClass_Artifact_C : public AOakInventoryEquippableItem
	{
	public:
		class USkeletalMeshComponent*                              ArtifactMesh;                                            // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Artifact_MeleeBonusDamage;                               // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Artifact_MeleeBonusHealing;                              // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_RadiationExplosionRadiusMultiplier;                  // 0x04D0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_RadiationExplosionDamageMultiplier;                  // 0x04DC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  Att_RadiationAuraDamageScalar;                           // 0x04E8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
