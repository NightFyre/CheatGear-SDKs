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
	 * BlueprintGeneratedClass Action_Operative_ToggleBarrier.Action_Operative_ToggleBarrier_C
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UAction_Operative_ToggleBarrier_C : public UOakAction_Anim_ActionAbility_Barrier
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) Transient, DuplicateTransient

	public:
		void AN_ButtonPressed();
		void AN_ShowDevice();
		void AN_HideDevice();
		void ExecuteUbergraph_Action_Operative_ToggleBarrier(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
