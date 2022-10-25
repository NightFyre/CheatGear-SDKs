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
	 * WidgetBlueprintGeneratedClass ScrollableContent.ScrollableContent_C
	 * Size -> 0x0070 (FullSize[0x0328] - InheritedSize[0x02B8])
	 */
	class UScrollableContent_C : public UWindowsContent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEditableTextBox*                                    InputChatLine;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InputLineOverlay;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USafeZone*                                           SafeZone_1;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          Scroll;                                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        _messageStrings;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        _color;                                                  // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                _defaultTitle;                                           // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        TextArray;                                               // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class FText GetTitleText();
		void GetDefaultTitle(class FText* defaultTitle);
		void ResetInputChatLineString();
		void SetInputChatLineString(const class FText& chatLineStringToSet);
		void GetInputChatLineText(class FText* chatLineString);
		void PrintChatMessages();
		void SelectCustomColor(struct FLinearColor* Color);
		void AutoCreateContent();
		void PopulateMessageStrings();
		void AddTextLine(const class FText& textToSet, const struct FLinearColor& Color, bool scrollToTheEnd, bool* lineAdded);
		struct FEventReply OnMouseButtonDownOnConsole(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void StartDrag();
		void BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void Construct();
		void OnMinimize(bool shouldMinimize);
		void ExecuteUbergraph_ScrollableContent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
