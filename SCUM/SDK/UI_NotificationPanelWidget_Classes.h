#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass UI_NotificationPanelWidget.UI_NotificationPanelWidget_C
	 * Size -> 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
	 */
	class UUI_NotificationPanelWidget_C : public UNotificationPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          AccountBalance;                                          // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             EventCancelBox;                                          // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             EventTime;                                               // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EventTimetext;                                           // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FamePointsCounter;                                       // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             NextEventBox;                                            // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NextEventCountdown;                                      // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NextEventLocation;                                       // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        NotificationBox;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RankLabel;                                               // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_6;                                             // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_2;                                           // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class FText Get_Money_Balance_Text();
		ESlateVisibility Get_NotificationPanel_Visibility();
		ESlateVisibility Get_EventCancelBox_Visibility();
		class FText Get_EventCancelTime();
		struct FLinearColor Get_EventTime_BrushColor();
		struct FLinearColor Get_NextEventBox_BrushColor();
		class FText Get_EventTimeText();
		ESlateVisibility Get_EventTime_Visibility();
		class FText Get_RankLabel_Text();
		class FText Get_NextEventLocation_Text();
		class FText Get_FamePointsCounter_Text();
		class FText Get_NextEventCountdown_Text();
		ESlateVisibility Get_NextEventBox_Visibility();
		void ShowNotification(class UNotificationWidget* Notification);
		void ClearAllNotifications();
		void ExecuteUbergraph_UI_NotificationPanelWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
