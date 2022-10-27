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
	 * Function Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.OnItemSelected
	 */
	struct ULesson_14_SwitchWeapons_C_OnItemSelected_Params
	{
	public:
		class AItemEquipable*                                      bpp__NewItem__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemEquipable*                                      bpp__PreviousItem__pf;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.BlueprintOnInitialized
	 */
	struct ULesson_14_SwitchWeapons_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_14_SwitchWeapons.Lesson_14_SwitchWeapons_C.EquipableItemSelectedDelegate__DelegateSignature
	 */
	struct ULesson_14_SwitchWeapons_C_EquipableItemSelectedDelegate__DelegateSignature_Params
	{
	public:
		class AItemEquipable*                                      bpp__NewItem__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemEquipable*                                      bpp__PreviousItem__pf;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
