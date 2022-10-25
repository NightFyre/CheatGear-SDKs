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
	 * WidgetBlueprintGeneratedClass WBP_HUDElement_VOIPIndicator.WBP_HUDElement_VOIPIndicator_C
	 * Size -> 0x0041 (FullSize[0x02C1] - InheritedSize[0x0280])
	 */
	class UWBP_HUDElement_VOIPIndicator_C : public UHDVoipIndicatorWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_VOIPOwnerChatIndicator_C*                       CommandChatIndicator;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_VOIPOwnerChatIndicator_C*                       LocalChatIndicator;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_VOIPOwnerChatIndicator_C*                       SquadChatIndicator;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        TalkerListVBox;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    NumFakeOutputListings;                                   // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxTalkerListings;                                       // 0x02AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             TalkerListingPadding;                                    // 0x02B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bTalkerListingTintClassIconOnly;                         // 0x02C0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ContainsTalkerListing(class UHDVoiceChatMsgInfo* PlayerMsgInfo, bool* bMatchFound);
		void FindTalkerListing(class UHDVoiceChatMsgInfo* PlayerMsgInfo, bool* bListingFound, class UWBP_HUDElement_VOIPIndicator_OutputListing_C** TalkerListing);
		void PlayerStoppedTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
		void PlayerStartedTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
		void OnPlayerStartTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
		void OnPlayerStopTalking(class UHDVoiceChatMsgInfo* TalkerMsgInfo);
		void OnOwningPlayerStartTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
		void OnOwningPlayerStopTalking(class UHDVoiceChatMsgInfo* LocalTalkerMsgInfo);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_HUDElement_VOIPIndicator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
