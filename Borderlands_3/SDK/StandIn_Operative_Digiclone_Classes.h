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
	 * BlueprintGeneratedClass StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C
	 * Size -> 0x0020 (FullSize[0x0598] - InheritedSize[0x0578])
	 */
	class AStandIn_Operative_Digiclone_C : public AStandInAuxiliaryActor
	{
	public:
		unsigned char                                              UnknownData_L8LQ[0x8];                                   // 0x0578(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0580(0x0008) Transient, DuplicateTransient
		class UGbxSkeletalMeshComponent*                           HeadMesh;                                                // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           BodyMesh;                                                // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone(class UGbxCustomizationData* Customization);
		void OnReceivedClonedWeaponAppearance(class USceneComponent* BaseComponent);
		void ExecuteUbergraph_StandIn_Operative_Digiclone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
