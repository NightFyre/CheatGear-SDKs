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
	 * WidgetBlueprintGeneratedClass WBP_HUDElement_TextChat_OutputListing.WBP_HUDElement_TextChat_OutputListing_C
	 * Size -> 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
	 */
	class UWBP_HUDElement_TextChat_OutputListing_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeOutAnim;                                             // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class URichTextBlock*                                      MsgContentText;                                          // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_TextChat_MsgPrefix_C*                           MsgPrefix;                                               // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHDTextChatMsgInfo*                                  ChatMsg;                                                 // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MsgLifeTime;                                             // 0x0258(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MXRC[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         EnemyMsgColor;                                           // 0x0260(0x0028) Edit, BlueprintVisible, BlueprintReadOnly
		struct FSlateColor                                         FriendlyMsgColor;                                        // 0x0288(0x0028) Edit, BlueprintVisible, BlueprintReadOnly

	public:
		void Finished_54BC5F4D4E481384960AD59474319862();
		void LifetimeExpired();
		void OnInitialized();
		void SetupListing(class UHDTextChatMsgInfo* Msg);
		void ExecuteUbergraph_WBP_HUDElement_TextChat_OutputListing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
