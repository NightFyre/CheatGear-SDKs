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
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.UpdateFireSupportTimerVisibility
	 */
	struct UBP_RadialMenuFireSupport_C_UpdateFireSupportTimerVisibility_Params
	{
	public:
		bool                                                       bNewOnCooldown;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.OnKeyDown
	 */
	struct UBP_RadialMenuFireSupport_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.SetupFireSupportRadial
	 */
	struct UBP_RadialMenuFireSupport_C_SetupFireSupportRadial_Params
	{	};

	/**
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.Construct
	 */
	struct UBP_RadialMenuFireSupport_C_Construct_Params
	{	};

	/**
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.Tick
	 */
	struct UBP_RadialMenuFireSupport_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.OnTeamChanged
	 */
	struct UBP_RadialMenuFireSupport_C_OnTeamChanged_Params
	{
	public:
		unsigned char                                              TeamId;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_12UR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATeamInfo*                                           TeamInfo;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.BndEvt__RadialMenu_K2Node_ComponentBoundEvent_0_OnSendCommand__DelegateSignature
	 */
	struct UBP_RadialMenuFireSupport_C_BndEvt__RadialMenu_K2Node_ComponentBoundEvent_0_OnSendCommand__DelegateSignature_Params
	{
	public:
		ERadialMenuDirection                                       Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.UpdatePersonalCooldown
	 */
	struct UBP_RadialMenuFireSupport_C_UpdatePersonalCooldown_Params
	{	};

	/**
	 * Function BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C.ExecuteUbergraph_BP_RadialMenuFireSupport
	 */
	struct UBP_RadialMenuFireSupport_C_ExecuteUbergraph_BP_RadialMenuFireSupport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7K5Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
