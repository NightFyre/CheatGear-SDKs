#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GbxUI.GbxGFxMovie.TranslateWorldToLocal
	 */
	struct UGbxGFxMovie_TranslateWorldToLocal_Params
	{
	public:
		struct FVector                                             LocationWorldSpace;                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           OutPositionLocal;                                        // 0x000C(0x0008)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlayerViewportRelative;                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseMovieDimensions;                                     // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0016(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.TranslateToScreen
	 */
	struct UGbxGFxMovie_TranslateToScreen_Params
	{
	public:
		struct FVector2D                                           Point;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.TranslateScreenToLocal
	 */
	struct UGbxGFxMovie_TranslateScreenToLocal_Params
	{
	public:
		struct FVector2D                                           Point;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseMovieDimensions;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NVZD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.TranslateRectToScreen
	 */
	struct UGbxGFxMovie_TranslateRectToScreen_Params
	{
	public:
		struct FBox2D                                              Rect;                                                    // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FBox2D                                              ReturnValue;                                             // 0x0014(0x0014)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.SpawnMovie
	 */
	struct UGbxGFxMovie_SpawnMovie_Params
	{
	public:
		class AGbxPlayerController*                                NewGPCOwner;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.SpawnGbxGFxMovie
	 */
	struct UGbxGFxMovie_SpawnGbxGFxMovie_Params
	{
	public:
		class AGbxPlayerController*                                GbxPlayerController;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              MovieClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxGFxMovie*                                        ReturnValue;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.SetViewportToPlayerScreen
	 */
	struct UGbxGFxMovie_SetViewportToPlayerScreen_Params
	{
	public:
		class AGbxPlayerController*                                pc;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.SetOffsetDisplayTransform
	 */
	struct UGbxGFxMovie_SetOffsetDisplayTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.SetBaseDisplayTransform
	 */
	struct UGbxGFxMovie_SetBaseDisplayTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.SetAudioEnabled
	 */
	struct UGbxGFxMovie_SetAudioEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.SetAnchor
	 */
	struct UGbxGFxMovie_SetAnchor_Params
	{
	public:
		struct FGbxGFxAnchor                                       Anchor;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.RunUIEventAudio
	 */
	struct UGbxGFxMovie_RunUIEventAudio_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ProviderHistory;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.GetViewportOffset
	 */
	struct UGbxGFxMovie_GetViewportOffset_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.GetViewportDimensions
	 */
	struct UGbxGFxMovie_GetViewportDimensions_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.GetStageDimensions
	 */
	struct UGbxGFxMovie_GetStageDimensions_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.GetOwningPlayerPawn
	 */
	struct UGbxGFxMovie_GetOwningPlayerPawn_Params
	{
	public:
		class APawn*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.GetOwningPlayerController
	 */
	struct UGbxGFxMovie_GetOwningPlayerController_Params
	{
	public:
		class AGbxPlayerController*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.GetOffsetDisplayTransform
	 */
	struct UGbxGFxMovie_GetOffsetDisplayTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.GetMovieDimensions
	 */
	struct UGbxGFxMovie_GetMovieDimensions_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.GetBaseDisplayTransform
	 */
	struct UGbxGFxMovie_GetBaseDisplayTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.extTransitionComplete
	 */
	struct UGbxGFxMovie_extTransitionComplete_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMovie.extAnimationFinished
	 */
	struct UGbxGFxMovie_extAnimationFinished_Params
	{
	public:
		class FString                                              TargetName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMovie.ApplyNewAudioSettings
	 */
	struct UGbxGFxMovie_ApplyNewAudioSettings_Params
	{
	public:
		class UDataTable*                                          NewDataTable;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUIAudioSettingOperation                                   MergeOperation;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMenu.SetWidgetAdjacency
	 */
	struct UGbxGFxMenu_SetWidgetAdjacency_Params
	{
	public:
		unsigned char                                              UnknownData_C83G[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGbxFocusableWidgetAdjacencyInfo                    AdjacencyInfo;                                           // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMenu.SetFocusedWidget
	 */
	struct UGbxGFxMenu_SetFocusedWidget_Params
	{
	public:
		unsigned char                                              UnknownData_OYPP[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       bFromMouse;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMenu.SetFocusableWidgetAdjancency
	 */
	struct UGbxGFxMenu_SetFocusableWidgetAdjancency_Params
	{
	public:
		unsigned char                                              UnknownData_O3CO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             AdjacentUp;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentDown;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentLeft;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentRight;                                           // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMenu.RegisterFocusableWidgetWithAdjacency
	 */
	struct UGbxGFxMenu_RegisterFocusableWidgetWithAdjacency_Params
	{
	public:
		unsigned char                                              UnknownData_P3DR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             AdjacentUp;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentDown;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentLeft;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentRight;                                           // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMenu.RegisterFocusableWidget
	 */
	struct UGbxGFxMenu_RegisterFocusableWidget_Params
	{
	public:
		unsigned char                                              UnknownData_0OPR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGbxFocusableWidgetAdjacencyInfo                    AdjacencyInfo;                                           // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMenu.MenuStack_Clear
	 */
	struct UGbxGFxMenu_MenuStack_Clear_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMenu.IsWidgetFocused
	 */
	struct UGbxGFxMenu_IsWidgetFocused_Params
	{
	public:
		class UObject*                                             WidgetInQuestion;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMenu.GetFocusedWidget
	 */
	struct UGbxGFxMenu_GetFocusedWidget_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxHUDWidget.extInitAnimationFinished
	 */
	struct UGbxGFxHUDWidget_extInitAnimationFinished_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxHUDWidget.extHideAnimationFinished
	 */
	struct UGbxGFxHUDWidget_extHideAnimationFinished_Params
	{	};

	/**
	 * Function GbxUI.GbxUserWidget.SetLabelText
	 */
	struct UGbxUserWidget_SetLabelText_Params
	{
	public:
		class FText                                                LabelText;                                               // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUserWidget.OnFocusableWidgetUnhovered
	 */
	struct UGbxUserWidget_OnFocusableWidgetUnhovered_Params
	{	};

	/**
	 * Function GbxUI.GbxUserWidget.OnFocusableWidgetReleased
	 */
	struct UGbxUserWidget_OnFocusableWidgetReleased_Params
	{	};

	/**
	 * Function GbxUI.GbxUserWidget.OnFocusableWidgetPressed
	 */
	struct UGbxUserWidget_OnFocusableWidgetPressed_Params
	{	};

	/**
	 * Function GbxUI.GbxUserWidget.OnFocusableWidgetHovered
	 */
	struct UGbxUserWidget_OnFocusableWidgetHovered_Params
	{	};

	/**
	 * Function GbxUI.GbxUserWidget.OnFocusableWidgetClicked
	 */
	struct UGbxUserWidget_OnFocusableWidgetClicked_Params
	{	};

	/**
	 * Function GbxUI.GbxUserWidget.IsRegisteredAsFocusableWidget
	 */
	struct UGbxUserWidget_IsRegisteredAsFocusableWidget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUserWidget.IsFocusableWidgetStateHovered
	 */
	struct UGbxUserWidget_IsFocusableWidgetStateHovered_Params
	{
	public:
		EGbxFocusableWidgetState                                   State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUserWidget.IsFocusableWidgetStateFocused
	 */
	struct UGbxUserWidget_IsFocusableWidgetStateFocused_Params
	{
	public:
		EGbxFocusableWidgetState                                   State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUserWidget.HandleFocusableWidgetStateChanged
	 */
	struct UGbxUserWidget_HandleFocusableWidgetStateChanged_Params
	{
	public:
		EGbxFocusableWidgetState                                   NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBecameFocused;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLostFocus;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUserWidget.GotoAndStop
	 */
	struct UGbxUserWidget_GotoAndStop_Params
	{
	public:
		struct FFrameTime                                          StopTime;                                                // 0x0000(0x0008)  (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUserWidget.GetAllChildWidgetsOfClass
	 */
	struct UGbxUserWidget_GetAllChildWidgetsOfClass_Params
	{
	public:
		class UClass*                                              TargetClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UWidget*>                                     OutputArray;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.SetWidgetAdjacency
	 */
	struct UGbxUmgMenu_SetWidgetAdjacency_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxFocusableWidgetAdjacencyInfo                    AdjacencyInfo;                                           // 0x0008(0x0020)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.SetSlateFocusedWidget
	 */
	struct UGbxUmgMenu_SetSlateFocusedWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.SetHintBarContainer
	 */
	struct UGbxUmgMenu_SetHintBarContainer_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.SetFocusedWidget
	 */
	struct UGbxUmgMenu_SetFocusedWidget_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromMouse;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.SetFocusableWidgetAdjancency
	 */
	struct UGbxUmgMenu_SetFocusableWidgetAdjancency_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentUp;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentDown;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentLeft;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentRight;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.RegisterStagePlacedHint
	 */
	struct UGbxUmgMenu_RegisterStagePlacedHint_Params
	{
	public:
		unsigned char                                              UnknownData_5JW0[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InInputAction;                                           // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.RegisterFocusableWidgetWithAdjacency
	 */
	struct UGbxUmgMenu_RegisterFocusableWidgetWithAdjacency_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentUp;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentDown;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentLeft;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             AdjacentRight;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.RegisterFocusableWidget
	 */
	struct UGbxUmgMenu_RegisterFocusableWidget_Params
	{
	public:
		class UObject*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxFocusableWidgetAdjacencyInfo                    AdjacencyInfo;                                           // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.PopulateHintBar
	 */
	struct UGbxUmgMenu_PopulateHintBar_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.NavigateBack
	 */
	struct UGbxUmgMenu_NavigateBack_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.MenuStack_SwitchTo
	 */
	struct UGbxUmgMenu_MenuStack_SwitchTo_Params
	{
	public:
		class UGbxMenuData*                                        MenuDataIn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.MenuStack_Push
	 */
	struct UGbxUmgMenu_MenuStack_Push_Params
	{
	public:
		class UGbxMenuData*                                        MenuDataIn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.MenuStack_PopToSwitchTo
	 */
	struct UGbxUmgMenu_MenuStack_PopToSwitchTo_Params
	{
	public:
		class UObject*                                             Menu;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxMenuData*                                        MenuDataIn;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.MenuStack_PopTo
	 */
	struct UGbxUmgMenu_MenuStack_PopTo_Params
	{
	public:
		class UObject*                                             Menu;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.MenuStack_Pop
	 */
	struct UGbxUmgMenu_MenuStack_Pop_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.MenuStack_Clear
	 */
	struct UGbxUmgMenu_MenuStack_Clear_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.IsWidgetFocused
	 */
	struct UGbxUmgMenu_IsWidgetFocused_Params
	{
	public:
		class UObject*                                             WidgetInQuestion;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.IsActiveMenuOnStack
	 */
	struct UGbxUmgMenu_IsActiveMenuOnStack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.HandleMenuInputDeviceChanged
	 */
	struct UGbxUmgMenu_HandleMenuInputDeviceChanged_Params
	{
	public:
		EGbxMenuInputDevice                                        NewInputDevice;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.HandleMenuInputAction
	 */
	struct UGbxUmgMenu_HandleMenuInputAction_Params
	{
	public:
		class FName                                                InputAction;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ControllerId;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.HandleMenuInit
	 */
	struct UGbxUmgMenu_HandleMenuInit_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.HandleMenuDeinit
	 */
	struct UGbxUmgMenu_HandleMenuDeinit_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.HandleMenuDeactivate
	 */
	struct UGbxUmgMenu_HandleMenuDeactivate_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.HandleMenuAspectRatioChanged
	 */
	struct UGbxUmgMenu_HandleMenuAspectRatioChanged_Params
	{
	public:
		float                                                      NewAspectRatio;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.HandleMenuActivate
	 */
	struct UGbxUmgMenu_HandleMenuActivate_Params
	{	};

	/**
	 * Function GbxUI.GbxUmgMenu.GetListItemFactory
	 */
	struct UGbxUmgMenu_GetListItemFactory_Params
	{
	public:
		class UGbxListItemFactory*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.GetFocusedWidget
	 */
	struct UGbxUmgMenu_GetFocusedWidget_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUmgMenu.GetCurrentInputDevice
	 */
	struct UGbxUmgMenu_GetCurrentInputDevice_Params
	{
	public:
		EGbxMenuInputDevice                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxObject.SetOffsetDisplayTransform
	 */
	struct UGbxGFxObject_SetOffsetDisplayTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxObject.SetBaseDisplayTransform
	 */
	struct UGbxGFxObject_SetBaseDisplayTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxObject.RotateAboutPoint
	 */
	struct UGbxGFxObject_RotateAboutPoint_Params
	{
	public:
		float                                                      Degrees;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Point;                                                   // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxObject.GetOffsetDisplayTransform
	 */
	struct UGbxGFxObject_GetOffsetDisplayTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxObject.GetBaseDisplayTransform
	 */
	struct UGbxGFxObject_GetBaseDisplayTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.SetLockedState
	 */
	struct UGbxGFxButton_SetLockedState_Params
	{
	public:
		EGbxGFxButtonLockedState                                   InLockedState;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldRefresh;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.SetLabelText
	 */
	struct UGbxGFxButton_SetLabelText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bForceUpdate;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.SetCheckedState
	 */
	struct UGbxGFxButton_SetCheckedState_Params
	{
	public:
		EGbxGFxButtonCheckedState                                  InCheckedState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldRefresh;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.SetButtonType
	 */
	struct UGbxGFxButton_SetButtonType_Params
	{
	public:
		EGbxGFxButtonType                                          InButtonType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.RefreshView
	 */
	struct UGbxGFxButton_RefreshView_Params
	{
	public:
		EGbxFocusableWidgetState                                   PrevState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.K2_HandleFocusableWidgetStateChanged
	 */
	struct UGbxGFxButton_K2_HandleFocusableWidgetStateChanged_Params
	{
	public:
		EGbxFocusableWidgetState                                   NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBecameFocused;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLostFocus;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.IsRegisteredAsFocusableWidget
	 */
	struct UGbxGFxButton_IsRegisteredAsFocusableWidget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.IsLocked
	 */
	struct UGbxGFxButton_IsLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.IsFocusableWidgetStateUp
	 */
	struct UGbxGFxButton_IsFocusableWidgetStateUp_Params
	{
	public:
		EGbxFocusableWidgetState                                   State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.IsFocusableWidgetStateHovered
	 */
	struct UGbxGFxButton_IsFocusableWidgetStateHovered_Params
	{
	public:
		EGbxFocusableWidgetState                                   State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.IsFocusableWidgetStateFocused
	 */
	struct UGbxGFxButton_IsFocusableWidgetStateFocused_Params
	{
	public:
		EGbxFocusableWidgetState                                   State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDown
	 */
	struct UGbxGFxButton_IsFocusableWidgetStateDown_Params
	{
	public:
		EGbxFocusableWidgetState                                   State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDisabled
	 */
	struct UGbxGFxButton_IsFocusableWidgetStateDisabled_Params
	{
	public:
		EGbxFocusableWidgetState                                   State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.IsChecked
	 */
	struct UGbxGFxButton_IsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.GetLockedState
	 */
	struct UGbxGFxButton_GetLockedState_Params
	{
	public:
		EGbxGFxButtonLockedState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.GetCheckedState
	 */
	struct UGbxGFxButton_GetCheckedState_Params
	{
	public:
		EGbxGFxButtonCheckedState                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxButton.GetButtonType
	 */
	struct UGbxGFxButton_GetButtonType_Params
	{
	public:
		EGbxGFxButtonType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxUI.GbxGFxButton.GbxGFxButtonEvent__DelegateSignature
	 */
	struct UGbxGFxButton_GbxGFxButtonEvent__DelegateSignature_Params
	{
	public:
		class UGbxGFxButton*                                       BUTTON;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxListItemSpinner.OnSpinnerValueUpdated
	 */
	struct UGbxGFxListItemSpinner_OnSpinnerValueUpdated_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.SetPercent
	 */
	struct UGbxGFxProgressBar_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.SetMaxValueText
	 */
	struct UGbxGFxProgressBar_SetMaxValueText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.SetFillColorAndOpacity
	 */
	struct UGbxGFxProgressBar_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.SetCurrentValueText
	 */
	struct UGbxGFxProgressBar_SetCurrentValueText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.PassedPercentThreshold
	 */
	struct UGbxGFxProgressBar_PassedPercentThreshold_Params
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncreasing;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDecreasing;                                             // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.InterpolateToPercentWithInterpolator
	 */
	struct UGbxGFxProgressBar_InterpolateToPercentWithInterpolator_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxProgressBarInterpolator                         Interpolator;                                            // 0x0004(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.InterpolateToPercent
	 */
	struct UGbxGFxProgressBar_InterpolateToPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.HandlePercentChanged
	 */
	struct UGbxGFxProgressBar_HandlePercentChanged_Params
	{
	public:
		float                                                      OldValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentValue;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsInterpolating;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V4KA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGbxProgressBarInterpolator                         ActiveInterpolator;                                      // 0x000C(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.HandleEnterPercentRange
	 */
	struct UGbxGFxProgressBar_HandleEnterPercentRange_Params
	{
	public:
		class FName                                                RangeName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.GetPercent
	 */
	struct UGbxGFxProgressBar_GetPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxProgressBar.EnteredPercentRange
	 */
	struct UGbxGFxProgressBar_EnteredPercentRange_Params
	{
	public:
		float                                                      RangeMin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RangeMax;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentValue;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncreasing;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDecreasing;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxGridScrollingList.OnScrollBarPositionUpdated
	 */
	struct UGbxGFxGridScrollingList_OnScrollBarPositionUpdated_Params
	{
	public:
		float                                                      SliderPercentage;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxListItemNumber.OnSliderUpdated
	 */
	struct UGbxGFxListItemNumber_OnSliderUpdated_Params
	{
	public:
		float                                                      SliderPct;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUDContainer.HandleInit
	 */
	struct UGbxHUDContainer_HandleInit_Params
	{	};

	/**
	 * Function GbxUI.GbxHUDContainer.HandleDeinit
	 */
	struct UGbxHUDContainer_HandleDeinit_Params
	{	};

	/**
	 * Function GbxUI.GbxHUDContainer.HandleDeactivate
	 */
	struct UGbxHUDContainer_HandleDeactivate_Params
	{	};

	/**
	 * Function GbxUI.GbxHUDContainer.HandleActivate
	 */
	struct UGbxHUDContainer_HandleActivate_Params
	{	};

	/**
	 * Function GbxUI.GbxHUDWidget.HandleInit
	 */
	struct UGbxHUDWidget_HandleInit_Params
	{	};

	/**
	 * Function GbxUI.GbxHUDWidget.HandleDeinit
	 */
	struct UGbxHUDWidget_HandleDeinit_Params
	{	};

	/**
	 * Function GbxUI.GbxHUDWidget.HandleDeactivate
	 */
	struct UGbxHUDWidget_HandleDeactivate_Params
	{	};

	/**
	 * Function GbxUI.GbxHUDWidget.HandleActivate
	 */
	struct UGbxHUDWidget_HandleActivate_Params
	{	};

	/**
	 * Function GbxUI.GbxListItem.GetItemIndex
	 */
	struct UGbxListItem_GetItemIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.SwitchToHUDState
	 */
	struct AGbxHUD_SwitchToHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDStateData*                                    State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.SetHUDContainer
	 */
	struct AGbxHUD_SetHUDContainer_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDData*                                         ContainerDefinition;                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.PushHUDState
	 */
	struct AGbxHUD_PushHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDStateData*                                    State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowDuplicatePush;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.PopToSwitchToHUDState
	 */
	struct AGbxHUD_PopToSwitchToHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDStateData*                                    PopToState;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDStateData*                                    SwitchToState;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.PopToHUDState
	 */
	struct AGbxHUD_PopToHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDStateData*                                    State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.PopSpecifiedHUDState
	 */
	struct AGbxHUD_PopSpecifiedHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDStateData*                                    State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.PopHUDState
	 */
	struct AGbxHUD_PopHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.OnPrimaryCharacterChanged
	 */
	struct AGbxHUD_OnPrimaryCharacterChanged_Params
	{
	public:
		class AGbxCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.OnPawnChanged
	 */
	struct AGbxHUD_OnPawnChanged_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               OldPawn;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.GotoPreviousHUDState
	 */
	struct AGbxHUD_GotoPreviousHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.GotoHUDState
	 */
	struct AGbxHUD_GotoHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDStateData*                                    State;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.GetCurrentHUDState
	 */
	struct AGbxHUD_GetCurrentHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxHUDStateData*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.ClearToDefaultHUDState
	 */
	struct AGbxHUD_ClearToDefaultHUDState_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHUD.ClearHUDStates
	 */
	struct AGbxHUD_ClearHUDStates_Params
	{
	public:
		class AGbxPlayerController*                                PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.SendTextToDebugHUD
	 */
	struct UGbxUILibrary_SendTextToDebugHUD_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TextSize;                                                // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.PlayFullScreenMovie
	 */
	struct UGbxUILibrary_PlayFullScreenMovie_Params
	{
	public:
		class AGbxPlayerController*                                GbxPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMediaSource*                                        MediaSource;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlayOnceAndDestroy;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5YVX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxFullScreenMovie*                                 ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateTextListItemWithDelegates
	 */
	struct UGbxUILibrary_CreateTextListItemWithDelegates_Params
	{
	public:
		unsigned char                                              UnknownData_7GWM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ClickedDelegate;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItemText*                                    ReturnValue;                                             // 0x0050(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateTextListItem
	 */
	struct UGbxUILibrary_CreateTextListItem_Params
	{
	public:
		unsigned char                                              UnknownData_5PRG[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class UGbxListItemText*                                    ReturnValue;                                             // 0x0030(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateNumberListItemWithDelegates
	 */
	struct UGbxUILibrary_CreateNumberListItemWithDelegates_Params
	{
	public:
		unsigned char                                              UnknownData_TD4I[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      InitialValue;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderMin;                                               // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderMax;                                               // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderStep;                                              // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedDelegate;                                         // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0050(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItemNumber*                                  ReturnValue;                                             // 0x0060(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateNumberListItem
	 */
	struct UGbxUILibrary_CreateNumberListItem_Params
	{
	public:
		unsigned char                                              UnknownData_YQ7G[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      InitialValue;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderMin;                                               // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderMax;                                               // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderStep;                                              // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxListItemNumber*                                  ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateListItemWithDelegates
	 */
	struct UGbxUILibrary_CreateListItemWithDelegates_Params
	{
	public:
		unsigned char                                              UnknownData_DQRU[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ItemClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ClickedDelegate;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItem*                                        ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateListItem
	 */
	struct UGbxUILibrary_CreateListItem_Params
	{
	public:
		unsigned char                                              UnknownData_KTXI[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ItemClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxListItem*                                        ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateDefaultListItemWithDelegates
	 */
	struct UGbxUILibrary_CreateDefaultListItemWithDelegates_Params
	{
	public:
		unsigned char                                              UnknownData_TCR8[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ClickedDelegate;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0028(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItem*                                        ReturnValue;                                             // 0x0038(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateDefaultListItem
	 */
	struct UGbxUILibrary_CreateDefaultListItem_Params
	{
	public:
		unsigned char                                              UnknownData_DH0U[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxListItem*                                        ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateComboBoxListItemWithDelegates
	 */
	struct UGbxUILibrary_CreateComboBoxListItemWithDelegates_Params
	{
	public:
		unsigned char                                              UnknownData_D9IK[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		TArray<class FText>                                        Items;                                                   // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InitialIndex;                                            // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SK3J[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      ChangedDelegate;                                         // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0058(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItemComboBox*                                ReturnValue;                                             // 0x0068(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateComboBoxListItem
	 */
	struct UGbxUILibrary_CreateComboBoxListItem_Params
	{
	public:
		unsigned char                                              UnknownData_W4FZ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		TArray<class FText>                                        Items;                                                   // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InitialIndex;                                            // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ITNL[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxListItemComboBox*                                ReturnValue;                                             // 0x0048(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateBooleanListItemWithDelegates
	 */
	struct UGbxUILibrary_CreateBooleanListItemWithDelegates_Params
	{
	public:
		unsigned char                                              UnknownData_LMQI[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       InitialValue;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M0FY[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      ChangedDelegate;                                         // 0x0038(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItemBoolean*                                 ReturnValue;                                             // 0x0058(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.CreateBooleanListItem
	 */
	struct UGbxUILibrary_CreateBooleanListItem_Params
	{
	public:
		unsigned char                                              UnknownData_YL4C[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APlayerController*                                   OwningPlayer;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       InitialValue;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_55EE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxListItemBoolean*                                 ReturnValue;                                             // 0x0038(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILibrary.AbbreviateNumberText
	 */
	struct UGbxUILibrary_AbbreviateNumberText_Params
	{
	public:
		float                                                      ValueToFormat;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CURT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCascadingList.SetActiveList
	 */
	struct UGbxCascadingList_SetActiveList_Params
	{
	public:
		class UGbxGridListWidget*                                  List;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCascadingList.PushItems
	 */
	struct UGbxCascadingList_PushItems_Params
	{
	public:
		TArray<struct FGbxCascadingListItemData>                   Items;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCascadingList.Pop
	 */
	struct UGbxCascadingList_Pop_Params
	{	};

	/**
	 * Function GbxUI.GbxCascadingList.OnShiftListsForward
	 */
	struct UGbxCascadingList_OnShiftListsForward_Params
	{	};

	/**
	 * Function GbxUI.GbxCascadingList.OnShiftListsBack
	 */
	struct UGbxCascadingList_OnShiftListsBack_Params
	{	};

	/**
	 * Function GbxUI.GbxCascadingList.OnItemSelected_Internal
	 */
	struct UGbxCascadingList_OnItemSelected_Internal_Params
	{
	public:
		class UGbxListItem*                                        Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCascadingList.OnItemClicked_Internal
	 */
	struct UGbxCascadingList_OnItemClicked_Internal_Params
	{
	public:
		class UGbxListItem*                                        Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCascadingList.HasItems
	 */
	struct UGbxCascadingList_HasItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCascadingList.GetStackDepth
	 */
	struct UGbxCascadingList_GetStackDepth_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCascadingList.Clear
	 */
	struct UGbxCascadingList_Clear_Params
	{	};

	/**
	 * Function GbxUI.GbxComboBoxDropdownMenu.OnChoiceClicked
	 */
	struct UGbxComboBoxDropdownMenu_OnChoiceClicked_Params
	{
	public:
		class UGbxListItem*                                        ListItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxComboBoxDropdownMenu.DismissWithoutChanging
	 */
	struct UGbxComboBoxDropdownMenu_DismissWithoutChanging_Params
	{	};

	/**
	 * Function GbxUI.GbxComboBox.OnComboBoxClicked
	 */
	struct UGbxComboBox_OnComboBoxClicked_Params
	{
	public:
		class UGbxUserWidget*                                      Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxComboBox.GetCurentChoiceReferenceIndex
	 */
	struct UGbxComboBox_GetCurentChoiceReferenceIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCoreDialogBoxHelpers.ShowYesNoDialog
	 */
	struct UGbxCoreDialogBoxHelpers_ShowYesNoDialog_Params
	{
	public:
		class AGbxPlayerController*                                pc;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FText                                                MessageText;                                             // 0x0020(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       bAnyUserCanInteract;                                     // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KB7A[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDialogBox*                                       ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCoreDialogBoxHelpers.ShowOkayDialog
	 */
	struct UGbxCoreDialogBoxHelpers_ShowOkayDialog_Params
	{
	public:
		class AGbxPlayerController*                                pc;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FText                                                MessageText;                                             // 0x0020(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       bAnyUserCanInteract;                                     // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxDialogBoxHelpersDialogTemplate                         Template;                                                // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D9LD[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDialogBox*                                       ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCoreDialogBoxHelpers.ShowDialog
	 */
	struct UGbxCoreDialogBoxHelpers_ShowDialog_Params
	{
	public:
		class AGbxPlayerController*                                pc;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxDialogBoxInfo                                   DialogBoxInfo;                                           // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UGbxDialogBox*                                       ReturnValue;                                             // 0x0068(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCoreDialogBoxHelpers.ShowConfirmCancelDialog
	 */
	struct UGbxCoreDialogBoxHelpers_ShowConfirmCancelDialog_Params
	{
	public:
		class AGbxPlayerController*                                pc;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FText                                                MessageText;                                             // 0x0020(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       bAnyUserCanInteract;                                     // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QVGJ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDialogBox*                                       ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxCoreDialogBoxHelpers.ShowBlockingDialog
	 */
	struct UGbxCoreDialogBoxHelpers_ShowBlockingDialog_Params
	{
	public:
		class AGbxPlayerController*                                pc;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                HeaderText;                                              // 0x0008(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FText                                                MessageText;                                             // 0x0020(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       bBlocksAllUsers;                                         // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H19M[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDialogBox*                                       ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuSwitcher.SwitchToPage
	 */
	struct UGbxMenuSwitcher_SwitchToPage_Params
	{
	public:
		class FName                                                SubMenuId;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuSwitcher.PrevPage
	 */
	struct UGbxMenuSwitcher_PrevPage_Params
	{	};

	/**
	 * Function GbxUI.GbxMenuSwitcher.NextPage
	 */
	struct UGbxMenuSwitcher_NextPage_Params
	{	};

	/**
	 * Function GbxUI.GbxMenuSwitcher.GetCurrentSubmenuId
	 */
	struct UGbxMenuSwitcher_GetCurrentSubmenuId_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDebugMenu.OnCloseClicked
	 */
	struct UGbxDebugMenu_OnCloseClicked_Params
	{	};

	/**
	 * Function GbxUI.GbxDebugMenu.OnCategorySelected
	 */
	struct UGbxDebugMenu_OnCategorySelected_Params
	{
	public:
		class UGbxUserWidget*                                      Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDebugRumbleMenu.OnSliderValueChanged
	 */
	struct UGbxDebugRumbleMenu_OnSliderValueChanged_Params
	{
	public:
		class UGbxListItem*                                        Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDialogBox.UpdateText
	 */
	struct UGbxDialogBox_UpdateText_Params
	{
	public:
		class FText                                                NewHeaderText;                                           // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                NewBodyText;                                             // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDialogBox.SetupDialog
	 */
	struct UGbxDialogBox_SetupDialog_Params
	{
	public:
		struct FGbxDialogBoxInfo                                   DialogBoxInfo;                                           // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDialogBox.SetHeaderTextFormatArg
	 */
	struct UGbxDialogBox_SetHeaderTextFormatArg_Params
	{
	public:
		class FString                                              ArgName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReplacementText;                                         // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDialogBox.SetHeaderText
	 */
	struct UGbxDialogBox_SetHeaderText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bClearFormatArgs;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDialogBox.SetBodyTextFormatArg
	 */
	struct UGbxDialogBox_SetBodyTextFormatArg_Params
	{
	public:
		class FString                                              ArgName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReplacementText;                                         // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDialogBox.SetBodyText
	 */
	struct UGbxDialogBox_SetBodyText_Params
	{
	public:
		class FText                                                NewText;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bClearFormatArgs;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDialogBox.OnChoiceClicked
	 */
	struct UGbxDialogBox_OnChoiceClicked_Params
	{
	public:
		class UGbxListItem*                                        ClickedItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxDialogBox.Dismiss
	 */
	struct UGbxDialogBox_Dismiss_Params
	{	};

	/**
	 * Function GbxUI.GbxFocusableWidget.SetFocusableWidgetEnabled
	 */
	struct UGbxFocusableWidget_SetFocusableWidgetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxFocusableWidget.IsFocusableWidgetFocused
	 */
	struct UGbxFocusableWidget_IsFocusableWidgetFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxFocusableWidget.IsFocusableWidgetEnabled
	 */
	struct UGbxFocusableWidget_IsFocusableWidgetEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxFocusableWidget.GetFocusableWidgetState
	 */
	struct UGbxFocusableWidget_GetFocusableWidgetState_Params
	{
	public:
		EGbxFocusableWidgetState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxFullScreenMovie.OnMovieFinishedPlaying
	 */
	struct UGbxFullScreenMovie_OnMovieFinishedPlaying_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxContextualMenu.OnSelectionChanged
	 */
	struct UGbxGFxContextualMenu_OnSelectionChanged_Params
	{
	public:
		class UGbxGFxListCell*                                     Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxContextualMenu.OnContextualMenuItemClicked
	 */
	struct UGbxGFxContextualMenu_OnContextualMenuItemClicked_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxDragDropManager.OnDropButtonUnhovered
	 */
	struct UGbxGFxDragDropManager_OnDropButtonUnhovered_Params
	{
	public:
		class UGbxGFxButton*                                       UnhoveredButton;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxDragDropManager.OnDropButtonHovered
	 */
	struct UGbxGFxDragDropManager_OnDropButtonHovered_Params
	{
	public:
		class UGbxGFxButton*                                       HoveredButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxDropDownList.OnEntryClicked
	 */
	struct UGbxGFxDropDownList_OnEntryClicked_Params
	{
	public:
		class UGbxGFxButton*                                       BUTTON;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxDropDownList.OnDropDownButtonClicked
	 */
	struct UGbxGFxDropDownList_OnDropDownButtonClicked_Params
	{
	public:
		class UGbxGFxButton*                                       BUTTON;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxHintWidget.OnThisHintClicked
	 */
	struct UGbxGFxHintWidget_OnThisHintClicked_Params
	{
	public:
		class UGbxGFxButton*                                       BUTTON;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxListItemComboBox.OnSelectionUpdated
	 */
	struct UGbxGFxListItemComboBox_OnSelectionUpdated_Params
	{
	public:
		class UGbxGFxListCell*                                     Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxListItemComboBox.OnOwningListSelectionChanged
	 */
	struct UGbxGFxListItemComboBox_OnOwningListSelectionChanged_Params
	{
	public:
		class UGbxGFxListCell*                                     Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxListItemComboBox.OnDropDownButtonClicked
	 */
	struct UGbxGFxListItemComboBox_OnDropDownButtonClicked_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMediaPlayer.OnMovieTracksChanged
	 */
	struct UGbxGFxMediaPlayer_OnMovieTracksChanged_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMediaPlayer.OnMovieSeekCompleted
	 */
	struct UGbxGFxMediaPlayer_OnMovieSeekCompleted_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackSuspended
	 */
	struct UGbxGFxMediaPlayer_OnMoviePlaybackSuspended_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackResumed
	 */
	struct UGbxGFxMediaPlayer_OnMoviePlaybackResumed_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpenFailed
	 */
	struct UGbxGFxMediaPlayer_OnMovieMediaOpenFailed_Params
	{
	public:
		class FString                                              FailedUrl;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpened
	 */
	struct UGbxGFxMediaPlayer_OnMovieMediaOpened_Params
	{
	public:
		class FString                                              OpenedUrl;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaClosed
	 */
	struct UGbxGFxMediaPlayer_OnMovieMediaClosed_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMediaPlayer.OnMovieEndReached
	 */
	struct UGbxGFxMediaPlayer_OnMovieEndReached_Params
	{	};

	/**
	 * DelegateFunction GbxUI.GbxGFxMediaPlayer.GbxGFxMediaPlayerEvent__DelegateSignature
	 */
	struct UGbxGFxMediaPlayer_GbxGFxMediaPlayerEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GbxUI.GbxGFxMenuSwitcherNavWidget.OnTabClicked
	 */
	struct UGbxGFxMenuSwitcherNavWidget_OnTabClicked_Params
	{
	public:
		class UGbxGFxButton*                                       BUTTON;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxUI.GbxGFxSlider.GbxGFxSliderUpdateEvent__DelegateSignature
	 */
	struct UGbxGFxSlider_GbxGFxSliderUpdateEvent__DelegateSignature_Params
	{
	public:
		float                                                      SliderPercent;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxSlider.EndSlide
	 */
	struct UGbxGFxSlider_EndSlide_Params
	{
	public:
		class UGbxGFxButton*                                       BUTTON;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxSlider.BeginRightSlide
	 */
	struct UGbxGFxSlider_BeginRightSlide_Params
	{
	public:
		class UGbxGFxButton*                                       BUTTON;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxGFxSlider.BeginLeftSlide
	 */
	struct UGbxGFxSlider_BeginLeftSlide_Params
	{
	public:
		class UGbxGFxButton*                                       BUTTON;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHintBarWidgetContainer.HintBarSetVisible
	 */
	struct UGbxHintBarWidgetContainer_HintBarSetVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHintBarWidgetContainer.HintBarInitOwnerInfo
	 */
	struct UGbxHintBarWidgetContainer_HintBarInitOwnerInfo_Params
	{
	public:
		class UGbxHintBar*                                         HintBarOwner;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                PlayerControllerContext;                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHintBarWidgetContainer.HintBarClearAllHints
	 */
	struct UGbxHintBarWidgetContainer_HintBarClearAllHints_Params
	{	};

	/**
	 * Function GbxUI.GbxHintBarWidgetContainer.HintBarAppendHint
	 */
	struct UGbxHintBarWidgetContainer_HintBarAppendHint_Params
	{
	public:
		struct FGbxHintInfo                                        HintInfo;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHintBar.OnHintClicked
	 */
	struct UGbxHintBar_OnHintClicked_Params
	{
	public:
		class FName                                                InputAction;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHeld;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHintWidget.HintWidgetSetVisible
	 */
	struct UGbxHintWidget_HintWidgetSetVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHintWidget.HintWidgetSetInfo
	 */
	struct UGbxHintWidget_HintWidgetSetInfo_Params
	{
	public:
		struct FGbxHintInfo                                        HintInfo;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxHintWidget.HintWidgetInitOwnerInfo
	 */
	struct UGbxHintWidget_HintWidgetInitOwnerInfo_Params
	{
	public:
		class UGbxHintBar*                                         HintBarOwner;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                PlayerControllerContext;                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.TryToAcquireMenuFocus
	 */
	struct UGbxList_TryToAcquireMenuFocus_Params
	{
	public:
		bool                                                       bFromMouse;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.SetSelectionChangedDelegate
	 */
	struct UGbxList_SetSelectionChangedDelegate_Params
	{
	public:
		class FScriptDelegate                                      InSelectionChangedDelegate;                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.SetSelectedItem
	 */
	struct UGbxList_SetSelectedItem_Params
	{
	public:
		class UGbxListItem*                                        Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bScrollIntoView;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnimateScroll;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.SetSelectedIndex
	 */
	struct UGbxList_SetSelectedIndex_Params
	{
	public:
		int32_t                                                    NewSelection;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bScrollIntoView;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnimateScroll;                                          // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.SetItemClickedDelegate
	 */
	struct UGbxList_SetItemClickedDelegate_Params
	{
	public:
		class FScriptDelegate                                      InItemClickedDelegate;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.RemoveListItem
	 */
	struct UGbxList_RemoveListItem_Params
	{
	public:
		class UGbxListItem*                                        Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.RemoveAllListItems
	 */
	struct UGbxList_RemoveAllListItems_Params
	{	};

	/**
	 * Function GbxUI.GbxList.OnItemClicked
	 */
	struct UGbxList_OnItemClicked_Params
	{
	public:
		class UGbxListItem*                                        Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.MoveSelectionUp
	 */
	struct UGbxList_MoveSelectionUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.MoveSelectionRight
	 */
	struct UGbxList_MoveSelectionRight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.MoveSelectionLeft
	 */
	struct UGbxList_MoveSelectionLeft_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.MoveSelectionDown
	 */
	struct UGbxList_MoveSelectionDown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.IsListFocused
	 */
	struct UGbxList_IsListFocused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.IsListEnabled
	 */
	struct UGbxList_IsListEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.InsertListItem
	 */
	struct UGbxList_InsertListItem_Params
	{
	public:
		class UGbxListItem*                                        Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.GetSelectedItem
	 */
	struct UGbxList_GetSelectedItem_Params
	{
	public:
		class UGbxListItem*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.GetSelectedIndex
	 */
	struct UGbxList_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.GetNumItemsInList
	 */
	struct UGbxList_GetNumItemsInList_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.GetListItemFactory
	 */
	struct UGbxList_GetListItemFactory_Params
	{
	public:
		class UGbxListItemFactory*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.GetItemAtIndex
	 */
	struct UGbxList_GetItemAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CTQB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxListItem*                                        ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxList.GetDefaultItemClass
	 */
	struct UGbxList_GetDefaultItemClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemBoolean.SetChecked
	 */
	struct UGbxListItemBoolean_SetChecked_Params
	{
	public:
		bool                                                       bChecked;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemBoolean.IsChecked
	 */
	struct UGbxListItemBoolean_IsChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemBoolean.HandleFocusableWidgetPressed
	 */
	struct UGbxListItemBoolean_HandleFocusableWidgetPressed_Params
	{
	public:
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemComboBox.SetSelectedOptionIndex
	 */
	struct UGbxListItemComboBox_SetSelectedOptionIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemComboBox.SelectPreviousOption
	 */
	struct UGbxListItemComboBox_SelectPreviousOption_Params
	{	};

	/**
	 * Function GbxUI.GbxListItemComboBox.SelectNextOption
	 */
	struct UGbxListItemComboBox_SelectNextOption_Params
	{	};

	/**
	 * Function GbxUI.GbxListItemComboBox.OnValueComboBoxChanged
	 */
	struct UGbxListItemComboBox_OnValueComboBoxChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxUI.GbxListItemComboBox.ListItemComboBoxSelectionChangedDelegate__DelegateSignature
	 */
	struct UGbxListItemComboBox_ListItemComboBoxSelectionChangedDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewSelectedIndex;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemComboBox.InitializeComboBox
	 */
	struct UGbxListItemComboBox_InitializeComboBox_Params
	{
	public:
		TArray<class FText>                                        Items;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InitialValue;                                            // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemComboBox.GetSelectedOptionIndex
	 */
	struct UGbxListItemComboBox_GetSelectedOptionIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemFactory.CreateTextItem
	 */
	struct UGbxListItemFactory_CreateTextItem_Params
	{
	public:
		class APlayerController*                                   Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BHNI[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ClickedDelegate;                                         // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItemText*                                    ReturnValue;                                             // 0x0050(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemFactory.CreateNumberItem
	 */
	struct UGbxListItemFactory_CreateNumberItem_Params
	{
	public:
		class APlayerController*                                   Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VID8[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      InitialValue;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderMin;                                               // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderMax;                                               // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SliderStep;                                              // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ChangedDelegate;                                         // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0050(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItemNumber*                                  ReturnValue;                                             // 0x0060(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemFactory.CreateItemWithDelegates
	 */
	struct UGbxListItemFactory_CreateItemWithDelegates_Params
	{
	public:
		class APlayerController*                                   Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T89P[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ClickedDelegate;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItem*                                        ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemFactory.CreateItem
	 */
	struct UGbxListItemFactory_CreateItem_Params
	{
	public:
		class APlayerController*                                   Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E7YC[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ItemClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxListItem*                                        ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemFactory.CreateComboBoxItem
	 */
	struct UGbxListItemFactory_CreateComboBoxItem_Params
	{
	public:
		class APlayerController*                                   Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5L04[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		TArray<class FText>                                        Items;                                                   // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InitialIndex;                                            // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BDAR[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      ChangedDelegate;                                         // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0058(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItemComboBox*                                ReturnValue;                                             // 0x0068(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemFactory.CreateBooleanItem
	 */
	struct UGbxListItemFactory_CreateBooleanItem_Params
	{
	public:
		class APlayerController*                                   Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0YIY[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LabelText;                                               // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       InitialValue;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SHQS[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      ChangedDelegate;                                         // 0x0038(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SelectedDelegate;                                        // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class UGbxListItemBoolean*                                 ReturnValue;                                             // 0x0058(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemNumber.OnSliderValueChanged
	 */
	struct UGbxListItemNumber_OnSliderValueChanged_Params
	{
	public:
		float                                                      NewPosition;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemNumber.IncrementSlider
	 */
	struct UGbxListItemNumber_IncrementSlider_Params
	{	};

	/**
	 * Function GbxUI.GbxListItemNumber.GetCurrentValue
	 */
	struct UGbxListItemNumber_GetCurrentValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxListItemNumber.DecrementSlider
	 */
	struct UGbxListItemNumber_DecrementSlider_Params
	{	};

	/**
	 * Function GbxUI.GbxMenuStack.Tick
	 */
	struct UGbxMenuStack_Tick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.SwitchTo
	 */
	struct UGbxMenuStack_SwitchTo_Params
	{
	public:
		class UGbxMenuData*                                        MenuData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.SetBlockingMode
	 */
	struct UGbxMenuStack_SetBlockingMode_Params
	{
	public:
		bool                                                       bShouldBlock;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.SetBlockAllRawInput
	 */
	struct UGbxMenuStack_SetBlockAllRawInput_Params
	{
	public:
		bool                                                       bShouldBlock;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.Push
	 */
	struct UGbxMenuStack_Push_Params
	{
	public:
		class UGbxMenuData*                                        MenuData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.PopToSwitchTo
	 */
	struct UGbxMenuStack_PopToSwitchTo_Params
	{
	public:
		class UObject*                                             Menu;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGbxMenuData*                                        MenuData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.PopTo
	 */
	struct UGbxMenuStack_PopTo_Params
	{
	public:
		class UObject*                                             Menu;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.Pop
	 */
	struct UGbxMenuStack_Pop_Params
	{	};

	/**
	 * Function GbxUI.GbxMenuStack.Num
	 */
	struct UGbxMenuStack_Num_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.HandleRawInput
	 */
	struct UGbxMenuStack_HandleRawInput_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEvent                                                EVENTTYPE;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XN1U[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ControllerId;                                            // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.GetTopMenu
	 */
	struct UGbxMenuStack_GetTopMenu_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.GetMenuAtIndex
	 */
	struct UGbxMenuStack_GetMenuAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XQ63[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.GetIndexOfMenu
	 */
	struct UGbxMenuStack_GetIndexOfMenu_Params
	{
	public:
		class UObject*                                             Menu;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.GetCurrentInputDevice
	 */
	struct UGbxMenuStack_GetCurrentInputDevice_Params
	{
	public:
		EGbxMenuInputDevice                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxMenuStack.Draw
	 */
	struct UGbxMenuStack_Draw_Params
	{	};

	/**
	 * Function GbxUI.GbxMenuStack.Clear
	 */
	struct UGbxMenuStack_Clear_Params
	{	};

	/**
	 * Function GbxUI.GbxProgressBar.SetShear
	 */
	struct UGbxProgressBar_SetShear_Params
	{
	public:
		float                                                      InShear;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.SetPercent
	 */
	struct UGbxProgressBar_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.SetMaxValueText
	 */
	struct UGbxProgressBar_SetMaxValueText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.SetFillColorAndOpacity
	 */
	struct UGbxProgressBar_SetFillColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.SetCurrentValueText
	 */
	struct UGbxProgressBar_SetCurrentValueText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.PassedPercentThreshold
	 */
	struct UGbxProgressBar_PassedPercentThreshold_Params
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncreasing;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDecreasing;                                             // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.IsInterpolating
	 */
	struct UGbxProgressBar_IsInterpolating_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.InterpolateToPercentWithInterpolator
	 */
	struct UGbxProgressBar_InterpolateToPercentWithInterpolator_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxProgressBarInterpolator                         Interpolator;                                            // 0x0004(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.InterpolateToPercent
	 */
	struct UGbxProgressBar_InterpolateToPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.HandleShowDeltaEffect
	 */
	struct UGbxProgressBar_HandleShowDeltaEffect_Params
	{
	public:
		class UWidget*                                             Effect;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentValue;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.HandlePercentChanged
	 */
	struct UGbxProgressBar_HandlePercentChanged_Params
	{
	public:
		float                                                      OldValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentValue;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsInterpolating;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q0P5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGbxProgressBarInterpolator                         ActiveInterpolator;                                      // 0x000C(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.HandleEnterPercentRange
	 */
	struct UGbxProgressBar_HandleEnterPercentRange_Params
	{
	public:
		class FName                                                RangeName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.GetShear
	 */
	struct UGbxProgressBar_GetShear_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxProgressBar.GetPercent
	 */
	struct UGbxProgressBar_GetPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarRangeEvent__DelegateSignature
	 */
	struct UGbxProgressBar_GbxProgressBarRangeEvent__DelegateSignature_Params
	{
	public:
		class FName                                                RangeName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarEvent__DelegateSignature
	 */
	struct UGbxProgressBar_GbxProgressBarEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GbxUI.GbxProgressBar.EnteredPercentRange
	 */
	struct UGbxProgressBar_EnteredPercentRange_Params
	{
	public:
		float                                                      RangeMin;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RangeMax;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OldValue;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentValue;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncreasing;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDecreasing;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxSpinner.SpinRight
	 */
	struct UGbxSpinner_SpinRight_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction GbxUI.GbxSpinner.SpinnerValueUpdatedEvent__DelegateSignature
	 */
	struct UGbxSpinner_SpinnerValueUpdatedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GbxUI.GbxSpinner.SpinLeft
	 */
	struct UGbxSpinner_SpinLeft_Params
	{
	public:
		class UGbxGFxButton*                                       PressedButton;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGbxMenuInputEvent                                  InputInfo;                                               // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxTextField.OnScrollBarPositionUpdated
	 */
	struct UGbxTextField_OnScrollBarPositionUpdated_Params
	{
	public:
		float                                                      SliderPercentage;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.PlatformToText
	 */
	struct UGbxUILocalization_PlatformToText_Params
	{
	public:
		class FName                                                Platform;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.PlatformToRichText
	 */
	struct UGbxUILocalization_PlatformToRichText_Params
	{
	public:
		class FName                                                Platform;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           GlyphSize;                                               // 0x0010(0x0008)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.PlatformToGlyph
	 */
	struct UGbxUILocalization_PlatformToGlyph_Params
	{
	public:
		class FName                                                Platform;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         ReturnValue;                                             // 0x0010(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.PlatformToGFxHTMLText
	 */
	struct UGbxUILocalization_PlatformToGFxHTMLText_Params
	{
	public:
		class FName                                                Platform;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GlyphHeight;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    VSpace;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.IsPlatformGlyphAvailable
	 */
	struct UGbxUILocalization_IsPlatformGlyphAvailable_Params
	{
	public:
		class FName                                                Platform;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.IsInputActionGlyphAvailable
	 */
	struct UGbxUILocalization_IsInputActionGlyphAvailable_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxActionToTextType                                       GlyphType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.InputActionToText
	 */
	struct UGbxUILocalization_InputActionToText_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxActionToTextType                                       GlyphType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IO6O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.InputActionToRichText
	 */
	struct UGbxUILocalization_InputActionToRichText_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxActionToTextType                                       GlyphType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K49K[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           GlyphSize;                                               // 0x0014(0x0008)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XJW5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.InputActionToGlyph
	 */
	struct UGbxUILocalization_InputActionToGlyph_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxActionToTextType                                       GlyphType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ALZI[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         ReturnValue;                                             // 0x0018(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.InputActionToGFxHTMLText
	 */
	struct UGbxUILocalization_InputActionToGFxHTMLText_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxActionToTextType                                       GlyphType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LFCZ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      GlyphHeight;                                             // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    VSpace;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ISYE[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUILocalization.FKeyToGFxHTMLText
	 */
	struct UGbxUILocalization_FKeyToGFxHTMLText_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                pc;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxActionToTextType                                       GlyphType;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AXVK[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      GlyphHeight;                                             // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxUISpinnerWidget.MoveToNumber
	 */
	struct UGbxUISpinnerWidget_MoveToNumber_Params
	{
	public:
		unsigned char                                              NewNumber;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGbxSpinnerWidgetGoToMethod                                GoToMethod;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KH2N[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxWidgetComponent.Setup
	 */
	struct UGbxWidgetComponent_Setup_Params
	{
	public:
		class UClass*                                              NewWidgetClass;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGbxPlayerController*                                NewTrackedPlayer;                                        // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ParentComponent;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWidgetSpace                                               WidgetSpace;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LFNF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NewLayerZOrder;                                          // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                CollisionProfile;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxWidgetComponent.SetDistanceScaleCurve
	 */
	struct UGbxWidgetComponent_SetDistanceScaleCurve_Params
	{
	public:
		class UCurveFloat*                                         NewDistanceScaleCurve;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxWidgetComponent.SetDistanceAlphaCurve
	 */
	struct UGbxWidgetComponent_SetDistanceAlphaCurve_Params
	{
	public:
		class UCurveFloat*                                         NewDistanceAlphaCurve;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxWidgetComponent.SetDistanceAlphaBorder
	 */
	struct UGbxWidgetComponent_SetDistanceAlphaBorder_Params
	{
	public:
		class UBorder*                                             NewDistanceAlphaBorder;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.GbxWorldSpaceProxyWidget.GetWorldLocation
	 */
	struct UGbxWorldSpaceProxyWidget_GetWorldLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxUI.InWorldDamageNumber.OnWentOffscreen
	 */
	struct UInWorldDamageNumber_OnWentOffscreen_Params
	{	};

	/**
	 * Function GbxUI.InWorldDamageNumber.ImpulseAnimationCompleted
	 */
	struct UInWorldDamageNumber_ImpulseAnimationCompleted_Params
	{
	public:
		class UUserWidget*                                         AssociatedWidget;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
