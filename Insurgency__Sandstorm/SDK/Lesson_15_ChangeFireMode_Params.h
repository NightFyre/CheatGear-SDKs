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
	 * Function Lesson_15_ChangeFireMode.Lesson_15_ChangeFireMode_C.ShouldWeaponHintFiremode
	 */
	struct ULesson_15_ChangeFireMode_C_ShouldWeaponHintFiremode_Params
	{
	public:
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__ShouldHint__pf;                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_15_ChangeFireMode.Lesson_15_ChangeFireMode_C.ShouldSoldierSpawnHintFiremode
	 */
	struct ULesson_15_ChangeFireMode_C_ShouldSoldierSpawnHintFiremode_Params
	{
	public:
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__ShouldHint__pf;                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_15_ChangeFireMode.Lesson_15_ChangeFireMode_C.OnPlayerSpawn
	 */
	struct ULesson_15_ChangeFireMode_C_OnPlayerSpawn_Params
	{
	public:
		class AINSSoldier*                                         bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_15_ChangeFireMode.Lesson_15_ChangeFireMode_C.OnEquip
	 */
	struct ULesson_15_ChangeFireMode_C_OnEquip_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_15_ChangeFireMode.Lesson_15_ChangeFireMode_C.OnCycleFiremode
	 */
	struct ULesson_15_ChangeFireMode_C_OnCycleFiremode_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_15_ChangeFireMode.Lesson_15_ChangeFireMode_C.BlueprintOnInitialized
	 */
	struct ULesson_15_ChangeFireMode_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_15_ChangeFireMode.Lesson_15_ChangeFireMode_C.OnWeaponEventDelegate__DelegateSignature
	 */
	struct ULesson_15_ChangeFireMode_C_OnWeaponEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Interactor__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemWeapon*                                         bpp__Weapon__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_15_ChangeFireMode.Lesson_15_ChangeFireMode_C.OnPlayerEventDelegate__DelegateSignature
	 */
	struct ULesson_15_ChangeFireMode_C_OnPlayerEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
