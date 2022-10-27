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
	 * Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBegin
	 */
	struct UA_DigiClone_Melee_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnEnd
	 */
	struct UA_DigiClone_Melee_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FDNR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOnOperativeBlades
	 */
	struct UA_DigiClone_Melee_C_TurnOnOperativeBlades_Params
	{	};

	/**
	 * Function A_DigiClone_Melee.A_DigiClone_Melee_C.TurnOffOperativeBlades
	 */
	struct UA_DigiClone_Melee_C_TurnOffOperativeBlades_Params
	{	};

	/**
	 * Function A_DigiClone_Melee.A_DigiClone_Melee_C.OnBeginBringUpWeapon
	 */
	struct UA_DigiClone_Melee_C_OnBeginBringUpWeapon_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_DigiClone_Melee.A_DigiClone_Melee_C.AN_CloneMelee
	 */
	struct UA_DigiClone_Melee_C_AN_CloneMelee_Params
	{	};

	/**
	 * Function A_DigiClone_Melee.A_DigiClone_Melee_C.ExecuteUbergraph_A_DigiClone_Melee
	 */
	struct UA_DigiClone_Melee_C_ExecuteUbergraph_A_DigiClone_Melee_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
