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
	 * WidgetBlueprintGeneratedClass WBP_MainMenu.WBP_MainMenu_C
	 * Size -> 0x0184 (FullSize[0x03BC] - InheritedSize[0x0238])
	 */
	class UWBP_MainMenu_C : public UDFBaseMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    MainMenuOpenUIAnim;                                      // 0x0240(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UNamedSlot*                                          BgSlot;                                                  // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CopyrightNoticeText;                                     // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MainMenu_NavBarButton_C*                        ExitGameNavBtn;                                          // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FooterBg;                                                // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MainMenu_NavBarButton_C*                        LeaveGameNavBtn;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Logo;                                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      MainMenuNavHBox;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NavBarBg;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     NavBarWS;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             OptionMenuContainer;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MainMenu_NavBarButton_C*                        PauseExitGameNavBtn;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      PauseMenuNavHBox;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MainMenu_NavBarButton_C*                        ResumeNavBtn;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_MainMenu_NavBarButton_C*                        ShootingRangeNavBtn;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SubNavBar;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      SubNavHBox;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bPauseMenu;                                              // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowPauseMenuInDesigner;                                // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D04C[0x2];                                   // 0x02CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MenuIndex;                                               // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowReferenceBackground;                                // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5YOI[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MenuBackgroundUWClass;                                   // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PauseMenuBackgroundUWClass;                              // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           LogoPosition;                                            // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateBrush                                         LogoBrush;                                               // 0x02F0(0x0088) Edit, BlueprintVisible
		TArray<struct FFSubMenuOption>                             CurrentSubMenuOptions;                                   // 0x0378(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash
		class UDFBaseMenu*                                         CurrentOptionMenu;                                       // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             SubNavBtnPadding;                                        // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		class USoundBase*                                          MenuMusic;                                               // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     MenuMusicAC;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowShootingRangeBtn;                                   // 0x03B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T0SC[0x3];                                   // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ShootingRangeLevelName;                                  // 0x03B4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayMenuMusic();
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void TeardownSubNavBarClickEvents();
		void SetupSubNavBarClickEvents();
		void ToggleSubNavBar(bool bNewVisible);
		void ClearCurrentOptionMenu();
		void PopulateSubNavBar(TArray<struct FFSubMenuOption>* SubMenuOptions);
		void ClearSubNavBarOptions();
		void UpdateSubNavBarOptions();
		void GetNavBarHBox(class UHorizontalBox** HBoxToUse);
		void SetOptionMenu(class UClass* NewOptionMenuClass, bool IsDesignTime);
		void GetNavBtnCount(int32_t* Count);
		void SetupCopyrightNotice();
		void SetActiveMenu(int32_t NewIndex, class UClass* NewOptionMenuClass, bool IsDesignTime);
		void SetupNavBarClickEvents();
		void SetupMenuBackgroundWidget();
		void InitMenuState(bool bIsDesignTime);
		void BndEvt__ResumeNavBtn_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
		void OnNavBtnClicked(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
		void BndEvt__ReturnToMenuNavBtn_K2Node_ComponentBoundEvent_12_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
		void OnSubNavBtnClicked(class UWBP_MainMenu_NavBarButton_SubMenu_C* ClickedBtn);
		void OnPauseMenuPressed();
		void Construct();
		void BndEvt__ShootingRangeNavBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
		void PreConstruct(bool IsDesignTime);
		void OnInitialized();
		void BndEvt__ExitGameNavBtn_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
		void BndEvt__PauseExitGameNavBtn_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_MainMenu_NavBarButton_C* ClickedBtn);
		void ExecuteUbergraph_WBP_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
