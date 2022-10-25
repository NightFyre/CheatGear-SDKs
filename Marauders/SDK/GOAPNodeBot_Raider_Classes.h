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
	 * BlueprintGeneratedClass GOAPNodeBot_Raider.GOAPNodeBot_Raider_C
	 * Size -> 0x0048 (FullSize[0x0CF8] - InheritedSize[0x0CB0])
	 */
	class AGOAPNodeBot_Raider_C : public AmasterNodeBot_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UTextRenderComponent*                                TextRenderGoal;                                          // 0x0CB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Voice;                                             // 0x0CC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender;                                              // 0x0CC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FString                                              CurrentPlan;                                             // 0x0CD0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
		class FString                                              CurrentGoal;                                             // 0x0CE0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
		bool                                                       TurnOnGOAP_Debug;                                        // 0x0CF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O4RY[0x3];                                   // 0x0CF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempVoicePick;                                           // 0x0CF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_CurrentGoal();
		void OnRep_CurrentPlan();
		void OnLoaded_05D57DDE472BE102CBF387860E5542C9(class UObject* Loaded);
		void OnLoaded_BFE76CB343698C7D0EB23FA33115941C(class UObject* Loaded);
		void MyGoal(const class FString& Current_Plan);
		void OnGOAPDEBUGplan(const class FString& CurrentPlan);
		void Ai_StoreBaseMissRate(float BaseMissRate);
		void MulticastPlayVoice(bool is_A_Shout, const class FName& VoiceSet_DT_Row, class UDataTable* VoiceSet_DT, const class FName& VoiceLine);
		void ReceiveBeginPlay();
		void Ai_CheckSetMyInitialAmmoCount();
		void PlayVoice(bool IsAShout, class UDataTable* VoiceSetDT, const class FName& VoiceLine);
		void Ai_SetMyGoal(const class FString& CurrentPlan);
		void Ai_TurnOnOffDebugText(bool TurnOn);
		void ReceivePossessed(class AController* NewController);
		void ExecuteUbergraph_GOAPNodeBot_Raider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
