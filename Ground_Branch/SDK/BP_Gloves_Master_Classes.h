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
	 * BlueprintGeneratedClass BP_Gloves_Master.BP_Gloves_Master_C
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class ABP_Gloves_Master_C : public AGBClothing
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0468(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnAddedToCharacter(class AGBCharacter* NewParentCharacter);
		void OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName);
		void ExecuteUbergraph_BP_Gloves_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
