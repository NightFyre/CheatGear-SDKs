#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.GetTravelURLOptions
	 */
	struct UWBP_FactionGameModifierSettings_C_GetTravelURLOptions_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.IsEnabled
	 */
	struct UWBP_FactionGameModifierSettings_C_IsEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.BuildTicketCountURLOption
	 */
	struct UWBP_FactionGameModifierSettings_C_BuildTicketCountURLOption_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FIT6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Pair;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.BuildFactionURLOption
	 */
	struct UWBP_FactionGameModifierSettings_C_BuildFactionURLOption_Params
	{
	public:
		EHDTeam                                                    Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NHDJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                PackageName;                                             // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2TLB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Pair;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94
	 */
	struct UWBP_FactionGameModifierSettings_C_Completed_7DC7FCB348F23B6EEE29D0A8EBA2EF94_Params
	{
	public:
		TArray<class UClass*>                                      Loaded;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.SetupModifier
	 */
	struct UWBP_FactionGameModifierSettings_C_SetupModifier_Params
	{
	public:
		class UWBP_OptionMenu_CreateGame_C*                        ParentMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.Destruct
	 */
	struct UWBP_FactionGameModifierSettings_C_Destruct_Params
	{	};

	/**
	 * Function WBP_FactionGameModifierSettings.WBP_FactionGameModifierSettings_C.ExecuteUbergraph_WBP_FactionGameModifierSettings
	 */
	struct UWBP_FactionGameModifierSettings_C_ExecuteUbergraph_WBP_FactionGameModifierSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
