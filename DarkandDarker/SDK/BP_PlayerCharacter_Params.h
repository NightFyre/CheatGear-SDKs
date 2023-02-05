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
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraComponent
	 */
	struct ABP_PlayerCharacter_C_GetCameraComponent_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.HasLocalCurrentCharacterEnhancedHearing
	 */
	struct ABP_PlayerCharacter_C_HasLocalCurrentCharacterEnhancedHearing_Params
	{
	public:
		bool                                                       HasEnhancedHearing;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QAD1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetRTPCValuePlayerSpeed
	 */
	struct ABP_PlayerCharacter_C_SetRTPCValuePlayerSpeed_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_5101B37F4EC16839F281F3A967F04D5B
	 */
	struct ABP_PlayerCharacter_C_OnMessageReceived_5101B37F4EC16839F281F3A967F04D5B_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_EA0BB1014365DB5602FF2A88319323AC
	 */
	struct ABP_PlayerCharacter_C_OnMessageReceived_EA0BB1014365DB5602FF2A88319323AC_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMessageReceived_E32555534626CD303291009A607703E1
	 */
	struct ABP_PlayerCharacter_C_OnMessageReceived_E32555534626CD303291009A607703E1_Params
	{
	public:
		class UMsgBaseNode*                                        ProxyObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgGASActorDieNotify
	 */
	struct ABP_PlayerCharacter_C_EventFMsgGASActorDieNotify_Params
	{
	public:
		struct FMsgGASActorDieNotify                               Msg;                                                     // 0x0000(0x01B8)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgGASAttributeNotify
	 */
	struct ABP_PlayerCharacter_C_EventFMsgGASAttributeNotify_Params
	{
	public:
		struct FMsgGASAttributeNotify                              Msg;                                                     // 0x0000(0x0498)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePreInitializeComponents
	 */
	struct ABP_PlayerCharacter_C_ReceivePreInitializeComponents_Params
	{	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.EventFMsgSoundEvent
	 */
	struct ABP_PlayerCharacter_C_EventFMsgSoundEvent_Params
	{
	public:
		struct FMsgSoundEvent                                      Msg;                                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractFound
	 */
	struct ABP_PlayerCharacter_C_InteractFound_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InteractPart;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLost
	 */
	struct ABP_PlayerCharacter_C_InteractLost_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractSucceed
	 */
	struct ABP_PlayerCharacter_C_InteractSucceed_Params
	{
	public:
		class AActor*                                              Interacter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        StateTag;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        TriggerTag;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0018(0x00E8)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLanded
	 */
	struct ABP_PlayerCharacter_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00E8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnMovementModeChanged
	 */
	struct ABP_PlayerCharacter_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetRenderCustomDepth
	 */
	struct ABP_PlayerCharacter_C_OnSetRenderCustomDepth_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetPerspective
	 */
	struct ABP_PlayerCharacter_C_OnSetPerspective_Params
	{
	public:
		class APlayerController*                                   InPlayerController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsFirstPersonPerspective;                             // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCommemorativePlaqueText
	 */
	struct ABP_PlayerCharacter_C_OnCommemorativePlaqueText_Params
	{
	public:
		struct FPrimaryAssetId                                     ScriptAseetId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
	 */
	struct ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
