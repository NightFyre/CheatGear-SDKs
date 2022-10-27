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
	 * BlueprintGeneratedClass IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C
	 * Size -> 0x0020 (FullSize[0x07C8] - InheritedSize[0x07A8])
	 */
	class AIO_Beastmaster_AntiGravityTrap_Mod3_C : public AIO_Beastmaster_AntiGravityTrap_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07A8(0x0008) Transient, DuplicateTransient
		struct FDataTableValueHandle                               TrapDuration;                                            // 0x07B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void UserConstructionScript();
		void SetTrapEndCondition();
		void ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
