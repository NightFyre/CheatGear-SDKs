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
	 * BlueprintGeneratedClass ALI_Challenge_Crew.ALI_Challenge_Crew_C
	 * Size -> 0x0108 (FullSize[0x0368] - InheritedSize[0x0260])
	 */
	class UALI_Challenge_Crew_C : public UOakChallenge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) Transient, DuplicateTransient
		struct FDialogTimeSlotReference                            Dialog_KriegCompletion;                                  // 0x0268(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDialogTimeSlotReference                            Dialog_TannisCompletion;                                 // 0x02A8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDialogTimeSlotReference                            Dialog_TargetHit;                                        // 0x02E8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDialogTimeSlotReference                            Dialog_KriegDuplicate;                                   // 0x0328(0x0040) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void PlayVO(const struct FDialogTimeSlotReference& Dialog, class AActor* CompletedPlayer, struct FDialogConversation* Conversation);
		void ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer);
		void CompletedChallenge(class AGbxPlayerController* CompletedPlayer);
		void ExecuteUbergraph_ALI_Challenge_Crew(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
