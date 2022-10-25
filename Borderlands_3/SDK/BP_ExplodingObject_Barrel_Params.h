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
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.GetPullScale
	 */
	struct ABP_ExplodingObject_Barrel_C_GetPullScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnRep_bSingularityGrabbed
	 */
	struct ABP_ExplodingObject_Barrel_C_OnRep_bSingularityGrabbed_Params
	{	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Setup_ExplodingObject
	 */
	struct ABP_ExplodingObject_Barrel_C_Setup_ExplodingObject_Params
	{
	public:
		class UDA_ExplodingObjectPresentation_C*                   NewPresentation;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            DynamicMI;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Barrel_SetupMaterialParams
	 */
	struct ABP_ExplodingObject_Barrel_C_Barrel_SetupMaterialParams_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        BaseColor;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HighlightColor;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture*                                            CompTexture;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture*                                            NormalTexture;                                           // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.UserConstructionScript
	 */
	struct ABP_ExplodingObject_Barrel_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_NPC_Kick_Begin
	 */
	struct ABP_ExplodingObject_Barrel_C_SmartObject_NPC_Kick_Begin_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.SmartObject_Barrel_GoonInteract_Success
	 */
	struct ABP_ExplodingObject_Barrel_C_SmartObject_Barrel_GoonInteract_Success_Params
	{
	public:
		class APawn*                                               User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerKickBarrel
	 */
	struct ABP_ExplodingObject_Barrel_C_PlayerKickBarrel_Params
	{
	public:
		class ACharacter*                                          Char;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerButtSlamBarrel
	 */
	struct ABP_ExplodingObject_Barrel_C_PlayerButtSlamBarrel_Params
	{
	public:
		class ACharacter*                                          Char;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.PlayerMeleeBarrel
	 */
	struct ABP_ExplodingObject_Barrel_C_PlayerMeleeBarrel_Params
	{
	public:
		class ACharacter*                                          Char;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Damaged
	 */
	struct ABP_ExplodingObject_Barrel_C_Damaged_Params
	{
	public:
		class UGbxDamageType*                                      DamageType;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UDamageSource*                                       DamageSource;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel
	 */
	struct ABP_ExplodingObject_Barrel_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel_Params
	{
	public:
		class AActor*                                              TouchingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPlayer;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9PX7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UActorComponent*                                     ComponentTouched;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullBegin
	 */
	struct ABP_ExplodingObject_Barrel_C_OnSingularityPullBegin_Params
	{
	public:
		class USingularityComponent*                               SingularityComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.OnSingularityPullEnd
	 */
	struct ABP_ExplodingObject_Barrel_C_OnSingularityPullEnd_Params
	{
	public:
		class USingularityComponent*                               SingularityComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.Explode_Damage
	 */
	struct ABP_ExplodingObject_Barrel_C_Explode_Damage_Params
	{	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.IronBearFisted
	 */
	struct ABP_ExplodingObject_Barrel_C_IronBearFisted_Params
	{
	public:
		class ACharacter*                                          Char;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ReceiveBeginPlay
	 */
	struct ABP_ExplodingObject_Barrel_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.DEBUG_PrematureExplosion
	 */
	struct ABP_ExplodingObject_Barrel_C_DEBUG_PrematureExplosion_Params
	{	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ThrowExplodingObject
	 */
	struct ABP_ExplodingObject_Barrel_C_ThrowExplodingObject_Params
	{
	public:
		struct FVector                                             ThrowVector;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Force;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RotatorForSpin;                                          // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FVector                                             OptionalAdditiveVector;                                  // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C.ExecuteUbergraph_BP_ExplodingObject_Barrel
	 */
	struct ABP_ExplodingObject_Barrel_C_ExecuteUbergraph_BP_ExplodingObject_Barrel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
