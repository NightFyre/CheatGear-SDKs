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
	 * Function BP_KeyInputPrompt.BP_KeyInputPrompt_C.OnMouseButtonDown
	 */
	struct UBP_KeyInputPrompt_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KeyInputPrompt.BP_KeyInputPrompt_C.BindKey
	 */
	struct UBP_KeyInputPrompt_C_BindKey_Params
	{
	public:
		struct FKey                                                NewKey;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyInputPrompt.BP_KeyInputPrompt_C.OnMouseWheel
	 */
	struct UBP_KeyInputPrompt_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KeyInputPrompt.BP_KeyInputPrompt_C.OnKeyDown
	 */
	struct UBP_KeyInputPrompt_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KeyInputPrompt.BP_KeyInputPrompt_C.Construct
	 */
	struct UBP_KeyInputPrompt_C_Construct_Params
	{	};

	/**
	 * Function BP_KeyInputPrompt.BP_KeyInputPrompt_C.OnBindingCanceled
	 */
	struct UBP_KeyInputPrompt_C_OnBindingCanceled_Params
	{	};

	/**
	 * Function BP_KeyInputPrompt.BP_KeyInputPrompt_C.ExecuteUbergraph_BP_KeyInputPrompt
	 */
	struct UBP_KeyInputPrompt_C_ExecuteUbergraph_BP_KeyInputPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KeyInputPrompt.BP_KeyInputPrompt_C.OnKeyBind__DelegateSignature
	 */
	struct UBP_KeyInputPrompt_C_OnKeyBind__DelegateSignature_Params
	{
	public:
		class FName                                                Action;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
