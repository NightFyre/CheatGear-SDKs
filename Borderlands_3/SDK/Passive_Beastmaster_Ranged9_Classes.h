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
	 * BlueprintGeneratedClass Passive_Beastmaster_Ranged9.Passive_Beastmaster_Ranged9_C
	 * Size -> 0x0008 (FullSize[0x01B8] - InheritedSize[0x01B0])
	 */
	class UPassive_Beastmaster_Ranged9_C : public UOakPassiveAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) Transient, DuplicateTransient

	public:
		void OnActivated();
		void OnPaused();
		void OnDeactivated();
		void OnResumed();
		void ExecuteUbergraph_Passive_Beastmaster_Ranged9(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
