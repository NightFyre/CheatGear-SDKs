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
	 * Function AITree_TedioreTurret_Sabre.AITree_TedioreTurret_Sabre_C.BndEvt__Priority_Shoot_or_Walk.BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret
	 */
	struct UAITree_TedioreTurret_Sabre_C_BndEvt__Priority_Shoot_or_Walk.BlackboardKey_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_TedioreTurret_Params
	{
	public:
		class AGbxAIController*                                    AIController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIActionBlueprintContext                           Context;                                                 // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function AITree_TedioreTurret_Sabre.AITree_TedioreTurret_Sabre_C.BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret
	 */
	struct UAITree_TedioreTurret_Sabre_C_BndEvt__Priority_Shoot_or_Walk_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret_Params
	{
	public:
		class AGbxAIController*                                    AIController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIActionBlueprintContext                           Context;                                                 // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		EAIActionResult                                            Result;                                                  // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AITree_TedioreTurret_Sabre.AITree_TedioreTurret_Sabre_C.BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret
	 */
	struct UAITree_TedioreTurret_Sabre_C_BndEvt__LeapDirect_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_TedioreTurret_Params
	{
	public:
		class AGbxAIController*                                    AIController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGbxCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIActionBlueprintContext                           Context;                                                 // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		EAIActionResult                                            Result;                                                  // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AITree_TedioreTurret_Sabre.AITree_TedioreTurret_Sabre_C.ExecuteUbergraph_AITree_TedioreTurret_Sabre
	 */
	struct UAITree_TedioreTurret_Sabre_C_ExecuteUbergraph_AITree_TedioreTurret_Sabre_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PPVA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
