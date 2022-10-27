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
	 * Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.OnNewSeat
	 */
	struct ULesson_31_BasicDriving_ForGamepad_C_OnNewSeat_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVehicleSeatComponent*                               bpp__NewSeat__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.EnterDriverSeat
	 */
	struct ULesson_31_BasicDriving_ForGamepad_C_EnterDriverSeat_Params
	{
	public:
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.CheckIfDriverMoved
	 */
	struct ULesson_31_BasicDriving_ForGamepad_C_CheckIfDriverMoved_Params
	{	};

	/**
	 * Function Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.BlueprintOnInitialized
	 */
	struct ULesson_31_BasicDriving_ForGamepad_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_31_BasicDriving_ForGamepad.Lesson_31_BasicDriving_ForGamepad_C.OnNewSeatDelegate__DelegateSignature
	 */
	struct ULesson_31_BasicDriving_ForGamepad_C_OnNewSeatDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVehicleSeatComponent*                               bpp__NewSeat__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
