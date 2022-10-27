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
	 * Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetActionNames
	 */
	struct UBP_WeaponSelectionRow_C_GetActionNames_Params
	{
	public:
		TArray<class FName>                                        KeyActions;                                              // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.UpdateItem
	 */
	struct UBP_WeaponSelectionRow_C_UpdateItem_Params
	{
	public:
		class AItemEquipable*                                      NewItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  NewItemSlot;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.UpdateSelected
	 */
	struct UBP_WeaponSelectionRow_C_UpdateSelected_Params
	{
	public:
		bool                                                       bNewSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TNL2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetBgColor
	 */
	struct UBP_WeaponSelectionRow_C_GetBgColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.GetTextColor
	 */
	struct UBP_WeaponSelectionRow_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.Construct
	 */
	struct UBP_WeaponSelectionRow_C_Construct_Params
	{	};

	/**
	 * Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.OnUpdateUI
	 */
	struct UBP_WeaponSelectionRow_C_OnUpdateUI_Params
	{	};

	/**
	 * Function BP_WeaponSelectionRow.BP_WeaponSelectionRow_C.ExecuteUbergraph_BP_WeaponSelectionRow
	 */
	struct UBP_WeaponSelectionRow_C_ExecuteUbergraph_BP_WeaponSelectionRow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VX97[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
