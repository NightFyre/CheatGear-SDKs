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
	 * Function Lesson_25_CapturingObjectives.Lesson_25_CapturingObjectives_C.OnObjectiveBeginOverlapDelegate_Event_1
	 */
	struct ULesson_25_CapturingObjectives_C_OnObjectiveBeginOverlapDelegate_Event_1_Params
	{
	public:
		class AINSPlayerController*                                bpp__Capturer__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AObjectiveBase*                                      bpp__Objective__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_25_CapturingObjectives.Lesson_25_CapturingObjectives_C.BlueprintOnInitialized
	 */
	struct ULesson_25_CapturingObjectives_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_25_CapturingObjectives.Lesson_25_CapturingObjectives_C.OnObjectiveBeginOverlapDelegate__DelegateSignature
	 */
	struct ULesson_25_CapturingObjectives_C_OnObjectiveBeginOverlapDelegate__DelegateSignature_Params
	{
	public:
		class AINSPlayerController*                                bpp__Capturer__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AObjectiveBase*                                      bpp__Objective__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
