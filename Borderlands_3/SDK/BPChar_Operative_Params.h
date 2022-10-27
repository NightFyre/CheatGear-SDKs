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
	 * Function BPChar_Operative.BPChar_Operative_C.CanActivateTrapCard
	 */
	struct ABPChar_Operative_C_CanActivateTrapCard_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FWD1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetBarrierActionAbility
	 */
	struct ABPChar_Operative_C_GetBarrierActionAbility_Params
	{
	public:
		class UOakActionAbility_Barrier*                           res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetOperativeStatusEffectOverrides
	 */
	struct ABPChar_Operative_C_GetOperativeStatusEffectOverrides_Params
	{
	public:
		struct FCauseDamageStatusEffectOverrides                   Overrides;                                               // 0x0000(0x001C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetOperativeShieldRemainingPercent
	 */
	struct ABPChar_Operative_C_GetOperativeShieldRemainingPercent_Params
	{
	public:
		float                                                      ShieldPercentRemaining;                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetDigiCloneShieldRemainingPercent
	 */
	struct ABPChar_Operative_C_GetDigiCloneShieldRemainingPercent_Params
	{
	public:
		float                                                      ShieldPercentRemaining;                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SNQ8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetGRMLNActionAbility
	 */
	struct ABPChar_Operative_C_GetGRMLNActionAbility_Params
	{
	public:
		class UOakActionAbility_GRMLN*                             res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetDigicloneActionAbility
	 */
	struct ABPChar_Operative_C_GetDigicloneActionAbility_Params
	{
	public:
		class UOakActionAbility_Digiclone*                         res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.SpawnAndThrowOperativeGrenade
	 */
	struct ABPChar_Operative_C_SpawnAndThrowOperativeGrenade_Params
	{
	public:
		class AActor*                                              SpawnFromActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SpawnFromSocket;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U9BP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Grenade;                                                 // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.BlockOperativeActionSkillActivation
	 */
	struct ABPChar_Operative_C_BlockOperativeActionSkillActivation_Params
	{
	public:
		bool                                                       ShouldBlock;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetDroneSpawnLocation
	 */
	struct ABPChar_Operative_C_GetDroneSpawnLocation_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Head
	 */
	struct ABPChar_Operative_C_Get_Skeletal_Mesh_Head_Params
	{
	public:
		class UGbxSkeletalMeshComponent*                           Head_Mesh;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Arms
	 */
	struct ABPChar_Operative_C_Get_Skeletal_Mesh_Arms_Params
	{
	public:
		class USkeletalMeshComponent*                              Arms_Mesh;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Legs
	 */
	struct ABPChar_Operative_C_Get_Skeletal_Mesh_Legs_Params
	{
	public:
		class UGbxSkeletalMeshComponent*                           Legs;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh
	 */
	struct ABPChar_Operative_C_Get_Skeletal_Mesh_Params
	{
	public:
		class USkeletalMeshComponent*                              Skeletal_Mesh;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Materials Head
	 */
	struct ABPChar_Operative_C_Get_Materials_Head_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Materials Arms
	 */
	struct ABPChar_Operative_C_Get_Materials_Arms_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Materials Legs
	 */
	struct ABPChar_Operative_C_Get_Materials_Legs_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Materials Skeletal Mesh
	 */
	struct ABPChar_Operative_C_Get_Materials_Skeletal_Mesh_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Materials FP Gun
	 */
	struct ABPChar_Operative_C_Get_Materials_FP_Gun_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.Get Materials TP Gun
	 */
	struct ABPChar_Operative_C_Get_Materials_TP_Gun_Params
	{
	public:
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetHeadMesh
	 */
	struct ABPChar_Operative_C_GetHeadMesh_Params
	{
	public:
		class USkeletalMesh*                                       HeadMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.InnerDoCryoNovaAtLocation
	 */
	struct ABPChar_Operative_C_InnerDoCryoNovaAtLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InDamage;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetSecondaryActionAbility
	 */
	struct ABPChar_Operative_C_GetSecondaryActionAbility_Params
	{
	public:
		class UOakActionAbility*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.GetPrimaryActionAbility
	 */
	struct ABPChar_Operative_C_GetPrimaryActionAbility_Params
	{
	public:
		class UOakActionAbility*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.UserConstructionScript
	 */
	struct ABPChar_Operative_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__FinishedFunc
	 */
	struct ABPChar_Operative_C_DigistructSNTRY__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__UpdateFunc
	 */
	struct ABPChar_Operative_C_DigistructSNTRY__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.PlayerOperativeDroneSpawnAnimation
	 */
	struct ABPChar_Operative_C_PlayerOperativeDroneSpawnAnimation_Params
	{	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.HideOperativeDroneSpawnAnimation
	 */
	struct ABPChar_Operative_C_HideOperativeDroneSpawnAnimation_Params
	{	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.DoOperativeCryoNovaAtLocation
	 */
	struct ABPChar_Operative_C_DoOperativeCryoNovaAtLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.SetOperativeDeviceVisible
	 */
	struct ABPChar_Operative_C_SetOperativeDeviceVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.SpawnCannonEmitterMulticast
	 */
	struct ABPChar_Operative_C_SpawnCannonEmitterMulticast_Params
	{
	public:
		class UParticleSystem*                                     CannonEmitter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              CannonComponent;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Operative.BPChar_Operative_C.ExecuteUbergraph_BPChar_Operative
	 */
	struct ABPChar_Operative_C_ExecuteUbergraph_BPChar_Operative_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
