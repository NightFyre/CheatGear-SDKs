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
	 * Function BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C.OnInitializeBalanceState
	 */
	struct UBP_WeaponMaterialWear_03_Rare_C_OnInitializeBalanceState_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C.OnInitializeComponent
	 */
	struct UBP_WeaponMaterialWear_03_Rare_C_OnInitializeComponent_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C.OnBeginPlay
	 */
	struct UBP_WeaponMaterialWear_03_Rare_C_OnBeginPlay_Params
	{
	public:
		class AActor*                                              InventoryActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryBalanceStateComponent*                     InventoryBalanceState;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WeaponMaterialWear_03_Rare.BP_WeaponMaterialWear_03_Rare_C.ExecuteUbergraph_BP_WeaponMaterialWear_03_Rare
	 */
	struct UBP_WeaponMaterialWear_03_Rare_C_ExecuteUbergraph_BP_WeaponMaterialWear_03_Rare_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_39RZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
