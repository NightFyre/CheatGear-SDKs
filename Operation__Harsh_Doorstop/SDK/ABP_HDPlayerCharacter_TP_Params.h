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
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayEquipMontage
	 */
	struct UABP_HDPlayerCharacter_TP_C_PlayEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayFireMontage
	 */
	struct UABP_HDPlayerCharacter_TP_C_PlayFireMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFireLast;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAiming;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IVP4[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayReloadMontage
	 */
	struct UABP_HDPlayerCharacter_TP_C_PlayReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFullReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M84L[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayUnEquipMontage
	 */
	struct UABP_HDPlayerCharacter_TP_C_PlayUnEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponUpperBody
	 */
	struct UABP_HDPlayerCharacter_TP_C_WeaponUpperBody_Params
	{
	public:
		struct FPoseLink                                           UpperBody;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           WeaponUpperBody;                                         // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponAdditive
	 */
	struct UABP_HDPlayerCharacter_TP_C_WeaponAdditive_Params
	{
	public:
		struct FPoseLink                                           WeaponAdditive;                                          // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.Move
	 */
	struct UABP_HDPlayerCharacter_TP_C_Move_Params
	{
	public:
		struct FPoseLink                                           Move;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Move2;                                                   // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.WeaponJumpLoop
	 */
	struct UABP_HDPlayerCharacter_TP_C_WeaponJumpLoop_Params
	{
	public:
		struct FPoseLink                                           LowerJumpLoop;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           WeaponJumpLoop;                                          // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.VehicleFullBody
	 */
	struct UABP_HDPlayerCharacter_TP_C_VehicleFullBody_Params
	{
	public:
		struct FPoseLink                                           FullBody;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           VehicleFullBody;                                         // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.VehicleLowerBody
	 */
	struct UABP_HDPlayerCharacter_TP_C_VehicleLowerBody_Params
	{
	public:
		struct FPoseLink                                           LowerBody;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           VehicleLowerBody;                                        // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.LayeredLoco
	 */
	struct UABP_HDPlayerCharacter_TP_C_LayeredLoco_Params
	{
	public:
		struct FPoseLink                                           InBaseLayer;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           InOverlayLayer;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           InFullBodyAdditive;                                      // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           LayeredLoco;                                             // 0x0030(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OverlayLocoLayer
	 */
	struct UABP_HDPlayerCharacter_TP_C_OverlayLocoLayer_Params
	{
	public:
		struct FPoseLink                                           OverlayLocoLayer;                                        // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BaseLocoLayer
	 */
	struct UABP_HDPlayerCharacter_TP_C_BaseLocoLayer_Params
	{
	public:
		struct FPoseLink                                           BaseLocoLayer;                                           // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimGraph
	 */
	struct UABP_HDPlayerCharacter_TP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.UpdateIKTraceDataForFoot
	 */
	struct UABP_HDPlayerCharacter_TP_C_UpdateIKTraceDataForFoot_Params
	{
	public:
		bool                                                       bForRightFoot;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PerformFootIKTrace
	 */
	struct UABP_HDPlayerCharacter_TP_C_PerformFootIKTrace_Params
	{
	public:
		bool                                                       bFromRightFoot;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOutHit;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U9FJ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutHitOffsetFromFoot;                                    // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.UpdateFootIKTraceData
	 */
	struct UABP_HDPlayerCharacter_TP_C_UpdateFootIKTraceData_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.SetupFootIK
	 */
	struct UABP_HDPlayerCharacter_TP_C_SetupFootIK_Params
	{
	public:
		class ACharacter*                                          CharOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.ShouldUseHandIK
	 */
	struct UABP_HDPlayerCharacter_TP_C_ShouldUseHandIK_Params
	{
	public:
		bool                                                       bOutUseHandIK;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.PlayCharacterTPPMontage
	 */
	struct UABP_HDPlayerCharacter_TP_C_PlayCharacterTPPMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bForceDisableAutoBlendOut;                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YSF8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayDuration;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AssignLegacyWeaponTPPLocomotionAnims
	 */
	struct UABP_HDPlayerCharacter_TP_C_AssignLegacyWeaponTPPLocomotionAnims_Params
	{
	public:
		TMap<class FName, class UAnimSequenceBase*>                WeaponAnimSetTPP;                                        // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AssignWeaponTPPLocomotionAnims
	 */
	struct UABP_HDPlayerCharacter_TP_C_AssignWeaponTPPLocomotionAnims_Params
	{
	public:
		struct FCharacterAnimCollection                            AnimCollection;                                          // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bReadyToThrow;                                           // 0x0128(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HQUL[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.GetDefaultRightHandIKTransformByItemType
	 */
	struct UABP_HDPlayerCharacter_TP_C_GetDefaultRightHandIKTransformByItemType_Params
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y295[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          RightTransform;                                          // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.GetDefaultLeftHandIKTransformByItemType
	 */
	struct UABP_HDPlayerCharacter_TP_C_GetDefaultLeftHandIKTransformByItemType_Params
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6Q2M[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          LeftTransform;                                           // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyEnd_03E0282943B466F95A9987B1825BCF44
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnNotifyEnd_03E0282943B466F95A9987B1825BCF44_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyBegin_03E0282943B466F95A9987B1825BCF44
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnNotifyBegin_03E0282943B466F95A9987B1825BCF44_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnInterrupted_03E0282943B466F95A9987B1825BCF44
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnInterrupted_03E0282943B466F95A9987B1825BCF44_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnBlendOut_03E0282943B466F95A9987B1825BCF44
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnBlendOut_03E0282943B466F95A9987B1825BCF44_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnCompleted_03E0282943B466F95A9987B1825BCF44
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnCompleted_03E0282943B466F95A9987B1825BCF44_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyEnd_ED2EB33C4A118243E7441F82017EFA1B
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnNotifyEnd_ED2EB33C4A118243E7441F82017EFA1B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnNotifyBegin_ED2EB33C4A118243E7441F82017EFA1B
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnNotifyBegin_ED2EB33C4A118243E7441F82017EFA1B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnInterrupted_ED2EB33C4A118243E7441F82017EFA1B
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnInterrupted_ED2EB33C4A118243E7441F82017EFA1B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnBlendOut_ED2EB33C4A118243E7441F82017EFA1B
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnBlendOut_ED2EB33C4A118243E7441F82017EFA1B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.OnCompleted_ED2EB33C4A118243E7441F82017EFA1B
	 */
	struct UABP_HDPlayerCharacter_TP_C_OnCompleted_ED2EB33C4A118243E7441F82017EFA1B_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftCrouchState
	 */
	struct UABP_HDPlayerCharacter_TP_C_AnimNotify_LeftCrouchState_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyCrouchedState
	 */
	struct UABP_HDPlayerCharacter_TP_C_AnimNotify_FullyCrouchedState_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyStandingState
	 */
	struct UABP_HDPlayerCharacter_TP_C_AnimNotify_FullyStandingState_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftStandState
	 */
	struct UABP_HDPlayerCharacter_TP_C_AnimNotify_LeftStandState_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_FullyProneState
	 */
	struct UABP_HDPlayerCharacter_TP_C_AnimNotify_FullyProneState_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.AnimNotify_LeftProneState
	 */
	struct UABP_HDPlayerCharacter_TP_C_AnimNotify_LeftProneState_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateAnimation
	 */
	struct UABP_HDPlayerCharacter_TP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintInitializeAnimation
	 */
	struct UABP_HDPlayerCharacter_TP_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.EquippedItemChanged
	 */
	struct UABP_HDPlayerCharacter_TP_C_EquippedItemChanged_Params
	{
	public:
		class ADFBaseCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         NewEquippedItem;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADFBaseItem*                                         PrevEquippedItem;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdatePawnOwnerRefs
	 */
	struct UABP_HDPlayerCharacter_TP_C_BlueprintUpdatePawnOwnerRefs_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateControllerOwnerRefs
	 */
	struct UABP_HDPlayerCharacter_TP_C_BlueprintUpdateControllerOwnerRefs_Params
	{
	public:
		class AController*                                         NewC;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.BlueprintUpdateEquippedWeaponRefs
	 */
	struct UABP_HDPlayerCharacter_TP_C_BlueprintUpdateEquippedWeaponRefs_Params
	{
	public:
		class ADFBaseItem*                                         NewWeap;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_TP.ABP_HDPlayerCharacter_TP_C.ExecuteUbergraph_ABP_HDPlayerCharacter_TP
	 */
	struct UABP_HDPlayerCharacter_TP_C_ExecuteUbergraph_ABP_HDPlayerCharacter_TP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9KON[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
