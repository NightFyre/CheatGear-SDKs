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
	 * BlueprintGeneratedClass AITree_LookAtPlayer.AITree_LookAtPlayer_C
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	class UAITree_LookAtPlayer_C : public UAIAction_AITree
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_AITree_LookAtPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
