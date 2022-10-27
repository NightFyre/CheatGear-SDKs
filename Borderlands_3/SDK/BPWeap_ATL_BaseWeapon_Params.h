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
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitHoming
	 */
	struct ABPWeap_ATL_BaseWeapon_C_InitHoming_Params
	{	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitMarkerGlow
	 */
	struct ABPWeap_ATL_BaseWeapon_C_InitMarkerGlow_Params
	{	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.InitBaseGlow
	 */
	struct ABPWeap_ATL_BaseWeapon_C_InitBaseGlow_Params
	{	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.AddHomingTarget
	 */
	struct ABPWeap_ATL_BaseWeapon_C_AddHomingTarget_Params
	{
	public:
		class AActor*                                              HomingTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.RemoveHomingTarget
	 */
	struct ABPWeap_ATL_BaseWeapon_C_RemoveHomingTarget_Params
	{
	public:
		class AActor*                                              HomingTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.UserConstructionScript
	 */
	struct ABPWeap_ATL_BaseWeapon_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Initialize Elemental Emissive
	 */
	struct ABPWeap_ATL_BaseWeapon_C_Initialize_Elemental_Emissive_Params
	{	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.NotifySwitchedMode_Event
	 */
	struct ABPWeap_ATL_BaseWeapon_C_NotifySwitchedMode_Event_Params
	{	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.SetEmissiveData
	 */
	struct ABPWeap_ATL_BaseWeapon_C_SetEmissiveData_Params
	{
	public:
		struct FLinearColor                                        BaseColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HighlightColor;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MarkerBaseColor;                                         // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MarkerHighlightColor;                                    // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HomingOverrideBase;                                      // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NewParamHomingOverrideHighlight;                         // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReEvaluateEmissive
	 */
	struct ABPWeap_ATL_BaseWeapon_C_ReEvaluateEmissive_Params
	{	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ReceiveBeginPlay
	 */
	struct ABPWeap_ATL_BaseWeapon_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Notify_ReloadStarted
	 */
	struct ABPWeap_ATL_BaseWeapon_C_Notify_ReloadStarted_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.Weapon_NotifyPutDown
	 */
	struct ABPWeap_ATL_BaseWeapon_C_Weapon_NotifyPutDown_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPWeap_ATL_BaseWeapon.BPWeap_ATL_BaseWeapon_C.ExecuteUbergraph_BPWeap_ATL_BaseWeapon
	 */
	struct ABPWeap_ATL_BaseWeapon_C_ExecuteUbergraph_BPWeap_ATL_BaseWeapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
