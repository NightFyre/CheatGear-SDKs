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
	 * Function BPChar_Siren.BPChar_Siren_C.GetSoulSapProjectile
	 */
	struct ABPChar_Siren_C_GetSoulSapProjectile_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.GetStillnessOfMindControlledMove
	 */
	struct ABPChar_Siren_C_GetStillnessOfMindControlledMove_Params
	{
	public:
		class UClass*                                              res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.SirenHasAscendantSkill
	 */
	struct ABPChar_Siren_C_SirenHasAscendantSkill_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.GetSirenGhostArmsComponent
	 */
	struct ABPChar_Siren_C_GetSirenGhostArmsComponent_Params
	{
	public:
		class UGbxSkeletalMeshComponent*                           rd_Person_Mesh;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxSkeletalMeshComponent*                           st_Person_Mesh;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.GetPhaseCastProjectileComponents
	 */
	struct ABPChar_Siren_C_GetPhaseCastProjectileComponents_Params
	{
	public:
		class USkeletalMeshComponent*                              Body;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxSkeletalMeshComponent*                           Head;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              GhostArms;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.GetSirenArmsReference
	 */
	struct ABPChar_Siren_C_GetSirenArmsReference_Params
	{
	public:
		class UGbxSkeletalMeshComponent*                           Skel_Mesh_rd;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGbxSkeletalMeshComponent*                           Skel_Mesh_st;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.GetPhaseTranceAbility
	 */
	struct ABPChar_Siren_C_GetPhaseTranceAbility_Params
	{
	public:
		class UOakActionAbility_PhaseTrance*                       res;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.GetHeadMesh
	 */
	struct ABPChar_Siren_C_GetHeadMesh_Params
	{
	public:
		class USkeletalMesh*                                       HeadMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.GetPrimaryActionAbility
	 */
	struct ABPChar_Siren_C_GetPrimaryActionAbility_Params
	{
	public:
		class UOakActionAbility*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.UserConstructionScript
	 */
	struct ABPChar_Siren_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__FinishedFunc
	 */
	struct ABPChar_Siren_C_FadeArms3rd__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__UpdateFunc
	 */
	struct ABPChar_Siren_C_FadeArms3rd__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.TattooFlare__FinishedFunc
	 */
	struct ABPChar_Siren_C_TattooFlare__FinishedFunc_Params
	{	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.TattooFlare__UpdateFunc
	 */
	struct ABPChar_Siren_C_TattooFlare__UpdateFunc_Params
	{	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.SetArmsMaterial
	 */
	struct ABPChar_Siren_C_SetArmsMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.Play3rdPersonArmFade
	 */
	struct ABPChar_Siren_C_Play3rdPersonArmFade_Params
	{
	public:
		bool                                                       bInstant;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bVisible;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.PlayTattooFade
	 */
	struct ABPChar_Siren_C_PlayTattooFade_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.SetArmsElement
	 */
	struct ABPChar_Siren_C_SetArmsElement_Params
	{
	public:
		EPhaseTranceElementalType                                  Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.HandleInstant3rdPersonArmFade
	 */
	struct ABPChar_Siren_C_HandleInstant3rdPersonArmFade_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.Handle3rdPersonArmFadeTransition
	 */
	struct ABPChar_Siren_C_Handle3rdPersonArmFadeTransition_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren
	 */
	struct ABPChar_Siren_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren_Params
	{
	public:
		class AActor*                                              DamageInstigator;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZLJC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamagedActor;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDamageDetails                                Details;                                                 // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.ReceiveBeginPlay
	 */
	struct ABPChar_Siren_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.InterruptArmFade
	 */
	struct ABPChar_Siren_C_InterruptArmFade_Params
	{	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren
	 */
	struct ABPChar_Siren_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren_Params
	{
	public:
		class UDamageComponent*                                    Damaged;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCausedDeathDetails                                 Details;                                                 // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.PhasegraspEndedAndEnemyKilled
	 */
	struct ABPChar_Siren_C_PhasegraspEndedAndEnemyKilled_Params
	{
	public:
		bool                                                       Killed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_Siren.BPChar_Siren_C.ExecuteUbergraph_BPChar_Siren
	 */
	struct ABPChar_Siren_C_ExecuteUbergraph_BPChar_Siren_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F1TD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
