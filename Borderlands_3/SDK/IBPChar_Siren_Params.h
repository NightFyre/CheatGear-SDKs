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
	 * Function IBPChar_Siren.IBPChar_Siren_C.GetSoulSapProjectile
	 */
	struct UIBPChar_Siren_C_GetSoulSapProjectile_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.GetStillnessOfMindControlledMove
	 */
	struct UIBPChar_Siren_C_GetStillnessOfMindControlledMove_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.SirenHasAscendantSkill
	 */
	struct UIBPChar_Siren_C_SirenHasAscendantSkill_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.GetSirenGhostArmsComponent
	 */
	struct UIBPChar_Siren_C_GetSirenGhostArmsComponent_Params
	{
	public:
		class UGbxSkeletalMeshComponent*                           rd_Person_Mesh;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxSkeletalMeshComponent*                           st_Person_Mesh;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.SetArmsElement
	 */
	struct UIBPChar_Siren_C_SetArmsElement_Params
	{
	public:
		EPhaseTranceElementalType                                  Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.PlayTattooFade
	 */
	struct UIBPChar_Siren_C_PlayTattooFade_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.SetArmsMaterial
	 */
	struct UIBPChar_Siren_C_SetArmsMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.Play3rdPersonArmFade
	 */
	struct UIBPChar_Siren_C_Play3rdPersonArmFade_Params
	{
	public:
		bool                                                       bInstant;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bVisible;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseCastProjectileComponents
	 */
	struct UIBPChar_Siren_C_GetPhaseCastProjectileComponents_Params
	{
	public:
		class USkeletalMeshComponent*                              Body;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxSkeletalMeshComponent*                           Head;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              GhostArms;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.GetSirenArmsReference
	 */
	struct UIBPChar_Siren_C_GetSirenArmsReference_Params
	{
	public:
		class UGbxSkeletalMeshComponent*                           Skel_Mesh_rd;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxSkeletalMeshComponent*                           Skel_Mesh_st;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseTranceAbility
	 */
	struct UIBPChar_Siren_C_GetPhaseTranceAbility_Params
	{
	public:
		class UOakActionAbility_PhaseTrance*                       res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
