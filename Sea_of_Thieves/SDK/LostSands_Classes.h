#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class LostSands.LostSandsRowboatGunpowderBarrel
	 * Size -> 0x0230 (FullSize[0x05F8] - InheritedSize[0x03C8])
	 */
	class ALostSandsRowboatGunpowderBarrel : public AActor
	{
	public:
		unsigned char                                              UnknownData_4XOJ[0xB8];                                  // 0x03C8(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActionRulesComponent*                               ActionRulesComponent;                                    // 0x0480(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInteractableComponent*                              InteractableComponent;                                   // 0x0488(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshMemoryConstraintComponent*                StaticMeshComponent;                                     // 0x0490(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFlammableWieldableComponent*                        FlammableComponent;                                      // 0x0498(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULightWeightStatusEffectManagerComponent*            StatusEffectComponent;                                   // 0x04A0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UItemHealthComponent*                                ItemHealthComponent;                                     // 0x04A8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionComponent*                                 ExplosionComponent;                                      // 0x04B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class URewindComponent*                                    RewindComponent;                                         // 0x04B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ToggleFuseInputId;                                       // 0x04C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FText                                                LightFuseDescription;                                    // 0x04C8(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_0FQJ[0x20];                                  // 0x04E0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                ExtinguishFuseDescription;                               // 0x0500(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_LJJO[0x20];                                  // 0x0518(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                NamedPointsGroupName;                                    // 0x0538(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class AActor>                                    RangeReferenceNamedPointActor;                           // 0x0540(0x001C) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_MLL0[0x4];                                   // 0x055C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<float>                                              DistanceFromNamedPoints;                                 // 0x0560(0x0010) Edit, ZeroConstructor
		struct FPlayerStat                                         RowboatDestroyedAtGoldenSandsStat;                       // 0x0570(0x0004) Edit, DisableEditOnInstance
		struct FPlayerStat                                         RowboatDestroyedAwayFromGoldenSandsStat;                 // 0x0574(0x0004) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_I6G0[0x80];                                  // 0x0578(0x0080) MISSED OFFSET (PADDING)

	public:
		bool IsFuseEnabled();
		bool IsExplosionAtGoldenSandsOutpost(const struct FVector& InLocation);
		void EnableFuse();
		void DisableFuse();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
