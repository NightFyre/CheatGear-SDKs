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
	 * Class BreakableActorFramework.BreakableActorAudioComponent
	 * Size -> 0x00E0 (FullSize[0x01A8] - InheritedSize[0x00C8])
	 */
	class UBreakableActorAudioComponent : public UActorComponent
	{
	public:
		bool                                                       UseParentEmitter;                                        // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JN5O[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWwiseObjectPoolWrapper*                             AudioPool;                                               // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayMusicEvent;                                          // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopMusicEvent;                                          // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayDamagedEvent;                                        // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PlayDestroyedEvent;                                      // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DAPL[0xB0];                                  // 0x00F8(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BreakableActorFramework.BreakableActorBase
	 * Size -> 0x0180 (FullSize[0x0548] - InheritedSize[0x03C8])
	 */
	class ABreakableActorBase : public AActor
	{
	public:
		unsigned char                                              UnknownData_319M[0x20];                                  // 0x03C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DespawnDelay;                                            // 0x03E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4ZCI[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBreakableActorDamaged;                                 // 0x03F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class FScriptMulticastDelegate                             OnBreakableActorDestroyed;                               // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable
		class UPrimitiveComponent*                                 ThirdPersonMesh;                                         // 0x0410(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UHealthComponent*                                    HealthComponent;                                         // 0x0418(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UBreakableActorAudioComponent*                       AudioComponent;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UBreakableActorVfxComponent*                         VFXComponent;                                            // 0x0428(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UBreakableActorDynamicMaterialComponent*             DamageMaterialComponent;                                 // 0x0430(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UActorDamageableComponent*                           DamageableComponent;                                     // 0x0438(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_T9T2[0x108];                                 // 0x0440(0x0108) MISSED OFFSET (PADDING)

	public:
		void Multicast_WasDefeated(class AActor* InInstigator, class AActor* InDirectInstigator);
		static UClass* StaticClass();
	};

	/**
	 * Class BreakableActorFramework.BreakableSarcophagus
	 * Size -> 0x0000 (FullSize[0x0548] - InheritedSize[0x0548])
	 */
	class ABreakableSarcophagus : public ABreakableActorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BreakableActorFramework.BreakableActorDynamicMaterialComponent
	 * Size -> 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
	 */
	class UBreakableActorDynamicMaterialComponent : public UActorComponent
	{
	public:
		uint32_t                                                   MaterialElementIndex;                                    // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                MagicColourPropertyName;                                 // 0x00CC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DamageLevelPropertyName;                                 // 0x00D4(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TimeBasedPropertyName;                                   // 0x00DC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HitPositionPropertyName;                                 // 0x00E4(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CollapseStartTimePropertyName;                           // 0x00EC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R79I[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 TargetMesh;                                              // 0x00F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstanceDynamic*>                    DynamicMaterials;                                        // 0x0100(0x0010) BlueprintVisible, ZeroConstructor
		class ABreakableActorBase*                                 BreakableActor;                                          // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1Y69[0xD8];                                  // 0x0118(0x00D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BreakableActorFramework.BreakableActorItemSpawnComponent
	 * Size -> 0x0070 (FullSize[0x04B0] - InheritedSize[0x0440])
	 */
	class UBreakableActorItemSpawnComponent : public UItemSpawnComponent
	{
	public:
		unsigned char                                              UnknownData_QURF[0x70];                                  // 0x0440(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class BreakableActorFramework.BreakableActorVfxComponent
	 * Size -> 0x00D8 (FullSize[0x01A0] - InheritedSize[0x00C8])
	 */
	class UBreakableActorVfxComponent : public UActorComponent
	{
	public:
		struct FColor                                              VFXTintColour;                                           // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_12YF[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             DamagedParticleSystem;                                   // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             DestroyedParticleSystem;                                 // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GlowMaterialIndex;                                       // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                GlowMaterialPropertyName;                                // 0x00E4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlowMaterialScale;                                       // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlowMaterialBias;                                        // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlowUpdateSpeed;                                         // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABreakableActorBase*                                 BreakableActor;                                          // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            GlowMaterial;                                            // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2C0F[0x98];                                  // 0x0108(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
