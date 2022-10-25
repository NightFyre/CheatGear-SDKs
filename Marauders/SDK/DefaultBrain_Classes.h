#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass DefaultBrain.DefaultBrain_C
	 * Size -> 0x0178 (FullSize[0x01A8] - InheritedSize[0x0030])
	 */
	class UDefaultBrain_C : public UGOAPBrain
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class FString                                              GoalToCarryout;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      BrainAiBotHealthPercent;                                 // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S77Y[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_FirstHeard;                                            // 0x0050(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasATarget;                                              // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THAF[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_Patrolling;                                            // 0x0068(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      I_Looting;                                               // 0x0078(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      I_Thinking;                                              // 0x0088(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       CanDoThinkAction;                                        // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ISOQ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_Attack;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       LostThePlayer;                                           // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       B_Took_Damage_Without_ATarget;                           // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EZPG[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_InitialResponseHurtNoSeeTarget;                        // 0x00B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       CanDo_GTFO;                                              // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7936[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_Close_Attack;                                          // 0x00D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DistanceToPlayer;                                        // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JHJV[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_Reload;                                                // 0x00E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       B_First_SawAPlayer;                                      // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6W3A[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_InitialResponseFirstSee;                               // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       B_HuntingState;                                          // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E6E3[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_InitialResponseHeardNoSee;                             // 0x0118(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      I_Distance_Attack;                                       // 0x0128(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DistanceAttackRange;                                     // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CloseAttackRange;                                        // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      I_Hurt_Attack;                                           // 0x0140(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LessThanHealthTrigger;                                   // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Ammo_Has_Zero;                                           // 0x0154(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WMME[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Ammo_Current;                                            // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_821D[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      I_ActionThinking;                                        // 0x0160(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      HurtAttackChance;                                        // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseMissRate;                                            // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARaidNodeBot*                                        Bot;                                                     // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Is_Valid;                                                // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1X8Q[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DenseCoverPatrol;                                        // 0x0188(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DenseCoverLooting;                                       // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ShowDebugGoal();
		void isNearDenseCover(int32_t NearXNumber, float Bounds_X, float Bounds_Y, float Bounds_Z, bool* CoverIsDense);
		void PickARandomGoalString(TArray<class FString>* Choices, class FString* Chosen);
		void ExtraChecks();
		void RunThinkCooldown(float Min, float Max);
		void ThinkCooldown();
		void Brain_StartGoalChoice(ERaidAIState StateCompleted);
		void RunGTFOCooldown(float Min, float Max);
		void GTFOcooldownReset();
		void Delayover();
		void ExecuteUbergraph_DefaultBrain(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
