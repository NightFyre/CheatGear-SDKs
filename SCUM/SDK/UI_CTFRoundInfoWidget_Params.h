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
	 * Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus
	 */
	struct UUI_CTFRoundInfoWidget_C_GetRoundStatus_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility
	 */
	struct UUI_CTFRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText
	 */
	struct UUI_CTFRoundInfoWidget_C_GetTimeLeftDescriptionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText
	 */
	struct UUI_CTFRoundInfoWidget_C_GetTimeLeftText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent
	 */
	struct UUI_CTFRoundInfoWidget_C_SetGameEvent_Params
	{
	public:
		class AGameEventBase*                                      gameEvent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget
	 */
	struct UUI_CTFRoundInfoWidget_C_ExecuteUbergraph_UI_CTFRoundInfoWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KLIS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
