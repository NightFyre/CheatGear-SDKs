#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * BlueprintGeneratedClass BP_MetaPlayerController.BP_MetaPlayerController_C
	 * Size -> 0x0070 (FullSize[0x08D8] - InheritedSize[0x0868])
	 */
	class ABP_MetaPlayerController_C : public ADCMetaPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0868(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDCMetaCustomizeComponent*                           DCMetaCustomize;                                         // 0x0870(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMetaFriendComponent*                                MetaFriend;                                              // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDCPlayerChatComponent*                              DCPlayerChat;                                            // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDCMetaTradeComponent*                               DCMetaTradeComponent;                                    // 0x0888(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDCContextComponent*                                 DCContextComponent;                                      // 0x0890(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMetaClassComponent*                                 MetaClassComponent;                                      // 0x0898(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMetaLeaderBoardComponent*                           MetaLeaderBoardComponent;                                // 0x08A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMetaItemComponent*                                  MetaItemComponent;                                       // 0x08A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMetaPlayComponent*                                  MetaPlayComponent;                                       // 0x08B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Ak;                                                      // 0x08B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		EInventoryType                                             MovedItemInventoryType;                                  // 0x08C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0Z9A[0x7];                                   // 0x08C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      PlayerFootprintArray;                                    // 0x08C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void OnLoadSoundData(class UObject* Object);
		void OnMessageReceived_3755F1624595889A6EF5B7AC11AD61F2(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_172D29F6408EA302BE7783989F3BCD08(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_BCC82E2D4711E7B2925EAFBEA0A6FEB8(class UMsgBaseNode* ProxyObject);
		void ReceiveBeginPlay();
		void EventFMsgSucceedWidgetMoveItem(const struct FMsgSucceedWidgetMoveItem& Msg);
		void EventFMsgPlayerExitClientRequest(const struct FMsgPlayerExitClientRequest& Msg);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void UpdateGameState(const struct FGameStateData& InGameStateData);
		void ExecuteUbergraph_BP_MetaPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
