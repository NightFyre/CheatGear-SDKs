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
	 * Function GA_Crouch.GA_Crouch_C.EventReceived_F8111BF74E13C0F203A0A2A357F51B3A
	 */
	struct UGA_Crouch_C_EventReceived_F8111BF74E13C0F203A0A2A357F51B3A_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Crouch.GA_Crouch_C.OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB
	 */
	struct UGA_Crouch_C_OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB_Params
	{	};

	/**
	 * Function GA_Crouch.GA_Crouch_C.OnChange_1B5403AA43F34E6E271364B87A6DC3AC
	 */
	struct UGA_Crouch_C_OnChange_1B5403AA43F34E6E271364B87A6DC3AC_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Crouch.GA_Crouch_C.K2_ActivateAbility
	 */
	struct UGA_Crouch_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Crouch.GA_Crouch_C.ExecuteUbergraph_GA_Crouch
	 */
	struct UGA_Crouch_C_ExecuteUbergraph_GA_Crouch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
