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
	 * Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonCreateLightProjectile
	 */
	struct UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonCreateLightProjectile_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonSetState
	 */
	struct UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonSetState_Params
	{
	public:
		EOperativeShoulderCannon                                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonReload
	 */
	struct UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonReload_Params
	{
	public:
		bool                                                       Start;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeRemoveShoulderCannon
	 */
	struct UInterface_IO_Operative_ShoulderCannon_C_OperativeRemoveShoulderCannon_Params
	{
	public:
		bool                                                       Fast;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeShoulderCannonDigistructFinished
	 */
	struct UInterface_IO_Operative_ShoulderCannon_C_OperativeShoulderCannonDigistructFinished_Params
	{
	public:
		bool                                                       DigistructIn;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       res;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C.OperativeFireShoulderCannon
	 */
	struct UInterface_IO_Operative_ShoulderCannon_C_OperativeFireShoulderCannon_Params
	{
	public:
		bool                                                       res;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
