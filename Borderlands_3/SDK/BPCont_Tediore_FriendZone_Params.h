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
	 * Function BPCont_Tediore_FriendZone.BPCont_Tediore_FriendZone_C.UserConstructionScript
	 */
	struct ABPCont_Tediore_FriendZone_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPCont_Tediore_FriendZone.BPCont_Tediore_FriendZone_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret
	 */
	struct ABPCont_Tediore_FriendZone_C_BndEvt__Targeting_K2Node_ComponentBoundEvent_4_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_TedioreTurret_Params
	{
	public:
		class UTargetingComponent*                                 TargetingComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPCont_Tediore_FriendZone.BPCont_Tediore_FriendZone_C.ExecuteUbergraph_BPCont_Tediore_FriendZone
	 */
	struct ABPCont_Tediore_FriendZone_C_ExecuteUbergraph_BPCont_Tediore_FriendZone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q7W1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
