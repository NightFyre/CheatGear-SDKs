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
	 * Function BP_Mk25.BP_Mk25_C.BndEvt__IronSight_K2Node_ComponentBoundEvent_2_OnSightZeroing__DelegateSignature
	 */
	struct ABP_Mk25_C_BndEvt__IronSight_K2Node_ComponentBoundEvent_2_OnSightZeroing__DelegateSignature_Params
	{
	public:
		class UGBSightComponent*                                   SightComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGBItem*                                             OwningItem;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RelativeZeroLocation;                                    // 0x0010(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RelativeLocationOffset;                                  // 0x001C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            RelativeRotationOffset;                                  // 0x0028(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mk25.BP_Mk25_C.BndEvt__FrontSightPost_K2Node_ComponentBoundEvent_3_OnRelativeLocationOffset__DelegateSignature
	 */
	struct ABP_Mk25_C_BndEvt__FrontSightPost_K2Node_ComponentBoundEvent_3_OnRelativeLocationOffset__DelegateSignature_Params
	{
	public:
		class UGBFrontSightPostComponent*                          FrontSightPostComponent;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RelativeLocationOffset;                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mk25.BP_Mk25_C.ExecuteUbergraph_BP_Mk25
	 */
	struct ABP_Mk25_C_ExecuteUbergraph_BP_Mk25_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FOU4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
