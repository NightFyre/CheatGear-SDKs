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
	 * BlueprintGeneratedClass BP_PhaseTranceSingularity.BP_PhaseTranceSingularity_C
	 * Size -> 0x0020 (FullSize[0x05A8] - InheritedSize[0x0588])
	 */
	class ABP_PhaseTranceSingularity_C : public APhaseTranceSingularityActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0588(0x0008) Transient, DuplicateTransient
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USingularityComponent*                               SingularityComponent;                                    // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ParticleSystemShutdownSystem;                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetIgnoredActors(TArray<class AActor*>* res);
		void GetSingularityDuration(float* res);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ConfigureSingularity();
		void OnShutdownRequested(bool bForced);
		void CleanShutdownMulticast();
		void ReleaseParticleSystem();
		void ExecuteUbergraph_BP_PhaseTranceSingularity(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
