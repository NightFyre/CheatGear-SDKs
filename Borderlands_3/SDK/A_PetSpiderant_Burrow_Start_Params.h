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
	 * Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5
	 */
	struct UA_PetSpiderant_Burrow_Start_C_GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5
	 */
	struct UA_PetSpiderant_Burrow_Start_C_GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5_Params
	{
	public:
		struct FHitResult                                          Result;                                                  // 0x0000(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.TraceToGround
	 */
	struct UA_PetSpiderant_Burrow_Start_C_TraceToGround_Params
	{	};

	/**
	 * Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.OnBegin
	 */
	struct UA_PetSpiderant_Burrow_Start_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.Notify_SetBurrowStance
	 */
	struct UA_PetSpiderant_Burrow_Start_C_Notify_SetBurrowStance_Params
	{	};

	/**
	 * Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.ExecuteUbergraph_A_PetSpiderant_Burrow_Start
	 */
	struct UA_PetSpiderant_Burrow_Start_C_ExecuteUbergraph_A_PetSpiderant_Burrow_Start_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GM8P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
