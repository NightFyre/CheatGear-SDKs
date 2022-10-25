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
	 * Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.OnActivated
	 */
	struct UOakAbility_Siren_ClassMod_Unique_01_C_OnActivated_Params
	{	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.SirenUnique01_GraspedTarget
	 */
	struct UOakAbility_Siren_ClassMod_Unique_01_C_SirenUnique01_GraspedTarget_Params
	{
	public:
		class AGbxCharacter*                                       GraspedTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OakAbility_Siren_ClassMod_Unique_01.OakAbility_Siren_ClassMod_Unique_01_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01
	 */
	struct UOakAbility_Siren_ClassMod_Unique_01_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Unique_01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
