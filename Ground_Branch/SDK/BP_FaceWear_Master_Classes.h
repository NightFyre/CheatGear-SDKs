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
	 * BlueprintGeneratedClass BP_FaceWear_Master.BP_FaceWear_Master_C
	 * Size -> 0x0020 (FullSize[0x0488] - InheritedSize[0x0468])
	 */
	class ABP_FaceWear_Master_C : public AGBClothing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FSoftObjectPath                                     FaceMaskTexture;                                         // 0x0470(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		TArray<class UPrimitiveComponent*> GetHiddenComponents();
		void OnAddedToCharacter(class AGBCharacter* NewParentCharacter);
		void OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName);
		void InventoryModifiersUpdated();
		void ExecuteUbergraph_BP_FaceWear_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
