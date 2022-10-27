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
	 * Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnLoaded_ACB25BB1431690D222BD5B836B55DB38
	 */
	struct ABP_WristWatch_Modular_C_OnLoaded_ACB25BB1431690D222BD5B836B55DB38_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnBecomeViewTarget_Event_1
	 */
	struct ABP_WristWatch_Modular_C_OnBecomeViewTarget_Event_1_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBCharacter*                                        Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnEndViewTarget_Event_1
	 */
	struct ABP_WristWatch_Modular_C_OnEndViewTarget_Event_1_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBCharacter*                                        Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnReceivePlayerState_Event_1
	 */
	struct ABP_WristWatch_Modular_C_OnReceivePlayerState_Event_1_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.OnAddedToItem
	 */
	struct ABP_WristWatch_Modular_C_OnAddedToItem_Params
	{
	public:
		class AGBItem*                                             NewParentItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WristWatch_Modular.BP_WristWatch_Modular_C.ExecuteUbergraph_BP_WristWatch_Modular
	 */
	struct ABP_WristWatch_Modular_C_ExecuteUbergraph_BP_WristWatch_Modular_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UUA2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
