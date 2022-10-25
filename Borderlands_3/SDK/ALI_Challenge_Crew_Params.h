#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.PlayVO
	 */
	struct UALI_Challenge_Crew_C_PlayVO_Params
	{
	public:
		struct FDialogTimeSlotReference                            Dialog;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class AActor*                                              CompletedPlayer;                                         // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDialogConversation                                 Conversation;                                            // 0x0048(0x000C)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X4Z1[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.ShowTutorialPopup
	 */
	struct UALI_Challenge_Crew_C_ShowTutorialPopup_Params
	{
	public:
		class UGameInstance*                                       GameInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AOakPlayerController*                                TargetPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.CompletedChallenge
	 */
	struct UALI_Challenge_Crew_C_CompletedChallenge_Params
	{
	public:
		class AGbxPlayerController*                                CompletedPlayer;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALI_Challenge_Crew.ALI_Challenge_Crew_C.ExecuteUbergraph_ALI_Challenge_Crew
	 */
	struct UALI_Challenge_Crew_C_ExecuteUbergraph_ALI_Challenge_Crew_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_889O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
