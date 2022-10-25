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
	 * BlueprintGeneratedClass BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C
	 * Size -> 0x0008 (FullSize[0x23A8] - InheritedSize[0x23A0])
	 */
	class ABPChar_StandIn_Siren_SkillScreen_C : public ABPChar_StandIn_Siren_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x23A0(0x0008) Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void UnhideCharacterArms();
		void HideCharacterArms();
		void ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
