#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__FinishedFunc
	 */
	struct ABP_Dropping_01_C_OffsetTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Dropping_01.BP_Dropping_01_C.OffsetTimeline__UpdateFunc
	 */
	struct ABP_Dropping_01_C_OffsetTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Dropping_01.BP_Dropping_01_C.BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Dropping_01_C_BndEvt__Shit_03_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Dropping_01.BP_Dropping_01_C.AutoDestroy
	 */
	struct ABP_Dropping_01_C_AutoDestroy_Params
	{	};

	/**
	 * Function BP_Dropping_01.BP_Dropping_01_C.ReceiveBeginPlay
	 */
	struct ABP_Dropping_01_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Dropping_01.BP_Dropping_01_C.ExecuteUbergraph_BP_Dropping_01
	 */
	struct ABP_Dropping_01_C_ExecuteUbergraph_BP_Dropping_01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
