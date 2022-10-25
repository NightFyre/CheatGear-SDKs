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
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Stopped_Host
	 */
	struct UBPNPCFightForYourLifeComponent_C_Reviving_Stopped_Host_Params
	{
	public:
		bool                                                       IsHealed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.Reviving_Started_Host
	 */
	struct UBPNPCFightForYourLifeComponent_C_Reviving_Started_Host_Params
	{
	public:
		class AActor*                                              ActorBeingRevived;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReplenishHealthAndShields
	 */
	struct UBPNPCFightForYourLifeComponent_C_ReplenishHealthAndShields_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShieldPercent;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredStop
	 */
	struct UBPNPCFightForYourLifeComponent_C_InjuredStop_Params
	{	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.InjuredLive
	 */
	struct UBPNPCFightForYourLifeComponent_C_InjuredLive_Params
	{	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Stopped_Host
	 */
	struct UBPNPCFightForYourLifeComponent_C_BeingRevived_Stopped_Host_Params
	{	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.BeingRevived_Started_Host
	 */
	struct UBPNPCFightForYourLifeComponent_C_BeingRevived_Started_Host_Params
	{	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Finished_Host
	 */
	struct UBPNPCFightForYourLifeComponent_C_DownState_Finished_Host_Params
	{	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Stopped_Host
	 */
	struct UBPNPCFightForYourLifeComponent_C_DownState_Stopped_Host_Params
	{	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.DownState_Started_Host
	 */
	struct UBPNPCFightForYourLifeComponent_C_DownState_Started_Host_Params
	{	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ReceiveBeginPlay
	 */
	struct UBPNPCFightForYourLifeComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.OnRevivingState_StartHost_Event_1
	 */
	struct UBPNPCFightForYourLifeComponent_C_OnRevivingState_StartHost_Event_1_Params
	{
	public:
		class AActor*                                              ActorBeingRevived;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPNPCFightForYourLifeComponent.BPNPCFightForYourLifeComponent_C.ExecuteUbergraph_BPNPCFightForYourLifeComponent
	 */
	struct UBPNPCFightForYourLifeComponent_C_ExecuteUbergraph_BPNPCFightForYourLifeComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZO3E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
