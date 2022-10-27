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
	 * Function UI_KillNotification.UI_KillNotification_C.SetMessage
	 */
	struct UUI_KillNotification_C_SetMessage_Params
	{
	public:
		class FText                                                prefix;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                characterName;                                           // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                suffix;                                                  // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility
	 */
	struct UUI_KillNotification_C_GetMessageVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KillNotification.UI_KillNotification_C.Construct
	 */
	struct UUI_KillNotification_C_Construct_Params
	{	};

	/**
	 * Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification
	 */
	struct UUI_KillNotification_C_ExecuteUbergraph_UI_KillNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
