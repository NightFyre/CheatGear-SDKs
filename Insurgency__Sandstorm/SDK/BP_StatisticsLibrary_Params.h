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
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.SetConsoleAchievementIcons
	 */
	struct UBP_StatisticsLibrary_C_SetConsoleAchievementIcons_Params
	{
	public:
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.Is Slot Has Sub Slots
	 */
	struct UBP_StatisticsLibrary_C_Is_Slot_Has_Sub_Slots_Params
	{
	public:
		ECharacterAppearanceSlot                                   bpp__Slot__pf;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DWRP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bSubSlots__pf;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.Get Achievement Icon
	 */
	struct UBP_StatisticsLibrary_C_Get_Achievement_Icon_Params
	{
	public:
		bool                                                       bpp__IsAchieved__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AYGF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__AchievementName__pf;                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CYK8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSlateBrush                                         bpp__SlateBrushOut__pf;                                  // 0x0018(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetWeaponIconClass
	 */
	struct UBP_StatisticsLibrary_C_GetWeaponIconClass_Params
	{
	public:
		class FString                                              bpp__WeaponName__pf__const;                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetTextureForRank
	 */
	struct UBP_StatisticsLibrary_C_GetTextureForRank_Params
	{
	public:
		int32_t                                                    bpp__PlayerRank__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DZ4H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          bpp__RankTexture__pf;                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetRarityColor
	 */
	struct UBP_StatisticsLibrary_C_GetRarityColor_Params
	{
	public:
		ECollectibleRarity                                         bpp__Rarity__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B504[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        bpp__RarityColor__pf;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetFireSupportIconByName
	 */
	struct UBP_StatisticsLibrary_C_GetFireSupportIconByName_Params
	{
	public:
		class FString                                              bpp__SupportName__pf__const;                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          bpp__OutputTexture__pf;                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetColorForRank
	 */
	struct UBP_StatisticsLibrary_C_GetColorForRank_Params
	{
	public:
		int32_t                                                    bpp__PlayerRank__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VBHX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSlateColor                                         bpp__RankTexture__pf;                                    // 0x0010(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_StatisticsLibrary.BP_StatisticsLibrary_C.GetClassIconByName
	 */
	struct UBP_StatisticsLibrary_C_GetClassIconByName_Params
	{
	public:
		class FString                                              bpp__PlayerClassName__pf__const;                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__TeamId__pf;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OD3E[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             bpp____WorldContext__pf;                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          bpp__PlayerClassIcon__pf;                                // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
