#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnBarrierEnd
	 */
	struct UShieldAug_ReCharger_C_K2_OnBarrierEnd_Params
	{
	public:
		class AActor*                                              BarrierActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShield*                                             Shield;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAugmentData                                        StackData;                                               // 0x0010(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.RestoreShield
	 */
	struct UShieldAug_ReCharger_C_RestoreShield_Params
	{
	public:
		class AOakCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnShieldUnequipped
	 */
	struct UShieldAug_ReCharger_C_K2_OnShieldUnequipped_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakCharacter*                                       Equipper;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAugmentData                                        StackData;                                               // 0x0010(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_NativeDelayCallback
	 */
	struct UShieldAug_ReCharger_C_K2_NativeDelayCallback_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAugmentData                                        StackData;                                               // 0x0008(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
		class FName                                                DelayName;                                               // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShieldAug_ReCharger.ShieldAug_ReCharger_C.K2_OnShieldDepleted
	 */
	struct UShieldAug_ReCharger_C_K2_OnShieldDepleted_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
		struct FAugmentData                                        StackData;                                               // 0x0020(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
