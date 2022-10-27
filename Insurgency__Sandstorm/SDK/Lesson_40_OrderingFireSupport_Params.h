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
	 * Function Lesson_40_OrderingFireSupport.Lesson_40_OrderingFireSupport_C.OnEquipDelegate_Event_1
	 */
	struct ULesson_40_OrderingFireSupport_C_OnEquipDelegate_Event_1_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_40_OrderingFireSupport.Lesson_40_OrderingFireSupport_C.BlueprintOnInitialized
	 */
	struct ULesson_40_OrderingFireSupport_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_40_OrderingFireSupport.Lesson_40_OrderingFireSupport_C.OnWeaponEventDelegate__DelegateSignature
	 */
	struct ULesson_40_OrderingFireSupport_C_OnWeaponEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
