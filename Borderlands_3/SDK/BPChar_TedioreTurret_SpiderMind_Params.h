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
	 * Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.UserConstructionScript
	 */
	struct ABPChar_TedioreTurret_SpiderMind_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.ReceiveBeginPlay
	 */
	struct ABPChar_TedioreTurret_SpiderMind_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.InitializeWeapon
	 */
	struct ABPChar_TedioreTurret_SpiderMind_C_InitializeWeapon_Params
	{	};

	/**
	 * Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret
	 */
	struct ABPChar_TedioreTurret_SpiderMind_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1EL9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPChar_TedioreTurret_SpiderMind.BPChar_TedioreTurret_SpiderMind_C.ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind
	 */
	struct ABPChar_TedioreTurret_SpiderMind_C_ExecuteUbergraph_BPChar_TedioreTurret_SpiderMind_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
