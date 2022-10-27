#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function BaseProgressBar.BaseProgressBar_C.PercentageToUITextWOPercSign
	 */
	struct UBaseProgressBar_C_PercentageToUITextWOPercSign_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_63JQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                percentageString;                                        // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.GetAlarmThresholdHigh
	 */
	struct UBaseProgressBar_C_GetAlarmThresholdHigh_Params
	{
	public:
		float                                                      alarmThreshold;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHigh
	 */
	struct UBaseProgressBar_C_SetAlarmThresholdHigh_Params
	{
	public:
		float                                                      alarmThreshold;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThresholdHigh
	 */
	struct UBaseProgressBar_C_CheckAlarmThresholdHigh_Params
	{
	public:
		bool                                                       shouldAlarmBeOn;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHighActive
	 */
	struct UBaseProgressBar_C_SetAlarmThresholdHighActive_Params
	{
	public:
		bool                                                       shouldBeActive;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.GetIsAlarmOn
	 */
	struct UBaseProgressBar_C_GetIsAlarmOn_Params
	{
	public:
		bool                                                       isAlarmOn;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.PercentageToUIText
	 */
	struct UBaseProgressBar_C_PercentageToUIText_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AM64[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                percentageString;                                        // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.SetClamping
	 */
	struct UBaseProgressBar_C_SetClamping_Params
	{
	public:
		bool                                                       shouldEnableClamping;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.PercentageToText
	 */
	struct UBaseProgressBar_C_PercentageToText_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NNPA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                PercentageText;                                          // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.GetPreviousPercentage
	 */
	struct UBaseProgressBar_C_GetPreviousPercentage_Params
	{
	public:
		float                                                      prevPercentage;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThreshold
	 */
	struct UBaseProgressBar_C_CheckAlarmThreshold_Params
	{
	public:
		bool                                                       shouldAlarmBeOn;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOn
	 */
	struct UBaseProgressBar_C_AlarmSwitchOn_Params
	{	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOff
	 */
	struct UBaseProgressBar_C_AlarmSwitchOff_Params
	{	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.GetAlarmThreshold
	 */
	struct UBaseProgressBar_C_GetAlarmThreshold_Params
	{
	public:
		float                                                      alarmThreshold;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.SetAlarmThreshold
	 */
	struct UBaseProgressBar_C_SetAlarmThreshold_Params
	{
	public:
		float                                                      alarmThreshold;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.PercentageToString
	 */
	struct UBaseProgressBar_C_PercentageToString_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C3DQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              percentageString;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.PercentageToInt
	 */
	struct UBaseProgressBar_C_PercentageToInt_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    percentageInt;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.SetPreviousPercentage
	 */
	struct UBaseProgressBar_C_SetPreviousPercentage_Params
	{
	public:
		float                                                      previousPercentage;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.SavePercentageAsPrevious
	 */
	struct UBaseProgressBar_C_SavePercentageAsPrevious_Params
	{	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.OnPercentageChanged
	 */
	struct UBaseProgressBar_C_OnPercentageChanged_Params
	{	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.SetTitleBase
	 */
	struct UBaseProgressBar_C_SetTitleBase_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.GetTitleBase
	 */
	struct UBaseProgressBar_C_GetTitleBase_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.IncreasePercentage
	 */
	struct UBaseProgressBar_C_IncreasePercentage_Params
	{
	public:
		float                                                      IncreasePercentage;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.DecreasePercentage
	 */
	struct UBaseProgressBar_C_DecreasePercentage_Params
	{
	public:
		float                                                      DecreasePercentage;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.SetPercentage
	 */
	struct UBaseProgressBar_C_SetPercentage_Params
	{
	public:
		float                                                      percentInputToSet;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseProgressBar.BaseProgressBar_C.GetPercentage
	 */
	struct UBaseProgressBar_C_GetPercentage_Params
	{
	public:
		float                                                      Percentage;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
