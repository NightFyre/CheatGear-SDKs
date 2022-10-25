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
	 * Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.GetPlatformIcon
	 */
	struct UBP_WeaponSelection_Gamepad_C_GetPlatformIcon_Params
	{
	public:
		class UTexture2D*                                          NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.RebuildItemListNew
	 */
	struct UBP_WeaponSelection_Gamepad_C_RebuildItemListNew_Params
	{	};

	/**
	 * Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.BumpFadeTimer
	 */
	struct UBP_WeaponSelection_Gamepad_C_BumpFadeTimer_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.CreateOptionForItem
	 */
	struct UBP_WeaponSelection_Gamepad_C_CreateOptionForItem_Params
	{
	public:
		class AItemEquipable*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemSlot                                                  Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.Construct
	 */
	struct UBP_WeaponSelection_Gamepad_C_Construct_Params
	{	};

	/**
	 * Function BP_WeaponSelection_Gamepad.BP_WeaponSelection_Gamepad_C.ExecuteUbergraph_BP_WeaponSelection_Gamepad
	 */
	struct UBP_WeaponSelection_Gamepad_C_ExecuteUbergraph_BP_WeaponSelection_Gamepad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NOM9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
