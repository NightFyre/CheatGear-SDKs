#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Class CustomDeath.CustomDeathInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomDeathInterface : public UInterface
	{
	public:
		void SetShouldUseRevivalFlow(const struct FSetShouldUseRevivalFlowData& SetShouldUseRevivalFlowData);
		void SetShouldSkipFerryOfTheDamned(const struct FSetShouldSkipFerryOfTheDamnedData& SetShouldSkipFerryOfTheDamnedData);
		void SetGameModeDeathPenaltyRespawnTimer(const struct FGameModeDeathPenaltyRespawnTimerData& GameModeDeathPenaltyRespawnTimerData);
		bool SetCustomPlayerStart(const struct FSetCustomPlayerStartData& SetCustomPlayerStartData);
		void SetCustomConfigForPlayer(int32_t PlayerId, const struct FCustomDeathConfiguration& CustomDeathConfiguration);
		void SetCrewBasedDeathPenaltyRespawnTimes(const struct FCrewBasedRespawnTimes& CrewBasedRespawnTimes);
		void ResetCustomConfigForPlayer(const struct FResetCustomConfigForPlayerData& ResetCustomConfigForPlayerData);
		void KillPlayer(const struct FKillPlayerData& KillPlayerData);
		void KillCrew(const struct FKillCrewData& KillCrewData);
		bool GetShouldUseRevivalFlow(int32_t PlayerId, bool bDefaultValue);
		bool GetShouldSkipFerryOfTheDamned(int32_t PlayerId);
		class APlayerStart* GetCustomPlayerStart(int32_t PlayerId);
		void ForcePlayerRespawn(const struct FForcePlayerRespawnData& ForcePlayerRespawnData);
		int32_t DestroyCustomPlayerStart(const struct FDestroyCustomPlayerStartData& DestroyCustomPlayerStartData);
		int32_t CreateNewCustomPlayerStart(const struct FCustomPlayerStartConfigData& CustomPlayerStartConfigData);
		static UClass* StaticClass();
	};

	/**
	 * Class CustomDeath.CustomDeathService
	 * Size -> 0x0098 (FullSize[0x0460] - InheritedSize[0x03C8])
	 */
	class ACustomDeathService : public AActor
	{
	public:
		unsigned char                                              UnknownData_JOGO[0x38];                                  // 0x03C8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APlayerStart*>                                CustomPlayerStarts;                                      // 0x0400(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_8OCA[0x50];                                  // 0x0410(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
