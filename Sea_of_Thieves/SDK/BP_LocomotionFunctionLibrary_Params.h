#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta
	 */
	struct UBP_LocomotionFunctionLibrary_C_DriveValueToClampByDelta_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Min;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Max;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Delta;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Hit_Min;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Hit_Max;                                                 // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_05R8[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation
	 */
	struct UBP_LocomotionFunctionLibrary_C_FindSailControlHandIKPositionFromAnimation_Params
	{
	public:
		struct FVector                                             Animation_Hand_IK_Location;                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LowerRopeLocation;                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             UpperRopeLocation;                                       // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CC4Y[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location_On_Rope;                                        // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace
	 */
	struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDrivenBlendSpace_Params
	{
	public:
		TArray<class UBlendSpace*>                                 TargetArrayBlendspace;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UBlendSpace*>                                 LoadedArrayDataBlendspace;                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UBlendSpace*                                         FallbackBlendspace;                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace
	 */
	struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven1DBlendSpace_Params
	{
	public:
		TArray<class UBlendSpace1D*>                               TargetArray_D;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UBlendSpace1D*>                               LoadedArrayData_D;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UBlendSpace1D*                                       FallbackBlendspace1D;                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven
	 */
	struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven_Params
	{
	public:
		TArray<class UAnimSequence*>                               TargetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UAnimSequence*>                               LoadedArrayData;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UAnimSequence*                                       FallBackAnimation;                                       // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls
	 */
	struct UBP_LocomotionFunctionLibrary_C_Update_IK_Limb_Controls_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EIKLimbName                                                Limb_ID;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Active;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ELimbIKSpace                                               Coordinate_Space;                                        // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SK3A[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Translation_Strength;                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Rotation_Strength;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IH8J[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      BlendIn;                                                 // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BlendOut;                                                // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer
	 */
	struct UBP_LocomotionFunctionLibrary_C_Decrement_Integer_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    Decrement;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer
	 */
	struct UBP_LocomotionFunctionLibrary_C_Increment_Integer_Params
	{
	public:
		int32_t                                                    integer;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    Increment;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times
	 */
	struct UBP_LocomotionFunctionLibrary_C_Calculate_Turn_Times_Params
	{
	public:
		bool                                                       TurnLeft;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CL80[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentControllerYaw;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PreviousControllerYaw;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FBP_Turning                                         Turning;                                                 // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm)
		unsigned char                                              UnknownData_8OEY[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate
	 */
	struct UBP_LocomotionFunctionLibrary_C_InRangeAndRate_Params
	{
	public:
		bool                                                       InZone;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P0UC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Min;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Max;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBP_Turning                                         Turning;                                                 // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm)
		unsigned char                                              UnknownData_NPGA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0WXQ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check
	 */
	struct UBP_LocomotionFunctionLibrary_C_Turn_State_Change_Check_Params
	{
	public:
		struct FBP_Turning                                         Turning;                                                 // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
		bool                                                       InZone;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZO13[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range
	 */
	struct UBP_LocomotionFunctionLibrary_C_Not_In_Range_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Min;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Max;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NBHM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WL0V[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State
	 */
	struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_State_Params
	{
	public:
		struct FBP_Turning                                         Turning;                                                 // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time
	 */
	struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_Time_Params
	{
	public:
		bool                                                       TurningLeft;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QCMA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentTurnAngle;                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Reset_Angle;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Previous_Controller_Yaw;                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Current_Controller_Yaw;                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Animation_Time;                                          // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic
	 */
	struct UBP_LocomotionFunctionLibrary_C_JumpingLogic_Params
	{
	public:
		class ACharacter*                                          PlayerCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MovementSpeed;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      FrameDelta;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      JumpImpactTimerMax;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		EJumping                                                   JumpingState;                                            // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PBMY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PreImpactTime;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      JumpImpactTimer;                                         // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending
	 */
	struct UBP_LocomotionFunctionLibrary_C_Ik_Blending_Params
	{
	public:
		float                                                      BlendCounter;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       IKON;                                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MIY4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Translation_Strength;                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      Rotation_Strength;                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		EEasingFunc                                                EaseingType;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EHEC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlendMax;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      FrameDeltaTime;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9C9V[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter
	 */
	struct UBP_LocomotionFunctionLibrary_C_Increment_Counter_Params
	{
	public:
		float                                                      Counter;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CounterMax;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WCL7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Hit_Max_Count;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LDI3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      IncrementedCounter;                                      // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter
	 */
	struct UBP_LocomotionFunctionLibrary_C_Decrement_Counter_Params
	{
	public:
		float                                                      Counter;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CounterMin;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R8Q6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Hit_Min_Count;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3AUC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DecrementedCounter;                                      // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time
	 */
	struct UBP_LocomotionFunctionLibrary_C_Out_Over_Time_Params
	{
	public:
		float                                                      CurrentTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxTime;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EEasingFunc                                                EasingType;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IFNG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Return_Val;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times
	 */
	struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Times_Params
	{
	public:
		bool                                                       TurningLeft;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q4AR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Current_Controller_Yaw;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Previous_Controller_Yaw;                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FBP_Turning                                         Turning;                                                 // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm)
		unsigned char                                              UnknownData_MX2E[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations
	 */
	struct UBP_LocomotionFunctionLibrary_C_Update_Turn_Animations_Params
	{
	public:
		bool                                                       TurningLeft;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BE6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentYaw;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PreviousYaw;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      FrameDeltaTime;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBP_Turning                                         Turning;                                                 // 0x0010(0x0018)  (Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound
	 */
	struct UBP_LocomotionFunctionLibrary_C_Fix_Yaw_Wraparound_Params
	{
	public:
		float                                                      CurrentYaw;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PreviousYaw;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewPreviousYaw;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck
	 */
	struct UBP_LocomotionFunctionLibrary_C_ReflexAngleCheck_Params
	{
	public:
		float                                                      Direction_A;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Direction_B;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReflexAngle;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTHF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation
	 */
	struct UBP_LocomotionFunctionLibrary_C_ControllerRotation_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Pitch;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Yaw;                                                     // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed
	 */
	struct UBP_LocomotionFunctionLibrary_C_Character_Speed_Params
	{
	public:
		class ACharacter*                                          Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Speed;                                                   // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
