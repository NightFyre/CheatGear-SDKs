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
	 * Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.GetIconForTeammate
	 */
	struct UWBP_InGameMap_PlayerBlip_C_GetIconForTeammate_Params
	{
	public:
		struct FVector                                             TeammateLocation;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DLXU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          NewParam;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.OnMouseButtonDown
	 */
	struct UWBP_InGameMap_PlayerBlip_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.Tick
	 */
	struct UWBP_InGameMap_PlayerBlip_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.Construct
	 */
	struct UWBP_InGameMap_PlayerBlip_C_Construct_Params
	{	};

	/**
	 * Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.UpdatePosition
	 */
	struct UWBP_InGameMap_PlayerBlip_C_UpdatePosition_Params
	{	};

	/**
	 * Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.SetTeamElementColour
	 */
	struct UWBP_InGameMap_PlayerBlip_C_SetTeamElementColour_Params
	{	};

	/**
	 * Function WBP_InGameMap_PlayerBlip.WBP_InGameMap_PlayerBlip_C.ExecuteUbergraph_WBP_InGameMap_PlayerBlip
	 */
	struct UWBP_InGameMap_PlayerBlip_C_ExecuteUbergraph_WBP_InGameMap_PlayerBlip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
