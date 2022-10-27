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
	 * Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats
	 */
	struct UUI_GameEventParticipantInfoCardWidget_C_UpdateStats_Params
	{
	public:
		class APrisoner*                                           Prisoner;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
	 */
	struct UUI_GameEventParticipantInfoCardWidget_C_ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OD73[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
