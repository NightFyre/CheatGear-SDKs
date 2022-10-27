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
	 * Function ShieldAug_Aesclepius.ShieldAug_Aesclepius_C.K2_TriggerEffect
	 */
	struct UShieldAug_Aesclepius_C_K2_TriggerEffect_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
		struct FAugmentData                                        StackData;                                               // 0x0020(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ShieldAug_Aesclepius.ShieldAug_Aesclepius_C.K2_UntriggerEffect
	 */
	struct UShieldAug_Aesclepius_C_K2_UntriggerEffect_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameResourcePoolReference                          ResourcePool;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
		struct FAugmentData                                        StackData;                                               // 0x0020(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ShieldAug_Aesclepius.ShieldAug_Aesclepius_C.K2_OnDamageTaken
	 */
	struct UShieldAug_Aesclepius_C_K2_OnDamageTaken_Params
	{
	public:
		class AShield*                                             Shield;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAugmentData                                        StackData;                                               // 0x0008(0x0030)  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_56DK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0048(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0050(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0068(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
