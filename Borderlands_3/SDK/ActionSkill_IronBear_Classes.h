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
	 * BlueprintGeneratedClass ActionSkill_IronBear.ActionSkill_IronBear_C
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class UActionSkill_IronBear_C : public UOakActionAbility_IronBear
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) Transient, DuplicateTransient

	public:
		class FString GetActionSkillWidgetKeyframe();
		EGbxAbilityState CalculateAbilityState();
		class UClass* GetIronBearClass();
		struct FRotator GetIronBearSpawnRotation();
		struct FVector GetIronBearSpawnLocation();
		float GetCooldownRestartPercent();
		bool ShouldAbortActivation(unsigned char* OutAbortCode);
		void GetCameraYaw(float* res);
		void StartSummoningIronCub();
		void ExecuteUbergraph_ActionSkill_IronBear(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
