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
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.FirePetSummonStarted
	 */
	struct UA_Beastmaster_Enrage_Base_C_FirePetSummonStarted_Params
	{	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetEnrageRiftActorClass
	 */
	struct UA_Beastmaster_Enrage_Base_C_GetEnrageRiftActorClass_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.InitRegisterProperties
	 */
	struct UA_Beastmaster_Enrage_Base_C_InitRegisterProperties_Params
	{	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetPetSpawnLoc
	 */
	struct UA_Beastmaster_Enrage_Base_C_GetPetSpawnLoc_Params
	{
	public:
		struct FVector                                             res;                                                     // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.GetOwnerPet
	 */
	struct UA_Beastmaster_Enrage_Base_C_GetOwnerPet_Params
	{
	public:
		class AOakCharacter*                                       res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.DoPreTeleportEffects
	 */
	struct UA_Beastmaster_Enrage_Base_C_DoPreTeleportEffects_Params
	{	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Skill
	 */
	struct UA_Beastmaster_Enrage_Base_C_Notify_Skill_Params
	{	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_SkillEnd
	 */
	struct UA_Beastmaster_Enrage_Base_C_Notify_SkillEnd_Params
	{	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnBegin
	 */
	struct UA_Beastmaster_Enrage_Base_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.OnEnd
	 */
	struct UA_Beastmaster_Enrage_Base_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QP7W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_Rumble
	 */
	struct UA_Beastmaster_Enrage_Base_C_Notify_Rumble_Params
	{	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_Pitch
	 */
	struct UA_Beastmaster_Enrage_Base_C_Notify_CS_Pitch_Params
	{	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.Notify_CS_FoV
	 */
	struct UA_Beastmaster_Enrage_Base_C_Notify_CS_FoV_Params
	{	};

	/**
	 * Function A_Beastmaster_Enrage_Base.A_Beastmaster_Enrage_Base_C.ExecuteUbergraph_A_Beastmaster_Enrage_Base
	 */
	struct UA_Beastmaster_Enrage_Base_C_ExecuteUbergraph_A_Beastmaster_Enrage_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
