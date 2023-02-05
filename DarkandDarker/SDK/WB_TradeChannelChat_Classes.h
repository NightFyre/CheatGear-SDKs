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
	 * WidgetBlueprintGeneratedClass WB_TradeChannelChat.WB_TradeChannelChat_C
	 * Size -> 0x0018 (FullSize[0x03D0] - InheritedSize[0x03B8])
	 */
	class UWB_TradeChannelChat_C : public UTradeChannelChatWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWB_NickName_C*                                      ChatAccountNickName;                                     // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_ChannelName;                                        // 0x03C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnChatType(EChatType NewItemData, EChatType OldItemData);
		void OnChatAccountData(const struct FChatAccountData& NewItemData, const struct FChatAccountData& OldItemData);
		void ExecuteUbergraph_WB_TradeChannelChat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
