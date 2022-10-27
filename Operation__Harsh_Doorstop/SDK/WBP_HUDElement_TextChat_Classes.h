#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * WidgetBlueprintGeneratedClass WBP_HUDElement_TextChat.WBP_HUDElement_TextChat_C
	 * Size -> 0x0070 (FullSize[0x0318] - InheritedSize[0x02A8])
	 */
	class UWBP_HUDElement_TextChat_C : public UHDTextChatWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    DisplayChatInputUI;                                      // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    DisplayChatHistoryUI;                                    // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            ChatHistory;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ChatInput;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_HUDElement_TextChat_InputHandler_C*             ChatInputHandler;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ChatMsgLogSBox;                                          // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    NumFakeChatMsgs;                                         // 0x02E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxChatMsgs;                                             // 0x02E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             ChatMsgPadding;                                          // 0x02E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ChatHistoryFadeOutDelay;                                 // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bChatHistoryVisible;                                     // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N3NR[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ChatHistoryTimeoutHandle;                                // 0x0300(0x0008) Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bWantsScrollToEnd;                                       // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JS4J[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             ScrollToWidget;                                          // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnPaint(struct FPaintContext* Context);
		void GetChatHistoryIsVisible(bool* bVisible);
		void AddNewOutputListing(class UHDTextChatMsgInfo* ChatMsg, class UWidget** Listing);
		void DisplayChatMessage(class UHDTextChatMsgInfo* NewChatMsg);
		void PreConstruct(bool IsDesignTime);
		void StartTalking(class UDFCommChannel* TalkChannel);
		void StopTalking();
		void BndEvt__WBP_TextChat_Input_K2Node_ComponentBoundEvent_2_OnInputTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnInitialized();
		void ChatHistoryTimeout();
		void SetChatHistoryIsVisible(bool bVisible);
		void BndEvt__ChatMsgLogSBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
		void ExecuteUbergraph_WBP_HUDElement_TextChat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
