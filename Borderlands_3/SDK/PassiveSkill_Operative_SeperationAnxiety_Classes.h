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
	 * BlueprintGeneratedClass PassiveSkill_Operative_SeperationAnxiety.PassiveSkill_Operative_SeperationAnxiety_C
	 * Size -> 0x0008 (FullSize[0x01B8] - InheritedSize[0x01B0])
	 */
	class UPassiveSkill_Operative_SeperationAnxiety_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient

	public:
		void OnActivated();
		void ExecuteUbergraph_PassiveSkill_Operative_SeperationAnxiety(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
