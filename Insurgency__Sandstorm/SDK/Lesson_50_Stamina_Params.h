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
	 * Function Lesson_50_Stamina.Lesson_50_Stamina_C.OnShouldHintStamina
	 */
	struct ULesson_50_Stamina_C_OnShouldHintStamina_Params
	{	};

	/**
	 * Function Lesson_50_Stamina.Lesson_50_Stamina_C.BlueprintOnInitialized
	 */
	struct ULesson_50_Stamina_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_50_Stamina.Lesson_50_Stamina_C.OnShouldHintStaminaDelegate__DelegateSignature
	 */
	struct ULesson_50_Stamina_C_OnShouldHintStaminaDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
