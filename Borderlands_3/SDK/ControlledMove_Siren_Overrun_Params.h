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
	 * Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnHitTargetable
	 */
	struct UControlledMove_Siren_Overrun_C_OnHitTargetable_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnServerStop
	 */
	struct UControlledMove_Siren_Overrun_C_OnServerStop_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.OnStop
	 */
	struct UControlledMove_Siren_Overrun_C_OnStop_Params
	{
	public:
		bool                                                       bInterrupted;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ControlledMove_Siren_Overrun.ControlledMove_Siren_Overrun_C.ExecuteUbergraph_ControlledMove_Siren_Overrun
	 */
	struct UControlledMove_Siren_Overrun_C_ExecuteUbergraph_ControlledMove_Siren_Overrun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
