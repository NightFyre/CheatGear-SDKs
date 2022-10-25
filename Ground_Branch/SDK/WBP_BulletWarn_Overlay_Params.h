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
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.Construct
	 */
	struct UWBP_BulletWarn_Overlay_C_Construct_Params
	{	};

	/**
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitBack
	 */
	struct UWBP_BulletWarn_Overlay_C_HitBack_Params
	{	};

	/**
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitLeft
	 */
	struct UWBP_BulletWarn_Overlay_C_HitLeft_Params
	{	};

	/**
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitRight
	 */
	struct UWBP_BulletWarn_Overlay_C_HitRight_Params
	{	};

	/**
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitDown
	 */
	struct UWBP_BulletWarn_Overlay_C_HitDown_Params
	{	};

	/**
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitUp
	 */
	struct UWBP_BulletWarn_Overlay_C_HitUp_Params
	{	};

	/**
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.HitForward
	 */
	struct UWBP_BulletWarn_Overlay_C_HitForward_Params
	{	};

	/**
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.OnPlayerControllerBulletWarn_Event_1
	 */
	struct UWBP_BulletWarn_Overlay_C_OnPlayerControllerBulletWarn_Event_1_Params
	{
	public:
		struct FVector                                             ViewLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BulletLocation;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCanCrack;                                               // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_BulletWarn_Overlay.WBP_BulletWarn_Overlay_C.ExecuteUbergraph_WBP_BulletWarn_Overlay
	 */
	struct UWBP_BulletWarn_Overlay_C_ExecuteUbergraph_WBP_BulletWarn_Overlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UR8Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
