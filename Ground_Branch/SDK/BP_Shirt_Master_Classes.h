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
	 * BlueprintGeneratedClass BP_Shirt_Master.BP_Shirt_Master_C
	 * Size -> 0x000A (FullSize[0x0472] - InheritedSize[0x0468])
	 */
	class ABP_Shirt_Master_C : public AGBClothing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bMaskShortSleeve;                                        // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bMaskLongSleeve;                                         // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnAddedToCharacter(class AGBCharacter* NewParentCharacter);
		void OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName);
		void ExecuteUbergraph_BP_Shirt_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
