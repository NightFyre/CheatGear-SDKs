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
	 * Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.SetBrushOpacityByCaptureStatus
	 */
	struct UWBP_CaptureStatus_FlagIcon_C_SetBrushOpacityByCaptureStatus_Params
	{
	public:
		struct FSlateBrush                                         BrushToUpdate;                                           // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bLocked;                                                 // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHDControlPointObjectiveType                               ObjType;                                                 // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7IK7[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         NewBrush;                                                // 0x0090(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.TintBrushByTeam
	 */
	struct UWBP_CaptureStatus_FlagIcon_C_TintBrushByTeam_Params
	{
	public:
		struct FSlateBrush                                         BrushToTint;                                             // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EHDTeam                                                    Team;                                                    // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H4HW[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSlateBrush                                         NewBrush;                                                // 0x0090(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.UpdateBrushesByTeam
	 */
	struct UWBP_CaptureStatus_FlagIcon_C_UpdateBrushesByTeam_Params
	{
	public:
		bool                                                       bLocked;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHDTeam                                                    Team;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHDControlPointObjectiveType                               ObjType;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.SetBrushes
	 */
	struct UWBP_CaptureStatus_FlagIcon_C_SetBrushes_Params
	{
	public:
		struct FSlateBrush                                         IconFrame;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSlateBrush                                         Bg;                                                      // 0x0088(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSlateBrush                                         Icon;                                                    // 0x0110(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.OnUpdateIcon
	 */
	struct UWBP_CaptureStatus_FlagIcon_C_OnUpdateIcon_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHDTeam                                                    Team;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHDControlPointObjectiveType                               ObjType;                                                 // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.PreConstruct
	 */
	struct UWBP_CaptureStatus_FlagIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.ExecuteUbergraph_WBP_CaptureStatus_FlagIcon
	 */
	struct UWBP_CaptureStatus_FlagIcon_C_ExecuteUbergraph_WBP_CaptureStatus_FlagIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
