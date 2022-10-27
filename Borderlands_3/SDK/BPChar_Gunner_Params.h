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
	 * Function BPChar_Gunner.BPChar_Gunner_C.GetPrimaryActionAbility
	 */
	struct ABPChar_Gunner_C_GetPrimaryActionAbility_Params
	{
	public:
		class UOakActionAbility*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Gunner.BPChar_Gunner_C.GetHeadMesh
	 */
	struct ABPChar_Gunner_C_GetHeadMesh_Params
	{
	public:
		class USkeletalMesh*                                       HeadMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Gunner.BPChar_Gunner_C.UserConstructionScript
	 */
	struct ABPChar_Gunner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerDeviceVisible
	 */
	struct ABPChar_Gunner_C_SetGunnerDeviceVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerHologramVisible
	 */
	struct ABPChar_Gunner_C_SetGunnerHologramVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Gunner.BPChar_Gunner_C.SetGunnerHologramTemplate
	 */
	struct ABPChar_Gunner_C_SetGunnerHologramTemplate_Params
	{
	public:
		class UParticleSystem*                                     Template;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Gunner.BPChar_Gunner_C.ExecuteUbergraph_BPChar_Gunner
	 */
	struct ABPChar_Gunner_C_ExecuteUbergraph_BPChar_Gunner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
