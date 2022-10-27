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
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.UpdateCurrentRoundVisibility
	 */
	struct UBP_AmmoCount_PhysicalMag_C_UpdateCurrentRoundVisibility_Params
	{
	public:
		ESlateVisibility                                           NewVisibility;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.UpdateEmptyVisibility
	 */
	struct UBP_AmmoCount_PhysicalMag_C_UpdateEmptyVisibility_Params
	{
	public:
		class UImage*                                              MagazineImage;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              EmptyImage;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHasAmmo;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetEmptyMagImagePanel
	 */
	struct UBP_AmmoCount_PhysicalMag_C_GetEmptyMagImagePanel_Params
	{
	public:
		class UImage*                                              ImagePanel;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagImagePanel
	 */
	struct UBP_AmmoCount_PhysicalMag_C_GetMagImagePanel_Params
	{
	public:
		class UImage*                                              ImagePanel;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagazineVisible
	 */
	struct UBP_AmmoCount_PhysicalMag_C_GetMagazineVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMissingMagazineVisible
	 */
	struct UBP_AmmoCount_PhysicalMag_C_GetMissingMagazineVisible_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.SetMagFraction
	 */
	struct UBP_AmmoCount_PhysicalMag_C_SetMagFraction_Params
	{
	public:
		float                                                      Fraction;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7I4Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.SetContainerType
	 */
	struct UBP_AmmoCount_PhysicalMag_C_SetContainerType_Params
	{
	public:
		EAmmoContainerType                                         ContainerType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GEM7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagBackgroundColor
	 */
	struct UBP_AmmoCount_PhysicalMag_C_GetMagBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AmmoCount_PhysicalMag.BP_AmmoCount_PhysicalMag_C.GetMagForegroundColor
	 */
	struct UBP_AmmoCount_PhysicalMag_C_GetMagForegroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
