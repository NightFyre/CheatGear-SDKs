#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_ItemEditor.WBP_ItemEditor_C
	 * Size -> 0x0398 (FullSize[0x05F8] - InheritedSize[0x0260])
	 */
	class UWBP_ItemEditor_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_1;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Cancel;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Clear;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Ok;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        EditCanvas;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FloatingCanvas;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_134;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_228;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_15;                                              // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UVaRestJsonObject*                                   ItemJsonObj;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UWBP_CharacterEditor_C*                              CharacterEditorRef;                                      // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AGBCharacter*                                        ItemEditorCharacterRef;                                  // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGBItem*                                             RootItem;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_CharacterEditor_Camera_C*                        OverviewCamera;                                          // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TranslationMultiplier;                                   // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           RelativeCameraLimit;                                     // 0x02E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationMultiplier;                                      // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomMultiplier;                                          // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ZoomOutMaxScale;                                         // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           AttachedItemBounds;                                      // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             AttachedCameraVecOffset;                                 // 0x0300(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            AttachedCameraRotOffset;                                 // 0x030C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRotateToDesiredCharYaw;                                 // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PXDC[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitCharYaw;                                             // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredCharYaw;                                          // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredCharYawTime;                                      // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha;                                                   // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFloatingItem;                                           // 0x032C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OFHO[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOk;                                                    // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                OverWriteTitle;                                          // 0x0350(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                OverWriteMessage;                                        // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SaveFileName;                                            // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              SaveBuildName;                                           // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UWBP_DragItem_Visual_C*                              DragItemVisual;                                          // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AGBItem*                                             DraggedItem;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveDelay;                                               // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HY35[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ItemBuildNameTitle;                                      // 0x03B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class AGBItem*                                             ItemUnderCursor;                                         // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_ItemUnderCursorHightlight_C*                    HoveredItemTooltip;                                      // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                ItemBuildNameMessage;                                    // 0x03E0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SaveFailedTitle;                                         // 0x03F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                SaveFailedMessage;                                       // 0x0410(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TooMany;                                                 // 0x0428(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                AcrossTooManyRails;                                      // 0x0440(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NotEnoughMountPoints;                                    // 0x0458(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TooFarBack;                                              // 0x0470(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                TooFarForward;                                           // 0x0488(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Unknown;                                                 // 0x04A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Overappling;                                             // 0x04B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NoSight;                                                 // 0x04D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BadPreMod;                                               // 0x04E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BadPostMod;                                              // 0x0500(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BlockedByFrontSight;                                     // 0x0518(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BadCombo;                                                // 0x0530(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                BlockedBy;                                               // 0x0548(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NoFrontSightPost;                                        // 0x0560(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                InvalidItemSetup;                                        // 0x0578(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                SkinName;                                                // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SkipShowClearConfirmation;                               // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                ClearWarningTitle;                                       // 0x05A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ClearWarningMessage;                                     // 0x05C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        RandomFirearmNameIdeas;                                  // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FText>                                        RandomGenericNames;                                      // 0x05E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetupSkin();
		void IsValidSetup(bool* bOutIsValid, class FText* OutInvalidMessage);
		class UWidget* GetHoveredItemTooltip();
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void UpdateItemUnderCursor(const struct FPointerEvent& MouseEvent);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void MakeInteractive(class AActor* InActor);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Zoom_Camera(float WheelDelta);
		void RotateItemOrChar(const struct FVector2D& MouseDelta);
		void MoveCamera(const struct FVector2D& MouseDelta);
		void Construct();
		void SetupFloatingItem(float BoundsMultiplier, float ZOffset, float PitchOffset, float YawOffset, bool bOffsetItemBy90);
		void BndEvt__Button_Ok_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Close();
		void SetupAttachedItem(const struct FVector2D& AttachedItemBounds, const struct FVector& AttachedCameraVecOffset, const struct FRotator& AttachedCameraRotOffset);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnOkClicked_Event_1(const class FString& Filename);
		void SaveKit();
		void OnConfirmOkClicked_Event_1(class UWBP_DialogueBox_C* Dialogue);
		void AddItemCustomisationWidget();
		void MakeAllInteractive();
		void LoadDraggedItemIcon(class UWBP_DragItem_Visual_C* DragItemVisual, class AGBItem* DraggedItem);
		void DraggedItemIconLoaded_Event(class UObject* LoadedAsset);
		void Cancel();
		void SavePrompt();
		void OnCancelClicked_Event_1();
		void MoveArmsOutOfWay();
		void OnKitAssetsLoaded_Event(TArray<class UObject*> LoadedAssets);
		void Destruct();
		void BndEvt__WBP_ItemEditor_Button_Clear_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void OnOkClicked_Event_2(class UWBP_DialogueBox_C* Dialogue);
		void ExecuteUbergraph_WBP_ItemEditor(int32_t EntryPoint);
		void OnOk__DelegateSignature(class UVaRestJsonObject* KitJsonObj);
		void OnCancel__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
