/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04DD5950
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.UpdateRevolverChamberState
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<ERevolverChamberState>                      bpp__Chambers__pf__const                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::UpdateRevolverChamberState(TArray<ERevolverChamberState> bpp__Chambers__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.UpdateRevolverChamberState");
		
		UABP_Weapon_Revolver_C_UpdateRevolverChamberState_Params params {};
		params.bpp__Chambers__pf__const = bpp__Chambers__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBDDE0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ToggleOpticState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::ToggleOpticState(bool bpp__Enable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ToggleOpticState");
		
		UABP_Weapon_Revolver_C_ToggleOpticState_Params params {};
		params.bpp__Enable__pf = bpp__Enable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3500
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.StopToggleOpticMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_Weapon_Revolver_C::StopToggleOpticMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.StopToggleOpticMontage");
		
		UABP_Weapon_Revolver_C_StopToggleOpticMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB1A70
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.InterfaceUpdateSimulationBlend
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::InterfaceUpdateSimulationBlend(float bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.InterfaceUpdateSimulationBlend");
		
		UABP_Weapon_Revolver_C_InterfaceUpdateSimulationBlend_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5760
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceToggleOpticState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnable__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::ForceToggleOpticState(bool bpp__bEnable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceToggleOpticState");
		
		UABP_Weapon_Revolver_C_ForceToggleOpticState_Params params {};
		params.bpp__bEnable__pf = bpp__bEnable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DC3A10
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceRevolverChamberVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__RemainingAmmo__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::ForceRevolverChamberVisibility(int32_t bpp__RemainingAmmo__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceRevolverChamberVisibility");
		
		UABP_Weapon_Revolver_C_ForceRevolverChamberVisibility_Params params {};
		params.bpp__RemainingAmmo__pf = bpp__RemainingAmmo__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5630
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceChamber
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      bpp__Array__pf                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Value__pf__const                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__RemainingxAmmo__pfT                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::ForceChamber(TArray<float>* bpp__Array__pf, float bpp__Value__pf__const, int32_t bpp__RemainingxAmmo__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ForceChamber");
		
		UABP_Weapon_Revolver_C_ForceChamber_Params params {};
		params.bpp__Value__pf__const = bpp__Value__pf__const;
		params.bpp__RemainingxAmmo__pfT = bpp__RemainingxAmmo__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Array__pf != nullptr)
			*bpp__Array__pf = params.bpp__Array__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD55B0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ExecuteUbergraph_ABP_Weapon_Revolver_1
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::ExecuteUbergraph_ABP_Weapon_Revolver_1(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.ExecuteUbergraph_ABP_Weapon_Revolver_1");
		
		UABP_Weapon_Revolver_C_ExecuteUbergraph_ABP_Weapon_Revolver_1_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3EC0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_FA9829984A70202AE2D91EB13EEA8810
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_FA9829984A70202AE2D91EB13EEA8810()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_FA9829984A70202AE2D91EB13EEA8810");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_FA9829984A70202AE2D91EB13EEA8810_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB62B0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F49FA45F4414142C9E3B83ABCBE291DB
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F49FA45F4414142C9E3B83ABCBE291DB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F49FA45F4414142C9E3B83ABCBE291DB");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F49FA45F4414142C9E3B83ABCBE291DB_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0C60
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F20F63C54BAA3787668991B77D857787
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F20F63C54BAA3787668991B77D857787()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F20F63C54BAA3787668991B77D857787");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F20F63C54BAA3787668991B77D857787_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5F50
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F04386D14C5A8CB4C3CC08A3C843A695
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F04386D14C5A8CB4C3CC08A3C843A695()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F04386D14C5A8CB4C3CC08A3C843A695");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_F04386D14C5A8CB4C3CC08A3C843A695_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4BE0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_CC4ED6E4438E67EEB8347EA12BC35987
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_CC4ED6E4438E67EEB8347EA12BC35987()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_CC4ED6E4438E67EEB8347EA12BC35987");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_CC4ED6E4438E67EEB8347EA12BC35987_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4B60
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_B6832E53435C036393424BAC3DAF72D2
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_B6832E53435C036393424BAC3DAF72D2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_B6832E53435C036393424BAC3DAF72D2");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_B6832E53435C036393424BAC3DAF72D2_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4B80
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_AD96A30741E44DE317E6DFBAD2141B74
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_AD96A30741E44DE317E6DFBAD2141B74()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_AD96A30741E44DE317E6DFBAD2141B74");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_AD96A30741E44DE317E6DFBAD2141B74_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FC0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_6ED3AC4E451DD50D38BCB2BA17D0F6C6
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_6ED3AC4E451DD50D38BCB2BA17D0F6C6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_6ED3AC4E451DD50D38BCB2BA17D0F6C6");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_6ED3AC4E451DD50D38BCB2BA17D0F6C6_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFF20
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_68625448476BA4A1A4E7B187B0113355
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_68625448476BA4A1A4E7B187B0113355()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_68625448476BA4A1A4E7B187B0113355");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_68625448476BA4A1A4E7B187B0113355_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB41C0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_5C5D155744A79918856E4DBDDF96489C
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_5C5D155744A79918856E4DBDDF96489C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_5C5D155744A79918856E4DBDDF96489C");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_5C5D155744A79918856E4DBDDF96489C_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4DE0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39A0B8BC4F6FE1FE6B19BDB39D801A27
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39A0B8BC4F6FE1FE6B19BDB39D801A27()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39A0B8BC4F6FE1FE6B19BDB39D801A27");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39A0B8BC4F6FE1FE6B19BDB39D801A27_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0D20
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39902F1C4DF8C0002FE94A8323E8BF5F
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39902F1C4DF8C0002FE94A8323E8BF5F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39902F1C4DF8C0002FE94A8323E8BF5F");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_39902F1C4DF8C0002FE94A8323E8BF5F_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4CA0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_330C21D0422B4A9ED852DF81EBEAF7DA
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_330C21D0422B4A9ED852DF81EBEAF7DA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_330C21D0422B4A9ED852DF81EBEAF7DA");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_330C21D0422B4A9ED852DF81EBEAF7DA_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB53E0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_234AFCEF40815CB3D6DE60A7A30B8A35
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_234AFCEF40815CB3D6DE60A7A30B8A35()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_234AFCEF40815CB3D6DE60A7A30B8A35");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_234AFCEF40815CB3D6DE60A7A30B8A35_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB6290
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_22086CA84DE2C2B368AF238BCD360B35
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_22086CA84DE2C2B368AF238BCD360B35()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_22086CA84DE2C2B368AF238BCD360B35");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_22086CA84DE2C2B368AF238BCD360B35_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB62D0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_200B5B4046E81FDA7AE26BAD8A3EDC6A
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_200B5B4046E81FDA7AE26BAD8A3EDC6A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_200B5B4046E81FDA7AE26BAD8A3EDC6A");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_200B5B4046E81FDA7AE26BAD8A3EDC6A_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0D60
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_166C436F4598BA84C00E5094350D79E5
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_166C436F4598BA84C00E5094350D79E5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_166C436F4598BA84C00E5094350D79E5");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_166C436F4598BA84C00E5094350D79E5_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FE0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_1625372D44486CA5A1727E8A661363EA
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_Revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_1625372D44486CA5A1727E8A661363EA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_1625372D44486CA5A1727E8A661363EA");
		
		UABP_Weapon_Revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Revolver_AnimGraphNode_ModifyBone_1625372D44486CA5A1727E8A661363EA_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFCB0
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.BlueprintUpdateAnimation");
		
		UABP_Weapon_Revolver_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFC90
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_Revolver_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.BlueprintInitializeAnimation");
		
		UABP_Weapon_Revolver_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD5210
	 * 		Name   -> Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__InPose__pf                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_Revolver_C::AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon_Revolver.ABP_Weapon_Revolver_C.AnimGraph");
		
		UABP_Weapon_Revolver_C_AnimGraph_Params params {};
		params.bpp__InPose__pf = bpp__InPose__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Weapon_Revolver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Weapon_Revolver_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_Weapon_Revolver.ABP_Weapon_Revolver_C");
		return ptr;
	}

}


