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
	 * Function OakAbility_Operative_ClassMod_Unique_01.OakAbility_Operative_ClassMod_Unique_01_C.OnActivated
	 */
	struct UOakAbility_Operative_ClassMod_Unique_01_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_01.OakAbility_Operative_ClassMod_Unique_01_C.OnActionSkillActivated
	 */
	struct UOakAbility_Operative_ClassMod_Unique_01_C_OnActionSkillActivated_Params
	{
	public:
		class UOakActionAbility*                                   ActionAbility;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Operative_ClassMod_Unique_01.OakAbility_Operative_ClassMod_Unique_01_C.ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_01
	 */
	struct UOakAbility_Operative_ClassMod_Unique_01_C_ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IJ7A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
