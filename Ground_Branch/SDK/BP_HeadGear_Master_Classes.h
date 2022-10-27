#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_HeadGear_Master.BP_HeadGear_Master_C
	 * Size -> 0x0068 (FullSize[0x0458] - InheritedSize[0x03F0])
	 */
	class ABP_HeadGear_Master_C : public AGBItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                HeadGearSM;                                              // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bNotMaskCompatible;                                      // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFallOffOnDeath;                                         // 0x0401(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_US3X[0x6];                                   // 0x0402(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HeadMorphPrefix;                                         // 0x0408(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bUseHeadMorphs;                                          // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L4DR[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GoggleStrapPrefix;                                       // 0x0420(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                GoggleStrapTag;                                          // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              StrapCompRef;                                            // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        StrapMorphTargetNames;                                   // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            StrapMID;                                                // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TArray<class UPrimitiveComponent*> GetHiddenComponents();
		void SetStrap(int32_t Index1);
		bool DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem);
		void GetPatchName(class FString* PatchName);
		void SetPatchName(const class FString& PatchName);
		void UserConstructionScript();
		void OnAddedToCharacter(class AGBCharacter* NewParentCharacter);
		void OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName);
		void CharacterPlayDying_Event_1(class AGBCharacter* Character);
		void SetMorph(int32_t Index);
		void UpdateMorph(class AGBCharacter* Character);
		void UpdateSkin();
		void OnHelmetSkinLoaded_Event(class UObject* LoadedAsset);
		void InventoryModifiersUpdated();
		void ExecuteUbergraph_BP_HeadGear_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
