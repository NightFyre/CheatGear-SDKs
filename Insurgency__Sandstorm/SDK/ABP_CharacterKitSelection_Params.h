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
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdatEquipmentOnBack
	 */
	struct UABP_CharacterKitSelection_C_UpdatEquipmentOnBack_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Carrier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateNightVisionState
	 */
	struct UABP_CharacterKitSelection_C_UpdateNightVisionState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateInsurgentNVGState
	 */
	struct UABP_CharacterKitSelection_C_UpdateInsurgentNVGState_Params
	{	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGearCopyPoseAnim
	 */
	struct UABP_CharacterKitSelection_C_UpdateGearCopyPoseAnim_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bProfile__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFemale__pf;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZAKX[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              bpp__Character__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABP_Gear_BASE_Carrier_C*                             bpp__Carrier__pf;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HKIZ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGearBoneVisibility
	 */
	struct UABP_CharacterKitSelection_C_UpdateGearBoneVisibility_Params
	{
	public:
		bool                                                       bpp__Visibility__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGasMaskState
	 */
	struct UABP_CharacterKitSelection_C_UpdateGasMaskState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateGasmaskReference
	 */
	struct UABP_CharacterKitSelection_C_UpdateGasmaskReference_Params
	{
	public:
		class ABP_Gear_GasMask_C*                                  bpp__Gasmask__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateEquipable
	 */
	struct UABP_CharacterKitSelection_C_UpdateEquipable_Params
	{	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCurveAlpha
	 */
	struct UABP_CharacterKitSelection_C_UpdateCurveAlpha_Params
	{
	public:
		bool                                                       bpp__Condition__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SF2H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Curve__pf;                                          // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Return__pf;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCharacterBoneHide
	 */
	struct UABP_CharacterKitSelection_C_UpdateCharacterBoneHide_Params
	{
	public:
		class UABP_Character_C*                                    bpp__AnimInstance__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Gunner__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Passenger__pf;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.UpdateCharacterAnimInstance
	 */
	struct UABP_CharacterKitSelection_C_UpdateCharacterAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       bpp__GearAnimInstance__pf;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7GJK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.StoreAnimations
	 */
	struct UABP_CharacterKitSelection_C_StoreAnimations_Params
	{
	public:
		struct FCharacterAnimEquipable                             bpp__Common__pf;                                         // 0x0000(0x0258)  (Parm, NativeAccessSpecifierPublic)
		struct FCharacterAnimFirearm                               bpp__FirearmStruct__pf;                                  // 0x0258(0x0598)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFirearm__pf;                                       // 0x07F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.SetCharacterAnimation
	 */
	struct UABP_CharacterKitSelection_C_SetCharacterAnimation_Params
	{	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.ResetEquipmentPhysics
	 */
	struct UABP_CharacterKitSelection_C_ResetEquipmentPhysics_Params
	{	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.PlaySpecial
	 */
	struct UABP_CharacterKitSelection_C_PlaySpecial_Params
	{
	public:
		float                                                      bpp__SpecialIntervalTime__pf;                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__SpecialIntervalTimeMainMenu__pf;                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Enable__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.NewFunction_1
	 */
	struct UABP_CharacterKitSelection_C_NewFunction_1_Params
	{	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.MolotovRagState
	 */
	struct UABP_CharacterKitSelection_C_MolotovRagState_Params
	{
	public:
		bool                                                       bpp__bEnabled__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.GetUnderbarrelSequence
	 */
	struct UABP_CharacterKitSelection_C_GetUnderbarrelSequence_Params
	{
	public:
		class UObject*                                             bpp__Upgrade__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__WeaponMount__pf;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__ValidAnim__pf;                                      // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_87EF30D749ED80A2730E66B8157C96E8
	 */
	struct UABP_CharacterKitSelection_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_87EF30D749ED80A2730E66B8157C96E8_Params
	{	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_7E40BAEE4E9A2D5B34C1FF898A5F577E
	 */
	struct UABP_CharacterKitSelection_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterKitSelection_AnimGraphNode_ModifyBone_7E40BAEE4E9A2D5B34C1FF898A5F577E_Params
	{	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.DeltaRotatorAxis
	 */
	struct UABP_CharacterKitSelection_C_DeltaRotatorAxis_Params
	{
	public:
		float                                                      bpp__A__pf;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__B__pf;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Return__pf;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcUnderbarrelOffset
	 */
	struct UABP_CharacterKitSelection_C_CalcUnderbarrelOffset_Params
	{
	public:
		class UWeaponUpgradeComponent*                             bpp__Upgrade__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcRotationAxisInterp
	 */
	struct UABP_CharacterKitSelection_C_CalcRotationAxisInterp_Params
	{
	public:
		float                                                      bpp__Original__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Target__pf;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Speed__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Return__pf;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcRelativeTransform
	 */
	struct UABP_CharacterKitSelection_C_CalcRelativeTransform_Params
	{
	public:
		struct FTransform                                          bpp__Child__pf;                                          // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          bpp__Parent__pf;                                         // 0x0030(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          bpp__Transform__pf;                                      // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.CalcForearmTwistAlpha
	 */
	struct UABP_CharacterKitSelection_C_CalcForearmTwistAlpha_Params
	{
	public:
		class USceneComponent*                                     bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__BoneName__pf;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__LeftHand__pf;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5AUD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.BlueprintUpdateAnimation
	 */
	struct UABP_CharacterKitSelection_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.BlendOutMontage
	 */
	struct UABP_CharacterKitSelection_C_BlendOutMontage_Params
	{
	public:
		class UAnimSequenceBase*                                   bpp__Montage__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CharacterKitSelection.ABP_CharacterKitSelection_C.AnimGraph
	 */
	struct UABP_CharacterKitSelection_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
