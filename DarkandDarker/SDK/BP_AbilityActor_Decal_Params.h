#pragma once

/**
 * Name: Dark_and_Darker
 * Version: Playtest_3_Hotfix_1
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
	 * Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ReceiveBeginPlay
	 */
	struct ABP_AbilityActor_Decal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.SetReticleMaterialParamVector
	 */
	struct ABP_AbilityActor_Decal_C_SetReticleMaterialParamVector_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Value;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.OnParametersInitialized
	 */
	struct ABP_AbilityActor_Decal_C_OnParametersInitialized_Params
	{	};

	/**
	 * Function BP_AbilityActor_Decal.BP_AbilityActor_Decal_C.ExecuteUbergraph_BP_AbilityActor_Decal
	 */
	struct ABP_AbilityActor_Decal_C_ExecuteUbergraph_BP_AbilityActor_Decal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
