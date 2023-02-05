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
	 * WidgetBlueprintGeneratedClass WB_GameSystemMessageGroup.WB_GameSystemMessageGroup_C
	 * Size -> 0x003C (FullSize[0x032C] - InheritedSize[0x02F0])
	 */
	class UWB_GameSystemMessageGroup_C : public UDCWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        MessageVerticalGroup;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_GameSystemMessage_C*                             WB_GameSystemMessage;                                    // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_GameSystemMessage_C*                             WB_GameSystemMessage_70;                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWB_GameSystemMessage_C*                             WB_GameSystemMessage_157;                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UWB_GameSystemMessage_C*>                     WidgetArray;                                             // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    MessageIndex;                                            // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetNextIndex();
		void OnMessageReceived_4934A8F44FB5D389A11568A9ECAB4816(class UMsgBaseNode* ProxyObject);
		void OnInitialized();
		void EventFMsgSystemMessageNotify(const struct FMsgSystemMessageNotify& Msg);
		void Destruct();
		void ExecuteUbergraph_WB_GameSystemMessageGroup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
