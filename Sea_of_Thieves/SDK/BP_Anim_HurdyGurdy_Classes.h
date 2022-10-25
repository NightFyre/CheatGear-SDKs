#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * AnimBlueprintGeneratedClass BP_Anim_HurdyGurdy.BP_Anim_HurdyGurdy_C
	 * Size -> 0x00B0 (FullSize[0x06E0] - InheritedSize[0x0630])
	 */
	class UBP_Anim_HurdyGurdy_C : public UWieldableItemAnimationInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_B3965DEB4C5D27BA9A2E829C0890A4BD;     // 0x0638(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_575EE4B64923C096D19E05B899C05754;     // 0x0680(0x0060)

	public:
		void ExecuteUbergraph_BP_Anim_HurdyGurdy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
