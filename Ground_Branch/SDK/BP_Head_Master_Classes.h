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
	 * BlueprintGeneratedClass BP_Head_Master.BP_Head_Master_C
	 * Size -> 0x0048 (FullSize[0x04B0] - InheritedSize[0x0468])
	 */
	class ABP_Head_Master_C : public AGBClothing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              HeadMorphPrefix;                                         // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                HeadMorphTag;                                            // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ArmClass[0x28];                                          // 0x0488(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		TArray<class UPrimitiveComponent*> GetHiddenComponents();
		void OnLoaded_9CBCE6A14A8702E4485FDFB6CF77D520(class UClass* Loaded);
		void SetOpacityMask(class UTexture2D* NewOpacityMask);
		void UpdateSkin();
		void OnAddedToCharacter(class AGBCharacter* NewParentCharacter);
		void OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName);
		void InventoryModifiersUpdated();
		void CreateArms();
		void UpdateSkinMask(class AGBCharacter* Character);
		void OnMaskFaceAssetLoaded_Event(class UObject* LoadedAsset);
		void ArmsCheck();
		void ExecuteUbergraph_BP_Head_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
