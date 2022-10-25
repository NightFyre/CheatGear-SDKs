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
	 * Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnLowAmmoWantsAmmoCheck
	 */
	struct ULesson_12_AmmoCheck_C_OnLowAmmoWantsAmmoCheck_Params
	{	};

	/**
	 * Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnAmmoCheckDelegate
	 */
	struct ULesson_12_AmmoCheck_C_OnAmmoCheckDelegate_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.BlueprintOnInitialized
	 */
	struct ULesson_12_AmmoCheck_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnWeaponEventDelegate__DelegateSignature
	 */
	struct ULesson_12_AmmoCheck_C_OnWeaponEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_12_AmmoCheck.Lesson_12_AmmoCheck_C.OnShouldHintAmmoCheckDelegate__DelegateSignature
	 */
	struct ULesson_12_AmmoCheck_C_OnShouldHintAmmoCheckDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
