#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.SetFootstepNotifyProps
	 */
	struct UAnimNotify_PlayFootstepFX_SetFootstepNotifyProps_Params
	{
	public:
		struct FFootstepFXSettings                                 PropsToUse;                                              // 0x0000(0x00F8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.GetFootstepNotifyProps
	 */
	struct UAnimNotify_PlayFootstepFX_GetFootstepNotifyProps_Params
	{
	public:
		struct FFootstepFXSettings                                 ReturnValue;                                             // 0x0000(0x00F8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.AnimNotify_PlayFootstepFX.EqualProps
	 */
	struct UAnimNotify_PlayFootstepFX_EqualProps_Params
	{
	public:
		struct FFootstepFXSettings                                 Props;                                                   // 0x0000(0x00F8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FFootstepFXSettings                                 OtherProps;                                              // 0x00F8(0x00F8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.DFCharacterAnimInstance.TryGetOwnerWeapon
	 */
	struct UDFCharacterAnimInstance_TryGetOwnerWeapon_Params
	{
	public:
		class ADFBaseItem*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.DFCharacterAnimInstance.TryGetControllerOwner
	 */
	struct UDFCharacterAnimInstance_TryGetControllerOwner_Params
	{
	public:
		class AController*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.DFCharacterAnimInstance.EquippedWeaponChanged
	 */
	struct UDFCharacterAnimInstance_EquippedWeaponChanged_Params
	{
	public:
		class ADFBaseCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBaseItem*                                         NewEquippedWeap;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADFBaseItem*                                         PrevEquippedWeap;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdatePawnOwnerRefs
	 */
	struct UDFCharacterAnimInstance_BlueprintUpdatePawnOwnerRefs_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdateEquippedWeaponRefs
	 */
	struct UDFCharacterAnimInstance_BlueprintUpdateEquippedWeaponRefs_Params
	{
	public:
		class ADFBaseItem*                                         NewWeap;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.DFCharacterAnimInstance.BlueprintUpdateControllerOwnerRefs
	 */
	struct UDFCharacterAnimInstance_BlueprintUpdateControllerOwnerRefs_Params
	{
	public:
		class AController*                                         NewC;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.DFWeaponAnimInstance.TryGetWeaponOwner
	 */
	struct UDFWeaponAnimInstance_TryGetWeaponOwner_Params
	{
	public:
		class ADFBaseWeapon*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DonkehFrameworkAnim.DFWeaponAnimInstance.BlueprintUpdateWeaponOwnerRefs
	 */
	struct UDFWeaponAnimInstance_BlueprintUpdateWeaponOwnerRefs_Params
	{
	public:
		class ADFBaseWeapon*                                       NewWeap;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
