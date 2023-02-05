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
	 * WidgetBlueprintGeneratedClass WB_InventoryCharacterView.WB_InventoryCharacterView_C
	 * Size -> 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
	 */
	class UWB_InventoryCharacterView_C : public UDCWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CharacterCaptureImage;                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bMouseButtonDown;                                        // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_18F0[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_PlayerCharacterCapture_C*                        PlayerCaptureActorRef;                                   // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMessageReceived_BF97A2C3489131A2BC38E88191C57DAB(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_07357DD44D2129E2FDD1919BD54F4315(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_74BA04EF40F176665ED355986B31663E(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_A739E95247894304EBCBAF9F4ADFEED2(class UMsgBaseNode* ProxyObject);
		void Construct();
		void EventFMsgWidgetGameGroupToggleNotify(const struct FMsgWidgetGameGroupToggleNotify& Msg);
		void ResetPreviewRotationOnToggle(ESlateVisibility NewVisibility);
		void EventFMsgSetCheckTargetPlayerEquipment(const struct FMsgSetCheckTargetPlayerEquipment& Msg);
		void EventFMsgRemoveCheckTargetPlayerEquipment(const struct FMsgRemoveCheckTargetPlayerEquipment& Msg);
		void OnFMsgWidgetLobbyGroupToggleNotify(const struct FMsgWidgetLobbyGroupToggleNotify& Msg);
		void ExecuteUbergraph_WB_InventoryCharacterView(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
