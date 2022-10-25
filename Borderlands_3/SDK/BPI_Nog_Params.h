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
	 * Function BPI_Nog.BPI_Nog_C.Nog_BuffDrone_NotifyDestroyed
	 */
	struct UBPI_Nog_C_Nog_BuffDrone_NotifyDestroyed_Params
	{
	public:
		struct FDataTableRowHandle                                 NogBuff;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_SpawnBuffDrone
	 */
	struct UBPI_Nog_C_Nog_SpawnBuffDrone_Params
	{
	public:
		struct FDataTableRowHandle                                 NogBuff;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       FromDroneMesh;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Interrupt
	 */
	struct UBPI_Nog_C_Nog_DroneThrow_Interrupt_Params
	{
	public:
		bool                                                       IsHandL;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_Launch
	 */
	struct UBPI_Nog_C_Nog_DroneThrow_Launch_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHandL;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_DroneThrow_InHand
	 */
	struct UBPI_Nog_C_Nog_DroneThrow_InHand_Params
	{
	public:
		bool                                                       IsHandL;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_ToggleStaticDroneBoard
	 */
	struct UBPI_Nog_C_Nog_ToggleStaticDroneBoard_Params
	{
	public:
		bool                                                       EnableStaticBoard;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_SetImmuneToVehicleImpact
	 */
	struct UBPI_Nog_C_Nog_SetImmuneToVehicleImpact_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_MindControlled
	 */
	struct UBPI_Nog_C_Nog_MindControlled_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_GetMultiTargetAttackList
	 */
	struct UBPI_Nog_C_Nog_GetMultiTargetAttackList_Params
	{
	public:
		TArray<class AActor*>                                      TargetList;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_GetDroneMaterial
	 */
	struct UBPI_Nog_C_Nog_GetDroneMaterial_Params
	{
	public:
		class UMaterialInterface*                                  DroneMaterial;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_GetDroneHealthPctOfNog
	 */
	struct UBPI_Nog_C_Nog_GetDroneHealthPctOfNog_Params
	{
	public:
		float                                                      HealthPctOfNog;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_GetDroneContainer
	 */
	struct UBPI_Nog_C_Nog_GetDroneContainer_Params
	{
	public:
		class UOakNogDroneContainerComponent*                      DroneContainer;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_BuildMultiTargetAttackList
	 */
	struct UBPI_Nog_C_Nog_BuildMultiTargetAttackList_Params
	{	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_MultiTargetAttack_GetTarget
	 */
	struct UBPI_Nog_C_Nog_MultiTargetAttack_GetTarget_Params
	{
	public:
		int32_t                                                    TargetIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XKX6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OptionalDefaultTarget;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              MyTarget;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Nog.BPI_Nog_C.Nog_DeployLaserWire
	 */
	struct UBPI_Nog_C_Nog_DeployLaserWire_Params
	{
	public:
		int32_t                                                    WhichWave;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WNJP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              MyTarget;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
