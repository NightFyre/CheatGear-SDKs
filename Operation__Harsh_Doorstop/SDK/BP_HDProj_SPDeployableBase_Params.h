#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetSpawnPointCollisionHandlingOverrideBP
	 */
	struct ABP_HDProj_SPDeployableBase_C_GetSpawnPointCollisionHandlingOverrideBP_Params
	{
	public:
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ESpawnActorCollisionHandlingMethod                         OutSpawnCollisionMethod;                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0051(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanRestartPlayerFromSpawnPointBP
	 */
	struct ABP_HDProj_SPDeployableBase_C_CanRestartPlayerFromSpawnPointBP_Params
	{
	public:
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AController*                                         Player;                                                  // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              PlayerPawnClass;                                         // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanSpawnActorFromSpawnPointBP
	 */
	struct ABP_HDProj_SPDeployableBase_C_CanSpawnActorFromSpawnPointBP_Params
	{
	public:
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class UClass*                                              SpawnActorClass;                                         // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.FindSpawnPointBP
	 */
	struct ABP_HDProj_SPDeployableBase_C_FindSpawnPointBP_Params
	{
	public:
		int32_t                                                    SpawnPointID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XD40[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSpawnPointDef                                      FoundSpawnPoint;                                         // 0x0010(0x0050)  (Parm, OutParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetAllSpawnPointsBP
	 */
	struct ABP_HDProj_SPDeployableBase_C_GetAllSpawnPointsBP_Params
	{
	public:
		TArray<struct FSpawnPointDef>                              SpawnPoints;                                             // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CRK6[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanPlayerSpawnHere
	 */
	struct ABP_HDProj_SPDeployableBase_C_CanPlayerSpawnHere_Params
	{
	public:
		class AController*                                         InPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPlayerCanSpawn;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_756G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.InitDeployable
	 */
	struct ABP_HDProj_SPDeployableBase_C_InitDeployable_Params
	{	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CheckEnemyOverrun
	 */
	struct ABP_HDProj_SPDeployableBase_C_CheckEnemyOverrun_Params
	{	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.HandleTakeDamageFromProjectile
	 */
	struct ABP_HDProj_SPDeployableBase_C_HandleTakeDamageFromProjectile_Params
	{
	public:
		class ADFBaseProjectile*                                   InProjectile;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InDamage;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LLH1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GenerateSpawnPointList
	 */
	struct ABP_HDProj_SPDeployableBase_C_GenerateSpawnPointList_Params
	{	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetTransformOffsetBySpawnIndex
	 */
	struct ABP_HDProj_SPDeployableBase_C_GetTransformOffsetBySpawnIndex_Params
	{
	public:
		int32_t                                                    SpawnIdx;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XCKM[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FTransform                                          NewTransform;                                            // 0x0040(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetActorTransformOffsetByMeshZBounds
	 */
	struct ABP_HDProj_SPDeployableBase_C_GetActorTransformOffsetByMeshZBounds_Params
	{
	public:
		struct FTransform                                          OffsetActorWorldXForm;                                   // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CheckForEnemyChars
	 */
	struct ABP_HDProj_SPDeployableBase_C_CheckForEnemyChars_Params
	{	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.SetIsSpawnable
	 */
	struct ABP_HDProj_SPDeployableBase_C_SetIsSpawnable_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.IsSpawnable
	 */
	struct ABP_HDProj_SPDeployableBase_C_IsSpawnable_Params
	{
	public:
		bool                                                       bSpawnPointEnabled;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.AreSpawnPointsEqual
	 */
	struct ABP_HDProj_SPDeployableBase_C_AreSpawnPointsEqual_Params
	{
	public:
		struct FSpawnPointDef                                      SpawnPointOne;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FSpawnPointDef                                      SpawnPointTwo;                                           // 0x0050(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bEqual;                                                  // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetSpawnPoint
	 */
	struct ABP_HDProj_SPDeployableBase_C_GetSpawnPoint_Params
	{
	public:
		bool                                                       bMeshZOffset;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P6NZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SpawnPointIdx;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2VJX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSpawnPointDef                                      SpawnPoint;                                              // 0x0010(0x0050)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.IsEnemyChar
	 */
	struct ABP_HDProj_SPDeployableBase_C_IsEnemyChar_Params
	{
	public:
		class ADFBaseCharacter*                                    Char;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnemyChar;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.HasServerAuthority
	 */
	struct ABP_HDProj_SPDeployableBase_C_HasServerAuthority_Params
	{
	public:
		bool                                                       bAuthority;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ReceivePayloadActivated
	 */
	struct ABP_HDProj_SPDeployableBase_C_ReceivePayloadActivated_Params
	{
	public:
		struct FHitResult                                          ImpactHitResult;                                         // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_HDProj_SPDeployableBase_C_BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3OAQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_HDProj_SPDeployableBase_C_BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.OverlappingPawnTeamNumUpdated
	 */
	struct ABP_HDProj_SPDeployableBase_C_OverlappingPawnTeamNumUpdated_Params
	{
	public:
		unsigned char                                              LastTeamNum;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewTeamNum;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ReceiveAnyDamage
	 */
	struct ABP_HDProj_SPDeployableBase_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BLFH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.MemberPreUnregisteredFromOwnerSquad
	 */
	struct ABP_HDProj_SPDeployableBase_C_MemberPreUnregisteredFromOwnerSquad_Params
	{
	public:
		class AHDSquadState*                                       Squad;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      MemberPS;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ExecuteUbergraph_BP_HDProj_SPDeployableBase
	 */
	struct ABP_HDProj_SPDeployableBase_C_ExecuteUbergraph_BP_HDProj_SPDeployableBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.OnSpawnPointActivationChanged__DelegateSignature
	 */
	struct ABP_HDProj_SPDeployableBase_C_OnSpawnPointActivationChanged__DelegateSignature_Params
	{
	public:
		class ABP_HDProj_SPDeployableBase_C*                       Deployable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSpawnPointEnabled;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
