#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.OnFocusReceived
	 */
	struct UBP_Profile_Stats_WeaponsItem_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.GetWeaponName
	 */
	struct UBP_Profile_Stats_WeaponsItem_C_GetWeaponName_Params
	{
	public:
		class FString                                              WeaponNameString;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                LocalizedWeaponTextName;                                 // 0x0010(0x0018)  (Parm, OutParm)
		class FText                                                LocalizedWeaponTextDescription;                          // 0x0028(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.UpdateFromStatRecord
	 */
	struct UBP_Profile_Stats_WeaponsItem_C_UpdateFromStatRecord_Params
	{
	public:
		struct FStatisticsPlayerWeaponStats                        WeaponStat;                                              // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.GetBrushColor_1
	 */
	struct UBP_Profile_Stats_WeaponsItem_C_GetBrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.OnLoaded_279241074EC8FA141D202CAB3BD10C32
	 */
	struct UBP_Profile_Stats_WeaponsItem_C_OnLoaded_279241074EC8FA141D202CAB3BD10C32_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.LoadWeaponIcon
	 */
	struct UBP_Profile_Stats_WeaponsItem_C_LoadWeaponIcon_Params
	{
	public:
		class FString                                              WeaponName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Profile_Stats_WeaponsItem.BP_Profile_Stats_WeaponsItem_C.ExecuteUbergraph_BP_Profile_Stats_WeaponsItem
	 */
	struct UBP_Profile_Stats_WeaponsItem_C_ExecuteUbergraph_BP_Profile_Stats_WeaponsItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MK35[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
