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
	 * Function WBP_WeaponStatus.WBP_WeaponStatus_C.ShouldDisplayTotalAmmo
	 */
	struct UWBP_WeaponStatus_C_ShouldDisplayTotalAmmo_Params
	{
	public:
		bool                                                       bDisplayTotalAmmo;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YGU0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_WeaponStatus.WBP_WeaponStatus_C.UpdateElementVisibility
	 */
	struct UWBP_WeaponStatus_C_UpdateElementVisibility_Params
	{	};

	/**
	 * Function WBP_WeaponStatus.WBP_WeaponStatus_C.PreConstruct
	 */
	struct UWBP_WeaponStatus_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponChanged
	 */
	struct UWBP_WeaponStatus_C_BPOwnerWeaponChanged_Params
	{
	public:
		class AHDBaseWeapon*                                       NewWeap;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDBaseWeapon*                                       PrevWeap;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponSetFireMode
	 */
	struct UWBP_WeaponStatus_C_BPOwnerWeaponSetFireMode_Params
	{
	public:
		EFireMode                                                  NewFireMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EFireMode                                                  PreviousFireMode;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromPlayerInput;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_WeaponStatus.WBP_WeaponStatus_C.BPOwnerWeaponAmmoUpdated
	 */
	struct UWBP_WeaponStatus_C_BPOwnerWeaponAmmoUpdated_Params
	{
	public:
		struct FHDUIWeaponAmmoState                                AmmoState;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bFromReload;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bTotalFreeAmmoUpdated;                                   // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNumFreeAmmoClipsUpdated;                                // 0x001A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_WeaponStatus.WBP_WeaponStatus_C.OwnerSetAimStyle
	 */
	struct UWBP_WeaponStatus_C_OwnerSetAimStyle_Params
	{
	public:
		EHDWeaponAimStyle                                          NewAimStyle;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHDWeaponAimStyle                                          PrevAimStyle;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromPlayerInput;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_WeaponStatus.WBP_WeaponStatus_C.ExecuteUbergraph_WBP_WeaponStatus
	 */
	struct UWBP_WeaponStatus_C_ExecuteUbergraph_WBP_WeaponStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
