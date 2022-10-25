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
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate
	 */
	struct UUI_CriminalRecord_C_InitFromCharacterTemplate_Params
	{
	public:
		struct FCharacterTemplate                                  Template;                                                // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills
	 */
	struct UUI_CriminalRecord_C_ClearSkills_Params
	{	};

	/**
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute
	 */
	struct UUI_CriminalRecord_C_ChangeAttribute_Params
	{
	public:
		ESkillAttribute                                            Attribute;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BBX8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill
	 */
	struct UUI_CriminalRecord_C_AddSkill_Params
	{
	public:
		struct FSkillTemplate                                      SkillTemplate;                                           // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UUI_CriminalRecord_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
	 */
	struct UUI_CriminalRecord_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord
	 */
	struct UUI_CriminalRecord_C_ExecuteUbergraph_UI_CriminalRecord_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature
	 */
	struct UUI_CriminalRecord_C_OnCancelClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature
	 */
	struct UUI_CriminalRecord_C_OnOkClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
