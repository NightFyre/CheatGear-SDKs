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
	 * BlueprintGeneratedClass AIAction_ReviveAlly.AIAction_ReviveAlly_C
	 * Size -> 0x0008 (FullSize[0x0B98] - InheritedSize[0x0B90])
	 */
	class UAIAction_ReviveAlly_C : public UAIAction_ReviveActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B90(0x0008) Transient, DuplicateTransient

	public:
		void ExecuteUbergraph_AIAction_ReviveAlly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
