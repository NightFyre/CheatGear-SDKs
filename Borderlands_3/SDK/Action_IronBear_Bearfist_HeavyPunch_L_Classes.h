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
	 * BlueprintGeneratedClass Action_IronBear_Bearfist_HeavyPunch_L.Action_IronBear_Bearfist_HeavyPunch_L_C
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UAction_IronBear_Bearfist_HeavyPunch_L_C : public UAction_IronBear_BearFist_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) Transient, DuplicateTransient

	public:
		void AN_MeleeHit();
		void ExecuteUbergraph_Action_IronBear_Bearfist_HeavyPunch_L(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
