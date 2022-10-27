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
	 * Function UI_CriminalRecordText.UI_CriminalRecordText_C.SetValue
	 */
	struct UUI_CriminalRecordText_C_SetValue_Params
	{
	public:
		class FText                                                Value;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_CriminalRecordText.UI_CriminalRecordText_C.OnSynchronizeProperties
	 */
	struct UUI_CriminalRecordText_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function UI_CriminalRecordText.UI_CriminalRecordText_C.ExecuteUbergraph_UI_CriminalRecordText
	 */
	struct UUI_CriminalRecordText_C_ExecuteUbergraph_UI_CriminalRecordText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_URXY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
