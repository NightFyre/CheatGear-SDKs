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
	 * WidgetBlueprintGeneratedClass BP_Widget_ModDetails.BP_Widget_ModDetails_C
	 * Size -> 0x033C (FullSize[0x056C] - InheritedSize[0x0230])
	 */
	class UBP_Widget_ModDetails_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KeyActionButton_C*                               BackIcon;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InvertedButton_C*                                DislikeButton;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InvertedButton_C*                                LikeButton;                                              // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      ModDescriptionText;                                      // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      ModDetailsLine;                                          // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      ModDetailsTags;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ModNameText;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionButton_C*                               NextIcon;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_Widget_Slideshow_C*                              Slideshow;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InvertedButton_C*                                SubscribeButton;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_InvertedButton_C*                                ViewButton;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FModObject                                          ModData;                                                 // 0x0290(0x02D8) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    CurrentRating;                                           // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetRateButtonsEnabled(bool bNewEnabled);
		void UpdateSubscribedState();
		void UpdateSubscribedButtonState(bool bSubscribed);
		void UpdateModData(const struct FModObject& NewModData);
		void InternalUpdateModData();
		void OnSubscribed_A51B8D424F17FF21C12CD8B2AD241ACE(const struct FModObject& ModObject);
		void OnUnsubscribed_36C17F4049A426DB22712494EAD5839B();
		void OnModRated_172200CB49810EECB2BFBE8010CAF237(bool bSuccess);
		void OnModRatingsReceived_6E37F70043A39855536685911855CDC0(bool bSuccess, const struct FGetUserRatingsSchema& Ratings);
		void Construct();
		void BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__ViewButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
		void BndEvt__SubscribeButton_K2Node_ComponentBoundEvent_3_OnClickWithContext__DelegateSignature(const class FString& ContextValue, int32_t ContextIntValue, bool bSelected);
		void BndEvt__LikeButton_K2Node_ComponentBoundEvent_4_OnClickWithContext__DelegateSignature(const class FString& ContextValue, int32_t ContextIntValue, bool bSelected);
		void BndEvt__DislikeButton_K2Node_ComponentBoundEvent_5_OnClickWithContext__DelegateSignature(const class FString& ContextValue, int32_t ContextIntValue, bool bSelected);
		void UpdateImagesForRating(int32_t Rating);
		void RateMod(int32_t Rating);
		void OnSubscriptionsUpdated(TArray<struct FModObject> Mods);
		void UpdateCurrentRating();
		void NavigateNextImage();
		void NavigatePreviousImage();
		void BndEvt__BackIcon_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature();
		void BndEvt__NextIcon_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
		void ExecuteUbergraph_BP_Widget_ModDetails(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
