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
	 * Function BP_LessonHint.BP_LessonHint_C.NeedRebindInputs
	 */
	struct UBP_LessonHint_C_NeedRebindInputs_Params
	{
	public:
		bool                                                       bIsCentered;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.UpdateFade
	 */
	struct UBP_LessonHint_C_UpdateFade_Params
	{
	public:
		bool                                                       bin;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HORJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.StartFade
	 */
	struct UBP_LessonHint_C_StartFade_Params
	{
	public:
		bool                                                       bin;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3ROY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.Unload Loaded Movies
	 */
	struct UBP_LessonHint_C_Unload_Loaded_Movies_Params
	{	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.NotifyNewLesson
	 */
	struct UBP_LessonHint_C_NotifyNewLesson_Params
	{
	public:
		class UClass*                                              Lesson;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWantsToShowVideo;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.OnHintExpired
	 */
	struct UBP_LessonHint_C_OnHintExpired_Params
	{	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.MoreInfoPressed
	 */
	struct UBP_LessonHint_C_MoreInfoPressed_Params
	{	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.Tick
	 */
	struct UBP_LessonHint_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.OnLessonVideoLoadedEvent
	 */
	struct UBP_LessonHint_C_OnLessonVideoLoadedEvent_Params
	{	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.OnNewHint
	 */
	struct UBP_LessonHint_C_OnNewHint_Params
	{
	public:
		struct FHintInfo                                           HintInfo;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.Construct
	 */
	struct UBP_LessonHint_C_Construct_Params
	{	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.PreConstruct
	 */
	struct UBP_LessonHint_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LessonHint.BP_LessonHint_C.ExecuteUbergraph_BP_LessonHint
	 */
	struct UBP_LessonHint_C_ExecuteUbergraph_BP_LessonHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
