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
	 * BlueprintGeneratedClass BP_SlaughterGameState.BP_SlaughterGameState_C
	 * Size -> 0x0010 (FullSize[0x0BF0] - InheritedSize[0x0BE0])
	 */
	class ABP_SlaughterGameState_C : public ASlaughterGameState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BE0(0x0008) Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnAllPlayersDied_Event_1();
		void OnNewRound_Event_1(int32_t RoundNumber);
		void OnNewWave_Event_1(bool bBossWave, int32_t CountdownDuration);
		void OnPlayerDied_Event_1(class AOakPlayerState* PlayerState);
		void OnRoundComplete_Event_1(int32_t RoundNumber);
		void ExecuteUbergraph_BP_SlaughterGameState(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
