#pragma once

/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * BlueprintGeneratedClass BP_AbilityActor_Decal.BP_AbilityActor_Decal_C
	 * Size -> 0x0030 (FullSize[0x02F0] - InheritedSize[0x02C0])
	 */
	class ABP_AbilityActor_Decal_C : public AGameplayAbilityWorldReticle_ActorVisualization
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     Decal;                                                   // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CurColor;                                                // 0x02D8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void SetReticleMaterialParamVector(const class FName& ParamName, const struct FVector& Value);
		void OnParametersInitialized();
		void ExecuteUbergraph_BP_AbilityActor_Decal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
