#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickRot
	 */
	struct UBP_HDCharacterLeanHandler_C_TickRot_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJJ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickYOffset
	 */
	struct UBP_HDCharacterLeanHandler_C_TickYOffset_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YGBP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.TickXOffset
	 */
	struct UBP_HDCharacterLeanHandler_C_TickXOffset_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RT7U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPSpringArmComp
	 */
	struct UBP_HDCharacterLeanHandler_C_GetFPPSpringArmComp_Params
	{
	public:
		class USpringArmComponent*                                 FPPSpringArm;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPCameraComp
	 */
	struct UBP_HDCharacterLeanHandler_C_GetFPPCameraComp_Params
	{
	public:
		class UCameraComponent*                                    FPPCamera;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.GetFPPMeshComp
	 */
	struct UBP_HDCharacterLeanHandler_C_GetFPPMeshComp_Params
	{
	public:
		class USkeletalMeshComponent*                              FPPMesh;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ReceiveTick
	 */
	struct UBP_HDCharacterLeanHandler_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HDCharacterLeanHandler.BP_HDCharacterLeanHandler_C.ExecuteUbergraph_BP_HDCharacterLeanHandler
	 */
	struct UBP_HDCharacterLeanHandler_C_ExecuteUbergraph_BP_HDCharacterLeanHandler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5Z6N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
