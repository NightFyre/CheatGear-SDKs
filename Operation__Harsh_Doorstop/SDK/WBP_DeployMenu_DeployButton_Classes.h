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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C
	 * Size -> 0x05D2 (FullSize[0x0802] - InheritedSize[0x0230])
	 */
	class UWBP_DeployMenu_DeployButton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             DeployBtn;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          DeployBtnText;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bCloseBtnBehavior;                                       // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GGDX[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DeployText;                                              // 0x0250(0x0018) Edit, BlueprintVisible, BlueprintReadOnly
		class FText                                                CloseMenuText;                                           // 0x0268(0x0018) Edit, BlueprintVisible, BlueprintReadOnly
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                SelectSpawnText;                                         // 0x02D0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly
		bool                                                       bDeploying;                                              // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WMUU[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        DeployBtnStyle;                                          // 0x02F0(0x0278) Edit, BlueprintVisible, BlueprintReadOnly
		struct FButtonStyle                                        CancelBtnStyle;                                          // 0x0568(0x0278) Edit, BlueprintVisible, BlueprintReadOnly
		bool                                                       bDesignPreviewCancelBtn;                                 // 0x07E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T596[0x7];                                   // 0x07E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CancelDeploymentText;                                    // 0x07E8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly
		bool                                                       bSpawnPointSelected;                                     // 0x0800(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseCancelBehavior;                                      // 0x0801(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void InternalGetSpawnTimeRemaining(int32_t* SpawnSeconds);
		void InternalUpdateBtnStyle();
		void InternalUpdateBtnText(bool bDeploying, bool bSpawnPointSelected);
		void UpdateDeployBtnState(bool bPlayerAlive, bool bDeploymentQueued, bool bSpawnPointSelected);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_WBP_DeployMenu_DeployButton(int32_t EntryPoint);
		void OnUnhovered__DelegateSignature(bool bCloseBtn);
		void OnHovered__DelegateSignature(bool bCloseBtn);
		void OnReleased__DelegateSignature(bool bCloseBtn);
		void OnPressed__DelegateSignature(bool bCloseBtn);
		void OnClicked__DelegateSignature(bool bCloseBtn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
