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
	 * BlueprintGeneratedClass BPSirenCharacterComponent.BPSirenCharacterComponent_C
	 * Size -> 0x002C (FullSize[0x03F4] - InheritedSize[0x03C8])
	 */
	class UBPSirenCharacterComponent_C : public USirenCharacterComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) Transient, DuplicateTransient
		struct FGbxAttributeFloat                                  RushBonus;                                               // 0x03D0(0x000C) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              UnknownData_F8WU[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPEventHub_Siren_C*                                 SirenEventHub;                                           // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FlareSpawnLocation;                                      // 0x03E8(0x000C) Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPhaseFlareSpawnLocation(struct FVector* res);
		void SetPhaseFlareSpawnLocation(const struct FVector& Loc, bool* res);
		void Start3rdPersonArmFade(bool bVisible, bool bInstant);
		void StartTattoFade(bool bVisible);
		void SetArmElement(EPhaseTranceElementalType NewElement);
		void StartArmMaterialInstanceFade(class UMaterialInstance* NewInstance);
		void ReceiveBeginPlay();
		void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
		void OnRushEventHappened();
		void SetPhaseCastMeshActive(bool bActive);
		void ExecuteUbergraph_BPSirenCharacterComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
