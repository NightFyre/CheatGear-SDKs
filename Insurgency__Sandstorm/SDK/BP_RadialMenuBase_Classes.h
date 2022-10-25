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
	 * WidgetBlueprintGeneratedClass BP_RadialMenuBase.BP_RadialMenuBase_C
	 * Size -> 0x0138 (FullSize[0x0368] - InheritedSize[0x0230])
	 */
	class UBP_RadialMenuBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_Outro;                                              // 0x0238(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_Intro;                                              // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        BackgroundCanvas;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RadialBackground6Segments_C*                     BP_RadialBackground6Segments;                            // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RadialBackground8Segments_C*                     BP_RadialBackground8Segments;                            // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Canvas;                                                  // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            CanvasSizeBox;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          CenterSlot;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CommandCanvas;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MouseInputAngleImage;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     RadialBackgroundSegmentSwitcher;                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              RadialMenuClass;                                         // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           CursorPos;                                               // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Spacing;                                                 // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERadialMenuDirection                                       SelectedRadialDirection;                                 // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SentCommand;                                             // 0x02A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_99IT[0x2];                                   // 0x02A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LastCursorPos;                                           // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERadialMenuDirection                                       DefaultDirection;                                        // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XJS3[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputMaxDistance;                                        // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputSelectionThreshold;                                 // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_791V[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MouseInputAngleMaterial;                                 // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSendCommand;                                           // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bUseCustomSetup;                                         // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MKXQ[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumOptions;                                              // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHighlightedDirectionChanged;                           // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      Sensitivity;                                             // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIgnoreCommand;                                          // 0x02F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_71ZE[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBP_RadialCommand_C*>                         VolatileOptions;                                         // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       bInVehicle;                                              // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KII9[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerClassFlags;                                        // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ContainerWidget;                                         // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UControllerLayout*>                Controller_Layout;                                       // 0x0318(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetSelectedRadialDirection(ERadialMenuDirection NewDirection);
		void UpdateVolatileCommands();
		void CreateRadialCommand(const struct FRadialCommand& RadialCommand);
		void ShouldSendCommand(bool* bSendCommand);
		void DoesSelectedOptionRequireClick(bool* bRequireClick);
		void ResetToCenter();
		void SetupInputActions();
		void IsActiveRadialMenu(bool* bIsActive);
		void UpdateRadialMenuClass(class UClass* NewRadialClass);
		void GetCommandWidgetForDirection(ERadialMenuDirection Direction, class UBP_RadialCommand_C** Command);
		void GetRadialCommandFromDirection(ERadialMenuDirection Direction, struct FRadialCommand* Command);
		ESlateVisibility IsHelpTextVisible();
		class FText GetHelpText();
		void HideRadialOnOwner();
		void HideMenu(bool bSendCommand);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void AddCommandWidget(class UBP_RadialCommand_C* CommandWidget, ERadialMenuDirection Direction, bool bVolatile);
		void UpdateCursorPosition();
		void UpdateMouseInputAngleIndicator();
		void SetRadialDirection(ERadialMenuDirection Direction);
		void GetCursorCenterOffset(float* LocationX, float* LocationY);
		void UpdateSelectedRadialDirection();
		void DefaultSetupRadialMenu();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PreConstruct(bool IsDesignTime);
		void DismissMenuAndSendCommand(class UUserWidget* HiddenRadial);
		void DismissMenu();
		void DismissMenuAndSendCommandClicked();
		void OnShowRadialMenu(class UUserWidget* ShownRadial);
		void ExecuteUbergraph_BP_RadialMenuBase(int32_t EntryPoint);
		void OnHighlightedDirectionChanged__DelegateSignature(ERadialMenuDirection Direction);
		void OnSendCommand__DelegateSignature(ERadialMenuDirection Direction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
