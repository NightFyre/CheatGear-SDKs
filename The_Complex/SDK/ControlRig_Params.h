#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Function ControlRig.ControlRig.SupportsEvent
	 */
	struct UControlRig_SupportsEvent_Params
	{
	public:
		class FName                                                InEventName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.SetVariableFromString
	 */
	struct UControlRig_SetVariableFromString_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValue;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.SetInteractionRigClass
	 */
	struct UControlRig_SetInteractionRigClass_Params
	{
	public:
		class UClass*                                              InInteractionRigClass;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.SetInteractionRig
	 */
	struct UControlRig_SetInteractionRig_Params
	{
	public:
		class UControlRig*                                         InInteractionRig;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.SetFramesPerSecond
	 */
	struct UControlRig_SetFramesPerSecond_Params
	{
	public:
		float                                                      InFramesPerSecond;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.SetDeltaTime
	 */
	struct UControlRig_SetDeltaTime_Params
	{
	public:
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.SetAbsoluteTime
	 */
	struct UControlRig_SetAbsoluteTime_Params
	{
	public:
		float                                                      InAbsoluteTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InSetDeltaTimeZero;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.SetAbsoluteAndDeltaTime
	 */
	struct UControlRig_SetAbsoluteAndDeltaTime_Params
	{
	public:
		float                                                      InAbsoluteTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDeltaTime;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.SelectControl
	 */
	struct UControlRig_SelectControl_Params
	{
	public:
		class FName                                                InControlName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSelect;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.RequestSetup
	 */
	struct UControlRig_RequestSetup_Params
	{	};

	/**
	 * Function ControlRig.ControlRig.RequestInit
	 */
	struct UControlRig_RequestInit_Params
	{	};

	/**
	 * Function ControlRig.ControlRig.IsControlSelected
	 */
	struct UControlRig_IsControlSelected_Params
	{
	public:
		class FName                                                InControlName;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetVM
	 */
	struct UControlRig_GetVM_Params
	{
	public:
		class URigVM*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetVariableType
	 */
	struct UControlRig_GetVariableType_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetVariableAsString
	 */
	struct UControlRig_GetVariableAsString_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetSupportedEvents
	 */
	struct UControlRig_GetSupportedEvents_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetScriptAccessibleVariables
	 */
	struct UControlRig_GetScriptAccessibleVariables_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetInteractionRigClass
	 */
	struct UControlRig_GetInteractionRigClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetInteractionRig
	 */
	struct UControlRig_GetInteractionRig_Params
	{
	public:
		class UControlRig*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetHierarchy
	 */
	struct UControlRig_GetHierarchy_Params
	{
	public:
		class URigHierarchy*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetCurrentFramesPerSecond
	 */
	struct UControlRig_GetCurrentFramesPerSecond_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.GetAbsoluteTime
	 */
	struct UControlRig_GetAbsoluteTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.FindControlRigs
	 */
	struct UControlRig_FindControlRigs_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              OptionalClass;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UControlRig*>                                 ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.Execute
	 */
	struct UControlRig_Execute_Params
	{
	public:
		EControlRigState                                           State;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8UPR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                InEventName;                                             // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.CurrentControlSelection
	 */
	struct UControlRig_CurrentControlSelection_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.ClearControlSelection
	 */
	struct UControlRig_ClearControlSelection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRig.CanExecute
	 */
	struct UControlRig_CanExecute_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.Update
	 */
	struct UControlRigComponent_Update_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetMappedElements
	 */
	struct UControlRigComponent_SetMappedElements_Params
	{
	public:
		TArray<struct FControlRigComponentMappedElement>           NewMappedElements;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
	 */
	struct UControlRigComponent_SetInitialSpaceTransform_Params
	{
	public:
		class FName                                                SpaceName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_91F7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InitialTransform;                                        // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetInitialBoneTransform
	 */
	struct UControlRigComponent_SetInitialBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QM0Y[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InitialTransform;                                        // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPropagateToChildren;                                    // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlVector2D
	 */
	struct UControlRigComponent_SetControlVector2D_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Value;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlTransform
	 */
	struct UControlRigComponent_SetControlTransform_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XC2Y[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Value;                                                   // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlScale
	 */
	struct UControlRigComponent_SetControlScale_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlRotator
	 */
	struct UControlRigComponent_SetControlRotator_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Value;                                                   // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlPosition
	 */
	struct UControlRigComponent_SetControlPosition_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlOffset
	 */
	struct UControlRigComponent_SetControlOffset_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZEND[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          OffsetTransform;                                         // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlInt
	 */
	struct UControlRigComponent_SetControlInt_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlFloat
	 */
	struct UControlRigComponent_SetControlFloat_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetControlBool
	 */
	struct UControlRigComponent_SetControlBool_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetBoneTransform
	 */
	struct UControlRigComponent_SetBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AX02[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K1IX[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Weight;                                                  // 0x0074(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPropagateToChildren;                                    // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	 */
	struct UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params
	{
	public:
		class USkeletalMesh*                                       InSkeletalMesh;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPreSetup
	 */
	struct UControlRigComponent_OnPreSetup_Params
	{
	public:
		class UControlRigComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPreInitialize
	 */
	struct UControlRigComponent_OnPreInitialize_Params
	{
	public:
		class UControlRigComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPreForwardsSolve
	 */
	struct UControlRigComponent_OnPreForwardsSolve_Params
	{
	public:
		class UControlRigComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPostSetup
	 */
	struct UControlRigComponent_OnPostSetup_Params
	{
	public:
		class UControlRigComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPostInitialize
	 */
	struct UControlRigComponent_OnPostInitialize_Params
	{
	public:
		class UControlRigComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.OnPostForwardsSolve
	 */
	struct UControlRigComponent_OnPostForwardsSolve_Params
	{
	public:
		class UControlRigComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.Initialize
	 */
	struct UControlRigComponent_Initialize_Params
	{	};

	/**
	 * Function ControlRig.ControlRigComponent.GetSpaceTransform
	 */
	struct UControlRigComponent_GetSpaceTransform_Params
	{
	public:
		class FName                                                SpaceName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8EO0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
	 */
	struct UControlRigComponent_GetInitialSpaceTransform_Params
	{
	public:
		class FName                                                SpaceName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1DGC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetInitialBoneTransform
	 */
	struct UControlRigComponent_GetInitialBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IUBZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetElementNames
	 */
	struct UControlRigComponent_GetElementNames_Params
	{
	public:
		ERigElementType                                            ElementType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2OT5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlVector2D
	 */
	struct UControlRigComponent_GetControlVector2D_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlTransform
	 */
	struct UControlRigComponent_GetControlTransform_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GOAV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlScale
	 */
	struct UControlRigComponent_GetControlScale_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LO4H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlRotator
	 */
	struct UControlRigComponent_GetControlRotator_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X9NW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlRig
	 */
	struct UControlRigComponent_GetControlRig_Params
	{
	public:
		class UControlRig*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlPosition
	 */
	struct UControlRigComponent_GetControlPosition_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T7FH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlOffset
	 */
	struct UControlRigComponent_GetControlOffset_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QAX2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlInt
	 */
	struct UControlRigComponent_GetControlInt_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlFloat
	 */
	struct UControlRigComponent_GetControlFloat_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetControlBool
	 */
	struct UControlRigComponent_GetControlBool_Params
	{
	public:
		class FName                                                ControlName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetBoneTransform
	 */
	struct UControlRigComponent_GetBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlRigComponentSpace                                  Space;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0QK2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.GetAbsoluteTime
	 */
	struct UControlRigComponent_GetAbsoluteTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.DoesElementExist
	 */
	struct UControlRigComponent_DoesElementExist_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERigElementType                                            ElementType;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.ClearMappedElements
	 */
	struct UControlRigComponent_ClearMappedElements_Params
	{	};

	/**
	 * Function ControlRig.ControlRigComponent.CanExecute
	 */
	struct UControlRigComponent_CanExecute_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	 */
	struct UControlRigComponent_AddMappedSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FControlRigComponentMappedBone>              Bones;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FControlRigComponentMappedCurve>             Curves;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.AddMappedElements
	 */
	struct UControlRigComponent_AddMappedElements_Params
	{
	public:
		TArray<struct FControlRigComponentMappedElement>           NewMappedElements;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.AddMappedComponents
	 */
	struct UControlRigComponent_AddMappedComponents_Params
	{
	public:
		TArray<struct FControlRigComponentMappedComponent>         Components;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	 */
	struct UControlRigComponent_AddMappedCompleteSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigControlActor.Refresh
	 */
	struct AControlRigControlActor_Refresh_Params
	{	};

	/**
	 * Function ControlRig.ControlRigControlActor.Clear
	 */
	struct AControlRigControlActor_Clear_Params
	{	};

	/**
	 * Function ControlRig.ControlRigShapeActor.SetSelected
	 */
	struct AControlRigShapeActor_SetSelected_Params
	{
	public:
		bool                                                       bInSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.SetSelectable
	 */
	struct AControlRigShapeActor_SetSelectable_Params
	{
	public:
		bool                                                       bInSelectable;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.SetHovered
	 */
	struct AControlRigShapeActor_SetHovered_Params
	{
	public:
		bool                                                       bInHovered;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.SetGlobalTransform
	 */
	struct AControlRigShapeActor_SetGlobalTransform_Params
	{
	public:
		struct FTransform                                          InTransform;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.SetEnabled
	 */
	struct AControlRigShapeActor_SetEnabled_Params
	{
	public:
		bool                                                       bInEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.OnTransformChanged
	 */
	struct AControlRigShapeActor_OnTransformChanged_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.OnSelectionChanged
	 */
	struct AControlRigShapeActor_OnSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
	 */
	struct AControlRigShapeActor_OnManipulatingChanged_Params
	{
	public:
		bool                                                       bIsManipulating;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.OnHoveredChanged
	 */
	struct AControlRigShapeActor_OnHoveredChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.OnEnabledChanged
	 */
	struct AControlRigShapeActor_OnEnabledChanged_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
	 */
	struct AControlRigShapeActor_IsSelectedInEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.IsHovered
	 */
	struct AControlRigShapeActor_IsHovered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.IsEnabled
	 */
	struct AControlRigShapeActor_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigShapeActor.GetGlobalTransform
	 */
	struct AControlRigShapeActor_GetGlobalTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigPoseAsset.SelectControls
	 */
	struct UControlRigPoseAsset_SelectControls_Params
	{
	public:
		class UControlRig*                                         InControlRig;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDoMirror;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigPoseAsset.SavePose
	 */
	struct UControlRigPoseAsset_SavePose_Params
	{
	public:
		class UControlRig*                                         InControlRig;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseAll;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigPoseAsset.ReplaceControlName
	 */
	struct UControlRigPoseAsset_ReplaceControlName_Params
	{
	public:
		class FName                                                CurrentName;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewName;                                                 // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigPoseAsset.PastePose
	 */
	struct UControlRigPoseAsset_PastePose_Params
	{
	public:
		class UControlRig*                                         InControlRig;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDoKey;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDoMirror;                                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigPoseAsset.GetCurrentPose
	 */
	struct UControlRigPoseAsset_GetCurrentPose_Params
	{
	public:
		class UControlRig*                                         InControlRig;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FControlRigControlPose                              OutPose;                                                 // 0x0008(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigPoseAsset.GetControlNames
	 */
	struct UControlRigPoseAsset_GetControlNames_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
	 */
	struct UControlRigPoseAsset_DoesMirrorMatch_Params
	{
	public:
		class UControlRig*                                         ControlRig;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ControlName;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SwitchToWorldSpace
	 */
	struct URigHierarchy_SwitchToWorldSpace_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SwitchToParent
	 */
	struct URigHierarchy_SwitchToParent_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SwitchToDefaultParent
	 */
	struct URigHierarchy_SwitchToDefaultParent_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SortKeys
	 */
	struct URigHierarchy_SortKeys_Params
	{
	public:
		TArray<struct FRigElementKey>                              InKeys;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetPose_ForBlueprint
	 */
	struct URigHierarchy_SetPose_ForBlueprint_Params
	{
	public:
		struct FRigPose                                            InPose;                                                  // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetParentWeightArray
	 */
	struct URigHierarchy_SetParentWeightArray_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HDR5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementWeight>                           InWeights;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetParentWeight
	 */
	struct URigHierarchy_SetParentWeight_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementWeight                                   InWeight;                                                // 0x0018(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0026(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetLocalTransformByIndex
	 */
	struct URigHierarchy_SetLocalTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PT7F[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0073(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetLocalTransform
	 */
	struct URigHierarchy_SetLocalTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2GPB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0073(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
	 */
	struct URigHierarchy_SetGlobalTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MF5Q[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetGlobalTransform
	 */
	struct URigHierarchy_SetGlobalTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MX3P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetCurveValueByIndex
	 */
	struct URigHierarchy_SetCurveValueByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetCurveValue
	 */
	struct URigHierarchy_SetCurveValue_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
	 */
	struct URigHierarchy_SetControlVisibilityByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisibility;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlVisibility
	 */
	struct URigHierarchy_SetControlVisibility_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVisibility;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlValueByIndex
	 */
	struct URigHierarchy_SetControlValueByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XXDR[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    InValue;                                                 // 0x0010(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		ERigControlValueType                                       InValueType;                                             // 0x0100(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0101(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0102(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlValue
	 */
	struct URigHierarchy_SetControlValue_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6MAB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    InValue;                                                 // 0x0010(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		ERigControlValueType                                       InValueType;                                             // 0x0100(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0101(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0102(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	 */
	struct URigHierarchy_SetControlShapeTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_08WE[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlShapeTransform
	 */
	struct URigHierarchy_SetControlShapeTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IUZG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlSettingsByIndex
	 */
	struct URigHierarchy_SetControlSettingsByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NHK2[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlSettings                                 InSettings;                                              // 0x0010(0x0260)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0270(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForce;                                                  // 0x0271(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0272(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlSettings
	 */
	struct URigHierarchy_SetControlSettings_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JGUP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlSettings                                 InSettings;                                              // 0x0010(0x0260)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0270(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForce;                                                  // 0x0271(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0272(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	 */
	struct URigHierarchy_SetControlOffsetTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LGVB[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0073(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SetControlOffsetTransform
	 */
	struct URigHierarchy_SetControlOffsetTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7WIV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffectChildren;                                         // 0x0071(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0072(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0073(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.SendAutoKeyEvent
	 */
	struct URigHierarchy_SendAutoKeyEvent_Params
	{
	public:
		struct FRigElementKey                                      InElement;                                               // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InOffsetInSeconds;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAsynchronous;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.ResetPoseToInitial
	 */
	struct URigHierarchy_ResetPoseToInitial_Params
	{
	public:
		ERigElementType                                            InTypeFilter;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.ResetCurveValues
	 */
	struct URigHierarchy_ResetCurveValues_Params
	{	};

	/**
	 * Function ControlRig.RigHierarchy.Reset
	 */
	struct URigHierarchy_Reset_Params
	{	};

	/**
	 * Function ControlRig.RigHierarchy.Num
	 */
	struct URigHierarchy_Num_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
	 */
	struct URigHierarchy_MakeControlValueFromVector2D_Params
	{
	public:
		struct FVector2D                                           InValue;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigControlValue                                    ReturnValue;                                             // 0x0010(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromVector
	 */
	struct URigHierarchy_MakeControlValueFromVector_Params
	{
	public:
		struct FVector                                             InValue;                                                 // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JA4W[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    ReturnValue;                                             // 0x0020(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	 */
	struct URigHierarchy_MakeControlValueFromTransformNoScale_Params
	{
	public:
		struct FTransformNoScale                                   InValue;                                                 // 0x0000(0x0040)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRigControlValue                                    ReturnValue;                                             // 0x0040(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromTransform
	 */
	struct URigHierarchy_MakeControlValueFromTransform_Params
	{
	public:
		struct FTransform                                          InValue;                                                 // 0x0000(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRigControlValue                                    ReturnValue;                                             // 0x0060(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromRotator
	 */
	struct URigHierarchy_MakeControlValueFromRotator_Params
	{
	public:
		struct FRotator                                            InValue;                                                 // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NLEZ[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    ReturnValue;                                             // 0x0020(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromInt
	 */
	struct URigHierarchy_MakeControlValueFromInt_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NIHH[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    ReturnValue;                                             // 0x0010(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromFloat
	 */
	struct URigHierarchy_MakeControlValueFromFloat_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XZLH[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    ReturnValue;                                             // 0x0010(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	 */
	struct URigHierarchy_MakeControlValueFromEulerTransform_Params
	{
	public:
		struct FEulerTransform                                     InValue;                                                 // 0x0000(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KOMG[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    ReturnValue;                                             // 0x0050(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.MakeControlValueFromBool
	 */
	struct URigHierarchy_MakeControlValueFromBool_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NQLB[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    ReturnValue;                                             // 0x0010(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.IsValidIndex
	 */
	struct URigHierarchy_IsValidIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.IsSelectedByIndex
	 */
	struct URigHierarchy_IsSelectedByIndex_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.IsSelected
	 */
	struct URigHierarchy_IsSelected_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.IsParentedTo
	 */
	struct URigHierarchy_IsParentedTo_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetVectorFromControlValue
	 */
	struct URigHierarchy_GetVectorFromControlValue_Params
	{
	public:
		struct FRigControlValue                                    InValue;                                                 // 0x0000(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x00F0(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetVector2DFromControlValue
	 */
	struct URigHierarchy_GetVector2DFromControlValue_Params
	{
	public:
		struct FRigControlValue                                    InValue;                                                 // 0x0000(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x00F0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	 */
	struct URigHierarchy_GetTransformNoScaleFromControlValue_Params
	{
	public:
		struct FRigControlValue                                    InValue;                                                 // 0x0000(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransformNoScale                                   ReturnValue;                                             // 0x00F0(0x0040)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetTransformFromControlValue
	 */
	struct URigHierarchy_GetTransformFromControlValue_Params
	{
	public:
		struct FRigControlValue                                    InValue;                                                 // 0x0000(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x00F0(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetSelectedKeys
	 */
	struct URigHierarchy_GetSelectedKeys_Params
	{
	public:
		ERigElementType                                            InTypeFilter;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_479X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetRotatorFromControlValue
	 */
	struct URigHierarchy_GetRotatorFromControlValue_Params
	{
	public:
		struct FRigControlValue                                    InValue;                                                 // 0x0000(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x00F0(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetRigidBodyKeys
	 */
	struct URigHierarchy_GetRigidBodyKeys_Params
	{
	public:
		bool                                                       bTraverse;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9O80[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetReferenceKeys
	 */
	struct URigHierarchy_GetReferenceKeys_Params
	{
	public:
		bool                                                       bTraverse;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QW74[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetPreviousParent
	 */
	struct URigHierarchy_GetPreviousParent_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetPreviousName
	 */
	struct URigHierarchy_GetPreviousName_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetPose
	 */
	struct URigHierarchy_GetPose_Params
	{
	public:
		bool                                                       bInitial;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZKRP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigPose                                            ReturnValue;                                             // 0x0008(0x0070)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetParentWeightArray
	 */
	struct URigHierarchy_GetParentWeightArray_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H49Y[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementWeight>                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetParentWeight
	 */
	struct URigHierarchy_GetParentWeight_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IH2J[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigElementWeight                                   ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetParentTransformByIndex
	 */
	struct URigHierarchy_GetParentTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F065[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetParentTransform
	 */
	struct URigHierarchy_GetParentTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WHFL[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetParents
	 */
	struct URigHierarchy_GetParents_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRecursive;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_27BD[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetNumberOfParents
	 */
	struct URigHierarchy_GetNumberOfParents_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetNullKeys
	 */
	struct URigHierarchy_GetNullKeys_Params
	{
	public:
		bool                                                       bTraverse;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UKFW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetLocalTransformByIndex
	 */
	struct URigHierarchy_GetLocalTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E9V0[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetLocalTransform
	 */
	struct URigHierarchy_GetLocalTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KJ1A[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetKey
	 */
	struct URigHierarchy_GetKey_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetIntFromControlValue
	 */
	struct URigHierarchy_GetIntFromControlValue_Params
	{
	public:
		struct FRigControlValue                                    InValue;                                                 // 0x0000(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00F0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
	 */
	struct URigHierarchy_GetIndex_ForBlueprint_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
	 */
	struct URigHierarchy_GetGlobalTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F7K3[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetGlobalTransform
	 */
	struct URigHierarchy_GetGlobalTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WEUF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	 */
	struct URigHierarchy_GetGlobalControlShapeTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IMPL[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	 */
	struct URigHierarchy_GetGlobalControlShapeTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PLTU[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	 */
	struct URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_STNZ[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	 */
	struct URigHierarchy_GetGlobalControlOffsetTransform_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6AHK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetFloatFromControlValue
	 */
	struct URigHierarchy_GetFloatFromControlValue_Params
	{
	public:
		struct FRigControlValue                                    InValue;                                                 // 0x0000(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x00F0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetFirstParent
	 */
	struct URigHierarchy_GetFirstParent_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	 */
	struct URigHierarchy_GetEulerTransformFromControlValue_Params
	{
	public:
		struct FRigControlValue                                    InValue;                                                 // 0x0000(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FEulerTransform                                     ReturnValue;                                             // 0x00F0(0x0048)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetCurveValueByIndex
	 */
	struct URigHierarchy_GetCurveValueByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetCurveValue
	 */
	struct URigHierarchy_GetCurveValue_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetCurveKeys
	 */
	struct URigHierarchy_GetCurveKeys_Params
	{
	public:
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetControlValueByIndex
	 */
	struct URigHierarchy_GetControlValueByIndex_Params
	{
	public:
		int32_t                                                    InElementIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERigControlValueType                                       InValueType;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N278[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    ReturnValue;                                             // 0x0010(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetControlValue
	 */
	struct URigHierarchy_GetControlValue_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERigControlValueType                                       InValueType;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JHGR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlValue                                    ReturnValue;                                             // 0x0010(0x00F0)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetController
	 */
	struct URigHierarchy_GetController_Params
	{
	public:
		bool                                                       bCreateIfNeeded;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G96S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URigHierarchyController*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetControlKeys
	 */
	struct URigHierarchy_GetControlKeys_Params
	{
	public:
		bool                                                       bTraverse;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_63U2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetChildren
	 */
	struct URigHierarchy_GetChildren_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRecursive;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0EOI[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetBoneKeys
	 */
	struct URigHierarchy_GetBoneKeys_Params
	{
	public:
		bool                                                       bTraverse;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QWCN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	 */
	struct URigHierarchy_GetAllKeys_ForBlueprint_Params
	{
	public:
		bool                                                       bTraverse;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9DI4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	 */
	struct URigHierarchy_FindNull_ForBlueprintOnly_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W54E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigNullElement                                     ReturnValue;                                             // 0x0010(0x0510)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	 */
	struct URigHierarchy_FindControl_ForBlueprintOnly_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_76IF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlElement                                  ReturnValue;                                             // 0x0010(0x0AF0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	 */
	struct URigHierarchy_FindBone_ForBlueprintOnly_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2EDJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigBoneElement                                     ReturnValue;                                             // 0x0010(0x0260)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.CopyPose
	 */
	struct URigHierarchy_CopyPose_Params
	{
	public:
		class URigHierarchy*                                       InHierarchy;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCurrent;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInitial;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.CopyHierarchy
	 */
	struct URigHierarchy_CopyHierarchy_Params
	{
	public:
		class URigHierarchy*                                       InHierarchy;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchy.Contains_ForBlueprint
	 */
	struct URigHierarchy_Contains_ForBlueprint_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.SetSelection
	 */
	struct URigHierarchyController_SetSelection_Params
	{
	public:
		TArray<struct FRigElementKey>                              InKeys;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.SetParent
	 */
	struct URigHierarchyController_SetParent_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMaintainGlobalTransform;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001B(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.SetHierarchy
	 */
	struct URigHierarchyController_SetHierarchy_Params
	{
	public:
		class URigHierarchy*                                       InHierarchy;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.SetControlSettings
	 */
	struct URigHierarchyController_SetControlSettings_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9U2U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlSettings                                 InSettings;                                              // 0x0010(0x0260)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0270(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0271(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.SelectElement
	 */
	struct URigHierarchyController_SelectElement_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSelect;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bClearSelection;                                         // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.RenameElement
	 */
	struct URigHierarchyController_RenameElement_Params
	{
	public:
		struct FRigElementKey                                      InElement;                                               // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InName;                                                  // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bClearSelection;                                         // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DSJH[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigElementKey                                      ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.RemoveParent
	 */
	struct URigHierarchyController_RemoveParent_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMaintainGlobalTransform;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001B(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.RemoveElement
	 */
	struct URigHierarchyController_RemoveElement_Params
	{
	public:
		struct FRigElementKey                                      InElement;                                               // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.RemoveAllParents
	 */
	struct URigHierarchyController_RemoveAllParents_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMaintainGlobalTransform;                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x000E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000F(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.MirrorElements
	 */
	struct URigHierarchyController_MirrorElements_Params
	{
	public:
		TArray<struct FRigElementKey>                              InKeys;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FRigMirrorSettings                                  InSettings;                                              // 0x0010(0x0028)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bSelectNewElements;                                      // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x003A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_APK9[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.ImportFromText
	 */
	struct URigHierarchyController_ImportFromText_Params
	{
	public:
		class FString                                              InContent;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReplaceExistingElements;                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSelectNewElements;                                      // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GWX5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.ImportCurves
	 */
	struct URigHierarchyController_ImportCurves_Params
	{
	public:
		class USkeleton*                                           InSkeleton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InNameSpace;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSelectCurves;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ECKE[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.ImportBones
	 */
	struct URigHierarchyController_ImportBones_Params
	{
	public:
		class USkeleton*                                           InSkeleton;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InNameSpace;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReplaceExistingBones;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRemoveObsoleteBones;                                    // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSelectBones;                                            // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YNBM[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.GetHierarchy
	 */
	struct URigHierarchyController_GetHierarchy_Params
	{
	public:
		class URigHierarchy*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.GetControlSettings
	 */
	struct URigHierarchyController_GetControlSettings_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FOS1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlSettings                                 ReturnValue;                                             // 0x0010(0x0260)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.ExportToText
	 */
	struct URigHierarchyController_ExportToText_Params
	{
	public:
		TArray<struct FRigElementKey>                              InKeys;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.ExportSelectionToText
	 */
	struct URigHierarchyController_ExportSelectionToText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.DuplicateElements
	 */
	struct URigHierarchyController_DuplicateElements_Params
	{
	public:
		TArray<struct FRigElementKey>                              InKeys;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bSelectNewElements;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommands;                                    // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C9FZ[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRigElementKey>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.DeselectElement
	 */
	struct URigHierarchyController_DeselectElement_Params
	{
	public:
		struct FRigElementKey                                      InKey;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.ClearSelection
	 */
	struct URigHierarchyController_ClearSelection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.AddRigidBody
	 */
	struct URigHierarchyController_AddRigidBody_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigRigidBodySettings                               InSettings;                                              // 0x0014(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1EAG[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InLocalTransform;                                        // 0x0020(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x0081(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_758W[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigElementKey                                      ReturnValue;                                             // 0x0084(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.AddParent
	 */
	struct URigHierarchyController_AddParent_Params
	{
	public:
		struct FRigElementKey                                      InChild;                                                 // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InWeight;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMaintainGlobalTransform;                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.AddNull
	 */
	struct URigHierarchyController_AddNull_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YBCK[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0020(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bTransformInGlobal;                                      // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0081(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x0082(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CI75[0x1];                                   // 0x0083(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigElementKey                                      ReturnValue;                                             // 0x0084(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.AddCurve
	 */
	struct URigHierarchyController_AddCurve_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RY4Y[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigElementKey                                      ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
	 */
	struct URigHierarchyController_AddControl_ForBlueprint_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SDNW[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigControlSettings                                 InSettings;                                              // 0x0020(0x0260)  (Parm, NativeAccessSpecifierPublic)
		struct FRigControlValue                                    InValue;                                                 // 0x0280(0x00F0)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0370(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VI58[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRigElementKey                                      ReturnValue;                                             // 0x0374(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ControlRig.RigHierarchyController.AddBone
	 */
	struct URigHierarchyController_AddBone_Params
	{
	public:
		class FName                                                InName;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      InParent;                                                // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FTPQ[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InTransform;                                             // 0x0020(0x0060)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bTransformInGlobal;                                      // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERigBoneType                                               InBoneType;                                              // 0x0081(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetupUndo;                                              // 0x0082(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPrintPythonCommand;                                     // 0x0083(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRigElementKey                                      ReturnValue;                                             // 0x0084(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
