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
	 * BlueprintGeneratedClass TEDProjectile_SG_SacrificialLamb.TEDProjectile_SG_SacrificialLamb_C
	 * Size -> 0x000C (FullSize[0x08D8] - InheritedSize[0x08CC])
	 */
	class ATEDProjectile_SG_SacrificialLamb_C : public ATEDProjectile_Base_C
	{
	public:
		unsigned char                                              UnknownData_76G0[0x4];                                   // 0x08CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08D0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_TEDProjectile_SG_SacrificialLamb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
