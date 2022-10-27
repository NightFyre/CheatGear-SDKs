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
	 * BlueprintGeneratedClass StandIn_PhaseCast.StandIn_PhaseCast_C
	 * Size -> 0x0028 (FullSize[0x05A8] - InheritedSize[0x0580])
	 */
	class AStandIn_PhaseCast_C : public AStandInAuxiliaryActor_Siren
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) Transient, DuplicateTransient
		class UWwiseAudioComponent*                                WwiseAudio;                                              // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           GhostArms;                                               // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           HeadMesh;                                                // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           Mesh;                                                    // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetGhostMaterials();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_PhaseCast(class UGbxCustomizationData* Customization);
		void ExecuteUbergraph_StandIn_PhaseCast(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
