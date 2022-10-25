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
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayEquipMontage
	 */
	struct UABP_HDPlayerCharacter_FP_C_PlayEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayFireMontage
	 */
	struct UABP_HDPlayerCharacter_FP_C_PlayFireMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFireLast;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAiming;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IZDB[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayReloadMontage
	 */
	struct UABP_HDPlayerCharacter_FP_C_PlayReloadMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFullReload;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9K96[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayUnEquipMontage
	 */
	struct UABP_HDPlayerCharacter_FP_C_PlayUnEquipMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AnimGraph
	 */
	struct UABP_HDPlayerCharacter_FP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetMountPosition
	 */
	struct UABP_HDPlayerCharacter_FP_C_GetMountPosition_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetGripAmount
	 */
	struct UABP_HDPlayerCharacter_FP_C_GetGripAmount_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSightRotationOffset
	 */
	struct UABP_HDPlayerCharacter_FP_C_GetSightRotationOffset_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSmoothRotation
	 */
	struct UABP_HDPlayerCharacter_FP_C_GetSmoothRotation_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.GetSightPosition
	 */
	struct UABP_HDPlayerCharacter_FP_C_GetSightPosition_Params
	{
	public:
		struct FVector                                             Positon;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.PlayCharacterFPPMontage
	 */
	struct UABP_HDPlayerCharacter_FP_C_PlayCharacterFPPMontage_Params
	{
	public:
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bForceDisableAutoBlendOut;                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EQAZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayDuration;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.UpdateLeanOffsets
	 */
	struct UABP_HDPlayerCharacter_FP_C_UpdateLeanOffsets_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AssignLegacyWeaponLocomotionAnims
	 */
	struct UABP_HDPlayerCharacter_FP_C_AssignLegacyWeaponLocomotionAnims_Params
	{
	public:
		TMap<class FName, class UAnimSequenceBase*>                WeaponAnimSet;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.AssignWeaponLocomotionAnims
	 */
	struct UABP_HDPlayerCharacter_FP_C_AssignWeaponLocomotionAnims_Params
	{
	public:
		struct FCharacterAnimCollection                            AnimCollection;                                          // 0x0000(0x0128)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bReadyToThrow;                                           // 0x0128(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SE59[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateAnimation
	 */
	struct UABP_HDPlayerCharacter_FP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.UpdateAttachments
	 */
	struct UABP_HDPlayerCharacter_FP_C_UpdateAttachments_Params
	{	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdatePawnOwnerRefs
	 */
	struct UABP_HDPlayerCharacter_FP_C_BlueprintUpdatePawnOwnerRefs_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateControllerOwnerRefs
	 */
	struct UABP_HDPlayerCharacter_FP_C_BlueprintUpdateControllerOwnerRefs_Params
	{
	public:
		class AController*                                         NewC;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.BlueprintUpdateEquippedWeaponRefs
	 */
	struct UABP_HDPlayerCharacter_FP_C_BlueprintUpdateEquippedWeaponRefs_Params
	{
	public:
		class ADFBaseItem*                                         NewWeap;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.WeaponUpdated
	 */
	struct UABP_HDPlayerCharacter_FP_C_WeaponUpdated_Params
	{
	public:
		class ABP_HDWeaponBase_C*                                  NewWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_HDPlayerCharacter_FP.ABP_HDPlayerCharacter_FP_C.ExecuteUbergraph_ABP_HDPlayerCharacter_FP
	 */
	struct UABP_HDPlayerCharacter_FP_C_ExecuteUbergraph_ABP_HDPlayerCharacter_FP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
