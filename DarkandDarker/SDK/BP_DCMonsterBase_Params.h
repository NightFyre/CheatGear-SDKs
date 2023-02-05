#pragma once

/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
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
	 * Function BP_DCMonsterBase.BP_DCMonsterBase_C.OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83
	 */
	struct ABP_DCMonsterBase_C_OnMessageReceived_BD0C56DE4311A2D9C82D2C927A275C83_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBase.BP_DCMonsterBase_C.ReceivePreInitializeComponents
	 */
	struct ABP_DCMonsterBase_C_ReceivePreInitializeComponents_Params
	{	};

	/**
	 * Function BP_DCMonsterBase.BP_DCMonsterBase_C.EventFMsgSoundEvent
	 */
	struct ABP_DCMonsterBase_C_EventFMsgSoundEvent_Params
	{
	public:
		struct FMsgSoundEvent                                      Msg;                                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_DCMonsterBase.BP_DCMonsterBase_C.BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature
	 */
	struct ABP_DCMonsterBase_C_BndEvt__BP_DCMonsterBase_ItemRandomGenerate_K2Node_ComponentBoundEvent_0_ItemGenerationFinishedSignature__DelegateSignature_Params
	{
	public:
		TArray<struct FItemData>                                   ResultItems;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DCMonsterBase.BP_DCMonsterBase_C.InteractSucceed
	 */
	struct ABP_DCMonsterBase_C_InteractSucceed_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        StateTag;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        TriggerTag;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DCMonsterBase.BP_DCMonsterBase_C.ReceiveBeginPlay
	 */
	struct ABP_DCMonsterBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DCMonsterBase.BP_DCMonsterBase_C.ExecuteUbergraph_BP_DCMonsterBase
	 */
	struct ABP_DCMonsterBase_C_ExecuteUbergraph_BP_DCMonsterBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YNS5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
