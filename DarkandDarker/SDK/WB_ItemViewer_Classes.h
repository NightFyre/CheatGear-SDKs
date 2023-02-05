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
	 * WidgetBlueprintGeneratedClass WB_ItemViewer.WB_ItemViewer_C
	 * Size -> 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
	 */
	class UWB_ItemViewer_C : public UDCWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_51;                                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_ItemPreviewActor_C*                              ItemPreviewActorRef;                                     // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMessageReceived_B261A16A4247B94E538BD6AAC60C5698(class UMsgBaseNode* ProxyObject);
		void OnMessageReceived_17144D1D4366588E190AA58E890EABE1(class UMsgBaseNode* ProxyObject);
		void ResetPreviewRotationOnToggle(ESlateVisibility NewVisibility);
		void EventFMsgWidgetGameGroupToggleNotify(const struct FMsgWidgetGameGroupToggleNotify& Msg);
		void OnFMsgWidgetLobbyGroupToggleNotify(const struct FMsgWidgetLobbyGroupToggleNotify& Msg);
		void Construct();
		void ExecuteUbergraph_WB_ItemViewer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
