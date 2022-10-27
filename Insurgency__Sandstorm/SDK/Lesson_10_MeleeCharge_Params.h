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
	 * Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.UpdateSprintDistance
	 */
	struct ULesson_10_MeleeCharge_C_UpdateSprintDistance_Params
	{
	public:
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnUpdatePosition
	 */
	struct ULesson_10_MeleeCharge_C_OnUpdatePosition_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnStartSprint
	 */
	struct ULesson_10_MeleeCharge_C_OnStartSprint_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnPlayerSpawned
	 */
	struct ULesson_10_MeleeCharge_C_OnPlayerSpawned_Params
	{
	public:
		class AINSSoldier*                                         bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnEndSprint
	 */
	struct ULesson_10_MeleeCharge_C_OnEndSprint_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.CheckLessonTrigger
	 */
	struct ULesson_10_MeleeCharge_C_CheckLessonTrigger_Params
	{
	public:
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.BlueprintOnInitialized
	 */
	struct ULesson_10_MeleeCharge_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnPlayerEventDelegate__DelegateSignature
	 */
	struct ULesson_10_MeleeCharge_C_OnPlayerEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_10_MeleeCharge.Lesson_10_MeleeCharge_C.OnMovementEventDelegate__DelegateSignature
	 */
	struct ULesson_10_MeleeCharge_C_OnMovementEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
