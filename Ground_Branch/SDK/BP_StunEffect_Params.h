#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_StunEffect.BP_StunEffect_C.AddStunAlpha
	 */
	struct ABP_StunEffect_C_AddStunAlpha_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StunEffect.BP_StunEffect_C.ReceiveBeginPlay
	 */
	struct ABP_StunEffect_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_StunEffect.BP_StunEffect_C.ReceiveTick
	 */
	struct ABP_StunEffect_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StunEffect.BP_StunEffect_C.ReceiveEndPlay
	 */
	struct ABP_StunEffect_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StunEffect.BP_StunEffect_C.CharacterPlayDying_Event_1
	 */
	struct ABP_StunEffect_C_CharacterPlayDying_Event_1_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StunEffect.BP_StunEffect_C.CheckForMissingAssets
	 */
	struct ABP_StunEffect_C_CheckForMissingAssets_Params
	{	};

	/**
	 * Function BP_StunEffect.BP_StunEffect_C.ExecuteUbergraph_BP_StunEffect
	 */
	struct ABP_StunEffect_C_ExecuteUbergraph_BP_StunEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
