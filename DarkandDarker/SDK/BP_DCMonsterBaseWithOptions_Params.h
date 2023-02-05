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
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Move Fail Timeout
	 */
	struct ABP_DCMonsterBaseWithOptions_C_MoveFailTimeout_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Peace To Combat
	 */
	struct ABP_DCMonsterBaseWithOptions_C_CheckPeaceToCombat_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Check Combat To Comeback
	 */
	struct ABP_DCMonsterBaseWithOptions_C_CheckCombatToComeback_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Recog Area
	 */
	struct ABP_DCMonsterBaseWithOptions_C_TriggerOutRecogArea_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Recog Area
	 */
	struct ABP_DCMonsterBaseWithOptions_C_TriggerInRecogArea_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger Out Combat Area
	 */
	struct ABP_DCMonsterBaseWithOptions_C_TriggerOutCombatArea_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Trigger In Combat Area
	 */
	struct ABP_DCMonsterBaseWithOptions_C_TriggerInCombatArea_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Spawn Box for Area Check
	 */
	struct ABP_DCMonsterBaseWithOptions_C_SpawnBoxforAreaCheck_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.SetActivityArea
	 */
	struct ABP_DCMonsterBaseWithOptions_C_SetActivityArea_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToCharacterBase
	 */
	struct ABP_DCMonsterBaseWithOptions_C_GetBBTargetActorToCharacterBase_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LOUL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ADCCharacterBase*                                    AsDCCharacterBase;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActorToMonsterBase
	 */
	struct ABP_DCMonsterBaseWithOptions_C_GetBBTargetActorToMonsterBase_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4FWR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_DCMonsterBaseWithOptions_C*                      DCMonsterBaseWithOptions;                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetBBTargetActor
	 */
	struct ABP_DCMonsterBaseWithOptions_C_GetBBTargetActor_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VCXQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.IgnoreSignalFromMe
	 */
	struct ABP_DCMonsterBaseWithOptions_C_IgnoreSignalFromMe_Params
	{
	public:
		class UDCGameObjectLinkComponent*                          DCGameLinkObject;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FObjectLinkRequestEvent                             RecvEvent;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObjectLinkMetaDataBlueprint*                        SendEventParam;                                          // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GetLinkedMonsters
	 */
	struct ABP_DCMonsterBaseWithOptions_C_GetLinkedMonsters_Params
	{
	public:
		struct FObjectLinkRequestEvent                             RecvEvent;                                               // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObjectLinkMetaDataBlueprint*                        SendEventParam;                                          // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.LinkEventBase
	 */
	struct ABP_DCMonsterBaseWithOptions_C_LinkEventBase_Params
	{
	public:
		class UDCGameObjectLinkComponent*                          DCGameLinkObject;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FObjectLinkRequestEvent                             RecvEvent;                                               // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObjectLinkMetaDataBlueprint*                        SendEventParam;                                          // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E
	 */
	struct ABP_DCMonsterBaseWithOptions_C_OnApplied_227A852046B3B9DACFFBA5ABA7D2A95E_Params
	{
	public:
		class AActor*                                              Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Removed_CE0B13EA482C4B99CB7832A70FAC7611
	 */
	struct ABP_DCMonsterBaseWithOptions_C_Removed_CE0B13EA482C4B99CB7832A70FAC7611_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_21CEDD05472CF8AA4A07758D48F80F14
	 */
	struct ABP_DCMonsterBaseWithOptions_C_OnFail_21CEDD05472CF8AA4A07758D48F80F14_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_21CEDD05472CF8AA4A07758D48F80F14
	 */
	struct ABP_DCMonsterBaseWithOptions_C_OnSuccess_21CEDD05472CF8AA4A07758D48F80F14_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFail_801A2F7E484A71F27AD0278F8B82FB99
	 */
	struct ABP_DCMonsterBaseWithOptions_C_OnFail_801A2F7E484A71F27AD0278F8B82FB99_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSuccess_801A2F7E484A71F27AD0278F8B82FB99
	 */
	struct ABP_DCMonsterBaseWithOptions_C_OnSuccess_801A2F7E484A71F27AD0278F8B82FB99_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnSetAI
	 */
	struct ABP_DCMonsterBaseWithOptions_C_OnSetAI_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature
	 */
	struct ABP_DCMonsterBaseWithOptions_C_BndEvt__BP_DCMonsterBaseWithOptions_Impactable_K2Node_ComponentBoundEvent_0_ImpactEnduranceExhausted__DelegateSignature_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FDCGameplayEffectContext                            EffectContext;                                           // 0x0008(0x0198)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.GameplayTagUpdated
	 */
	struct ABP_DCMonsterBaseWithOptions_C_GameplayTagUpdated_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCount;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceivePossessed
	 */
	struct ABP_DCMonsterBaseWithOptions_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event Start
	 */
	struct ABP_DCMonsterBaseWithOptions_C_ComebackEventStart_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Event End
	 */
	struct ABP_DCMonsterBaseWithOptions_C_ComebackEventEnd_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnFMsgGASAttributeNotifyBlueprint
	 */
	struct ABP_DCMonsterBaseWithOptions_C_OnFMsgGASAttributeNotifyBlueprint_Params
	{
	public:
		struct FMsgGASAttributeNotify                              InMsg;                                                   // 0x0000(0x0498)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.OnBeforeDeath
	 */
	struct ABP_DCMonsterBaseWithOptions_C_OnBeforeDeath_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ReceiveBeginPlay
	 */
	struct ABP_DCMonsterBaseWithOptions_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated
	 */
	struct ABP_DCMonsterBaseWithOptions_C_ComebackActivated_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated
	 */
	struct ABP_DCMonsterBaseWithOptions_C_PeaceActivated_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated
	 */
	struct ABP_DCMonsterBaseWithOptions_C_CombatActivated_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.ExecuteUbergraph_BP_DCMonsterBaseWithOptions
	 */
	struct ABP_DCMonsterBaseWithOptions_C_ExecuteUbergraph_BP_DCMonsterBaseWithOptions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Comeback Activated Event Dispatcher__DelegateSignature
	 */
	struct ABP_DCMonsterBaseWithOptions_C_ComebackActivatedEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Peace Activated Event Dispatcher__DelegateSignature
	 */
	struct ABP_DCMonsterBaseWithOptions_C_PeaceActivatedEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DCMonsterBaseWithOptions.BP_DCMonsterBaseWithOptions_C.Combat Activated Event Dispatcher__DelegateSignature
	 */
	struct ABP_DCMonsterBaseWithOptions_C_CombatActivatedEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
