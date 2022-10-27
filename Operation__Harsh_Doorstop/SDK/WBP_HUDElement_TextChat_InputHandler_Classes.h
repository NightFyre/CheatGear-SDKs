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
	 * WidgetBlueprintGeneratedClass WBP_HUDElement_TextChat_InputHandler.WBP_HUDElement_TextChat_InputHandler_C
	 * Size -> 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
	 */
	class UWBP_HUDElement_TextChat_InputHandler_C : public UHDTextChatInputWidgetBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          ChannelNameText;                                         // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    MsgInputTextBox;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDFCommChannel*                                      CurrentChannel;                                          // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnInputTextCommitted;                                    // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void StartTalking(class UDFCommChannel* NewTalkChannel);
		void StopTalking(class UDFCommChannel* CurrentChannel);
		void InputTextEntered(const class FText& Text);
		void BndEvt__MsgInputTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void ExecuteUbergraph_WBP_HUDElement_TextChat_InputHandler(int32_t EntryPoint);
		void OnInputTextCommitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
