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
	 * BlueprintGeneratedClass BPAction_Injured_Start_Siren.BPAction_Injured_Start_Siren_C
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class UBPAction_Injured_Start_Siren_C : public UBPAction_Injured_Start_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) Transient, DuplicateTransient

	public:
		void OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void FadeOutArms();
		void ExecuteUbergraph_BPAction_Injured_Start_Siren(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
