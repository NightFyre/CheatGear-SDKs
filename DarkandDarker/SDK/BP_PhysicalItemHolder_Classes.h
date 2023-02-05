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
	 * BlueprintGeneratedClass BP_PhysicalItemHolder.BP_PhysicalItemHolder_C
	 * Size -> 0x0010 (FullSize[0x03C0] - InheritedSize[0x03B0])
	 */
	class ABP_PhysicalItemHolder_C : public ASkeletalMeshItemHolderActor
	{
	public:
		struct FPrimaryAssetId                                     ItemIdToSpawn;                                           // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
