#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function Occlusion.OcclusionService.OnPrimaryActorEndPlay
	 */
	struct UOcclusionService_OnPrimaryActorEndPlay_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Occlusion.OcclusionService.OnIgnoredActorEndPlay
	 */
	struct UOcclusionService_OnIgnoredActorEndPlay_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Occlusion.OcclusionService.AutomationSetShouldDisableAsync
	 */
	struct UOcclusionService_AutomationSetShouldDisableAsync_Params
	{
	public:
		bool                                                       InShouldDisableAsync;                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Occlusion.OcclusionService.AutomationGetShouldDisableAsync
	 */
	struct UOcclusionService_AutomationGetShouldDisableAsync_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
