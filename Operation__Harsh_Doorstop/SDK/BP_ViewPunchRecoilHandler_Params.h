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
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetController
	 */
	struct UBP_ViewPunchRecoilHandler_C_GetController_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetControlRotation
	 */
	struct UBP_ViewPunchRecoilHandler_C_GetControlRotation_Params
	{
	public:
		struct FRotator                                            ViewRotation;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VE79[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.GetConeOfFireOffset
	 */
	struct UBP_ViewPunchRecoilHandler_C_GetConeOfFireOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponFire
	 */
	struct UBP_ViewPunchRecoilHandler_C_OnWeaponFire_Params
	{	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ViewPunch
	 */
	struct UBP_ViewPunchRecoilHandler_C_ViewPunch_Params
	{	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnTick
	 */
	struct UBP_ViewPunchRecoilHandler_C_OnTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ComputeConeOfFire
	 */
	struct UBP_ViewPunchRecoilHandler_C_ComputeConeOfFire_Params
	{
	public:
		float                                                      DT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ComputeRecoil
	 */
	struct UBP_ViewPunchRecoilHandler_C_ComputeRecoil_Params
	{
	public:
		float                                                      DT;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponStopFire
	 */
	struct UBP_ViewPunchRecoilHandler_C_OnWeaponStopFire_Params
	{	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.OnWeaponStartFire
	 */
	struct UBP_ViewPunchRecoilHandler_C_OnWeaponStartFire_Params
	{	};

	/**
	 * Function BP_ViewPunchRecoilHandler.BP_ViewPunchRecoilHandler_C.ExecuteUbergraph_BP_ViewPunchRecoilHandler
	 */
	struct UBP_ViewPunchRecoilHandler_C_ExecuteUbergraph_BP_ViewPunchRecoilHandler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YHWX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
