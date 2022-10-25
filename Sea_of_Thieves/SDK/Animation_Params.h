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
	 * Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct
	 */
	struct UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params
	{
	public:
		struct FAnimDataEntryStructWrapper                         Wrapper;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UScriptStruct*                                       DestinationStruct;                                       // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGenericStruct                                      Value;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animation.AnimationDataFunctionLib.MakeAnimationData
	 */
	struct UAnimationDataFunctionLib_MakeAnimationData_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UAnimationData*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
	 */
	struct UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params
	{
	public:
		class UAnimationData*                                      AnimationDataObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScriptStruct*                                       TheClass;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAnimDataEntryStructWrapper                         ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
	 */
	struct UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.AnimationDataStoreAsset.LookupAnimationData
	 */
	struct UAnimationDataStoreAsset_LookupAnimationData_Params
	{
	public:
		class UClass*                                              AnimDataId;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UAnimationData*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.AnimationDataStoreAsset.GetAnimationDataClass
	 */
	struct UAnimationDataStoreAsset_GetAnimationDataClass_Params
	{
	public:
		struct FAnimationDataStoreAssetEntry                       Entry;                                                   // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
		class UClass*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
	 */
	struct UAnimationDataStoreInterface_GetAnimationDataForId_Params
	{
	public:
		class UClass*                                              AnimDataId;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UAnimationData*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem
	 */
	struct UCosmeticItemAnimationComponent_SpawnCosmeticItem_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ObjectToSpawn;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EWieldAnimationLocation                                    SpawnLocation;                                           // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VY7J[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCosmeticItemAnimationSetDataAsset*                  CosmeticData;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SpawnHidden;                                             // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems
	 */
	struct UCosmeticItemAnimationComponent_DestroyAllCosmeticItems_Params
	{	};

	/**
	 * Function Animation.CosmeticItemAnimationInstance.UnregisterEvents
	 */
	struct UCosmeticItemAnimationInstance_UnregisterEvents_Params
	{	};

	/**
	 * Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData
	 */
	struct UCustomAnimationMontageComponent_OnRep_ReplicatedData_Params
	{
	public:
		struct FCustomAnimationMontageComponentReplicatedData      PriorData;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
	 */
	struct ULimbIKFunctionLibrary_SetTranslationStrength_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      InRotationStrength;                                      // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetTransform
	 */
	struct ULimbIKFunctionLibrary_SetTransform_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		struct FTransform                                          InTransform;                                             // 0x0060(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetRotationStrength
	 */
	struct ULimbIKFunctionLibrary_SetRotationStrength_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      InRotationStrength;                                      // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetParentBone
	 */
	struct ULimbIKFunctionLibrary_SetParentBone_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		class FName                                                Bone;                                                    // 0x0060(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetIKSpace
	 */
	struct ULimbIKFunctionLibrary_SetIKSpace_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		ELimbIKSpace                                               IKSpace;                                                 // 0x0060(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetEnabled
	 */
	struct ULimbIKFunctionLibrary_SetEnabled_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		bool                                                       Enabled;                                                 // 0x0060(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ELimbIKSpace                                               IKSpace;                                                 // 0x0061(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6CBC[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ParentBone;                                              // 0x0064(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
	 */
	struct ULimbIKFunctionLibrary_SetBlendOutSpeed_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      BlendOutSpeed;                                           // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
	 */
	struct ULimbIKFunctionLibrary_SetBlendInSpeed_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      BlendInSpeed;                                            // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
	 */
	struct ULimbIKFunctionLibrary_SetAnimationOverride_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		bool                                                       AnimationOverride;                                       // 0x0060(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
	 */
	struct ULimbIKFunctionLibrary_SetAlphaTarget_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      AlphaTarget;                                             // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.IsEnabled
	 */
	struct ULimbIKFunctionLibrary_IsEnabled_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
	 */
	struct ULimbIKFunctionLibrary_GetTranslationStrength_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.GetTransform
	 */
	struct ULimbIKFunctionLibrary_GetTransform_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		struct FTransform                                          ReturnValue;                                             // 0x0060(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.GetRotationStrength
	 */
	struct ULimbIKFunctionLibrary_GetRotationStrength_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.GetParentBone
	 */
	struct ULimbIKFunctionLibrary_GetParentBone_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		class FName                                                ReturnValue;                                             // 0x0060(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.GetIKSpace
	 */
	struct ULimbIKFunctionLibrary_GetIKSpace_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		ELimbIKSpace                                               ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
	 */
	struct ULimbIKFunctionLibrary_GetCurrentAlpha_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
	 */
	struct ULimbIKFunctionLibrary_GetAnimationOverride_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
	 */
	struct ULimbIKFunctionLibrary_GetAlphaTarget_Params
	{
	public:
		struct FLimbIK                                             LimbIK;                                                  // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
	 */
	struct ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params
	{
	public:
		bool                                                       InBool;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JQUP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
	 */
	struct ULocomotionFunctionLib_UpdateControllerSpineRotation_Params
	{
	public:
		struct FRotator                                            CharacterRotation;                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      AngleSpeedMax;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AngleSpeedMin;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
	 */
	struct ULocomotionFunctionLib_UpdateCharacterSpeed_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      CurrentMaxWalkSpeed;                                     // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WantedMovementSpeed;                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BaseMaxWalkSpeed;                                        // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpeedBlendValue;                                         // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSwimming;                                              // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MH18[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeadZone;                                                // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FActorVelocityData                                  ReturnValue;                                             // 0x0024(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
	 */
	struct ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params
	{
	public:
		struct FRotator                                            CharacterRotation;                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      LargeRate;                                               // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentCharacterYaw;                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaSeconds;                                            // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex
	 */
	struct UNetworkSyncedAnimationComponent_OnRep_PlayingAnimationIndex_Params
	{	};

	/**
	 * Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression
	 */
	struct UNetworkSyncedAnimationComponent_OnRep_AnimationProgression_Params
	{	};

	/**
	 * Function Animation.TurningFunctionLib.TurningUpdate
	 */
	struct UTurningFunctionLib_TurningUpdate_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CharacterMoving;                                         // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DeadZone;                                                // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZHRX[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TurnRate;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DelayedCounter;                                          // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CounterMax;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TurningLeft;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState
	 */
	struct UWaitForAnimationStateEntryProxy_OnEnteredState_Params
	{
	public:
		class FName                                                path;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
	 */
	struct UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params
	{	};

	/**
	 * Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
	 */
	struct UWaitForAnimationStateEntryProxy_CreateProxy_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TargetPath;                                              // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWaitForAnimationStateEntryProxy*                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.WaitForAnimationStateExitProxy.OnExitState
	 */
	struct UWaitForAnimationStateExitProxy_OnExitState_Params
	{
	public:
		class FName                                                path;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
	 */
	struct UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params
	{	};

	/**
	 * Function Animation.WaitForAnimationStateExitProxy.CreateProxy
	 */
	struct UWaitForAnimationStateExitProxy_CreateProxy_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TargetPath;                                              // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWaitForAnimationStateExitProxy*                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise
	 */
	struct UWeightedAnimSequenceLoadOnDemand_Initialise_Params
	{
	public:
		class UWeightedAnimationLoadOnDemandDataAsset*             InAnimationData;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand
	 */
	struct UWeightedAnimSequenceLoadOnDemand_CreateNewWeightedAnimSequenceLoadOnDemand_Params
	{
	public:
		class UWeightedAnimSequenceLoadOnDemand*                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Animation.DockableInterface.HandleDestroy
	 */
	struct UDockableInterface_HandleDestroy_Params
	{	};

	/**
	 * Function Animation.DockableInterface.GetDockableInfo
	 */
	struct UDockableInterface_GetDockableInfo_Params
	{
	public:
		struct FDockableInfo                                       ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
