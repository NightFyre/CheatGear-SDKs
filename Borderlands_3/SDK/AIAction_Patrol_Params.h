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
	 * Function AIAction_Patrol.AIAction_Patrol_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol
	 */
	struct UAIAction_Patrol_C_BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol_Params
	{
	public:
		class AGbxAIController*                                    AIController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIActionBlueprintContext                           Context;                                                 // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function AIAction_Patrol.AIAction_Patrol_C.ExecuteUbergraph_AIAction_Patrol
	 */
	struct UAIAction_Patrol_C_ExecuteUbergraph_AIAction_Patrol_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5SWT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
