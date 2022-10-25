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
	 * Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.UserConstructionScript
	 */
	struct ABPChar_TedioreTurret_PS_Sabre_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ReceiveBeginPlay
	 */
	struct ABPChar_TedioreTurret_PS_Sabre_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Fired
	 */
	struct ABPChar_TedioreTurret_PS_Sabre_C_Fired_Params
	{
	public:
		class AWeapon*                                             EventWeapon;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Reload2
	 */
	struct ABPChar_TedioreTurret_PS_Sabre_C_Reload2_Params
	{
	public:
		bool                                                       bAutoReload;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.K2_OnMovementModeChanged
	 */
	struct ABPChar_TedioreTurret_PS_Sabre_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre
	 */
	struct ABPChar_TedioreTurret_PS_Sabre_C_ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RWDI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
