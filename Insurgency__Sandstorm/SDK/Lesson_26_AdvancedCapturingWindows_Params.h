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
	 * Function Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.OnScoreObjectiveCapturedDelegate_Event_1
	 */
	struct ULesson_26_AdvancedCapturingWindows_C_OnScoreObjectiveCapturedDelegate_Event_1_Params
	{
	public:
		class AINSPlayerController*                                bpp__Capturer__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AObjectiveCapturable*                                bpp__Objective__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__OldOwners__pf;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__NewOwners__pf;                                      // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.BlueprintOnInitialized
	 */
	struct ULesson_26_AdvancedCapturingWindows_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_26_AdvancedCapturingWindows.Lesson_26_AdvancedCapturingWindows_C.OnScoreObjectiveCapturedDelegate__DelegateSignature
	 */
	struct ULesson_26_AdvancedCapturingWindows_C_OnScoreObjectiveCapturedDelegate__DelegateSignature_Params
	{
	public:
		class AINSPlayerController*                                bpp__Capturer__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AObjectiveCapturable*                                bpp__Objective__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__OldOwners__pf;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              bpp__NewOwners__pf;                                      // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
