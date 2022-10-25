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
	 * BlueprintGeneratedClass ControlledMove_Siren_PhaseSlam_Fall.ControlledMove_Siren_PhaseSlam_Fall_C
	 * Size -> 0x0008 (FullSize[0x08B8] - InheritedSize[0x08B0])
	 */
	class UControlledMove_Siren_PhaseSlam_Fall_C : public UOakControlledMove_ActionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08B0(0x0008) Transient, DuplicateTransient

	public:
		void GroundSlam_End(float Distance);
		void DoMelee();
		void ExecuteUbergraph_ControlledMove_Siren_PhaseSlam_Fall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
