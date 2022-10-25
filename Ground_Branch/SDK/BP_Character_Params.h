#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Character.BP_Character_C.GatherAssets
	 */
	struct ABP_Character_C_GatherAssets_Params
	{
	public:
		TArray<struct FSoftObjectPath>                             OutAssets;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Character.BP_Character_C.DamageOrgan
	 */
	struct ABP_Character_C_DamageOrgan_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                                      Damage;                                                  // 0x008C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0090(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.OnLandedEffects
	 */
	struct ABP_Character_C_OnLandedEffects_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                                      FallingSpeed;                                            // 0x008C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ReceiveBeginPlay
	 */
	struct ABP_Character_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.OnPlayVoiceEvent
	 */
	struct ABP_Character_C_OnPlayVoiceEvent_Params
	{
	public:
		class UAkAudioEvent*                                       VoiceAudioEvent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLocalPlayer;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.OnPlayVoiceCallback_Event
	 */
	struct ABP_Character_C_OnPlayVoiceCallback_Event_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q70G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.OnStopVoiceEvent
	 */
	struct ABP_Character_C_OnStopVoiceEvent_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ReceiveTick
	 */
	struct ABP_Character_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.BlueprintAddDefaultItems
	 */
	struct ABP_Character_C_BlueprintAddDefaultItems_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.PlayDeathVoice
	 */
	struct ABP_Character_C_PlayDeathVoice_Params
	{
	public:
		class FName                                                DeathVoiceKey;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.K2_OnStartCrouch
	 */
	struct ABP_Character_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.K2_OnEndCrouch
	 */
	struct ABP_Character_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
	 */
	struct ABP_Character_C_ExecuteUbergraph_BP_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U3XQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
