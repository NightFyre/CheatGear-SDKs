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
	 * Function Lesson_37_BasicFireSupportWindows.Lesson_37_BasicFireSupportWindows_C.OnPlayerClassChanged_Event_1
	 */
	struct ULesson_37_BasicFireSupportWindows_C_OnPlayerClassChanged_Event_1_Params
	{
	public:
		class AINSSoldier*                                         bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_37_BasicFireSupportWindows.Lesson_37_BasicFireSupportWindows_C.BlueprintOnInitialized
	 */
	struct ULesson_37_BasicFireSupportWindows_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_37_BasicFireSupportWindows.Lesson_37_BasicFireSupportWindows_C.OnPlayerEventDelegate__DelegateSignature
	 */
	struct ULesson_37_BasicFireSupportWindows_C_OnPlayerEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
