#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C
	 * Size -> 0x0008 (FullSize[0x0650] - InheritedSize[0x0648])
	 */
	class ABP_Resurrection_Man_Capture_C : public ABP_Resurrection_Capture_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0648(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnEquipItemMesh(class USkeletalMeshComponent* PartComp, class USkeletalMesh* ItemMesh);
		void BP_Resurrection_Capture_AutoGenFunc(class UObject* InObjectLoaded);
		void OnItemEquip();
		void ExecuteUbergraph_BP_Resurrection_Man_Capture(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
