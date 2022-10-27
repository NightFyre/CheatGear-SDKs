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
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.CanActivateTrapCard
	 */
	struct UInterface_Operative_Character_C_CanActivateTrapCard_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.SetOperativeDeviceVisible
	 */
	struct UInterface_Operative_Character_C_SetOperativeDeviceVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.GetBarrierActionAbility
	 */
	struct UInterface_Operative_Character_C_GetBarrierActionAbility_Params
	{
	public:
		class UOakActionAbility_Barrier*                           res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeStatusEffectOverrides
	 */
	struct UInterface_Operative_Character_C_GetOperativeStatusEffectOverrides_Params
	{
	public:
		struct FCauseDamageStatusEffectOverrides                   Overrides;                                               // 0x0000(0x001C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigiCloneShieldRemainingPercent
	 */
	struct UInterface_Operative_Character_C_GetDigiCloneShieldRemainingPercent_Params
	{
	public:
		float                                                      ShieldPercentRemaining;                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeShieldRemainingPercent
	 */
	struct UInterface_Operative_Character_C_GetOperativeShieldRemainingPercent_Params
	{
	public:
		float                                                      ShieldPercentRemaining;                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.GetGRMLNActionAbility
	 */
	struct UInterface_Operative_Character_C_GetGRMLNActionAbility_Params
	{
	public:
		class UOakActionAbility_GRMLN*                             res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigicloneActionAbility
	 */
	struct UInterface_Operative_Character_C_GetDigicloneActionAbility_Params
	{
	public:
		class UOakActionAbility_Digiclone*                         res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.SpawnAndThrowOperativeGrenade
	 */
	struct UInterface_Operative_Character_C_SpawnAndThrowOperativeGrenade_Params
	{
	public:
		class AActor*                                              SpawnFromActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SpawnFromSocket;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IIMC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Grenade;                                                 // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.DoOperativeCryoNovaAtLocation
	 */
	struct UInterface_Operative_Character_C_DoOperativeCryoNovaAtLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.BlockOperativeActionSkillActivation
	 */
	struct UInterface_Operative_Character_C_BlockOperativeActionSkillActivation_Params
	{
	public:
		bool                                                       ShouldBlock;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.GetDroneSpawnLocation
	 */
	struct UInterface_Operative_Character_C_GetDroneSpawnLocation_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.HideOperativeDroneSpawnAnimation
	 */
	struct UInterface_Operative_Character_C_HideOperativeDroneSpawnAnimation_Params
	{	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.PlayerOperativeDroneSpawnAnimation
	 */
	struct UInterface_Operative_Character_C_PlayerOperativeDroneSpawnAnimation_Params
	{	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials TP Gun
	 */
	struct UInterface_Operative_Character_C_Get_Materials_TP_Gun_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials FP Gun
	 */
	struct UInterface_Operative_Character_C_Get_Materials_FP_Gun_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Skeletal Mesh
	 */
	struct UInterface_Operative_Character_C_Get_Materials_Skeletal_Mesh_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Legs
	 */
	struct UInterface_Operative_Character_C_Get_Materials_Legs_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Arms
	 */
	struct UInterface_Operative_Character_C_Get_Materials_Arms_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Head
	 */
	struct UInterface_Operative_Character_C_Get_Materials_Head_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh
	 */
	struct UInterface_Operative_Character_C_Get_Skeletal_Mesh_Params
	{
	public:
		class USkeletalMeshComponent*                              Skeletal_Mesh;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Legs
	 */
	struct UInterface_Operative_Character_C_Get_Skeletal_Mesh_Legs_Params
	{
	public:
		class UGbxSkeletalMeshComponent*                           Legs;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Arms
	 */
	struct UInterface_Operative_Character_C_Get_Skeletal_Mesh_Arms_Params
	{
	public:
		class USkeletalMeshComponent*                              Arms_Mesh;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Head
	 */
	struct UInterface_Operative_Character_C_Get_Skeletal_Mesh_Head_Params
	{
	public:
		class UGbxSkeletalMeshComponent*                           Head_Mesh;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
