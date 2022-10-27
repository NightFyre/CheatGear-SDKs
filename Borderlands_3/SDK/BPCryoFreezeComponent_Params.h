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
	 * Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ReceiveBeginPlay
	 */
	struct UBPCryoFreezeComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.OnGbxComponentFracture_Event_1
	 */
	struct UBPCryoFreezeComponent_C_OnGbxComponentFracture_Event_1_Params
	{
	public:
		struct FVector                                             FractureCentroid;                                        // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitDirection;                                            // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FracturePercent;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSilentFracture;                                         // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ExecuteUbergraph_BPCryoFreezeComponent
	 */
	struct UBPCryoFreezeComponent_C_ExecuteUbergraph_BPCryoFreezeComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GDJ8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
