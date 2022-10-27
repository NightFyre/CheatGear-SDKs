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
	 * Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.ReceiveBeginPlay
	 */
	struct ABP_Explosion_MK13_Stun_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.StunLocalPlayer
	 */
	struct ABP_Explosion_MK13_Stun_C_StunLocalPlayer_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.FindAICharacters
	 */
	struct ABP_Explosion_MK13_Stun_C_FindAICharacters_Params
	{	};

	/**
	 * Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.CheckCharacter
	 */
	struct ABP_Explosion_MK13_Stun_C_CheckCharacter_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.StunCharacter
	 */
	struct ABP_Explosion_MK13_Stun_C_StunCharacter_Params
	{
	public:
		class AGBCharacter*                                        Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TraceStart;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TraceEnd;                                                // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.LightFlash
	 */
	struct ABP_Explosion_MK13_Stun_C_LightFlash_Params
	{	};

	/**
	 * Function BP_Explosion_MK13_Stun.BP_Explosion_MK13_Stun_C.ExecuteUbergraph_BP_Explosion_MK13_Stun
	 */
	struct ABP_Explosion_MK13_Stun_C_ExecuteUbergraph_BP_Explosion_MK13_Stun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9VQ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
