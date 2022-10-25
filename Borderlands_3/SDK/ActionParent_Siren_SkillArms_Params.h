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
	 * Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeOutArms
	 */
	struct UActionParent_Siren_SkillArms_C_AnimNotify_FadeOutArms_Params
	{	};

	/**
	 * Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeInArms
	 */
	struct UActionParent_Siren_SkillArms_C_AnimNotify_FadeInArms_Params
	{	};

	/**
	 * Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.OnBegin
	 */
	struct UActionParent_Siren_SkillArms_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.ExecuteUbergraph_ActionParent_Siren_SkillArms
	 */
	struct UActionParent_Siren_SkillArms_C_ExecuteUbergraph_ActionParent_Siren_SkillArms_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZYU9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
