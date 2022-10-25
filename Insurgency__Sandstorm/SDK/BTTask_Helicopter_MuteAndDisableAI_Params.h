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
	 * Function BTTask_Helicopter_MuteAndDisableAI.BTTask_Helicopter_MuteAndDisableAI_C.ReceiveExecuteAI
	 */
	struct UBTTask_Helicopter_MuteAndDisableAI_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       bpp__OwnerController__pf;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               bpp__ControlledPawn__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
