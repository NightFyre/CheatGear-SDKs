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
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.GetTrackedTargetEffect
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_GetTrackedTargetEffect_Params
	{
	public:
		struct FOakActionCloak_TrackedTargetState                  TrackedTargetState;                                      // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class UClass*                                              ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.StopTrackedTargetCE
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_StopTrackedTargetCE_Params
	{	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ShouldRegisterWeaponFireDelegates
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_ShouldRegisterWeaponFireDelegates_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.CleanupServer
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_CleanupServer_Params
	{	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupMods
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_SetupMods_Params
	{	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.SetupServer
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_SetupServer_Params
	{	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerBegin
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnBegin
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnServerEnd
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B6RT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.OnEnd
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A3V0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CE_Beastmaster_CloakAbility_On.BP_CE_Beastmaster_CloakAbility_On_C.ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On
	 */
	struct UBP_CE_Beastmaster_CloakAbility_On_C_ExecuteUbergraph_BP_CE_Beastmaster_CloakAbility_On_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8HXC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
