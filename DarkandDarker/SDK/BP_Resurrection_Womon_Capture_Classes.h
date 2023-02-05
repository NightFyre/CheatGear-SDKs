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
	 * BlueprintGeneratedClass BP_Resurrection_Womon_Capture.BP_Resurrection_Womon_Capture_C
	 * Size -> 0x0000 (FullSize[0x0648] - InheritedSize[0x0648])
	 */
	class ABP_Resurrection_Womon_Capture_C : public ABP_Resurrection_Capture_Base_C
	{
	public:
		void OnEquipItemMesh(class USkeletalMeshComponent* PartComp, class USkeletalMesh* ItemMesh);
		void BP_Resurrection_Capture_AutoGenFunc(class UObject* InObjectLoaded);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
