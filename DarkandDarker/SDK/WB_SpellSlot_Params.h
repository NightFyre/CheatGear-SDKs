#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function WB_SpellSlot.WB_SpellSlot_C.Get Tool Tip Widget
	 */
	struct UWB_SpellSlot_C_GetToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.OnSetSpellArtData
	 */
	struct UWB_SpellSlot_C_OnSetSpellArtData_Params
	{
	public:
		class UArtDataSpell*                                       InArtSpellData;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.Construct
	 */
	struct UWB_SpellSlot_C_Construct_Params
	{	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.OnReset
	 */
	struct UWB_SpellSlot_C_OnReset_Params
	{	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.BndEvt__WB_SpellSlot_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_SpellSlot_C_BndEvt__WB_SpellSlot_Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.BndEvt__WB_SpellSlot_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWB_SpellSlot_C_BndEvt__WB_SpellSlot_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.BndEvt__WB_SpellSlot_Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWB_SpellSlot_C_BndEvt__WB_SpellSlot_Button_0_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.BndEvt__WB_SpellSlot_Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWB_SpellSlot_C_BndEvt__WB_SpellSlot_Button_0_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.OnPress
	 */
	struct UWB_SpellSlot_C_OnPress_Params
	{	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.OnRelease
	 */
	struct UWB_SpellSlot_C_OnRelease_Params
	{	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.OnSpellDataChanged
	 */
	struct UWB_SpellSlot_C_OnSpellDataChanged_Params
	{
	public:
		struct FSpellData                                          InSpellData;                                             // 0x0000(0x002C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_TPG4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDesignDataSpell                                    InDesignDataSpell;                                       // 0x0030(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WB_SpellSlot.WB_SpellSlot_C.ExecuteUbergraph_WB_SpellSlot
	 */
	struct UWB_SpellSlot_C_ExecuteUbergraph_WB_SpellSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
