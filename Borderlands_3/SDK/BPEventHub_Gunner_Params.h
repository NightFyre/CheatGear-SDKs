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
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Ended__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_IronBear_AutoBear_Ended__DelegateSignature_Params
	{
	public:
		bool                                                       HasValidChargeTarget;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3OUE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ChargeTarget;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Started__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_IronBear_AutoBear_Started__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Emptied__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_IronBear_DakkaTurret_Emptied__DelegateSignature_Params
	{
	public:
		class AActor*                                              ExitingActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Entered__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_IronBear_DakkaTurret_Entered__DelegateSignature_Params
	{
	public:
		class AActor*                                              EnteredActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_StartRecharge__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_IronBear_BubbleShield_StartRecharge__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_Depleted__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_IronBear_BubbleShield_Depleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_GundamBear_Used__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_IronBear_GundamBear_Used__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_Start__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_SkillEvent_BronzeAgeRage_Start__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_End__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_SkillEvent_BronzeAgeRage_End__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_Capacitation__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_SkillEvent_Capacitation__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_HighVoltage__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_SkillEvent_HighVoltage__DelegateSignature_Params
	{
	public:
		class AActor*                                              Enemy;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_IronScience__DelegateSignature
	 */
	struct UBPEventHub_Gunner_C_SkillEvent_IronScience__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
