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
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.SetSimulatePhysics
	 */
	struct ABP_ExplodingObject_C_SetSimulatePhysics_Params
	{
	public:
		bool                                                       bNewSimulate;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Damaged
	 */
	struct ABP_ExplodingObject_C_Damaged_Params
	{
	public:
		class UGbxDamageType*                                      DamageType;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStop
	 */
	struct ABP_ExplodingObject_C_VisualState_ExplodedStop_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStart
	 */
	struct ABP_ExplodingObject_C_VisualState_ExplodedStart_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Get_DamageType
	 */
	struct ABP_ExplodingObject_C_Get_DamageType_Params
	{
	public:
		Enum_ExplodingObjectDamage                                 DamageType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStop
	 */
	struct ABP_ExplodingObject_C_VisualState_FuseStop_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStart
	 */
	struct ABP_ExplodingObject_C_VisualState_FuseStart_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.OnRep_DamageType
	 */
	struct ABP_ExplodingObject_C_OnRep_DamageType_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.ThrowExplodingObject
	 */
	struct ABP_ExplodingObject_C_ThrowExplodingObject_Params
	{
	public:
		struct FVector                                             ThrowVector;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Force;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotatorForSpin;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             OptionalAdditiveVector;                                  // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_ExplodingObject
	 */
	struct ABP_ExplodingObject_C_Setup_ExplodingObject_Params
	{
	public:
		class UDA_ExplodingObjectPresentation_C*                   NewPresentation;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            DynamicMI;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_RandomizeDamageType
	 */
	struct ABP_ExplodingObject_C_Setup_RandomizeDamageType_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.UserConstructionScript
	 */
	struct ABP_ExplodingObject_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ResetHealth
	 */
	struct ABP_ExplodingObject_C_BPI_ResetHealth_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal
	 */
	struct ABP_ExplodingObject_C_BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KQ3J[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0028(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_Explode
	 */
	struct ABP_ExplodingObject_C_BPI_Explode_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ImpulseThrow
	 */
	struct ABP_ExplodingObject_C_BPI_ImpulseThrow_Params
	{
	public:
		struct FVector                                             ThrowVector;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Force;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotatorForSpin;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      FuseSpeedScale;                                          // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AdditiveVector;                                          // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetSimulatePhysics
	 */
	struct ABP_ExplodingObject_C_BPI_SetSimulatePhysics_Params
	{
	public:
		bool                                                       PhysicsOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_StartFuse
	 */
	struct ABP_ExplodingObject_C_BPI_StartFuse_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.ReceiveBeginPlay
	 */
	struct ABP_ExplodingObject_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_1
	 */
	struct ABP_ExplodingObject_C___UserState_ExplodingObjectState_1_Params
	{
	public:
		bool                                                       bFromLoad;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_2
	 */
	struct ABP_ExplodingObject_C___UserState_ExplodingObjectState_2_Params
	{
	public:
		bool                                                       bFromLoad;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_3
	 */
	struct ABP_ExplodingObject_C___UserState_ExplodingObjectState_3_Params
	{
	public:
		bool                                                       bFromLoad;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_4
	 */
	struct ABP_ExplodingObject_C___UserState_ExplodingObjectState_4_Params
	{
	public:
		bool                                                       bFromLoad;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject
	 */
	struct ABP_ExplodingObject_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject_Params
	{
	public:
		class UDamageComponent*                                    DamageReceiver;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_27X8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGbxDamageType*                                      DamageType;                                              // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageCauserComponent*                              DamageCauser;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FReceivedDamageDetails                              Details;                                                 // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Damage
	 */
	struct ABP_ExplodingObject_C_Explode_Damage_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Puddle
	 */
	struct ABP_ExplodingObject_C_Explode_Puddle_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Cloud
	 */
	struct ABP_ExplodingObject_C_Explode_Cloud_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Loot
	 */
	struct ABP_ExplodingObject_C_Explode_Loot_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Explode
	 */
	struct ABP_ExplodingObject_C_Explode_Params
	{	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject
	 */
	struct ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject_Params
	{
	public:
		class UPrimitiveComponent*                                 WakingComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject
	 */
	struct ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject_Params
	{
	public:
		class UPrimitiveComponent*                                 SleepingComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetNavPainterEnabled
	 */
	struct ABP_ExplodingObject_C_BPI_SetNavPainterEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.ExecuteUbergraph_BP_ExplodingObject
	 */
	struct ABP_ExplodingObject_C_ExecuteUbergraph_BP_ExplodingObject_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject.BP_ExplodingObject_C.Exploded__DelegateSignature
	 */
	struct ABP_ExplodingObject_C_Exploded__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
