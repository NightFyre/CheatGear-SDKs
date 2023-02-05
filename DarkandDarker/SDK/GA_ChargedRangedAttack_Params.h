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
	 * Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.OnSuccess_1109563B47783EC02F381C99DD38D5C5
	 */
	struct UGA_ChargedRangedAttack_C_OnSuccess_1109563B47783EC02F381C99DD38D5C5_Params
	{
	public:
		class AActor*                                              ProjectileActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.CreateMultiShotProjectiles
	 */
	struct UGA_ChargedRangedAttack_C_CreateMultiShotProjectiles_Params
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      FirePower;                                               // 0x00B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6ZDI[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             StartLocation;                                           // 0x00C0(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_ChargedRangedAttack.GA_ChargedRangedAttack_C.ExecuteUbergraph_GA_ChargedRangedAttack
	 */
	struct UGA_ChargedRangedAttack_C_ExecuteUbergraph_GA_ChargedRangedAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
