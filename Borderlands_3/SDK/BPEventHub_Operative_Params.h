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
	 * Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSetDroneManualTarget__DelegateSignature
	 */
	struct UBPEventHub_Operative_C_SkillEvent_OperativeSetDroneManualTarget__DelegateSignature_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeUsedBarrier__DelegateSignature
	 */
	struct UBPEventHub_Operative_C_SkillEvent_OperativeUsedBarrier__DelegateSignature_Params
	{
	public:
		bool                                                       PickedUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSwappedPlaces__DelegateSignature
	 */
	struct UBPEventHub_Operative_C_SkillEvent_OperativeSwappedPlaces__DelegateSignature_Params
	{	};

	/**
	 * Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillEnded__DelegateSignature
	 */
	struct UBPEventHub_Operative_C_SkillEvent_OperativeActionSkillEnded__DelegateSignature_Params
	{
	public:
		EOperativeGadgets                                          ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeGadgetModActivated__DelegateSignature
	 */
	struct UBPEventHub_Operative_C_SkillEvent_OperativeGadgetModActivated__DelegateSignature_Params
	{
	public:
		EOperativeGadgetAugments                                   ActionSkillMod;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillActivated__DelegateSignature
	 */
	struct UBPEventHub_Operative_C_SkillEvent_OperativeActionSkillActivated__DelegateSignature_Params
	{
	public:
		EOperativeGadgets                                          ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPEventHub_Operative.BPEventHub_Operative_C.OnSeeingRedActivated__DelegateSignature
	 */
	struct UBPEventHub_Operative_C_OnSeeingRedActivated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
