#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateMaterialVisuals
	 */
	struct UWBP_RadialMenuBase_C_UpdateMaterialVisuals_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.GetCustomInput
	 */
	struct UWBP_RadialMenuBase_C_GetCustomInput_Params
	{
	public:
		struct FVector2D                                           Input;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SOCB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.SetCustomInput
	 */
	struct UWBP_RadialMenuBase_C_SetCustomInput_Params
	{
	public:
		struct FVector2D                                           CustomInput;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateDirectionWithCustomInput
	 */
	struct UWBP_RadialMenuBase_C_UpdateDirectionWithCustomInput_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.RemoveChildIndexFromRadialMenu
	 */
	struct UWBP_RadialMenuBase_C_RemoveChildIndexFromRadialMenu_Params
	{
	public:
		int32_t                                                    IndexToRemove;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.RemoveChildWidgetFromRadialMenu
	 */
	struct UWBP_RadialMenuBase_C_RemoveChildWidgetFromRadialMenu_Params
	{
	public:
		class UUserWidget*                                         ItemToFind;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.DebugIndex
	 */
	struct UWBP_RadialMenuBase_C_DebugIndex_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.FixInputRotation
	 */
	struct UWBP_RadialMenuBase_C_FixInputRotation_Params
	{
	public:
		struct FVector2D                                           Input;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.FixMainRotation
	 */
	struct UWBP_RadialMenuBase_C_FixMainRotation_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.AutoRegisterToInput
	 */
	struct UWBP_RadialMenuBase_C_AutoRegisterToInput_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateInput
	 */
	struct UWBP_RadialMenuBase_C_UpdateInput_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.RegisterPlayerInput
	 */
	struct UWBP_RadialMenuBase_C_RegisterPlayerInput_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAOU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateDirectionWithJoystick
	 */
	struct UWBP_RadialMenuBase_C_UpdateDirectionWithJoystick_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.GetCurrentIndex
	 */
	struct UWBP_RadialMenuBase_C_GetCurrentIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.GetChild
	 */
	struct UWBP_RadialMenuBase_C_GetChild_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OT0G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.SetIndex
	 */
	struct UWBP_RadialMenuBase_C_SetIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateAllChildrenPositions
	 */
	struct UWBP_RadialMenuBase_C_UpdateAllChildrenPositions_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateChildPosition
	 */
	struct UWBP_RadialMenuBase_C_UpdateChildPosition_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.ClearChildren
	 */
	struct UWBP_RadialMenuBase_C_ClearChildren_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.GetSelectedWidget
	 */
	struct UWBP_RadialMenuBase_C_GetSelectedWidget_Params
	{
	public:
		class UUserWidget*                                         Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.AddChildToRadialMenu
	 */
	struct UWBP_RadialMenuBase_C_AddChildToRadialMenu_Params
	{
	public:
		class UUserWidget*                                         Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateDirectionWithMouseCursor
	 */
	struct UWBP_RadialMenuBase_C_UpdateDirectionWithMouseCursor_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.GetSectionDegreeSize
	 */
	struct UWBP_RadialMenuBase_C_GetSectionDegreeSize_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.SetInputDirection
	 */
	struct UWBP_RadialMenuBase_C_SetInputDirection_Params
	{
	public:
		struct FVector2D                                           Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.Construct
	 */
	struct UWBP_RadialMenuBase_C_Construct_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateSegments
	 */
	struct UWBP_RadialMenuBase_C_UpdateSegments_Params
	{
	public:
		int32_t                                                    Segments;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.InDeadzone
	 */
	struct UWBP_RadialMenuBase_C_InDeadzone_Params
	{
	public:
		bool                                                       InDeadzone;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.UpdateMaterials
	 */
	struct UWBP_RadialMenuBase_C_UpdateMaterials_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.PreConstruct
	 */
	struct UWBP_RadialMenuBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.ExecuteUbergraph_WBP_RadialMenuBase
	 */
	struct UWBP_RadialMenuBase_C_ExecuteUbergraph_WBP_RadialMenuBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.ExitedDeadzone__DelegateSignature
	 */
	struct UWBP_RadialMenuBase_C_ExitedDeadzone__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.EnteredDeadzone__DelegateSignature
	 */
	struct UWBP_RadialMenuBase_C_EnteredDeadzone__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_RadialMenuBase.WBP_RadialMenuBase_C.SelectionChanged__DelegateSignature
	 */
	struct UWBP_RadialMenuBase_C_SelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewSelection;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OldSelection;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
