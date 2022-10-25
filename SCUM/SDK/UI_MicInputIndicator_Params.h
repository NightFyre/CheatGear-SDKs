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
	 * Function UI_MicInputIndicator.UI_MicInputIndicator_C.GetMicVisibility
	 */
	struct UUI_MicInputIndicator_C_GetMicVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNJV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MicInputIndicator.UI_MicInputIndicator_C.UpdateVoiceChat
	 */
	struct UUI_MicInputIndicator_C_UpdateVoiceChat_Params
	{	};

	/**
	 * Function UI_MicInputIndicator.UI_MicInputIndicator_C.Tick
	 */
	struct UUI_MicInputIndicator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MicInputIndicator.UI_MicInputIndicator_C.Construct
	 */
	struct UUI_MicInputIndicator_C_Construct_Params
	{	};

	/**
	 * Function UI_MicInputIndicator.UI_MicInputIndicator_C.ExecuteUbergraph_UI_MicInputIndicator
	 */
	struct UUI_MicInputIndicator_C_ExecuteUbergraph_UI_MicInputIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
