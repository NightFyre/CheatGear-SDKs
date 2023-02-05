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
	 * Function GA_Looting.GA_Looting_C.GetMaximumDistance
	 */
	struct UGA_Looting_C_GetMaximumDistance_Params
	{
	public:
		double                                                     HitResultDistance;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MaximumDistance;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Looting.GA_Looting_C.OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B
	 */
	struct UGA_Looting_C_OnDirectionChanged_8612F3F6419CAA8FDE79C7BC68BCA52B_Params
	{	};

	/**
	 * Function GA_Looting.GA_Looting_C.OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D
	 */
	struct UGA_Looting_C_OnDistanceChange_EB1E959F469D1BDF00923DAC43E68B6D_Params
	{	};

	/**
	 * Function GA_Looting.GA_Looting_C.OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B
	 */
	struct UGA_Looting_C_OnDistanceChange_FD7D3E9F4BED7CD5EDE79ABC64F9FA5B_Params
	{	};

	/**
	 * Function GA_Looting.GA_Looting_C.OnMessageReceived_C9EDF2A24F16AB6F39F2F4B20E71AE8C
	 */
	struct UGA_Looting_C_OnMessageReceived_C9EDF2A24F16AB6F39F2F4B20E71AE8C_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Looting.GA_Looting_C.K2_ActivateAbilityFromEvent
	 */
	struct UGA_Looting_C_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Looting.GA_Looting_C.K2_OnEndAbility
	 */
	struct UGA_Looting_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Looting.GA_Looting_C.OnFMsgRemoveLootTarget
	 */
	struct UGA_Looting_C_OnFMsgRemoveLootTarget_Params
	{
	public:
		struct FMsgRemoveLootTarget                                Msg;                                                     // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function GA_Looting.GA_Looting_C.ExecuteUbergraph_GA_Looting
	 */
	struct UGA_Looting_C_ExecuteUbergraph_GA_Looting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5AIK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
