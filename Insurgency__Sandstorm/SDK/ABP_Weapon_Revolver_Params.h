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
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.UpdateRevolverChamberState
	 */
	struct UABP_Weapon_Revolver_C_UpdateRevolverChamberState_Params
	{
	public:
		TArray<ERevolverChamberState>                              bpp__Chambers__pf__const;                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ToggleOpticState
	 */
	struct UABP_Weapon_Revolver_C_ToggleOpticState_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.StopToggleOpticMontage
	 */
	struct UABP_Weapon_Revolver_C_StopToggleOpticMontage_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.InterfaceUpdateSimulationBlend
	 */
	struct UABP_Weapon_Revolver_C_InterfaceUpdateSimulationBlend_Params
	{
	public:
		float                                                      bpp__State__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceToggleOpticState
	 */
	struct UABP_Weapon_Revolver_C_ForceToggleOpticState_Params
	{
	public:
		bool                                                       bpp__bEnable__pf;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceRevolverChamberVisibility
	 */
	struct UABP_Weapon_Revolver_C_ForceRevolverChamberVisibility_Params
	{
	public:
		int32_t                                                    bpp__RemainingAmmo__pf;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceChamber
	 */
	struct UABP_Weapon_Revolver_C_ForceChamber_Params
	{
	public:
		TArray<float>                                              bpp__Array__pf;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Value__pf__const;                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bpp__RemainingxAmmo__pfT;                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ExecuteUbergraph_ABP_Weapon_Revolver_1
	 */
	struct UABP_Weapon_Revolver_C_ExecuteUbergraph_ABP_Weapon_Revolver_1_Params
	{
	public:
		int32_t                                                    bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_FA9829984A70202AE2D91EB13EEA8810
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_FA9829984A70202AE2D91EB13EEA8810_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F49FA45F4414142C9E3B83ABCBE291DB
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F49FA45F4414142C9E3B83ABCBE291DB_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F20F63C54BAA3787668991B77D857787
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F20F63C54BAA3787668991B77D857787_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F04386D14C5A8CB4C3CC08A3C843A695
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F04386D14C5A8CB4C3CC08A3C843A695_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_CC4ED6E4438E67EEB8347EA12BC35987
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_CC4ED6E4438E67EEB8347EA12BC35987_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_B6832E53435C036393424BAC3DAF72D2
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_B6832E53435C036393424BAC3DAF72D2_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_AD96A30741E44DE317E6DFBAD2141B74
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_AD96A30741E44DE317E6DFBAD2141B74_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_6ED3AC4E451DD50D38BCB2BA17D0F6C6
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_6ED3AC4E451DD50D38BCB2BA17D0F6C6_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_68625448476BA4A1A4E7B187B0113355
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_68625448476BA4A1A4E7B187B0113355_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_5C5D155744A79918856E4DBDDF96489C
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_5C5D155744A79918856E4DBDDF96489C_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39A0B8BC4F6FE1FE6B19BDB39D801A27
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39A0B8BC4F6FE1FE6B19BDB39D801A27_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39902F1C4DF8C0002FE94A8323E8BF5F
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39902F1C4DF8C0002FE94A8323E8BF5F_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_330C21D0422B4A9ED852DF81EBEAF7DA
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_330C21D0422B4A9ED852DF81EBEAF7DA_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_234AFCEF40815CB3D6DE60A7A30B8A35
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_234AFCEF40815CB3D6DE60A7A30B8A35_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_22086CA84DE2C2B368AF238BCD360B35
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_22086CA84DE2C2B368AF238BCD360B35_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_200B5B4046E81FDA7AE26BAD8A3EDC6A
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_200B5B4046E81FDA7AE26BAD8A3EDC6A_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_166C436F4598BA84C00E5094350D79E5
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_166C436F4598BA84C00E5094350D79E5_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_1625372D44486CA5A1727E8A661363EA
	 */
	struct UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_1625372D44486CA5A1727E8A661363EA_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.BlueprintUpdateAnimation
	 */
	struct UABP_Weapon_Revolver_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.BlueprintInitializeAnimation
	 */
	struct UABP_Weapon_Revolver_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.AnimGraph
	 */
	struct UABP_Weapon_Revolver_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__InPose__pf;                                         // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0010(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
