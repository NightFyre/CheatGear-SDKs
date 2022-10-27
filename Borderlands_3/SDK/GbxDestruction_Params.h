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
	 * Function GbxDestruction.GbxDestructibleActor.SetFracturable
	 */
	struct AGbxDestructibleActor_SetFracturable_Params
	{
	public:
		bool                                                       bFracturable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDestruction.GbxDestructibleActor.OnRep_TransformBuffer
	 */
	struct AGbxDestructibleActor_OnRep_TransformBuffer_Params
	{	};

	/**
	 * Function GbxDestruction.GbxDestructibleActor.OnRep_SyncID
	 */
	struct AGbxDestructibleActor_OnRep_SyncID_Params
	{	};

	/**
	 * Function GbxDestruction.GbxDestructibleActor.OnRep_FractureBuffer
	 */
	struct AGbxDestructibleActor_OnRep_FractureBuffer_Params
	{	};

	/**
	 * Function GbxDestruction.GbxDestructibleComponent.SetFracturable
	 */
	struct UGbxDestructibleComponent_SetFracturable_Params
	{
	public:
		bool                                                       bFracturable;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDestruction.GbxDestructibleComponent.GetTotalPercentFractured
	 */
	struct UGbxDestructibleComponent_GetTotalPercentFractured_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDestruction.GbxDestructibleComponent.GetDamageRequiredToFracture
	 */
	struct UGbxDestructibleComponent_GetDamageRequiredToFracture_Params
	{
	public:
		int32_t                                                    Depth;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GbxDestruction.GbxDestructibleComponent.FractureRandomChunk
	 */
	struct UGbxDestructibleComponent_FractureRandomChunk_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
