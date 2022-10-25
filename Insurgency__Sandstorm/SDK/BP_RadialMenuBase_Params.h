#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetSelectedRadialDirection
	 */
	struct UBP_RadialMenuBase_C_SetSelectedRadialDirection_Params
	{
	public:
		ERadialMenuDirection                                       NewDirection;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateVolatileCommands
	 */
	struct UBP_RadialMenuBase_C_UpdateVolatileCommands_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.CreateRadialCommand
	 */
	struct UBP_RadialMenuBase_C_CreateRadialCommand_Params
	{
	public:
		struct FRadialCommand                                      RadialCommand;                                           // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.ShouldSendCommand
	 */
	struct UBP_RadialMenuBase_C_ShouldSendCommand_Params
	{
	public:
		bool                                                       bSendCommand;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1M1G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.DoesSelectedOptionRequireClick
	 */
	struct UBP_RadialMenuBase_C_DoesSelectedOptionRequireClick_Params
	{
	public:
		bool                                                       bRequireClick;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CY2W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.ResetToCenter
	 */
	struct UBP_RadialMenuBase_C_ResetToCenter_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetupInputActions
	 */
	struct UBP_RadialMenuBase_C_SetupInputActions_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.IsActiveRadialMenu
	 */
	struct UBP_RadialMenuBase_C_IsActiveRadialMenu_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EZPR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateRadialMenuClass
	 */
	struct UBP_RadialMenuBase_C_UpdateRadialMenuClass_Params
	{
	public:
		class UClass*                                              NewRadialClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetCommandWidgetForDirection
	 */
	struct UBP_RadialMenuBase_C_GetCommandWidgetForDirection_Params
	{
	public:
		ERadialMenuDirection                                       Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YHCS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBP_RadialCommand_C*                                 Command;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetRadialCommandFromDirection
	 */
	struct UBP_RadialMenuBase_C_GetRadialCommandFromDirection_Params
	{
	public:
		ERadialMenuDirection                                       Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z44X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRadialCommand                                      Command;                                                 // 0x0008(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.IsHelpTextVisible
	 */
	struct UBP_RadialMenuBase_C_IsHelpTextVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetHelpText
	 */
	struct UBP_RadialMenuBase_C_GetHelpText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.HideRadialOnOwner
	 */
	struct UBP_RadialMenuBase_C_HideRadialOnOwner_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.HideMenu
	 */
	struct UBP_RadialMenuBase_C_HideMenu_Params
	{
	public:
		bool                                                       bSendCommand;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_871C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnKeyDown
	 */
	struct UBP_RadialMenuBase_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.AddCommandWidget
	 */
	struct UBP_RadialMenuBase_C_AddCommandWidget_Params
	{
	public:
		class UBP_RadialCommand_C*                                 CommandWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERadialMenuDirection                                       Direction;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bVolatile;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YH6Q[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateCursorPosition
	 */
	struct UBP_RadialMenuBase_C_UpdateCursorPosition_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateMouseInputAngleIndicator
	 */
	struct UBP_RadialMenuBase_C_UpdateMouseInputAngleIndicator_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.SetRadialDirection
	 */
	struct UBP_RadialMenuBase_C_SetRadialDirection_Params
	{
	public:
		ERadialMenuDirection                                       Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EZNF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.GetCursorCenterOffset
	 */
	struct UBP_RadialMenuBase_C_GetCursorCenterOffset_Params
	{
	public:
		float                                                      LocationX;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LocationY;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.UpdateSelectedRadialDirection
	 */
	struct UBP_RadialMenuBase_C_UpdateSelectedRadialDirection_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.DefaultSetupRadialMenu
	 */
	struct UBP_RadialMenuBase_C_DefaultSetupRadialMenu_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.Construct
	 */
	struct UBP_RadialMenuBase_C_Construct_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.Tick
	 */
	struct UBP_RadialMenuBase_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.PreConstruct
	 */
	struct UBP_RadialMenuBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenuAndSendCommand
	 */
	struct UBP_RadialMenuBase_C_DismissMenuAndSendCommand_Params
	{
	public:
		class UUserWidget*                                         HiddenRadial;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenu
	 */
	struct UBP_RadialMenuBase_C_DismissMenu_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.DismissMenuAndSendCommandClicked
	 */
	struct UBP_RadialMenuBase_C_DismissMenuAndSendCommandClicked_Params
	{	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnShowRadialMenu
	 */
	struct UBP_RadialMenuBase_C_OnShowRadialMenu_Params
	{
	public:
		class UUserWidget*                                         ShownRadial;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.ExecuteUbergraph_BP_RadialMenuBase
	 */
	struct UBP_RadialMenuBase_C_ExecuteUbergraph_BP_RadialMenuBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnHighlightedDirectionChanged__DelegateSignature
	 */
	struct UBP_RadialMenuBase_C_OnHighlightedDirectionChanged__DelegateSignature_Params
	{
	public:
		ERadialMenuDirection                                       Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuBase.BP_RadialMenuBase_C.OnSendCommand__DelegateSignature
	 */
	struct UBP_RadialMenuBase_C_OnSendCommand__DelegateSignature_Params
	{
	public:
		ERadialMenuDirection                                       Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
