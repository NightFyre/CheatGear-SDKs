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
	 * BlueprintGeneratedClass GOAPGroupNodeBot_Raider.GOAPGroupNodeBot_Raider_C
	 * Size -> 0x0050 (FullSize[0x0D00] - InheritedSize[0x0CB0])
	 */
	class AGOAPGroupNodeBot_Raider_C : public AmasterNodeBot_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UTextRenderComponent*                                TextRender;                                              // 0x0CB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender1;                                             // 0x0CC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRenderGoal;                                          // 0x0CC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Voice;                                             // 0x0CD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FString                                              CurrentPlan;                                             // 0x0CD8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
		class FString                                              CurrentGoal;                                             // 0x0CE8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
		bool                                                       TurnOnGOAP_Debug;                                        // 0x0CF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_12KQ[0x3];                                   // 0x0CF9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempVoicePick;                                           // 0x0CFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_CurrentGoal();
		void OnRep_CurrentPlan();
		void OnLoaded_919336EC48AF4607A4FA2CB56D3692BB(class UObject* Loaded);
		void OnLoaded_9FC27C1043A51E9105BB9E928AAF6B6E(class UObject* Loaded);
		void OnGOAPDEBUGplan(const class FString& CurrentPlan);
		void Ai_StoreBaseMissRate(float BaseMissRate);
		void MulticastPlayVoice(bool is_A_Shout, const class FName& VoiceSet_DT_Row, class UDataTable* VoiceSet_DT, const class FName& VoiceLine);
		void ReceiveBeginPlay();
		void Ai_CheckSetMyInitialAmmoCount();
		void PlayVoice(bool IsAShout, class UDataTable* VoiceSetDT, const class FName& VoiceLine);
		void Ai_SetMyGoal(const class FString& CurrentPlan);
		void Ai_TurnOnOffDebugText(bool TurnOn);
		void ReceivePossessed(class AController* NewController);
		void ExecuteUbergraph_GOAPGroupNodeBot_Raider(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
