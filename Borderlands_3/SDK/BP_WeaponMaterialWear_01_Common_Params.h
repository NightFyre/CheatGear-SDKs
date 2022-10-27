#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function BP_WeaponMaterialWear_01_Common.BP_WeaponMaterialWear_01_Common_C.OnInitializeBalanceState
	 */
	struct UBP_WeaponMaterialWear_01_Common_C_OnInitializeBalanceState_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponMaterialWear_01_Common.BP_WeaponMaterialWear_01_Common_C.OnInitializeComponent
	 */
	struct UBP_WeaponMaterialWear_01_Common_C_OnInitializeComponent_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponMaterialWear_01_Common.BP_WeaponMaterialWear_01_Common_C.OnBeginPlay
	 */
	struct UBP_WeaponMaterialWear_01_Common_C_OnBeginPlay_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponMaterialWear_01_Common.BP_WeaponMaterialWear_01_Common_C.ExecuteUbergraph_BP_WeaponMaterialWear_01_Common
	 */
	struct UBP_WeaponMaterialWear_01_Common_C_ExecuteUbergraph_BP_WeaponMaterialWear_01_Common_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VH2C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
