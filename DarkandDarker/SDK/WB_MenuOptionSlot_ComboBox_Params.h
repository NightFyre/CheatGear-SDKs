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
	 * Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.Construct
	 */
	struct UWB_MenuOptionSlot_ComboBox_C_Construct_Params
	{	};

	/**
	 * Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.OnSelectedChanged
	 */
	struct UWB_MenuOptionSlot_ComboBox_C_OnSelectedChanged_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_MenuOptionSlot_ComboBox.WB_MenuOptionSlot_ComboBox_C.ExecuteUbergraph_WB_MenuOptionSlot_ComboBox
	 */
	struct UWB_MenuOptionSlot_ComboBox_C_ExecuteUbergraph_WB_MenuOptionSlot_ComboBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z3TM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
