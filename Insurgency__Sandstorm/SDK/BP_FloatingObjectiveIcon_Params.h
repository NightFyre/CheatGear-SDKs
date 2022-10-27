#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.BlinkTheObjectiveBeingContested
	 */
	struct UBP_FloatingObjectiveIcon_C_BlinkTheObjectiveBeingContested_Params
	{	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateObjectiveLetter
	 */
	struct UBP_FloatingObjectiveIcon_C_UpdateObjectiveLetter_Params
	{	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.SetCapturableIcon
	 */
	struct UBP_FloatingObjectiveIcon_C_SetCapturableIcon_Params
	{
	public:
		bool                                                       bCapturable;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateOnScreenState
	 */
	struct UBP_FloatingObjectiveIcon_C_UpdateOnScreenState_Params
	{
	public:
		bool                                                       NewOnscreen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NCLY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FrontDot;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RightDot;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateDistanceText
	 */
	struct UBP_FloatingObjectiveIcon_C_UpdateDistanceText_Params
	{
	public:
		float                                                      NewDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E03B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.SetObjectiveType
	 */
	struct UBP_FloatingObjectiveIcon_C_SetObjectiveType_Params
	{	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconBgColor
	 */
	struct UBP_FloatingObjectiveIcon_C_GetIconBgColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconBorderColor
	 */
	struct UBP_FloatingObjectiveIcon_C_GetIconBorderColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.GetIconFillColor
	 */
	struct UBP_FloatingObjectiveIcon_C_GetIconFillColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.UpdateIcon
	 */
	struct UBP_FloatingObjectiveIcon_C_UpdateIcon_Params
	{
	public:
		float                                                      InDistance;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InFrontDot;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRightDot;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InIronsightFrac;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsOnScreen;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.OnSetObjective
	 */
	struct UBP_FloatingObjectiveIcon_C_OnSetObjective_Params
	{
	public:
		class AObjectiveBase*                                      NewObjective;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.Tick
	 */
	struct UBP_FloatingObjectiveIcon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.OnObjectiveChangeCapturingTeam
	 */
	struct UBP_FloatingObjectiveIcon_C_OnObjectiveChangeCapturingTeam_Params
	{
	public:
		class AObjectiveBase*                                      InObjective;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCapturers;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FloatingObjectiveIcon.BP_FloatingObjectiveIcon_C.ExecuteUbergraph_BP_FloatingObjectiveIcon
	 */
	struct UBP_FloatingObjectiveIcon_C_ExecuteUbergraph_BP_FloatingObjectiveIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
