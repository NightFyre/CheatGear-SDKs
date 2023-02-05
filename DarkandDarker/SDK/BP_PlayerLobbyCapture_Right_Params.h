﻿#pragma once

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
	 * Function BP_PlayerLobbyCapture_Right.BP_PlayerLobbyCapture_Right_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerLobbyCapture_Right_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerLobbyCapture_Right.BP_PlayerLobbyCapture_Right_C.OnItemEquipped
	 */
	struct ABP_PlayerLobbyCapture_Right_C_OnItemEquipped_Params
	{
	public:
		class UAnimationAsset*                                     ItemStandIdle;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ItemHandType;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ItemSlotType;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLobbyCapture_Right.BP_PlayerLobbyCapture_Right_C.OnVisibleCharacterRenderRight
	 */
	struct ABP_PlayerLobbyCapture_Right_C_OnVisibleCharacterRenderRight_Params
	{
	public:
		bool                                                       IsHidden;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLobbyCapture_Right.BP_PlayerLobbyCapture_Right_C.ExecuteUbergraph_BP_PlayerLobbyCapture_Right
	 */
	struct ABP_PlayerLobbyCapture_Right_C_ExecuteUbergraph_BP_PlayerLobbyCapture_Right_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JRZ1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
