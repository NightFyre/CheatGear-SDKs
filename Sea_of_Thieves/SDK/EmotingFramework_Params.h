#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function EmotingFramework.EmoteDice.SetDiceMesh
	 */
	struct AEmoteDice_SetDiceMesh_Params
	{
	public:
		EDiceType                                                  DiceType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotingFramework.EmoteDice.SendTelemetryData
	 */
	struct AEmoteDice_SendTelemetryData_Params
	{
	public:
		struct FTransform                                          OrientationUsed;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    RollNumber;                                              // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDiceType                                                  DiceType;                                                // 0x0034(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EmotingFramework.EmoteDice.RollDice
	 */
	struct AEmoteDice_RollDice_Params
	{
	public:
		int32_t                                                    RollNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDiceType                                                  DiceType;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
