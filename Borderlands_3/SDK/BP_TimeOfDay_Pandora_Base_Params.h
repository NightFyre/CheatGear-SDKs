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
	 * Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.GetWorldPhaseLockStart
	 */
	struct ABP_TimeOfDay_Pandora_Base_C_GetWorldPhaseLockStart_Params
	{
	public:
		struct FVector                                             World_Location;                                          // 0x0000(0x000C)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7SUG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.Enable_Phase_Lock
	 */
	struct ABP_TimeOfDay_Pandora_Base_C_Enable_Phase_Lock_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.SetMoonState
	 */
	struct ABP_TimeOfDay_Pandora_Base_C_SetMoonState_Params
	{
	public:
		Enum_IO_EridiumVortex                                      MoonState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D439[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.UserConstructionScript
	 */
	struct ABP_TimeOfDay_Pandora_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.PostVortexMoon
	 */
	struct ABP_TimeOfDay_Pandora_Base_C_PostVortexMoon_Params
	{	};

	/**
	 * Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.FireHawkMoon
	 */
	struct ABP_TimeOfDay_Pandora_Base_C_FireHawkMoon_Params
	{	};

	/**
	 * Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.ExecuteUbergraph_BP_TimeOfDay_Pandora_Base
	 */
	struct ABP_TimeOfDay_Pandora_Base_C_ExecuteUbergraph_BP_TimeOfDay_Pandora_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
