#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_ChatOverlay_Message.WBP_ChatOverlay_Message_C
	 * Size -> 0x0138 (FullSize[0x0398] - InheritedSize[0x0260])
	 */
	class UWBP_ChatOverlay_Message_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_523;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_51;                                                // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Chat;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_PlayerName;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_Prefix;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AGBPlayerState*                                      SenderPlayerState;                                       // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              Message;                                                 // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                Type;                                                    // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FText                                                ChatPrefixTeam;                                          // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ChatPrefixServer;                                        // 0x02D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Prefix;                                                  // 0x02E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColour_Team;                                         // 0x0300(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         TextColour_GlobalPlayerName;                             // 0x0328(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      DisplayTime;                                             // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_9663[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle_PlayFadeOut;                                 // 0x0358(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         TextColour_RR;                                           // 0x0360(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FMargin                                             NoMargin;                                                // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void FindEmoji(const class FString& SearchIn, int32_t StartPosition, int32_t* OutPos, int32_t* OutCharSkip);
		void ParseMessage();
		void Construct();
		void SetPrefix();
		void SetDeadVis();
		void SetPlayerNameColour();
		void PlayFadeOut();
		void StartTimer();
		void Pause();
		void Unpause();
		void OnAnimationFinished_Event_1();
		void AddText(const class FString& Text);
		void AddEmoji();
		void ExecuteUbergraph_WBP_ChatOverlay_Message(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
