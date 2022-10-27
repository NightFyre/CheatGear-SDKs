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
	 * AIActionBlueprintGeneratedClass AIAction_Search.AIAction_Search_C
	 * Size -> 0x0008 (FullSize[0x01F0] - InheritedSize[0x01E8])
	 */
	class UAIAction_Search_C : public UAIAction_Sequence
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01E8(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_AIAction_Search(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
