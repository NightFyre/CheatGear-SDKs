#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_KeyBinding.UI_KeyBinding_C.Unbind Key
	 */
	struct UUI_KeyBinding_C_Unbind_Key_Params
	{	};

	/**
	 * Function UI_KeyBinding.UI_KeyBinding_C.BindKey
	 */
	struct UUI_KeyBinding_C_BindKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1
	 */
	struct UUI_KeyBinding_C_OnMouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_KeyBinding.UI_KeyBinding_C.Init
	 */
	struct UUI_KeyBinding_C_Init_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       Shift;                                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ctrl;                                                    // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Alt;                                                     // 0x001A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties
	 */
	struct UUI_KeyBinding_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected
	 */
	struct UUI_KeyBinding_C_OnDeselected_Params
	{	};

	/**
	 * Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding
	 */
	struct UUI_KeyBinding_C_ExecuteUbergraph_UI_KeyBinding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VO3J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature
	 */
	struct UUI_KeyBinding_C_OnRebindInitiated__DelegateSignature_Params
	{
	public:
		class UUI_KeyBinding_C*                                    keyBindingWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature
	 */
	struct UUI_KeyBinding_C_KeyPressed__DelegateSignature_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                actionKey;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
