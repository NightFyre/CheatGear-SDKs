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
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.OnKeyUp
	 */
	struct UBP_MP_PlaylistTypeColumn_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.SetHoverStyle
	 */
	struct UBP_MP_PlaylistTypeColumn_C_SetHoverStyle_Params
	{
	public:
		bool                                                       bNowHovering;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.ApplyData
	 */
	struct UBP_MP_PlaylistTypeColumn_C_ApplyData_Params
	{	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.PreConstruct
	 */
	struct UBP_MP_PlaylistTypeColumn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.Construct
	 */
	struct UBP_MP_PlaylistTypeColumn_C_Construct_Params
	{	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_MP_PlaylistTypeColumn_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.OnMouseEnter
	 */
	struct UBP_MP_PlaylistTypeColumn_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.OnMouseLeave
	 */
	struct UBP_MP_PlaylistTypeColumn_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.OnAddedToFocusPath
	 */
	struct UBP_MP_PlaylistTypeColumn_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.OnRemovedFromFocusPath
	 */
	struct UBP_MP_PlaylistTypeColumn_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.ExecuteUbergraph_BP_MP_PlaylistTypeColumn
	 */
	struct UBP_MP_PlaylistTypeColumn_C_ExecuteUbergraph_BP_MP_PlaylistTypeColumn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MP_PlaylistTypeColumn.BP_MP_PlaylistTypeColumn_C.OnPressed__DelegateSignature
	 */
	struct UBP_MP_PlaylistTypeColumn_C_OnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
