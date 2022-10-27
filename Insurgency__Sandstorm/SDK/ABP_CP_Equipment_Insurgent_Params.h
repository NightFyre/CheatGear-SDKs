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
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdatEquipmentOnBack
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdatEquipmentOnBack_Params
	{
	public:
		class UINSSkeletalMeshComponent*                           bpp__Carrier__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AINSSoldier*                                         bpp__Soldier__pf;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdateNightVisionState
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdateNightVisionState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdateInsurgentNVGState
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdateInsurgentNVGState_Params
	{	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdateGearCopyPoseAnim
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdateGearCopyPoseAnim_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bProfile__pf;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFemale__pf;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1L7D[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMeshComponent*                              bpp__Character__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABP_Gear_BASE_Carrier_C*                             bpp__Carrier__pf;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SOC9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdateGearBoneVisibility
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdateGearBoneVisibility_Params
	{
	public:
		bool                                                       bpp__Visibility__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdateGasMaskState
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdateGasMaskState_Params
	{
	public:
		EEquipableState                                            bpp__State__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdateGasmaskReference
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdateGasmaskReference_Params
	{
	public:
		class ABP_Gear_GasMask_C*                                  bpp__Gasmask__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdateCharacterBoneHide
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdateCharacterBoneHide_Params
	{
	public:
		class UABP_Character_C*                                    bpp__AnimInstance__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Gunner__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Passenger__pf;                                      // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.UpdateCharacterAnimInstance
	 */
	struct UABP_CP_Equipment_Insurgent_C_UpdateCharacterAnimInstance_Params
	{
	public:
		class UAnimInstance*                                       bpp__GearAnimInstance__pf;                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECarrierArmour                                             bpp__Combination__pf;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q1GD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                bpp__Faction__pf;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.ResetEquipmentPhysics
	 */
	struct UABP_CP_Equipment_Insurgent_C_ResetEquipmentPhysics_Params
	{	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.PrintHelper
	 */
	struct UABP_CP_Equipment_Insurgent_C_PrintHelper_Params
	{
	public:
		class FString                                              bpp__Title__pf__const;                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              bpp__Input__pf__const;                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Duration__pf;                                       // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        bpp__TextColor__pf;                                      // 0x0024(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.NewFunction_1
	 */
	struct UABP_CP_Equipment_Insurgent_C_NewFunction_1_Params
	{	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.MolotovRagState
	 */
	struct UABP_CP_Equipment_Insurgent_C_MolotovRagState_Params
	{
	public:
		bool                                                       bpp__bEnabled__pf;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CP_Equipment_Insurgent_AnimGraphNode_BlendListByBool_F0025F9F4C62D4AFD72307A1BADD27BD
	 */
	struct UABP_CP_Equipment_Insurgent_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CP_Equipment_Insurgent_AnimGraphNode_BlendListByBool_F0025F9F4C62D4AFD72307A1BADD27BD_Params
	{	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.DeltaRotatorAxis
	 */
	struct UABP_CP_Equipment_Insurgent_C_DeltaRotatorAxis_Params
	{
	public:
		float                                                      bpp__Axisx1__pfT;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Axisx2__pfT;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Return__pf;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.CombineRotatorAxis
	 */
	struct UABP_CP_Equipment_Insurgent_C_CombineRotatorAxis_Params
	{
	public:
		float                                                      bpp__Axisx1__pfT;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Axisx2__pfT;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Return__pf;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.CalcRelativeTransform
	 */
	struct UABP_CP_Equipment_Insurgent_C_CalcRelativeTransform_Params
	{
	public:
		struct FTransform                                          bpp__Child__pf__const;                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          bpp__Parent__pf__const;                                  // 0x0030(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          bpp__Return__pf;                                         // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.BlueprintUpdateAnimation
	 */
	struct UABP_CP_Equipment_Insurgent_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.BlueprintInitializeAnimation
	 */
	struct UABP_CP_Equipment_Insurgent_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.BlendOutMontage
	 */
	struct UABP_CP_Equipment_Insurgent_C_BlendOutMontage_Params
	{
	public:
		class UAnimSequenceBase*                                   bpp__Montage__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_CP_Equipment_Insurgent.ABP_CP_Equipment_Insurgent_C.AnimGraph
	 */
	struct UABP_CP_Equipment_Insurgent_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
