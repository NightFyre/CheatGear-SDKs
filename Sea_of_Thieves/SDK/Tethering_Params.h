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
	 * Function Tethering.DynamicCordRenderComponent.SetCordEndPointB
	 */
	struct UDynamicCordRenderComponent_SetCordEndPointB_Params
	{
	public:
		class USceneComponent*                                     EndPointB;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tethering.DynamicCordRenderComponent.SetCordEndPointA
	 */
	struct UDynamicCordRenderComponent_SetCordEndPointA_Params
	{
	public:
		class USceneComponent*                                     EndPointA;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
