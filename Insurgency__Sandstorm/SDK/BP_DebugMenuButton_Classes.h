#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * WidgetBlueprintGeneratedClass BP_DebugMenuButton.BP_DebugMenuButton_C
	 * Size -> 0x02EA (FullSize[0x051A] - InheritedSize[0x0230])
	 */
	class UBP_DebugMenuButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_1;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             HoverBG;                                                 // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0250(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              Command;                                                 // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              DebugPrint;                                              // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0298(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                Key;                                                     // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bExecuteOnServer;                                        // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bHovered;                                                // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FLinearColor Get_HoverBG_BrushColor_1();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void Execute();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void ExecuteUbergraph_BP_DebugMenuButton(int32_t EntryPoint);
		void OnClicked__DelegateSignature(const class FName& Key, class UBP_DebugMenuButton_C* Button);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
