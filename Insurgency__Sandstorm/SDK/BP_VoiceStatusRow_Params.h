#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_VoiceStatusRow.BP_VoiceStatusRow_C.UpdateVoiceIcon
	 */
	struct UBP_VoiceStatusRow_C_UpdateVoiceIcon_Params
	{
	public:
		bool                                                       IsLocal;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_VoiceStatusRow.BP_VoiceStatusRow_C.UpdateBackgroundColor
	 */
	struct UBP_VoiceStatusRow_C_UpdateBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        NewColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
