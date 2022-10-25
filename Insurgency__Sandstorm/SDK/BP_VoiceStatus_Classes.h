#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_VoiceStatus.BP_VoiceStatus_C
	 * Size -> 0x0030 (FullSize[0x0280] - InheritedSize[0x0250])
	 */
	class UBP_VoiceStatus_C : public UVoiceStatus
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        Container;                                               // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class APlayerState*>                                Players;                                                 // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UBP_VoiceStatusRow_C*>                        VoiceWidgets;                                            // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void AddSpacer();
		void InitializeList();
		void RegenerateList();
		void Construct();
		void OnPlayerTalkingStateChanged(class APlayerState* PlayerState, bool bIsTalking);
		void OnTalkingPlayersChanged(TArray<class APlayerState*> InTalkingPlayers);
		void ExecuteUbergraph_BP_VoiceStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
