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
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetPlayerTeam
	 */
	struct UWBP_HDVictoryMenuBase_C_GetPlayerTeam_Params
	{
	public:
		EHDTeam                                                    PlayerTeam;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetMusicTrackToUse
	 */
	struct UWBP_HDVictoryMenuBase_C_GetMusicTrackToUse_Params
	{
	public:
		EHDTeam                                                    PlayerTeam;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPlayerWon;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GAAY[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          SoundToUse;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.PlayWinLossMenuMusic
	 */
	struct UWBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupTeamScoreText
	 */
	struct UWBP_HDVictoryMenuBase_C_SetupTeamScoreText_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupGameModeNameText
	 */
	struct UWBP_HDVictoryMenuBase_C_SetupGameModeNameText_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupElapsedTimeText
	 */
	struct UWBP_HDVictoryMenuBase_C_SetupElapsedTimeText_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupMapNameText
	 */
	struct UWBP_HDVictoryMenuBase_C_SetupMapNameText_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupForceNameText
	 */
	struct UWBP_HDVictoryMenuBase_C_SetupForceNameText_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupVictoryText
	 */
	struct UWBP_HDVictoryMenuBase_C_SetupVictoryText_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDoubleClick
	 */
	struct UWBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDown
	 */
	struct UWBP_HDVictoryMenuBase_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.Construct
	 */
	struct UWBP_HDVictoryMenuBase_C_Construct_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnVictoryInit
	 */
	struct UWBP_HDVictoryMenuBase_C_OnVictoryInit_Params
	{	};

	/**
	 * Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.ExecuteUbergraph_WBP_HDVictoryMenuBase
	 */
	struct UWBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MRIP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
