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
	 * Function Menu_01.Menu_01_C.UpdateDroneVisual
	 */
	struct AMenu_01_C_UpdateDroneVisual_Params
	{	};

	/**
	 * Function Menu_01.Menu_01_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
	 */
	struct AMenu_01_C_InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_01.Menu_01_C.ReceiveTick
	 */
	struct AMenu_01_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_01.Menu_01_C.ReceiveBeginPlay
	 */
	struct AMenu_01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_01.Menu_01_C.ExecuteUbergraph_Menu_01
	 */
	struct AMenu_01_C_ExecuteUbergraph_Menu_01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TUXJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
