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
	 * BlueprintGeneratedClass Action_Melee_Siren_Success_Impact_BodyAndMind.Action_Melee_Siren_Success_Impact_BodyAndMind_C
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UAction_Melee_Siren_Success_Impact_BodyAndMind_C : public UAction_Melee_Siren_Miss_BodyAndMind_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) Transient, DuplicateTransient

	public:
		void OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor);
		void OnBeginBringUpWeapon(class AActor* Actor);
		void CameraPush();
		void CameraPop();
		void PlayScreenParticle();
		void ExecuteUbergraph_Action_Melee_Siren_Success_Impact_BodyAndMind(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
