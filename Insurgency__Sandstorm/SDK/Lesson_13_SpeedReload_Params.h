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
	 * Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnSuppressedLowAmmo
	 */
	struct ULesson_13_SpeedReload_C_OnSuppressedLowAmmo_Params
	{	};

	/**
	 * Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnSpeedReloadDelegate_Event_1
	 */
	struct ULesson_13_SpeedReload_C_OnSpeedReloadDelegate_Event_1_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnReloadDelegate_Event_1
	 */
	struct ULesson_13_SpeedReload_C_OnReloadDelegate_Event_1_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnEquip
	 */
	struct ULesson_13_SpeedReload_C_OnEquip_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.BlueprintOnInitialized
	 */
	struct ULesson_13_SpeedReload_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnWeaponEventDelegate__DelegateSignature
	 */
	struct ULesson_13_SpeedReload_C_OnWeaponEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_13_SpeedReload.Lesson_13_SpeedReload_C.OnHintSpeedReloadSuppressedLowAmmoDelegate__DelegateSignature
	 */
	struct ULesson_13_SpeedReload_C_OnHintSpeedReloadSuppressedLowAmmoDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
