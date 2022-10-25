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
	 * BlueprintGeneratedClass ActionSkill_Operative_Drone.ActionSkill_Operative_Drone_C
	 * Size -> 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
	 */
	class UActionSkill_Operative_Drone_C : public UOakActionAbility_GRMLN
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) Transient, DuplicateTransient

	public:
		bool ShouldStopAbilityOnPawnSlotComponentAttach();
		float GetGoodMisfortuneRechargeValue(int32_t TotalKills);
		class AOakDroneProjectile_GRMLN* TrySpawnPrimaryDrone();
		bool ShouldAbortActivation(unsigned char* OutAbortCode);
		void TryFindNewDroneTarget();
		void OnStartActionAbility();
		void OnStartCalledShot();
		void OnStopCalledShot();
		void StopButtonPress();
		void OnStopActionAbility();
		void ExecuteUbergraph_ActionSkill_Operative_Drone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
