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
	 * BlueprintGeneratedClass Action_WeaponMelee_RH_Miss_Disruptor.Action_WeaponMelee_RH_Miss_Disruptor_C
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class UAction_WeaponMelee_RH_Miss_Disruptor_C : public UAction_WeaponMelee_Base_Success_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) Transient, DuplicateTransient

	public:
		void PlayScreenParticle();
		void ExecuteUbergraph_Action_WeaponMelee_RH_Miss_Disruptor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
