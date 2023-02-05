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
	 * Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.ScriptLoad
	 */
	struct UWB_CharacterStatusTooltipBase_C_ScriptLoad_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ResultText;                                              // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetStatusValueText2
	 */
	struct UWB_CharacterStatusTooltipBase_C_GetStatusValueText2_Params
	{
	public:
		class UTextBlock*                                          TextValue2;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetTooltipWidget
	 */
	struct UWB_CharacterStatusTooltipBase_C_GetTooltipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.GetStatusValueText1
	 */
	struct UWB_CharacterStatusTooltipBase_C_GetStatusValueText1_Params
	{
	public:
		class UTextBlock*                                          TextValue1;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.Construct
	 */
	struct UWB_CharacterStatusTooltipBase_C_Construct_Params
	{	};

	/**
	 * Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.커스텀이벤트_1
	 */
	struct UWB_CharacterStatusTooltipBase_C__1_Params
	{
	public:
		class UObject*                                             InObjectLoaded;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.PreConstruct
	 */
	struct UWB_CharacterStatusTooltipBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_CharacterStatusTooltipBase.WB_CharacterStatusTooltipBase_C.ExecuteUbergraph_WB_CharacterStatusTooltipBase
	 */
	struct UWB_CharacterStatusTooltipBase_C_ExecuteUbergraph_WB_CharacterStatusTooltipBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
