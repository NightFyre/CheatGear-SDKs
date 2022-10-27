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
	 * BlueprintGeneratedClass ControlledMove_PhaseLock_Base.ControlledMove_PhaseLock_Base_C
	 * Size -> 0x007C (FullSize[0x0AE4] - InheritedSize[0x0A68])
	 */
	class UControlledMove_PhaseLock_Base_C : public UOakControlledMove_PhaseLock
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A68(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            PhaseLockEmitter;                                        // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PhaseLockStartEmitter;                                   // 0x0A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWwisePlaybackInstance                              BubbleSound;                                             // 0x0A80(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystem*                                     PhaseLock_Start_Emitter_Template;                        // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     PhaseLock_Emitter_Template;                              // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     Phaselock_End_Emitter_Template;                          // 0x0AA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PhaseLock_Idle_Audio;                                    // 0x0AB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         PhaseLock_End_Audio;                                     // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ParticleScale;                                           // 0x0AC0(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ParticleLocation;                                        // 0x0ACC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ParticleRotation;                                        // 0x0AD8(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlayDetach();
		void ConfigurePhaseLockProperties();
		void TryDestroyComponent(class UParticleSystemComponent* Comp);
		void OnStart(float MoveDuration, class AActor* TargetActor);
		void OnStop(bool bInterrupted);
		void OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator);
		void OnServerStop(bool bInterrupted);
		void ExecuteUbergraph_ControlledMove_PhaseLock_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
