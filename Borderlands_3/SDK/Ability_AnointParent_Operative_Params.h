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
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeIsActionAbilityActive
	 */
	struct UAbility_AnointParent_Operative_C_AnointOperativeIsActionAbilityActive_Params
	{
	public:
		class UClass*                                              ActionSkill;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CXXW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeActionSkillEnd
	 */
	struct UAbility_AnointParent_Operative_C_AnointOperativeActionSkillEnd_Params
	{
	public:
		EOperativeGadgets                                          ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeActionSkillStart
	 */
	struct UAbility_AnointParent_Operative_C_AnointOperativeActionSkillStart_Params
	{
	public:
		EOperativeGadgets                                          ActionSkill;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneSwappedPlaces
	 */
	struct UAbility_AnointParent_Operative_C_AnointCloneSwappedPlaces_Params
	{	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCannonActivated
	 */
	struct UAbility_AnointParent_Operative_C_AnointCannonActivated_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointSNTRYEnded
	 */
	struct UAbility_AnointParent_Operative_C_AnointSNTRYEnded_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointSNTRYStarted
	 */
	struct UAbility_AnointParent_Operative_C_AnointSNTRYStarted_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneEnded
	 */
	struct UAbility_AnointParent_Operative_C_AnointCloneEnded_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneStarted
	 */
	struct UAbility_AnointParent_Operative_C_AnointCloneStarted_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointBarrierEnded
	 */
	struct UAbility_AnointParent_Operative_C_AnointBarrierEnded_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointBarrierStart
	 */
	struct UAbility_AnointParent_Operative_C_AnointBarrierStart_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.OnActivated
	 */
	struct UAbility_AnointParent_Operative_C_OnActivated_Params
	{	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.BindOperativeEvents
	 */
	struct UAbility_AnointParent_Operative_C_BindOperativeEvents_Params
	{	};

	/**
	 * Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.ExecuteUbergraph_Ability_AnointParent_Operative
	 */
	struct UAbility_AnointParent_Operative_C_ExecuteUbergraph_Ability_AnointParent_Operative_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I22C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
