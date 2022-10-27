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
	 * Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnMouseButtonDoubleClick
	 */
	struct UWBP_HDRadialMenuBase_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnKeyDown
	 */
	struct UWBP_HDRadialMenuBase_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnMouseButtonDown
	 */
	struct UWBP_HDRadialMenuBase_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.Submit
	 */
	struct UWBP_HDRadialMenuBase_C_Submit_Params
	{	};

	/**
	 * Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.GoBack
	 */
	struct UWBP_HDRadialMenuBase_C_GoBack_Params
	{	};

	/**
	 * Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.ExecuteUbergraph_WBP_HDRadialMenuBase
	 */
	struct UWBP_HDRadialMenuBase_C_ExecuteUbergraph_WBP_HDRadialMenuBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.Cancel__DelegateSignature
	 */
	struct UWBP_HDRadialMenuBase_C_Cancel__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.SubmenuCommit__DelegateSignature
	 */
	struct UWBP_HDRadialMenuBase_C_SubmenuCommit__DelegateSignature_Params
	{
	public:
		class FName                                                Category;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SubItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
