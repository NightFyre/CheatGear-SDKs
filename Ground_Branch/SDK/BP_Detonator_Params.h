#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_Detonator.BP_Detonator_C.DecodeKit
	 */
	struct ABP_Detonator_C_DecodeKit_Params
	{
	public:
		class UVaRestJsonObject*                                   ItemAsJson;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DecodedOwner;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             DecodedParentItem;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Detonator.BP_Detonator_C.UseMainHandPressed
	 */
	struct ABP_Detonator_C_UseMainHandPressed_Params
	{	};

	/**
	 * Function BP_Detonator.BP_Detonator_C.ServerDetonate
	 */
	struct ABP_Detonator_C_ServerDetonate_Params
	{	};

	/**
	 * Function BP_Detonator.BP_Detonator_C.ExecuteUbergraph_BP_Detonator
	 */
	struct ABP_Detonator_C_ExecuteUbergraph_BP_Detonator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Detonator.BP_Detonator_C.OnDetonatorUse__DelegateSignature
	 */
	struct ABP_Detonator_C_OnDetonatorUse__DelegateSignature_Params
	{
	public:
		class ABP_Detonator_C*                                     Detonator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
