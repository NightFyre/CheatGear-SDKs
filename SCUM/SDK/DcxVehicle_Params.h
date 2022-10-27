#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function DcxVehicle.DcxVehicle.GetVehicleWheels
	 */
	struct ADcxVehicle_GetVehicleWheels_Params
	{
	public:
		class UDcxVehicleWheelsComponent*                          ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicle.GetMesh
	 */
	struct ADcxVehicle_GetMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
	 */
	struct ADcxVehicle_DcxVehicleSetBasisVectors_Params
	{
	public:
		struct FVector                                             Up;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Forward;                                                 // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W
	 */
	struct ADcxVehicle4W_GetVehicleDrive4W_Params
	{
	public:
		class UDcxVehicleDriveComponent4W*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
	 */
	struct UDcxVehicleWheelsComponent_SetWheelOffset_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Offset;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
	 */
	struct UDcxVehicleWheelsComponent_SetWheelData_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDcxVehicleWheelData                                NewWheelData;                                            // 0x0004(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
	 */
	struct UDcxVehicleWheelsComponent_SetTire_Params
	{
	public:
		int32_t                                                    WheelId;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SC9M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDcxVehicleTire*                                     NewTire;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
	 */
	struct UDcxVehicleWheelsComponent_SetSuspensionData_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDcxVehicleSuspensionData                           NewSuspensionData;                                       // 0x0004(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
	 */
	struct UDcxVehicleWheelsComponent_SetGroupsToIgnore_Params
	{
	public:
		struct FNavAvoidanceMask                                   Mask;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
	 */
	struct UDcxVehicleWheelsComponent_SetGroupsToAvoid_Params
	{
	public:
		struct FNavAvoidanceMask                                   Mask;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
	 */
	struct UDcxVehicleWheelsComponent_SetChassisMass_Params
	{
	public:
		float                                                      Mass;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
	 */
	struct UDcxVehicleWheelsComponent_SetAvoidanceGroup_Params
	{
	public:
		struct FNavAvoidanceMask                                   Mask;                                                    // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
	 */
	struct UDcxVehicleWheelsComponent_ServerUpdateState_Params
	{
	public:
		struct FDcxAnalogControlArray                              AnalogControls;                                          // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDcxGear                                            CurrentGear;                                             // 0x0010(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDcxGear                                            TargetGear;                                              // 0x0014(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
	 */
	struct UDcxVehicleWheelsComponent_IsWheelDisabled_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
	 */
	struct UDcxVehicleWheelsComponent_GetWheelState_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8PY0[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDcxVehicleWheelState                               WheelState;                                              // 0x0010(0x00B0)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
	 */
	struct UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
	 */
	struct UDcxVehicleWheelsComponent_GetWheelRotationAngle_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
	 */
	struct UDcxVehicleWheelsComponent_GetWheelOffset_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
	 */
	struct UDcxVehicleWheelsComponent_GetWheelData_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDcxVehicleWheelData                                ReturnValue;                                             // 0x0004(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
	 */
	struct UDcxVehicleWheelsComponent_GetTire_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CTAB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDcxVehicleTire*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
	 */
	struct UDcxVehicleWheelsComponent_GetSuspensionData_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDcxVehicleSuspensionData                           ReturnValue;                                             // 0x0004(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
	 */
	struct UDcxVehicleWheelsComponent_GetRawInput_Params
	{
	public:
		class UDcxVehicleWheelsRawInput*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
	 */
	struct UDcxVehicleWheelsComponent_GetNumWheels_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
	 */
	struct UDcxVehicleWheelsComponent_GetForwardSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
	 */
	struct UDcxVehicleWheelsComponent_GetChassisMass_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
	 */
	struct UDcxVehicleWheelsComponent_GetBoneName_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
	 */
	struct UDcxVehicleWheelsComponent_GetAnalogControl_Params
	{
	public:
		unsigned char                                              Control;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GDHS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
	 */
	struct UDcxVehicleWheelsComponent_EnableWheel_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
	 */
	struct UDcxVehicleWheelsComponent_EnableAvoidance_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
	 */
	struct UDcxVehicleWheelsComponent_DisableWheel_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
	 */
	struct UDcxVehicleDriveComponent_SetTargetGear_Params
	{
	public:
		int32_t                                                    NewGear;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
	 */
	struct UDcxVehicleDriveComponent_SetGearboxType_Params
	{
	public:
		EDcxVehicleGearbox                                         NewGearboxType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
	 */
	struct UDcxVehicleDriveComponent_SetGearboxData_Params
	{
	public:
		struct FDcxVehicleGearboxData                              NewGearboxData;                                          // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
	 */
	struct UDcxVehicleDriveComponent_SetEngineRotationSpeed_Params
	{
	public:
		float                                                      RPM;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
	 */
	struct UDcxVehicleDriveComponent_SetEngineData_Params
	{
	public:
		struct FDcxVehicleEngineData                               NewEngineData;                                           // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
	 */
	struct UDcxVehicleDriveComponent_SetClutchData_Params
	{
	public:
		struct FDcxVehicleClutchData                               NewClutchData;                                           // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
	 */
	struct UDcxVehicleDriveComponent_GetTargetGear_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
	 */
	struct UDcxVehicleDriveComponent_GetGearboxType_Params
	{
	public:
		EDcxVehicleGearbox                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
	 */
	struct UDcxVehicleDriveComponent_GetGearboxData_Params
	{
	public:
		struct FDcxVehicleGearboxData                              ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
	 */
	struct UDcxVehicleDriveComponent_GetEngineRotationSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
	 */
	struct UDcxVehicleDriveComponent_GetEngineData_Params
	{
	public:
		struct FDcxVehicleEngineData                               ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
	 */
	struct UDcxVehicleDriveComponent_GetCurrentGear_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
	 */
	struct UDcxVehicleDriveComponent_GetClutchData_Params
	{
	public:
		struct FDcxVehicleClutchData                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
	 */
	struct UDcxVehicleDriveComponent4W_SetDifferentialData_Params
	{
	public:
		struct FDcxVehicleDifferentialData4W                       NewDifferentialData;                                     // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
	 */
	struct UDcxVehicleDriveComponent4W_GetRawInput4W_Params
	{
	public:
		class UDcxVehicleDriveRawInput4W*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
	 */
	struct UDcxVehicleDriveComponent4W_GetDifferentialData_Params
	{
	public:
		struct FDcxVehicleDifferentialData4W                       ReturnValue;                                             // 0x0000(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel
	 */
	struct UDcxVehicleDriveComponentNW_SetDrivenWheel_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDriven;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel
	 */
	struct UDcxVehicleDriveComponentNW_IsDrivenWheel_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW
	 */
	struct UDcxVehicleDriveComponentNW_GetRawInputNW_Params
	{
	public:
		class UDcxVehicleDriveRawInputNW*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
	 */
	struct UDcxVehicleDriveComponentTank_SetDriveModel_Params
	{
	public:
		EDcxVehicleDriveControlModelTank                           ControlModel;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
	 */
	struct UDcxVehicleDriveComponentTank_GetRawInputTank_Params
	{
	public:
		class UDcxVehicleDriveRawInputTank*                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
	 */
	struct UDcxVehicleDriveComponentTank_GetDriveModel_Params
	{
	public:
		EDcxVehicleDriveControlModelTank                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
	 */
	struct UDcxVehicleWheelsRawInput_SetThrottle_Params
	{
	public:
		float                                                      Throttle;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
	 */
	struct UDcxVehicleWheelsRawInput_GetThrottle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
	 */
	struct UDcxVehicleDriveRawInput_SetGearUp_Params
	{
	public:
		bool                                                       bGearUpPressed;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
	 */
	struct UDcxVehicleDriveRawInput_SetGearDown_Params
	{
	public:
		bool                                                       bGearDownPressed;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
	 */
	struct UDcxVehicleDriveRawInput_SetClutch_Params
	{
	public:
		float                                                      Clutch;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
	 */
	struct UDcxVehicleDriveRawInput_GetGearUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
	 */
	struct UDcxVehicleDriveRawInput_GetGearDown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
	 */
	struct UDcxVehicleDriveRawInput_GetClutch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer
	 */
	struct UDcxVehicleDriveRawInput4W_SetSteer_Params
	{
	public:
		float                                                      Steer;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake
	 */
	struct UDcxVehicleDriveRawInput4W_SetHandbrake_Params
	{
	public:
		float                                                      Handbrake;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake
	 */
	struct UDcxVehicleDriveRawInput4W_SetBrake_Params
	{
	public:
		float                                                      Brake;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer
	 */
	struct UDcxVehicleDriveRawInput4W_GetSteer_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake
	 */
	struct UDcxVehicleDriveRawInput4W_GetHandbrake_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake
	 */
	struct UDcxVehicleDriveRawInput4W_GetBrake_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust
	 */
	struct UDcxVehicleDriveRawInputTank_SetRightThrust_Params
	{
	public:
		float                                                      Thrust;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake
	 */
	struct UDcxVehicleDriveRawInputTank_SetRightBrake_Params
	{
	public:
		float                                                      Brake;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust
	 */
	struct UDcxVehicleDriveRawInputTank_SetLeftThrust_Params
	{
	public:
		float                                                      Thrust;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake
	 */
	struct UDcxVehicleDriveRawInputTank_SetLeftBrake_Params
	{
	public:
		float                                                      Brake;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust
	 */
	struct UDcxVehicleDriveRawInputTank_GetRightThrust_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake
	 */
	struct UDcxVehicleDriveRawInputTank_GetRightBrake_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust
	 */
	struct UDcxVehicleDriveRawInputTank_GetLeftThrust_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake
	 */
	struct UDcxVehicleDriveRawInputTank_GetLeftBrake_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive
	 */
	struct ADcxVehicleNoDrive_GetVehicleNoDrive_Params
	{
	public:
		class UDcxVehicleNoDriveComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
	 */
	struct UDcxVehicleNoDriveComponent_SetSteerAngle_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SteerAngle;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
	 */
	struct UDcxVehicleNoDriveComponent_SetDriveTorque_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DriveTorque;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
	 */
	struct UDcxVehicleNoDriveComponent_SetBrakeTorque_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BrakeTorque;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
	 */
	struct UDcxVehicleNoDriveComponent_GetSteerAngle_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
	 */
	struct UDcxVehicleNoDriveComponent_GetRawInputND_Params
	{
	public:
		class UDcxVehicleNoDriveRawInput*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
	 */
	struct UDcxVehicleNoDriveComponent_GetDriveTorque_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
	 */
	struct UDcxVehicleNoDriveComponent_GetBrakeTorque_Params
	{
	public:
		int32_t                                                    WheelIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer
	 */
	struct UDcxVehicleNoDriveRawInput_SetSteer_Params
	{
	public:
		float                                                      NewSteer;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake
	 */
	struct UDcxVehicleNoDriveRawInput_SetBrake_Params
	{
	public:
		float                                                      NewBrake;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer
	 */
	struct UDcxVehicleNoDriveRawInput_GetSteer_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake
	 */
	struct UDcxVehicleNoDriveRawInput_GetBrake_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW
	 */
	struct ADcxVehicleNW_GetVehicleDriveNW_Params
	{
	public:
		class UDcxVehicleDriveComponentNW*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank
	 */
	struct ADcxVehicleTank_GetVehicleDriveTank_Params
	{
	public:
		class UDcxVehicleDriveComponentTank*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
