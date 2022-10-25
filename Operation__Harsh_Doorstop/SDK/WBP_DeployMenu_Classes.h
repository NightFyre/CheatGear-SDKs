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
	 * WidgetBlueprintGeneratedClass WBP_DeployMenu.WBP_DeployMenu_C
	 * Size -> 0x0D98 (FullSize[0x0FD0] - InheritedSize[0x0238])
	 */
	class UWBP_DeployMenu_C : public UDeployMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BgImg;                                                   // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_DeployMenu_ClassSelectionPanel_C*               ClassSelectionPanel;                                     // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_DeployMenu_DeployButton_C*                      DeployBtn;                                               // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MapNameText;                                             // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MatchTimeText;                                           // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_DeployMenu_SpawnMapView_C*                      SpawnMapView;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_DeployMenu_SquadSelectionPanel_C*               SquadSelectionPanel;                                     // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SuicideBtn;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Team0CheckmarkImage;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Team0CheckmarkImage_Vert;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Team0SelectionOverlay;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Team0SelectionOverlay_Vert;                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Team0TicketNumText;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Team0TicketNumText_Vert;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Team1CheckmarkImage;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Team1CheckmarkImage_Vert;                                // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Team1SelectionOverlay;                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Team1SelectionOverlay_Vert;                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Team1TicketNumText;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Team1TicketNumText_Vert;                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             TeamSwitch0Btn;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             TeamSwitch0Btn_Vert;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TeamSwitch0BtnText;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TeamSwitch0BtnText_Vert;                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             TeamSwitch1Btn;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             TeamSwitch1Btn_Vert;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TeamSwitch1BtnText;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TeamSwitch1BtnText_Vert;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TeamSwitchHBox;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        TeamSwitchVBox;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bBlockAllOtherInput;                                     // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bMenuInitialized;                                        // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3ZFU[0x6];                                   // 0x0332(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPreloadFinished;                                       // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bDonePreloading;                                         // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSpawnPointSelected;                                     // 0x0349(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDeploying;                                              // 0x034A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bClearPOISelectionOnDeploy;                              // 0x034B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K2CY[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        Team0Selected;                                           // 0x0350(0x0278) Edit, BlueprintVisible
		struct FButtonStyle                                        Team0Deselected;                                         // 0x05C8(0x0278) Edit, BlueprintVisible
		struct FButtonStyle                                        Team1Selected;                                           // 0x0840(0x0278) Edit, BlueprintVisible
		struct FButtonStyle                                        Team1Deselected;                                         // 0x0AB8(0x0278) Edit, BlueprintVisible
		struct FSlateBrush                                         Team0SelectedOverlayBrush;                               // 0x0D30(0x0088) Edit, BlueprintVisible
		struct FSlateBrush                                         Team1SelectedOverlayBrush;                               // 0x0DB8(0x0088) Edit, BlueprintVisible
		struct FSlateBrush                                         Team0DeselectedOverlayBrush;                             // 0x0E40(0x0088) Edit, BlueprintVisible
		struct FSlateBrush                                         Team1DeselectedOverlayBrush;                             // 0x0EC8(0x0088) Edit, BlueprintVisible
		bool                                                       bUseVerticalTeamLayout;                                  // 0x0F50(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FHA6[0x7];                                   // 0x0F51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              Team1SelectionOverlayToUse;                              // 0x0F58(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Team1CheckmarkImageToUse;                                // 0x0F60(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          Team1TicketNumTextToUse;                                 // 0x0F68(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMenuPreInitialized;                                     // 0x0F70(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HMYQ[0x7];                                   // 0x0F71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              Team0SelectionOverlayToUse;                              // 0x0F78(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Team0CheckmarkImageToUse;                                // 0x0F80(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          Team0TicketNumTextToUse;                                 // 0x0F88(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          Team0SwitchBtnTextToUse;                                 // 0x0F90(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          Team1SwitchBtnTextToUse;                                 // 0x0F98(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Team1SwitchBtnToUse;                                     // 0x0FA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Team0SwitchBtnToUse;                                     // 0x0FA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHDTeamState*                                        BluforTeamState;                                         // 0x0FB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AHDTeamState*                                        OpforTeamState;                                          // 0x0FB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UBP_HDFactionInfoBase_C*                             BluforFactionInfo;                                       // 0x0FC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_HDFactionInfoBase_C*                             OpforFactionInfo;                                        // 0x0FC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnPaint(struct FPaintContext* Context);
		void UpdateMatchTime();
		void UpdateTeamLayoutElements(bool bUseVerticalLayout, bool bUpdateTeam0);
		void SetTeamSwitchLayout(bool bUseVerticalLayout);
		void InitTeamLayout();
		void InitSquadSelectionUI();
		void UpdateTicketCounts();
		void UpdateTeamSwitchUISettings(EHDTeam TeamToUpdate);
		void UpdateTeamSwitchVisuals(EHDTeam TeamToUpdate);
		void InitClassSelectionUI();
		void DeselectCurrentPOI();
		void DeployAtSelectedSpawnPoint();
		void UpdateDeployBtnState();
		void CloseDeployMenu(bool bForce);
		void PreloadContent();
		void UpdateSuicideBtnState();
		void CleanupOwningPlayerDelegates();
		void InitOwningPlayerDelegates();
		void InitTeamUI();
		void InitMapUI();
		void RequestSuicide();
		void UpdateTeamSwitchBtnState(EHDTeam NewTeam);
		void TeamSwitch(EHDTeam NewTeam);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void Construct();
		void OnDeployMenuInputToggle();
		void BndEvt__SuicideBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void Destruct();
		void OnOwningCharDeath(class APawn* VictimPawn, class AController* VictimController, float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void OnUnpossessedPawn(class APawn* UnpossessedPawn);
		void OnPossessedPawn(class APawn* PossessedPawn);
		void OnPlayerTeamUpdated(unsigned char PrevTeam, unsigned char NewTeam);
		void BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_4_OnPreloadFinished__DelegateSignature();
		void BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_5_OnSpawnPointSelected__DelegateSignature(class AActor* POISpawnPointActor);
		void BndEvt__SpawnMapView_K2Node_ComponentBoundEvent_6_OnSpawnPointDeselected__DelegateSignature();
		void BndEvt__DeployBtn_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(bool bCloseBtn);
		void OnPlayerSpawnTimerElapsed();
		void OnRepPlayerStatePC();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PreConstruct(bool IsDesignTime);
		void On_Team_Switch_Btn_Clicked();
		void On_Team_Switch_Btn_Clicked();
		void UpdateTeamStateRefs();
		void OnBluforPostInitTeam(class ADFTeamState* TeamState);
		void OnOpforPostInitTeam(class ADFTeamState* TeamState);
		void OnPlayerTeamStateUpdated(class ADFTeamState* LastTeamState, class ADFTeamState* NewTeamState, bool bNewTeamStateInit);
		void ExecuteUbergraph_WBP_DeployMenu(int32_t EntryPoint);
		void OnPreloadFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
