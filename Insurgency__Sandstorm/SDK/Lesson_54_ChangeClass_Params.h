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
	 * Function Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.OnPlayerDeath
	 */
	struct ULesson_54_ChangeClass_C_OnPlayerDeath_Params
	{	};

	/**
	 * Function Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.BlueprintOnInitialized
	 */
	struct ULesson_54_ChangeClass_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_54_ChangeClass.Lesson_54_ChangeClass_C.OnPlayerDeathDelegate__DelegateSignature
	 */
	struct ULesson_54_ChangeClass_C_OnPlayerDeathDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
