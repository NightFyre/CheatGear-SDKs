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
	 * Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.OnSpawn
	 */
	struct ULesson_18_ToggleGasMask_C_OnSpawn_Params
	{
	public:
		class AINSSoldier*                                         bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.GearIsGasMask
	 */
	struct ULesson_18_ToggleGasMask_C_GearIsGasMask_Params
	{
	public:
		class AItemGear*                                           bpp__GearItem__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsGasmask__pf;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.BlueprintOnInitialized
	 */
	struct ULesson_18_ToggleGasMask_C_BlueprintOnInitialized_Params
	{
	public:
		class AINSBasePlayerController*                            bpp__NewOwningPlayerController__pf;                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSPlayerState*                                     bpp__NewPlayer__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Lesson_18_ToggleGasMask.Lesson_18_ToggleGasMask_C.OnPlayerEventDelegate__DelegateSignature
	 */
	struct ULesson_18_ToggleGasMask_C_OnPlayerEventDelegate__DelegateSignature_Params
	{
	public:
		class AINSSoldier*                                         bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
