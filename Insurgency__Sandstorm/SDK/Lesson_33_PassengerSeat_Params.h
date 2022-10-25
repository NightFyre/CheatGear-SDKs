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
	 * Function Lesson_33_PassengerSeat.Lesson_33_PassengerSeat_C.OnNewSeatDelegate_Event_1
	 */
	struct ULesson_33_PassengerSeat_C_OnNewSeatDelegate_Event_1_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVehicleSeatComponent*                               bpp__NewSeat__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_33_PassengerSeat.Lesson_33_PassengerSeat_C.BlueprintOnInitialized
	 */
	struct ULesson_33_PassengerSeat_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_33_PassengerSeat.Lesson_33_PassengerSeat_C.OnNewSeatDelegate__DelegateSignature
	 */
	struct ULesson_33_PassengerSeat_C_OnNewSeatDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVehicleSeatComponent*                               bpp__NewSeat__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
