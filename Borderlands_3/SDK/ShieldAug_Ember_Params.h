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
	 * Function ShieldAug_Ember.ShieldAug_Ember_C.K2_NativeDelayCallback
	 */
	struct UShieldAug_Ember_C_K2_NativeDelayCallback_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAugmentData                                        StackData;                                               // 0x0008(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
		class FName                                                DelayName;                                               // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShieldAug_Ember.ShieldAug_Ember_C.K2_OnShieldBeginPlay
	 */
	struct UShieldAug_Ember_C_K2_OnShieldBeginPlay_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAugmentData                                        StackData;                                               // 0x0008(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
