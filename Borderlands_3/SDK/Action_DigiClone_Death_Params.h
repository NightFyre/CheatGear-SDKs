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
	 * Function Action_DigiClone_Death.Action_DigiClone_Death_C.OnServerBegin
	 */
	struct UAction_DigiClone_Death_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_DigiClone_Death.Action_DigiClone_Death_C.PlayDeathCE
	 */
	struct UAction_DigiClone_Death_C_PlayDeathCE_Params
	{	};

	/**
	 * Function Action_DigiClone_Death.Action_DigiClone_Death_C.OnServerEnd
	 */
	struct UAction_DigiClone_Death_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_21CJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_DigiClone_Death.Action_DigiClone_Death_C.PlayScriptDeath
	 */
	struct UAction_DigiClone_Death_C_PlayScriptDeath_Params
	{	};

	/**
	 * Function Action_DigiClone_Death.Action_DigiClone_Death_C.ExecuteUbergraph_Action_DigiClone_Death
	 */
	struct UAction_DigiClone_Death_C_ExecuteUbergraph_Action_DigiClone_Death_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2VUA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
