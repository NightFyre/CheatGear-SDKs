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
	 * 		RVA    -> 0x04DD2500
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.Update Optic Toggle Attachment
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp__Upgrade__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              bpp__Delegate__pf__const                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::Update_Optic_Toggle_Attachment(class UObject* bpp__Upgrade__pf, const class FScriptDelegate& bpp__Delegate__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.Update Optic Toggle Attachment");
		
		UABP_Weapon_C_Update_Optic_Toggle_Attachment_Params params {};
		params.bpp__Upgrade__pf = bpp__Upgrade__pf;
		params.bpp__Delegate__pf__const = bpp__Delegate__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2470
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.Update Attached Weapon Sight Offset
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AItemFirearm*                                bpp__ParentFirearm__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::Update_Attached_Weapon_Sight_Offset(class AItemFirearm* bpp__ParentFirearm__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.Update Attached Weapon Sight Offset");
		
		UABP_Weapon_C_Update_Attached_Weapon_Sight_Offset_Params params {};
		params.bpp__ParentFirearm__pf = bpp__ParentFirearm__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4B40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateUsePointShoot
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::UpdateUsePointShoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateUsePointShoot");
		
		UABP_Weapon_C_UpdateUsePointShoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4420
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateTransform
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::UpdateTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateTransform");
		
		UABP_Weapon_C_UpdateTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD23C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateRevolverChamberState
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<ERevolverChamberState>                      bpp__Chambers__pf__const                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::UpdateRevolverChamberState(TArray<ERevolverChamberState> bpp__Chambers__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateRevolverChamberState");
		
		UABP_Weapon_C_UpdateRevolverChamberState_Params params {};
		params.bpp__Chambers__pf__const = bpp__Chambers__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2310
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateRevolverChamberPostProcess
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<ERevolverChamberState>                      bpp__Chambers__pf                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::UpdateRevolverChamberPostProcess(TArray<ERevolverChamberState>* bpp__Chambers__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateRevolverChamberPostProcess");
		
		UABP_Weapon_C_UpdateRevolverChamberPostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Chambers__pf != nullptr)
			*bpp__Chambers__pf = params.bpp__Chambers__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2160
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateOpticToggleState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__LatchedMode__pf__const                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__DesiredMode__pf__const                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::UpdateOpticToggleState(int32_t bpp__LatchedMode__pf__const, int32_t bpp__DesiredMode__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateOpticToggleState");
		
		UABP_Weapon_C_UpdateOpticToggleState_Params params {};
		params.bpp__LatchedMode__pf__const = bpp__LatchedMode__pf__const;
		params.bpp__DesiredMode__pf__const = bpp__DesiredMode__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2220
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateOpticToggle
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp__Upgrade__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              bpp__Delegate__pf__const                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::UpdateOpticToggle(class UObject* bpp__Upgrade__pf, const class FScriptDelegate& bpp__Delegate__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateOpticToggle");
		
		UABP_Weapon_C_UpdateOpticToggle_Params params {};
		params.bpp__Upgrade__pf = bpp__Upgrade__pf;
		params.bpp__Delegate__pf__const = bpp__Delegate__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2070
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateOpticState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__Mode__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__DesiredMode__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp__Upgrade__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::UpdateOpticState(int32_t bpp__Mode__pf, int32_t bpp__DesiredMode__pf, class UObject* bpp__Upgrade__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateOpticState");
		
		UABP_Weapon_C_UpdateOpticState_Params params {};
		params.bpp__Mode__pf = bpp__Mode__pf;
		params.bpp__DesiredMode__pf = bpp__DesiredMode__pf;
		params.bpp__Upgrade__pf = bpp__Upgrade__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1FB0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateOpticOnAttachment
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__LatchedMode__pf__const                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__DesiredMode__pf__const                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::UpdateOpticOnAttachment(int32_t bpp__LatchedMode__pf__const, int32_t bpp__DesiredMode__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateOpticOnAttachment");
		
		UABP_Weapon_C_UpdateOpticOnAttachment_Params params {};
		params.bpp__LatchedMode__pf__const = bpp__LatchedMode__pf__const;
		params.bpp__DesiredMode__pf__const = bpp__DesiredMode__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5580
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateMorphMagazine
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::UpdateMorphMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateMorphMagazine");
		
		UABP_Weapon_C_UpdateMorphMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB52E0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.UpdateEquipable
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::UpdateEquipable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.UpdateEquipable");
		
		UABP_Weapon_C_UpdateEquipable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3F20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ToggleVisibilityOfNVG_On
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::ToggleVisibilityOfNVG_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ToggleVisibilityOfNVG_On");
		
		UABP_Weapon_C_ToggleVisibilityOfNVG_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3920
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ToggleVisibilityOfNVG_Off
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::ToggleVisibilityOfNVG_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ToggleVisibilityOfNVG_Off");
		
		UABP_Weapon_C_ToggleVisibilityOfNVG_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1F20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ToggleOpticState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ToggleOpticState(bool bpp__Enable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ToggleOpticState");
		
		UABP_Weapon_C_ToggleOpticState_Params params {};
		params.bpp__Enable__pf = bpp__Enable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1E90
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ToggleADS
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__In__pf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ToggleADS(bool bpp__In__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ToggleADS");
		
		UABP_Weapon_C_ToggleADS_Params params {};
		params.bpp__In__pf = bpp__In__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3E60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.StopToggleOpticMontage
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::StopToggleOpticMontage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.StopToggleOpticMontage");
		
		UABP_Weapon_C_StopToggleOpticMontage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1E10
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.StopAmmoCheck
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__BlendOutTime__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::StopAmmoCheck(float bpp__BlendOutTime__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.StopAmmoCheck");
		
		UABP_Weapon_C_StopAmmoCheck_Params params {};
		params.bpp__BlendOutTime__pf = bpp__BlendOutTime__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1C70
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.SightAlignment
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      bpp__EquipableComponent__pf                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      bpp__AttachmentComponent__pf                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__SightRotation__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__ModelFlattenScale__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Return__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::SightAlignment(class USkeletalMeshComponent* bpp__EquipableComponent__pf, class USkeletalMeshComponent* bpp__AttachmentComponent__pf, float bpp__SightRotation__pf, float bpp__ModelFlattenScale__pf, struct FVector* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.SightAlignment");
		
		UABP_Weapon_C_SightAlignment_Params params {};
		params.bpp__EquipableComponent__pf = bpp__EquipableComponent__pf;
		params.bpp__AttachmentComponent__pf = bpp__AttachmentComponent__pf;
		params.bpp__SightRotation__pf = bpp__SightRotation__pf;
		params.bpp__ModelFlattenScale__pf = bpp__ModelFlattenScale__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1B60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.SetupReloadVariables
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__DryReload__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__SingleReload__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__RateMultiplier__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::SetupReloadVariables(bool bpp__DryReload__pf, bool bpp__SingleReload__pf, float bpp__RateMultiplier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.SetupReloadVariables");
		
		UABP_Weapon_C_SetupReloadVariables_Params params {};
		params.bpp__DryReload__pf = bpp__DryReload__pf;
		params.bpp__SingleReload__pf = bpp__SingleReload__pf;
		params.bpp__RateMultiplier__pf = bpp__RateMultiplier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4FE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.SetSprintAnimations
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::SetSprintAnimations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.SetSprintAnimations");
		
		UABP_Weapon_C_SetSprintAnimations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1AD0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.SetFireModeBase
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__TwoFireModes__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::SetFireModeBase(bool bpp__TwoFireModes__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.SetFireModeBase");
		
		UABP_Weapon_C_SetFireModeBase_Params params {};
		params.bpp__TwoFireModes__pf = bpp__TwoFireModes__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1A40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.SetEquipable
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AItemEquipable*                              bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::SetEquipable(class AItemEquipable* bpp__Item__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.SetEquipable");
		
		UABP_Weapon_C_SetEquipable_Params params {};
		params.bpp__Item__pf = bpp__Item__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD19B0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.SetAmmoContainer
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__AlternateMag__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::SetAmmoContainer(bool bpp__AlternateMag__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.SetAmmoContainer");
		
		UABP_Weapon_C_SetAmmoContainer_Params params {};
		params.bpp__AlternateMag__pf = bpp__AlternateMag__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1700
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.SelectReload
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FReloadGroup>                        bpp__Reloads__pf                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                bpp__Reload__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                bpp__ReloadEmpty__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                bpp__ReloadStages__pf                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__SelectedReload__pf                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::SelectReload(TArray<struct FReloadGroup>* bpp__Reloads__pf, class UAnimMontage** bpp__Reload__pf, class UAnimMontage** bpp__ReloadEmpty__pf, class UAnimMontage** bpp__ReloadStages__pf, int32_t* bpp__SelectedReload__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.SelectReload");
		
		UABP_Weapon_C_SelectReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Reloads__pf != nullptr)
			*bpp__Reloads__pf = params.bpp__Reloads__pf;
		if (bpp__Reload__pf != nullptr)
			*bpp__Reload__pf = params.bpp__Reload__pf;
		if (bpp__ReloadEmpty__pf != nullptr)
			*bpp__ReloadEmpty__pf = params.bpp__ReloadEmpty__pf;
		if (bpp__ReloadStages__pf != nullptr)
			*bpp__ReloadStages__pf = params.bpp__ReloadStages__pf;
		if (bpp__SelectedReload__pf != nullptr)
			*bpp__SelectedReload__pf = params.bpp__SelectedReload__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4E60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ScavengeAnimation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::ScavengeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ScavengeAnimation");
		
		UABP_Weapon_C_ScavengeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3640
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.PointShootToggle
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::PointShootToggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.PointShootToggle");
		
		UABP_Weapon_C_PointShootToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3860
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.Play Ready
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::Play_Ready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.Play Ready");
		
		UABP_Weapon_C_Play_Ready_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD15D0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.PlaySwitchMagazine
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UAnimSequence*>                       bpp__Animation__pf                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__Index__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::PlaySwitchMagazine(TArray<class UAnimSequence*>* bpp__Animation__pf, int32_t bpp__Index__pf, float bpp__Speed__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.PlaySwitchMagazine");
		
		UABP_Weapon_C_PlaySwitchMagazine_Params params {};
		params.bpp__Index__pf = bpp__Index__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Animation__pf != nullptr)
			*bpp__Animation__pf = params.bpp__Animation__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4480
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.PlayReady
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::PlayReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.PlayReady");
		
		UABP_Weapon_C_PlayReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5C90
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.PlayDetonatorActivate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::PlayDetonatorActivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.PlayDetonatorActivate");
		
		UABP_Weapon_C_PlayDetonatorActivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1500
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.PlayActorInteraction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__InteractingxActor__pfT                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUseItem                                           bpp__UsableActorType__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::PlayActorInteraction(class AActor* bpp__InteractingxActor__pfT, EUseItem bpp__UsableActorType__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.PlayActorInteraction");
		
		UABP_Weapon_C_PlayActorInteraction_Params params {};
		params.bpp__InteractingxActor__pfT = bpp__InteractingxActor__pfT;
		params.bpp__UsableActorType__pf = bpp__UsableActorType__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5060
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.PlantStart
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::PlantStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.PlantStart");
		
		UABP_Weapon_C_PlantStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB78E0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.PlantFinished
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::PlantFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.PlantFinished");
		
		UABP_Weapon_C_PlantFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5240
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.PlantAbondoned
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::PlantAbondoned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.PlantAbondoned");
		
		UABP_Weapon_C_PlantAbondoned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1400
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnUseActorInteracted
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__InteractingActor__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUseItem                                           bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnUseActorInteracted(class AINSSoldier* bpp__Interactor__pf, class AActor* bpp__InteractingActor__pf, EUseItem bpp__Item__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnUseActorInteracted");
		
		UABP_Weapon_C_OnUseActorInteracted_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__InteractingActor__pf = bpp__InteractingActor__pf;
		params.bpp__Item__pf = bpp__Item__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD12A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnTakeDamage
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDamageType*                                 bpp__DamageType__pf__const                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FNetHitReaction                             bpp__HitReaction__pf                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnTakeDamage(class UDamageType* bpp__DamageType__pf__const, const struct FNetHitReaction& bpp__HitReaction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnTakeDamage");
		
		UABP_Weapon_C_OnTakeDamage_Params params {};
		params.bpp__DamageType__pf__const = bpp__DamageType__pf__const;
		params.bpp__HitReaction__pf = bpp__HitReaction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD11D0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnScavengeMagazine
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemWeapon*                                 bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnScavengeMagazine(class AINSSoldier* bpp__Interactor__pf, class AItemWeapon* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnScavengeMagazine");
		
		UABP_Weapon_C_OnScavengeMagazine_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1140
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayWeaponMelee
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Bash__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnPlayWeaponMelee(bool bpp__Bash__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayWeaponMelee");
		
		UABP_Weapon_C_OnPlayWeaponMelee_Params params {};
		params.bpp__Bash__pf = bpp__Bash__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD1020
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayRevolverReload
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__DryReload__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Debug__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                bpp__MontageReference__pf                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnPlayRevolverReload(bool bpp__DryReload__pf, bool bpp__Debug__pf, class UAnimMontage** bpp__MontageReference__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayRevolverReload");
		
		UABP_Weapon_C_OnPlayRevolverReload_Params params {};
		params.bpp__DryReload__pf = bpp__DryReload__pf;
		params.bpp__Debug__pf = bpp__Debug__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__MontageReference__pf != nullptr)
			*bpp__MontageReference__pf = params.bpp__MontageReference__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0F40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayReload
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bDryReload__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                bpp__MontageReference__pf                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnPlayReload(bool bpp__bDryReload__pf, class UAnimMontage** bpp__MontageReference__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayReload");
		
		UABP_Weapon_C_OnPlayReload_Params params {};
		params.bpp__bDryReload__pf = bpp__bDryReload__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__MontageReference__pf != nullptr)
			*bpp__MontageReference__pf = params.bpp__MontageReference__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0E60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayRechamber
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__BoltSpeed__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                bpp__Reference__pf                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnPlayRechamber(float bpp__BoltSpeed__pf, class UAnimMontage** bpp__Reference__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayRechamber");
		
		UABP_Weapon_C_OnPlayRechamber_Params params {};
		params.bpp__BoltSpeed__pf = bpp__BoltSpeed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Reference__pf != nullptr)
			*bpp__Reference__pf = params.bpp__Reference__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0D00
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayMeleeDamage
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDamageType*                                 bpp__DamagexType__pfT__const                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FNetHitReaction                             bpp__HitReaction__pf                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnPlayMeleeDamage(class UDamageType* bpp__DamagexType__pfT__const, const struct FNetHitReaction& bpp__HitReaction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayMeleeDamage");
		
		UABP_Weapon_C_OnPlayMeleeDamage_Params params {};
		params.bpp__DamagexType__pfT__const = bpp__DamagexType__pfT__const;
		params.bpp__HitReaction__pf = bpp__HitReaction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB49C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayKick
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnPlayKick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayKick");
		
		UABP_Weapon_C_OnPlayKick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0C30
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayGearItemChangeState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AItemInteractableGear*                       bpp__ItemGear__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipableState                                    bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnPlayGearItemChangeState(class AItemInteractableGear* bpp__ItemGear__pf, EEquipableState bpp__NewState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayGearItemChangeState");
		
		UABP_Weapon_C_OnPlayGearItemChangeState_Params params {};
		params.bpp__ItemGear__pf = bpp__ItemGear__pf;
		params.bpp__NewState__pf = bpp__NewState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB43A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayFiremodeCycle
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnPlayFiremodeCycle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayFiremodeCycle");
		
		UABP_Weapon_C_OnPlayFiremodeCycle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3560
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayFireExplcit
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnPlayFireExplcit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayFireExplcit");
		
		UABP_Weapon_C_OnPlayFireExplcit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB53C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayFire
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnPlayFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayFire");
		
		UABP_Weapon_C_OnPlayFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5520
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayDetonate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnPlayDetonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayDetonate");
		
		UABP_Weapon_C_OnPlayDetonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0A70
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltReloadAfterSwitchMagazine
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                bpp__AnimReloadBoltAfterSwitchMagazine__pf                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                bpp__MontagexReference__pfT                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnPlayBoltReloadAfterSwitchMagazine(class UAnimMontage* bpp__AnimReloadBoltAfterSwitchMagazine__pf, class UAnimMontage** bpp__MontagexReference__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltReloadAfterSwitchMagazine");
		
		UABP_Weapon_C_OnPlayBoltReloadAfterSwitchMagazine_Params params {};
		params.bpp__AnimReloadBoltAfterSwitchMagazine__pf = bpp__AnimReloadBoltAfterSwitchMagazine__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__MontagexReference__pfT != nullptr)
			*bpp__MontagexReference__pfT = params.bpp__MontagexReference__pfT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0B50
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltReload
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__DryReload__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                bpp__MontagexReference__pfT                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnPlayBoltReload(bool bpp__DryReload__pf, class UAnimMontage** bpp__MontagexReference__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltReload");
		
		UABP_Weapon_C_OnPlayBoltReload_Params params {};
		params.bpp__DryReload__pf = bpp__DryReload__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__MontagexReference__pfT != nullptr)
			*bpp__MontagexReference__pfT = params.bpp__MontagexReference__pfT;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4920
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltFire
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnPlayBoltFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayBoltFire");
		
		UABP_Weapon_C_OnPlayBoltFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB47C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnPlayAmmoCheck
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnPlayAmmoCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnPlayAmmoCheck");
		
		UABP_Weapon_C_OnPlayAmmoCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4E20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnMeleeAttack
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnMeleeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnMeleeAttack");
		
		UABP_Weapon_C_OnMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5440
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnInterruptReload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnInterruptReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnInterruptReload");
		
		UABP_Weapon_C_OnInterruptReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4C00
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnFireStart
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnFireStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnFireStart");
		
		UABP_Weapon_C_OnFireStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB51A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnFireEnd
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::OnFireEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnFireEnd");
		
		UABP_Weapon_C_OnFireEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0950
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.OnDoorKick
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bKickWillSucceed__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnDoorKick(bool bpp__bKickWillSucceed__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.OnDoorKick");
		
		UABP_Weapon_C_OnDoorKick_Params params {};
		params.bpp__bKickWillSucceed__pf = bpp__bKickWillSucceed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD08D0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.InterfaceUpdateSimulationBlend
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::InterfaceUpdateSimulationBlend(float bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.InterfaceUpdateSimulationBlend");
		
		UABP_Weapon_C_InterfaceUpdateSimulationBlend_Params params {};
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0800
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.InteractOneHandNVG
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AItemInteractableGear*                       bpp__GearItem__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipableState                                    bpp__State__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::InteractOneHandNVG(class AItemInteractableGear* bpp__GearItem__pf, EEquipableState bpp__State__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.InteractOneHandNVG");
		
		UABP_Weapon_C_InteractOneHandNVG_Params params {};
		params.bpp__GearItem__pf = bpp__GearItem__pf;
		params.bpp__State__pf = bpp__State__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0690
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.IKCurve Alpha
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bpp__Condition__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Subtract__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__CurveName__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Alpha__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::IKCurve_Alpha(bool bpp__Condition__pf, bool bpp__Subtract__pf, const class FName& bpp__CurveName__pf, float* bpp__Alpha__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.IKCurve Alpha");
		
		UABP_Weapon_C_IKCurve_Alpha_Params params {};
		params.bpp__Condition__pf = bpp__Condition__pf;
		params.bpp__Subtract__pf = bpp__Subtract__pf;
		params.bpp__CurveName__pf = bpp__CurveName__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Alpha__pf != nullptr)
			*bpp__Alpha__pf = params.bpp__Alpha__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0440
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.GetRevolverEmpty
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bpp__Revolver__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ERevolverChamberState>                      bpp__RevolverChambers__pf                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Debug__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Return__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::GetRevolverEmpty(bool bpp__Revolver__pf, TArray<ERevolverChamberState>* bpp__RevolverChambers__pf, bool bpp__Debug__pf, bool* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.GetRevolverEmpty");
		
		UABP_Weapon_C_GetRevolverEmpty_Params params {};
		params.bpp__Revolver__pf = bpp__Revolver__pf;
		params.bpp__Debug__pf = bpp__Debug__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__RevolverChambers__pf != nullptr)
			*bpp__RevolverChambers__pf = params.bpp__RevolverChambers__pf;
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD03B0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ForceToggleOpticState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bEnable__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ForceToggleOpticState(bool bpp__bEnable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ForceToggleOpticState");
		
		UABP_Weapon_C_ForceToggleOpticState_Params params {};
		params.bpp__bEnable__pf = bpp__bEnable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0320
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ForceRevolverChamberVisibility
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__RemainingAmmo__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ForceRevolverChamberVisibility(int32_t bpp__RemainingAmmo__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ForceRevolverChamberVisibility");
		
		UABP_Weapon_C_ForceRevolverChamberVisibility_Params params {};
		params.bpp__RemainingAmmo__pf = bpp__RemainingAmmo__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD02A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_94
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ExecuteUbergraph_ABP_Weapon_94(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_94");
		
		UABP_Weapon_C_ExecuteUbergraph_ABP_Weapon_94_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0220
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_5
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ExecuteUbergraph_ABP_Weapon_5(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_5");
		
		UABP_Weapon_C_ExecuteUbergraph_ABP_Weapon_5_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD01A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_119
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ExecuteUbergraph_ABP_Weapon_119(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_119");
		
		UABP_Weapon_C_ExecuteUbergraph_ABP_Weapon_119_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0120
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_1
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ExecuteUbergraph_ABP_Weapon_1(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ExecuteUbergraph_ABP_Weapon_1");
		
		UABP_Weapon_C_ExecuteUbergraph_ABP_Weapon_1_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DBFC90
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_D05DF7334956D02FDABC06967D6DB18B
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_D05DF7334956D02FDABC06967D6DB18B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_D05DF7334956D02FDABC06967D6DB18B");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_D05DF7334956D02FDABC06967D6DB18B_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB53E0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_C704FD43482A348C04E83AA7F446036E
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_C704FD43482A348C04E83AA7F446036E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_C704FD43482A348C04E83AA7F446036E");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_C704FD43482A348C04E83AA7F446036E_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0D00
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_80C9A5394F0DB721E336D89CD1B04247
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_80C9A5394F0DB721E336D89CD1B04247()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_80C9A5394F0DB721E336D89CD1B04247");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_80C9A5394F0DB721E336D89CD1B04247_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DE30E0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_32838D4E49D0EE64E90B138A2557C608
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_32838D4E49D0EE64E90B138A2557C608()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_32838D4E49D0EE64E90B138A2557C608");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoWayBlend_32838D4E49D0EE64E90B138A2557C608_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0080
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoBoneIK_62671E2741385919C2B2E4824E87120E
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoBoneIK_62671E2741385919C2B2E4824E87120E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoBoneIK_62671E2741385919C2B2E4824E87120E");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TwoBoneIK_62671E2741385919C2B2E4824E87120E_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4060
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF2C5D5E4DD3D02165438A9010B218F6
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF2C5D5E4DD3D02165438A9010B218F6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF2C5D5E4DD3D02165438A9010B218F6");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF2C5D5E4DD3D02165438A9010B218F6_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0D20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF0ADCCB46B5227C1316F68739EB3417
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF0ADCCB46B5227C1316F68739EB3417()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF0ADCCB46B5227C1316F68739EB3417");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_FF0ADCCB46B5227C1316F68739EB3417_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0060
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_F1516D9D44651050150432917B210B14
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_F1516D9D44651050150432917B210B14()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_F1516D9D44651050150432917B210B14");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_F1516D9D44651050150432917B210B14_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4560
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_EC5C4FC045217160D69661949735FC32
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_EC5C4FC045217160D69661949735FC32()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_EC5C4FC045217160D69661949735FC32");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_EC5C4FC045217160D69661949735FC32_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4CA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E8EA830547836E34099463A92709ECA0
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E8EA830547836E34099463A92709ECA0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E8EA830547836E34099463A92709ECA0");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E8EA830547836E34099463A92709ECA0_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5D60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E7FE93A74E3C0526A2DDEBA13B6C8CC4
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E7FE93A74E3C0526A2DDEBA13B6C8CC4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E7FE93A74E3C0526A2DDEBA13B6C8CC4");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E7FE93A74E3C0526A2DDEBA13B6C8CC4_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3EC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E16F1B184971F805AFE5C0A9EB6F5FDC
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E16F1B184971F805AFE5C0A9EB6F5FDC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E16F1B184971F805AFE5C0A9EB6F5FDC");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_E16F1B184971F805AFE5C0A9EB6F5FDC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0D60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DDB1F0A8439BEFD483385BB757F7ED8F
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DDB1F0A8439BEFD483385BB757F7ED8F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DDB1F0A8439BEFD483385BB757F7ED8F");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DDB1F0A8439BEFD483385BB757F7ED8F_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB1050
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DAA7E5E14DFFA69B87CF06B2BC4AE068
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DAA7E5E14DFFA69B87CF06B2BC4AE068()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DAA7E5E14DFFA69B87CF06B2BC4AE068");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_DAA7E5E14DFFA69B87CF06B2BC4AE068_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4B80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D47011F04F0E6BC9501C548735F577B0
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D47011F04F0E6BC9501C548735F577B0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D47011F04F0E6BC9501C548735F577B0");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D47011F04F0E6BC9501C548735F577B0_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0D40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D44E03434EBDE256A926B9A4C1D52A05
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D44E03434EBDE256A926B9A4C1D52A05()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D44E03434EBDE256A926B9A4C1D52A05");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D44E03434EBDE256A926B9A4C1D52A05_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3C20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D43F921C46198B67713CF389BEBBF579
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D43F921C46198B67713CF389BEBBF579()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D43F921C46198B67713CF389BEBBF579");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D43F921C46198B67713CF389BEBBF579_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0040
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D2E951EC4563008F5B4E78A160DDD7C0
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D2E951EC4563008F5B4E78A160DDD7C0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D2E951EC4563008F5B4E78A160DDD7C0");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D2E951EC4563008F5B4E78A160DDD7C0_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4320
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D137A3914FB912BACB71A799FBCF41D2
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D137A3914FB912BACB71A799FBCF41D2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D137A3914FB912BACB71A799FBCF41D2");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_D137A3914FB912BACB71A799FBCF41D2_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB46E0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_CE0C86294CB03D0333FDB8BEA4AFF55A
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_CE0C86294CB03D0333FDB8BEA4AFF55A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_CE0C86294CB03D0333FDB8BEA4AFF55A");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_CE0C86294CB03D0333FDB8BEA4AFF55A_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0C80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BFF8BF824D2754CFB94F5DADF231B6DF
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BFF8BF824D2754CFB94F5DADF231B6DF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BFF8BF824D2754CFB94F5DADF231B6DF");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BFF8BF824D2754CFB94F5DADF231B6DF_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB38A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BB6FCAC5429167244B395ABE04097FA8
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BB6FCAC5429167244B395ABE04097FA8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BB6FCAC5429167244B395ABE04097FA8");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_BB6FCAC5429167244B395ABE04097FA8_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0020
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B83AEDEA4DA8599B38DD32AF7B0F5B9A
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B83AEDEA4DA8599B38DD32AF7B0F5B9A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B83AEDEA4DA8599B38DD32AF7B0F5B9A");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B83AEDEA4DA8599B38DD32AF7B0F5B9A_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0CC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B7CDEF954329B13091AAC29488B9D1DF
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B7CDEF954329B13091AAC29488B9D1DF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B7CDEF954329B13091AAC29488B9D1DF");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B7CDEF954329B13091AAC29488B9D1DF_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4300
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B40568A64924D63FDD795BA8335EBCD9
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B40568A64924D63FDD795BA8335EBCD9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B40568A64924D63FDD795BA8335EBCD9");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B40568A64924D63FDD795BA8335EBCD9_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0D80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B277E5C04DC09D7CDC5AF7B79AB87231
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B277E5C04DC09D7CDC5AF7B79AB87231()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B277E5C04DC09D7CDC5AF7B79AB87231");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_B277E5C04DC09D7CDC5AF7B79AB87231_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0CA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A70FB01D4E63C77A557C778651EBF30B
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A70FB01D4E63C77A557C778651EBF30B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A70FB01D4E63C77A557C778651EBF30B");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A70FB01D4E63C77A557C778651EBF30B_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DE3120
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A5A5071B4E0DEE5B6CF92C9AB41E56BF
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A5A5071B4E0DEE5B6CF92C9AB41E56BF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A5A5071B4E0DEE5B6CF92C9AB41E56BF");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A5A5071B4E0DEE5B6CF92C9AB41E56BF_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DE3140
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A32701024038EE781E0949965EDB75A0
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A32701024038EE781E0949965EDB75A0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A32701024038EE781E0949965EDB75A0");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_A32701024038EE781E0949965EDB75A0_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4B60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9D3694B54CAD4E0A45B70C90D7FA4290
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9D3694B54CAD4E0A45B70C90D7FA4290()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9D3694B54CAD4E0A45B70C90D7FA4290");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9D3694B54CAD4E0A45B70C90D7FA4290_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5260
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_98B7C0384F960422F5778581BCEB103A
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_98B7C0384F960422F5778581BCEB103A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_98B7C0384F960422F5778581BCEB103A");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_98B7C0384F960422F5778581BCEB103A_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00DE3100
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_91D454AD43B5E65818051EA62FCDE20C
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_91D454AD43B5E65818051EA62FCDE20C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_91D454AD43B5E65818051EA62FCDE20C");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_91D454AD43B5E65818051EA62FCDE20C_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4080
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9160DAEF4DAC3A8F23C0859CF6DE9711
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9160DAEF4DAC3A8F23C0859CF6DE9711()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9160DAEF4DAC3A8F23C0859CF6DE9711");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_9160DAEF4DAC3A8F23C0859CF6DE9711_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0DC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_90AF15E741B84946FD98938D7ADDF9A7
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_90AF15E741B84946FD98938D7ADDF9A7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_90AF15E741B84946FD98938D7ADDF9A7");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_90AF15E741B84946FD98938D7ADDF9A7_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB48E0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_8A45054148D983C3EF883BBE93F69D8B
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_8A45054148D983C3EF883BBE93F69D8B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_8A45054148D983C3EF883BBE93F69D8B");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_8A45054148D983C3EF883BBE93F69D8B_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD0000
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_88D4287C450AE59A213585BAB9CE9852
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_88D4287C450AE59A213585BAB9CE9852()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_88D4287C450AE59A213585BAB9CE9852");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_88D4287C450AE59A213585BAB9CE9852_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFFE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_832D6CCB499DCECB21622AA08FD991F1
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_832D6CCB499DCECB21622AA08FD991F1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_832D6CCB499DCECB21622AA08FD991F1");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_832D6CCB499DCECB21622AA08FD991F1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB41A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7D603A184B9BA5E4EFCB7587855575D6
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7D603A184B9BA5E4EFCB7587855575D6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7D603A184B9BA5E4EFCB7587855575D6");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7D603A184B9BA5E4EFCB7587855575D6_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5F90
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7C38881240B4B4ED1D00F5B0DF6970B5
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7C38881240B4B4ED1D00F5B0DF6970B5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7C38881240B4B4ED1D00F5B0DF6970B5");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7C38881240B4B4ED1D00F5B0DF6970B5_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3D40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7ABF732341E0CA7204032BBB1A0C3948
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7ABF732341E0CA7204032BBB1A0C3948()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7ABF732341E0CA7204032BBB1A0C3948");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7ABF732341E0CA7204032BBB1A0C3948_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFFC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7A01DE9C411A171E0A23ECB3D3399EE2
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7A01DE9C411A171E0A23ECB3D3399EE2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7A01DE9C411A171E0A23ECB3D3399EE2");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_7A01DE9C411A171E0A23ECB3D3399EE2_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_76A2B7D9476333508731979CE1990C15
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_76A2B7D9476333508731979CE1990C15()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_76A2B7D9476333508731979CE1990C15");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_76A2B7D9476333508731979CE1990C15_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB1070
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_75B7F0924C9201DE7CCECDA323CDD2E3
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_75B7F0924C9201DE7CCECDA323CDD2E3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_75B7F0924C9201DE7CCECDA323CDD2E3");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_75B7F0924C9201DE7CCECDA323CDD2E3_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB36A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_6C69B9DB462DC354958973B30A024304
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_6C69B9DB462DC354958973B30A024304()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_6C69B9DB462DC354958973B30A024304");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_6C69B9DB462DC354958973B30A024304_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0C60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_68792CD04C569D14DBE46B9D98EE8132
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_68792CD04C569D14DBE46B9D98EE8132()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_68792CD04C569D14DBE46B9D98EE8132");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_68792CD04C569D14DBE46B9D98EE8132_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFFA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_65E0737B4083F4DE4BCDAABEF906899D
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_65E0737B4083F4DE4BCDAABEF906899D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_65E0737B4083F4DE4BCDAABEF906899D");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_65E0737B4083F4DE4BCDAABEF906899D_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0DE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_655C53984D323E6D6C0298A4A93B87F7
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_655C53984D323E6D6C0298A4A93B87F7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_655C53984D323E6D6C0298A4A93B87F7");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_655C53984D323E6D6C0298A4A93B87F7_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4C80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_652AE6214045C14021EA3EA239C1982E
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_652AE6214045C14021EA3EA239C1982E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_652AE6214045C14021EA3EA239C1982E");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_652AE6214045C14021EA3EA239C1982E_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3CE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D819291447B316C7495F289BA0F0468
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D819291447B316C7495F289BA0F0468()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D819291447B316C7495F289BA0F0468");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D819291447B316C7495F289BA0F0468_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB62D0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D6A972540B02DAFC23225B3432A056F
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D6A972540B02DAFC23225B3432A056F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D6A972540B02DAFC23225B3432A056F");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5D6A972540B02DAFC23225B3432A056F_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFF80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5BC41C974CFDE7DB1196B2A1B23509C7
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5BC41C974CFDE7DB1196B2A1B23509C7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5BC41C974CFDE7DB1196B2A1B23509C7");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_5BC41C974CFDE7DB1196B2A1B23509C7_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4BE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_56024C974594463E158264BF33F68851
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_56024C974594463E158264BF33F68851()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_56024C974594463E158264BF33F68851");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_56024C974594463E158264BF33F68851_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFF60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_52A6337C402795AE5EB0E78D87ACF4EC
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_52A6337C402795AE5EB0E78D87ACF4EC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_52A6337C402795AE5EB0E78D87ACF4EC");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_52A6337C402795AE5EB0E78D87ACF4EC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0C20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_42351C364F2CD942AE421CBBE75748AC
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_42351C364F2CD942AE421CBBE75748AC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_42351C364F2CD942AE421CBBE75748AC");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_42351C364F2CD942AE421CBBE75748AC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFF40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3F7E52E5441AA0F3694AF49B0C14E85B
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3F7E52E5441AA0F3694AF49B0C14E85B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3F7E52E5441AA0F3694AF49B0C14E85B");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3F7E52E5441AA0F3694AF49B0C14E85B_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFF20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3E9C83724280CE2A81B7A8B1985FD7E5
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3E9C83724280CE2A81B7A8B1985FD7E5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3E9C83724280CE2A81B7A8B1985FD7E5");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_3E9C83724280CE2A81B7A8B1985FD7E5_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB52C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_38E42E1F4CCCEC8EAA8B89AA30ACE8E3
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_38E42E1F4CCCEC8EAA8B89AA30ACE8E3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_38E42E1F4CCCEC8EAA8B89AA30ACE8E3");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_38E42E1F4CCCEC8EAA8B89AA30ACE8E3_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFF00
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_372FC0C840519577B03AAB9F9F8EF936
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_372FC0C840519577B03AAB9F9F8EF936()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_372FC0C840519577B03AAB9F9F8EF936");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_372FC0C840519577B03AAB9F9F8EF936_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB44A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_2510FEA444B96F81E9A79BB9742B8E15
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_2510FEA444B96F81E9A79BB9742B8E15()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_2510FEA444B96F81E9A79BB9742B8E15");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_2510FEA444B96F81E9A79BB9742B8E15_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0C40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_21EBCEDD49E596111DE86880958C7D50
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_21EBCEDD49E596111DE86880958C7D50()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_21EBCEDD49E596111DE86880958C7D50");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_21EBCEDD49E596111DE86880958C7D50_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5080
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_10BDFA2C4DD49A79BE58FCBD99521355
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_10BDFA2C4DD49A79BE58FCBD99521355()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_10BDFA2C4DD49A79BE58FCBD99521355");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_10BDFA2C4DD49A79BE58FCBD99521355_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFEE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_100C2CF5454B71A8ADA27DA56812C62E
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_100C2CF5454B71A8ADA27DA56812C62E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_100C2CF5454B71A8ADA27DA56812C62E");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_100C2CF5454B71A8ADA27DA56812C62E_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5F50
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_0D35690D405A5207984977A725DC251F
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_0D35690D405A5207984977A725DC251F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_0D35690D405A5207984977A725DC251F");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_TransitionResult_0D35690D405A5207984977A725DC251F_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFEC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequencePlayer_B7C60A7E4906DA3A059838A3A3EF745C
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequencePlayer_B7C60A7E4906DA3A059838A3A3EF745C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequencePlayer_B7C60A7E4906DA3A059838A3A3EF745C");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequencePlayer_B7C60A7E4906DA3A059838A3A3EF745C_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFEA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequenceEvaluator_14C3BE5C4F8430F338DF879A31193970
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequenceEvaluator_14C3BE5C4F8430F338DF879A31193970()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequenceEvaluator_14C3BE5C4F8430F338DF879A31193970");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_SequenceEvaluator_14C3BE5C4F8430F338DF879A31193970_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4360
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ModifyBone_E09466D44C3DBD94318260A724A9E313
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ModifyBone_E09466D44C3DBD94318260A724A9E313()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ModifyBone_E09466D44C3DBD94318260A724A9E313");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ModifyBone_E09466D44C3DBD94318260A724A9E313_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB17E0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_F981A03149B0754D4D94849B08C3EBD8
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_F981A03149B0754D4D94849B08C3EBD8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_F981A03149B0754D4D94849B08C3EBD8");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_F981A03149B0754D4D94849B08C3EBD8_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFE80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E69D7F9E4A7A4BB2138C57B26565E7AF
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E69D7F9E4A7A4BB2138C57B26565E7AF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E69D7F9E4A7A4BB2138C57B26565E7AF");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E69D7F9E4A7A4BB2138C57B26565E7AF_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5D80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E42C4B2A45A7F2AC7730C2BFCFF3CCD6
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E42C4B2A45A7F2AC7730C2BFCFF3CCD6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E42C4B2A45A7F2AC7730C2BFCFF3CCD6");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_E42C4B2A45A7F2AC7730C2BFCFF3CCD6_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_DDA178AF428E54B397BE5BB4F9DDCA76
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_DDA178AF428E54B397BE5BB4F9DDCA76()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_DDA178AF428E54B397BE5BB4F9DDCA76");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_DDA178AF428E54B397BE5BB4F9DDCA76_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3A80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_D429301E4198A542471DE38B782187D5
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_D429301E4198A542471DE38B782187D5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_D429301E4198A542471DE38B782187D5");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_D429301E4198A542471DE38B782187D5_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5D40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_9A009C694C8066608AFD4F821A53A033
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_9A009C694C8066608AFD4F821A53A033()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_9A009C694C8066608AFD4F821A53A033");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_9A009C694C8066608AFD4F821A53A033_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4AA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_6EAA26A94E7CDE475A0B89A986AF3F87
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_6EAA26A94E7CDE475A0B89A986AF3F87()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_6EAA26A94E7CDE475A0B89A986AF3F87");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_6EAA26A94E7CDE475A0B89A986AF3F87_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB62B0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_65D151CB497C3FF02D40C092F551AE3A
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_65D151CB497C3FF02D40C092F551AE3A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_65D151CB497C3FF02D40C092F551AE3A");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_65D151CB497C3FF02D40C092F551AE3A_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0EB0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_45635F7D43BE422FC32ECB90A6676C51
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_45635F7D43BE422FC32ECB90A6676C51()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_45635F7D43BE422FC32ECB90A6676C51");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_45635F7D43BE422FC32ECB90A6676C51_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB1330
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_3528CE2643E4CE894DD5B9BEBCA63443
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_3528CE2643E4CE894DD5B9BEBCA63443()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_3528CE2643E4CE894DD5B9BEBCA63443");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_3528CE2643E4CE894DD5B9BEBCA63443_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB1220
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_072CEC504A41F7B6ECFA8288E3D5BB9D
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_072CEC504A41F7B6ECFA8288E3D5BB9D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_072CEC504A41F7B6ECFA8288E3D5BB9D");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_LayeredBoneBlend_072CEC504A41F7B6ECFA8288E3D5BB9D_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFE60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_BlendListByBool_BD9B9025401A098110AFBBACA80F85BA
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_BlendListByBool_BD9B9025401A098110AFBBACA80F85BA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_BlendListByBool_BD9B9025401A098110AFBBACA80F85BA");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_BlendListByBool_BD9B9025401A098110AFBBACA80F85BA_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3FE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_B3241673466064B2C7078FAB2D4A53DC
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_B3241673466064B2C7078FAB2D4A53DC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_B3241673466064B2C7078FAB2D4A53DC");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_B3241673466064B2C7078FAB2D4A53DC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB6290
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_903D504F466FBE7306E7B8B8E46A0E73
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_903D504F466FBE7306E7B8B8E46A0E73()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_903D504F466FBE7306E7B8B8E46A0E73");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_903D504F466FBE7306E7B8B8E46A0E73_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFE40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_8E68CF2D4A7C7A675ACF2BAE6F86B101
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_8E68CF2D4A7C7A675ACF2BAE6F86B101()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_8E68CF2D4A7C7A675ACF2BAE6F86B101");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_8E68CF2D4A7C7A675ACF2BAE6F86B101_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0CE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_6AA0099A4B6A9135EA2DA3B6370F90A1
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_6AA0099A4B6A9135EA2DA3B6370F90A1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_6AA0099A4B6A9135EA2DA3B6370F90A1");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_6AA0099A4B6A9135EA2DA3B6370F90A1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFE20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_318C1DFE464AD9977E820DBC9DA7F3E4
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_318C1DFE464AD9977E820DBC9DA7F3E4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_318C1DFE464AD9977E820DBC9DA7F3E4");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_318C1DFE464AD9977E820DBC9DA7F3E4_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB43C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_08FA83924962E0B549A039B6931973E4
	 * 		Flags  -> (Native, Public)
	 */
	void UABP_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_08FA83924962E0B549A039B6931973E4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_08FA83924962E0B549A039B6931973E4");
		
		UABP_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_AnimGraphNode_ApplyAdditive_08FA83924962E0B549A039B6931973E4_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFD10
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.DeltaRotatorAxis
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__A__pf                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__B__pf                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::DeltaRotatorAxis(float bpp__A__pf, float bpp__B__pf, float* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.DeltaRotatorAxis");
		
		UABP_Weapon_C_DeltaRotatorAxis_Params params {};
		params.bpp__A__pf = bpp__A__pf;
		params.bpp__B__pf = bpp__B__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFBB0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ClampedFLerp
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__A__pf                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__B__pf                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Alpha__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Return__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ClampedFLerp(float bpp__A__pf, float bpp__B__pf, float bpp__Alpha__pf, float* bpp__Return__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ClampedFLerp");
		
		UABP_Weapon_C_ClampedFLerp_Params params {};
		params.bpp__A__pf = bpp__A__pf;
		params.bpp__B__pf = bpp__B__pf;
		params.bpp__Alpha__pf = bpp__Alpha__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Return__pf != nullptr)
			*bpp__Return__pf = params.bpp__Return__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCFA40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CheckTickUpdate
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__DelayTime__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__NextTickUpdate__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Reutrn__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__ReturnNextTickUpdate__pf                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CheckTickUpdate(float bpp__DelayTime__pf, float bpp__NextTickUpdate__pf, bool* bpp__Reutrn__pf, float* bpp__ReturnNextTickUpdate__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CheckTickUpdate");
		
		UABP_Weapon_C_CheckTickUpdate_Params params {};
		params.bpp__DelayTime__pf = bpp__DelayTime__pf;
		params.bpp__NextTickUpdate__pf = bpp__NextTickUpdate__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Reutrn__pf != nullptr)
			*bpp__Reutrn__pf = params.bpp__Reutrn__pf;
		if (bpp__ReturnNextTickUpdate__pf != nullptr)
			*bpp__ReturnNextTickUpdate__pf = params.bpp__ReturnNextTickUpdate__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4EE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CheckBelt
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::CheckBelt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CheckBelt");
		
		UABP_Weapon_C_CheckBelt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCF9B0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.ChangeRagPaticleState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__ForceKill__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::ChangeRagPaticleState(bool bpp__ForceKill__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.ChangeRagPaticleState");
		
		UABP_Weapon_C_ChangeRagPaticleState_Params params {};
		params.bpp__ForceKill__pf = bpp__ForceKill__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB41C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CancelBolting
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::CancelBolting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CancelBolting");
		
		UABP_Weapon_C_CancelBolting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5480
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CancelBolting_3
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::CancelBolting_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CancelBolting_3");
		
		UABP_Weapon_C_CancelBolting_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCF7F0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.Calc Generic Float Alpha
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__AlphaInput__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__AlphaOutput__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Finished__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::Calc_Generic_Float_Alpha(float bpp__Target__pf, float bpp__AlphaInput__pf, float bpp__Speed__pf, float* bpp__AlphaOutput__pf, bool* bpp__Finished__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.Calc Generic Float Alpha");
		
		UABP_Weapon_C_Calc_Generic_Float_Alpha_Params params {};
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__AlphaInput__pf = bpp__AlphaInput__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AlphaOutput__pf != nullptr)
			*bpp__AlphaOutput__pf = params.bpp__AlphaOutput__pf;
		if (bpp__Finished__pf != nullptr)
			*bpp__Finished__pf = params.bpp__Finished__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCF690
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.Calc Axis Interp
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Current__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::Calc_Axis_Interp(float bpp__Current__pf, float bpp__Target__pf, float bpp__Speed__pf, float* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.Calc Axis Interp");
		
		UABP_Weapon_C_Calc_Axis_Interp_Params params {};
		params.bpp__Current__pf = bpp__Current__pf;
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCF330
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcVectorInterp
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     bpp__Current__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CalcVectorInterp(const struct FVector& bpp__Current__pf, const struct FVector& bpp__Target__pf, float bpp__Speed__pf, struct FVector* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcVectorInterp");
		
		UABP_Weapon_C_CalcVectorInterp_Params params {};
		params.bpp__Current__pf = bpp__Current__pf;
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCF1D0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcVariableInterp
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Current__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CalcVariableInterp(float bpp__Current__pf, float bpp__Target__pf, float bpp__Speed__pf, float* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcVariableInterp");
		
		UABP_Weapon_C_CalcVariableInterp_Params params {};
		params.bpp__Current__pf = bpp__Current__pf;
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCF4C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.Calculate Magazine Offset
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             bpp__Magazine__pf                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             bpp__Weapon__pf                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__ExtendedSocket__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__StandardSocket__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Position__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    bpp__Rotation__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::Calculate_Magazine_Offset(class USceneComponent* bpp__Magazine__pf, class USceneComponent* bpp__Weapon__pf, const class FName& bpp__ExtendedSocket__pf, const class FName& bpp__StandardSocket__pf, struct FVector* bpp__Position__pf, struct FRotator* bpp__Rotation__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.Calculate Magazine Offset");
		
		UABP_Weapon_C_Calculate_Magazine_Offset_Params params {};
		params.bpp__Magazine__pf = bpp__Magazine__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		params.bpp__ExtendedSocket__pf = bpp__ExtendedSocket__pf;
		params.bpp__StandardSocket__pf = bpp__StandardSocket__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Position__pf != nullptr)
			*bpp__Position__pf = params.bpp__Position__pf;
		if (bpp__Rotation__pf != nullptr)
			*bpp__Rotation__pf = params.bpp__Rotation__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCF0C0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcSprintIKAlpha
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Sprint__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Charge__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__BipodLegState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UABP_Weapon_C::CalcSprintIKAlpha(float bpp__Sprint__pf, float bpp__Charge__pf, float bpp__BipodLegState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcSprintIKAlpha");
		
		UABP_Weapon_C_CalcSprintIKAlpha_Params params {};
		params.bpp__Sprint__pf = bpp__Sprint__pf;
		params.bpp__Charge__pf = bpp__Charge__pf;
		params.bpp__BipodLegState__pf = bpp__BipodLegState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCEEE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcSinusoid
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Frequency__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Amplitude__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__GameTime__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Positionx__pfzy                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CalcSinusoid(float bpp__Frequency__pf, float bpp__Amplitude__pf, float bpp__GameTime__pf, float bpp__Speed__pf, bool bpp__Positionx__pfzy, float* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcSinusoid");
		
		UABP_Weapon_C_CalcSinusoid_Params params {};
		params.bpp__Frequency__pf = bpp__Frequency__pf;
		params.bpp__Amplitude__pf = bpp__Amplitude__pf;
		params.bpp__GameTime__pf = bpp__GameTime__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		params.bpp__Positionx__pfzy = bpp__Positionx__pfzy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCED50
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcRotatorInterp
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    bpp__Current__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CalcRotatorInterp(const struct FRotator& bpp__Current__pf, const struct FRotator& bpp__Target__pf, float bpp__Speed__pf, struct FRotator* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcRotatorInterp");
		
		UABP_Weapon_C_CalcRotatorInterp_Params params {};
		params.bpp__Current__pf = bpp__Current__pf;
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5180
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcLeanOffsets
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::CalcLeanOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcLeanOffsets");
		
		UABP_Weapon_C_CalcLeanOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCEB70
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcGenericAlpha
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__AlphaInput__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Constant__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__AlphaOutput__pf                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Finished__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CalcGenericAlpha(bool bpp__Target__pf, float bpp__AlphaInput__pf, float bpp__Speed__pf, bool bpp__Constant__pf, float* bpp__AlphaOutput__pf, bool* bpp__Finished__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcGenericAlpha");
		
		UABP_Weapon_C_CalcGenericAlpha_Params params {};
		params.bpp__Target__pf = bpp__Target__pf;
		params.bpp__AlphaInput__pf = bpp__AlphaInput__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		params.bpp__Constant__pf = bpp__Constant__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AlphaOutput__pf != nullptr)
			*bpp__AlphaOutput__pf = params.bpp__AlphaOutput__pf;
		if (bpp__Finished__pf != nullptr)
			*bpp__Finished__pf = params.bpp__Finished__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE980
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcFireOffsetLimits
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     bpp__OpticOffset__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CalcFireOffsetLimits(const struct FVector& bpp__OpticOffset__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcFireOffsetLimits");
		
		UABP_Weapon_C_CalcFireOffsetLimits_Params params {};
		params.bpp__OpticOffset__pf = bpp__OpticOffset__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE760
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcBobbing
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__BobbingxScale__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__BobbingxSpeed__pfT                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__InputAdjustedTime__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Location__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    bpp__Rotator__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__AdjustedGameTime__pf                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CalcBobbing(float bpp__BobbingxScale__pfT, float bpp__BobbingxSpeed__pfT, float bpp__InputAdjustedTime__pf, struct FVector* bpp__Location__pf, struct FRotator* bpp__Rotator__pf, float* bpp__AdjustedGameTime__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcBobbing");
		
		UABP_Weapon_C_CalcBobbing_Params params {};
		params.bpp__BobbingxScale__pfT = bpp__BobbingxScale__pfT;
		params.bpp__BobbingxSpeed__pfT = bpp__BobbingxSpeed__pfT;
		params.bpp__InputAdjustedTime__pf = bpp__InputAdjustedTime__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Location__pf != nullptr)
			*bpp__Location__pf = params.bpp__Location__pf;
		if (bpp__Rotator__pf != nullptr)
			*bpp__Rotator__pf = params.bpp__Rotator__pf;
		if (bpp__AdjustedGameTime__pf != nullptr)
			*bpp__AdjustedGameTime__pf = params.bpp__AdjustedGameTime__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE690
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcAnimPositionLength
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           bpp__Sequence__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Reverse__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UABP_Weapon_C::CalcAnimPositionLength(class UAnimSequenceBase* bpp__Sequence__pf, bool bpp__Reverse__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcAnimPositionLength");
		
		UABP_Weapon_C_CalcAnimPositionLength_Params params {};
		params.bpp__Sequence__pf = bpp__Sequence__pf;
		params.bpp__Reverse__pf = bpp__Reverse__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE530
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.CalcAlphaInterp
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              bpp__Alpha__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Switch__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Speed__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Output__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::CalcAlphaInterp(float bpp__Alpha__pf, bool bpp__Switch__pf, float bpp__Speed__pf, float* bpp__Output__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.CalcAlphaInterp");
		
		UABP_Weapon_C_CalcAlphaInterp_Params params {};
		params.bpp__Alpha__pf = bpp__Alpha__pf;
		params.bpp__Switch__pf = bpp__Switch__pf;
		params.bpp__Speed__pf = bpp__Speed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Output__pf != nullptr)
			*bpp__Output__pf = params.bpp__Output__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE4B0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintUpdateAnimation");
		
		UABP_Weapon_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE360
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnUpgradeMeshLoaded
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UINSSkeletalMeshComponent*                   bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWeaponVisualUpgradeComponent*               bpp__Upgrade__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnUpgradeMeshLoaded(class UINSSkeletalMeshComponent* bpp__Mesh__pf, class UWeaponVisualUpgradeComponent* bpp__Upgrade__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnUpgradeMeshLoaded");
		
		UABP_Weapon_C_BlueprintOnUpgradeMeshLoaded_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		params.bpp__Upgrade__pf = bpp__Upgrade__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE2D0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnUpgradeInstalled
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class UWeaponUpgradeComponent*                     bpp__Upgrade__pf                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnUpgradeInstalled(class UWeaponUpgradeComponent* bpp__Upgrade__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnUpgradeInstalled");
		
		UABP_Weapon_C_BlueprintOnUpgradeInstalled_Params params {};
		params.bpp__Upgrade__pf = bpp__Upgrade__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE180
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnSwitchMagazineInterrupt
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__AnimationInterruptTime__pf__const                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnSwitchMagazineInterrupt(float bpp__AnimationInterruptTime__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnSwitchMagazineInterrupt");
		
		UABP_Weapon_C_BlueprintOnSwitchMagazineInterrupt_Params params {};
		params.bpp__AnimationInterruptTime__pf__const = bpp__AnimationInterruptTime__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE200
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnSwitchMagazine
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__RateMultiplier__pf__const                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bDryReload__pf__const                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnSwitchMagazine(float bpp__RateMultiplier__pf__const, bool bpp__bDryReload__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnSwitchMagazine");
		
		UABP_Weapon_C_BlueprintOnSwitchMagazine_Params params {};
		params.bpp__RateMultiplier__pf__const = bpp__RateMultiplier__pf__const;
		params.bpp__bDryReload__pf__const = bpp__bDryReload__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB17A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnRevolverChambersUpdated
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnRevolverChambersUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnRevolverChambersUpdated");
		
		UABP_Weapon_C_BlueprintOnRevolverChambersUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBAAA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReloadInterrupt
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnReloadInterrupt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReloadInterrupt");
		
		UABP_Weapon_C_BlueprintOnReloadInterrupt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDF60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReloadAfterSwitchMagazine
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bDryReload__pf__const                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bSingleReload__pf__const                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__RateMultiplier__pf__const                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnReloadAfterSwitchMagazine(bool bpp__bDryReload__pf__const, bool bpp__bSingleReload__pf__const, float bpp__RateMultiplier__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReloadAfterSwitchMagazine");
		
		UABP_Weapon_C_BlueprintOnReloadAfterSwitchMagazine_Params params {};
		params.bpp__bDryReload__pf__const = bpp__bDryReload__pf__const;
		params.bpp__bSingleReload__pf__const = bpp__bSingleReload__pf__const;
		params.bpp__RateMultiplier__pf__const = bpp__RateMultiplier__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCE070
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReload
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bDryReload__pf__const                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bSingleReload__pf__const                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__RateMultiplier__pf__const                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnReload(bool bpp__bDryReload__pf__const, bool bpp__bSingleReload__pf__const, float bpp__RateMultiplier__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnReload");
		
		UABP_Weapon_C_BlueprintOnReload_Params params {};
		params.bpp__bDryReload__pf__const = bpp__bDryReload__pf__const;
		params.bpp__bSingleReload__pf__const = bpp__bSingleReload__pf__const;
		params.bpp__RateMultiplier__pf__const = bpp__RateMultiplier__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDF40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnPlayerClassAttributesUpdated
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnPlayerClassAttributesUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnPlayerClassAttributesUpdated");
		
		UABP_Weapon_C_BlueprintOnPlayerClassAttributesUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDF20
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeshLoaded
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnMeshLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeshLoaded");
		
		UABP_Weapon_C_BlueprintOnMeshLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDE40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeleeWeaponHit
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  bpp__Hit__pf__const                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnMeleeWeaponHit(const struct FHitResult& bpp__Hit__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeleeWeaponHit");
		
		UABP_Weapon_C_BlueprintOnMeleeWeaponHit_Params params {};
		params.bpp__Hit__pf__const = bpp__Hit__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDD50
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeleeWeaponAttack
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FMeleeConfig                                bpp__SelectedAttack__pf__const                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnMeleeWeaponAttack(const struct FMeleeConfig& bpp__SelectedAttack__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnMeleeWeaponAttack");
		
		UABP_Weapon_C_BlueprintOnMeleeWeaponAttack_Params params {};
		params.bpp__SelectedAttack__pf__const = bpp__SelectedAttack__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDC80
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnItemUnequip
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bInstant__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemEquipable*                              bpp__SwitchingTo__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnItemUnequip(bool bpp__bInstant__pf, class AItemEquipable* bpp__SwitchingTo__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnItemUnequip");
		
		UABP_Weapon_C_BlueprintOnItemUnequip_Params params {};
		params.bpp__bInstant__pf = bpp__bInstant__pf;
		params.bpp__SwitchingTo__pf = bpp__SwitchingTo__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDB70
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnItemEquip
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bInstant__pf__const                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemEquipable*                              bpp__SwitchingFrom__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bWantsFirstEquip__pf__const                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnItemEquip(bool bpp__bInstant__pf__const, class AItemEquipable* bpp__SwitchingFrom__pf, bool bpp__bWantsFirstEquip__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnItemEquip");
		
		UABP_Weapon_C_BlueprintOnItemEquip_Params params {};
		params.bpp__bInstant__pf__const = bpp__bInstant__pf__const;
		params.bpp__SwitchingFrom__pf = bpp__SwitchingFrom__pf;
		params.bpp__bWantsFirstEquip__pf__const = bpp__bWantsFirstEquip__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDAE0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnGenericMeleeAttack
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bBash__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnGenericMeleeAttack(bool bpp__bBash__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnGenericMeleeAttack");
		
		UABP_Weapon_C_BlueprintOnGenericMeleeAttack_Params params {};
		params.bpp__bBash__pf = bpp__bBash__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCDA10
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnGearInteracted
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AItemInteractableGear*                       bpp__GearItem__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipableState                                    bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnGearInteracted(class AItemInteractableGear* bpp__GearItem__pf, EEquipableState bpp__NewState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnGearInteracted");
		
		UABP_Weapon_C_BlueprintOnGearInteracted_Params params {};
		params.bpp__GearItem__pf = bpp__GearItem__pf;
		params.bpp__NewState__pf = bpp__NewState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBA790
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmStopFire
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnFirearmStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmStopFire");
		
		UABP_Weapon_C_BlueprintOnFirearmStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD920
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmFired
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     bpp__FireOrigin__pf__const                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__FireDirection__pf__const                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnFirearmFired(const struct FVector& bpp__FireOrigin__pf__const, const struct FVector& bpp__FireDirection__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmFired");
		
		UABP_Weapon_C_BlueprintOnFirearmFired_Params params {};
		params.bpp__FireOrigin__pf__const = bpp__FireOrigin__pf__const;
		params.bpp__FireDirection__pf__const = bpp__FireDirection__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009DAB60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmDryFire
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnFirearmDryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFirearmDryFire");
		
		UABP_Weapon_C_BlueprintOnFirearmDryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD850
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFastReload
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bDryReload__pf__const                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__RateMultiplier__pf__const                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnFastReload(bool bpp__bDryReload__pf__const, float bpp__RateMultiplier__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnFastReload");
		
		UABP_Weapon_C_BlueprintOnFastReload_Params params {};
		params.bpp__bDryReload__pf__const = bpp__bDryReload__pf__const;
		params.bpp__RateMultiplier__pf__const = bpp__RateMultiplier__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD790
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnCycleFiremode
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		EFirearmFiremode                                   bpp__OldFiremode__pf__const                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFirearmFiremode                                   bpp__NewFiremode__pf__const                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnCycleFiremode(EFirearmFiremode bpp__OldFiremode__pf__const, EFirearmFiremode bpp__NewFiremode__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnCycleFiremode");
		
		UABP_Weapon_C_BlueprintOnCycleFiremode_Params params {};
		params.bpp__OldFiremode__pf__const = bpp__OldFiremode__pf__const;
		params.bpp__NewFiremode__pf__const = bpp__NewFiremode__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4340
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBoltCycle
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnBoltCycle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBoltCycle");
		
		UABP_Weapon_C_BlueprintOnBoltCycle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD6D0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBipodLegsStateChanged
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		EBipodState                                        bpp__OldState__pf__const                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBipodState                                        bpp__NewState__pf__const                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnBipodLegsStateChanged(EBipodState bpp__OldState__pf__const, EBipodState bpp__NewState__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBipodLegsStateChanged");
		
		UABP_Weapon_C_BlueprintOnBipodLegsStateChanged_Params params {};
		params.bpp__OldState__pf__const = bpp__OldState__pf__const;
		params.bpp__NewState__pf__const = bpp__NewState__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD610
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBipodDeployedStateChanged
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		EBipodState                                        bpp__OldState__pf__const                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBipodState                                        bpp__NewState__pf__const                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::BlueprintOnBipodDeployedStateChanged(EBipodState bpp__OldState__pf__const, EBipodState bpp__NewState__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBipodDeployedStateChanged");
		
		UABP_Weapon_C_BlueprintOnBipodDeployedStateChanged_Params params {};
		params.bpp__OldState__pf__const = bpp__OldState__pf__const;
		params.bpp__NewState__pf__const = bpp__NewState__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD5F0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBecomeViewTarget
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnBecomeViewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnBecomeViewTarget");
		
		UABP_Weapon_C_BlueprintOnBecomeViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4AC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintOnAmmoCheck
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintOnAmmoCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintOnAmmoCheck");
		
		UABP_Weapon_C_BlueprintOnAmmoCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB1350
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UABP_Weapon_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.BlueprintInitializeAnimation");
		
		UABP_Weapon_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD530
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AttachmentUpdateOpticDelegate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            bpp__LatchedMode__pf__const                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__DesiredMode__pf__const                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::AttachmentUpdateOpticDelegate(int32_t bpp__LatchedMode__pf__const, int32_t bpp__DesiredMode__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AttachmentUpdateOpticDelegate");
		
		UABP_Weapon_C_AttachmentUpdateOpticDelegate_Params params {};
		params.bpp__LatchedMode__pf__const = bpp__LatchedMode__pf__const;
		params.bpp__DesiredMode__pf__const = bpp__DesiredMode__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3A60
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_UnderbarrelBlend
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_UnderbarrelBlend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_UnderbarrelBlend");
		
		UABP_Weapon_C_AnimNotify_UnderbarrelBlend_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4FA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_TubeSwapFinished
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_TubeSwapFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_TubeSwapFinished");
		
		UABP_Weapon_C_AnimNotify_TubeSwapFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD510
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_SwitchMagazineFinished
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_SwitchMagazineFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_SwitchMagazineFinished");
		
		UABP_Weapon_C_AnimNotify_SwitchMagazineFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB0E90
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_StopReady
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_StopReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_StopReady");
		
		UABP_Weapon_C_AnimNotify_StopReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3AC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_RevolverForceVisibility
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_RevolverForceVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_RevolverForceVisibility");
		
		UABP_Weapon_C_AnimNotify_RevolverForceVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009DAB40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_ReloadResume
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_ReloadResume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_ReloadResume");
		
		UABP_Weapon_C_AnimNotify_ReloadResume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4220
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_ReloadMagTypeChange
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_ReloadMagTypeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_ReloadMagTypeChange");
		
		UABP_Weapon_C_AnimNotify_ReloadMagTypeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3CA0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_PlayReady
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_PlayReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_PlayReady");
		
		UABP_Weapon_C_AnimNotify_PlayReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB6CB0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_MolotovRag
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_MolotovRag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_MolotovRag");
		
		UABP_Weapon_C_AnimNotify_MolotovRag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB5220
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_MeleeBlend
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_MeleeBlend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_MeleeBlend");
		
		UABP_Weapon_C_AnimNotify_MeleeBlend_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4E40
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_GrenadePullback
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_GrenadePullback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_GrenadePullback");
		
		UABP_Weapon_C_AnimNotify_GrenadePullback_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009DAA00
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_FirePinState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_FirePinState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_FirePinState");
		
		UABP_Weapon_C_AnimNotify_FirePinState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB35E0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_Finish Reload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_Finish_Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_Finish Reload");
		
		UABP_Weapon_C_AnimNotify_Finish_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB35A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_FinishedReload
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_FinishedReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_FinishedReload");
		
		UABP_Weapon_C_AnimNotify_FinishedReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD4D0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_EndScavenge
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_EndScavenge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_EndScavenge");
		
		UABP_Weapon_C_AnimNotify_EndScavenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD4F0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_End_Equip_Animation
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_End_Equip_Animation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_End_Equip_Animation");
		
		UABP_Weapon_C_AnimNotify_End_Equip_Animation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB54A0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_End_Anim
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_End_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_End_Anim");
		
		UABP_Weapon_C_AnimNotify_End_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB4660
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_DrawChamber
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_DrawChamber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_DrawChamber");
		
		UABP_Weapon_C_AnimNotify_DrawChamber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3DC0
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_DeployedLeftHand
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_DeployedLeftHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_DeployedLeftHand");
		
		UABP_Weapon_C_AnimNotify_DeployedLeftHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB3A00
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimNotify_BeltReplace
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UABP_Weapon_C::AnimNotify_BeltReplace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimNotify_BeltReplace");
		
		UABP_Weapon_C_AnimNotify_BeltReplace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD430
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AnimGraph");
		
		UABP_Weapon_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DCD120
	 * 		Name   -> Function ABP_Weapon.ABP_Weapon_C.AdjustMontageRate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimMontage*                                bpp__MontageReference__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__RateMultiplier__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::AdjustMontageRate(class UAnimMontage* bpp__MontageReference__pf, float bpp__RateMultiplier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Weapon.ABP_Weapon_C.AdjustMontageRate");
		
		UABP_Weapon_C_AdjustMontageRate_Params params {};
		params.bpp__MontageReference__pf = bpp__MontageReference__pf;
		params.bpp__RateMultiplier__pf = bpp__RateMultiplier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.OnUsableInteractionDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class AINSSoldier*                                 bpp__Interactor__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__InteractingActor__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EUseItem                                           bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnUsableInteractionDelegate__DelegateSignature(class AINSSoldier* bpp__Interactor__pf, class AActor* bpp__InteractingActor__pf, EUseItem bpp__Item__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.OnUsableInteractionDelegate__DelegateSignature");
		
		UABP_Weapon_C_OnUsableInteractionDelegate__DelegateSignature_Params params {};
		params.bpp__Interactor__pf = bpp__Interactor__pf;
		params.bpp__InteractingActor__pf = bpp__InteractingActor__pf;
		params.bpp__Item__pf = bpp__Item__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantStartDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UABP_Weapon_C::OnPlantStartDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantStartDelegate__DelegateSignature");
		
		UABP_Weapon_C_OnPlantStartDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantFinishedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UABP_Weapon_C::OnPlantFinishedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantFinishedDelegate__DelegateSignature");
		
		UABP_Weapon_C_OnPlantFinishedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantAbandonedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UABP_Weapon_C::OnPlantAbandonedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.OnPlantAbandonedDelegate__DelegateSignature");
		
		UABP_Weapon_C_OnPlantAbandonedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.OnDetonatorUsedDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UABP_Weapon_C::OnDetonatorUsedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.OnDetonatorUsedDelegate__DelegateSignature");
		
		UABP_Weapon_C_OnDetonatorUsedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.OnCycleOpticDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            bpp__LatchedMode__pf                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bpp__DesiredMode__pf                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnCycleOpticDelegate__DelegateSignature(int32_t bpp__LatchedMode__pf, int32_t bpp__DesiredMode__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.OnCycleOpticDelegate__DelegateSignature");
		
		UABP_Weapon_C_OnCycleOpticDelegate__DelegateSignature_Params params {};
		params.bpp__LatchedMode__pf = bpp__LatchedMode__pf;
		params.bpp__DesiredMode__pf = bpp__DesiredMode__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.OnCharacterTakeDamageDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UDamageType*                                 bpp__DamageType__pf                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FNetHitReaction                             bpp__HitReaction__pf                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::OnCharacterTakeDamageDelegate__DelegateSignature(class UDamageType* bpp__DamageType__pf, const struct FNetHitReaction& bpp__HitReaction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.OnCharacterTakeDamageDelegate__DelegateSignature");
		
		UABP_Weapon_C_OnCharacterTakeDamageDelegate__DelegateSignature_Params params {};
		params.bpp__DamageType__pf = bpp__DamageType__pf;
		params.bpp__HitReaction__pf = bpp__HitReaction__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.DelegateDoorKick__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bpp__bKickWillSucceed__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Weapon_C::DelegateDoorKick__DelegateSignature(bool bpp__bKickWillSucceed__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.DelegateDoorKick__DelegateSignature");
		
		UABP_Weapon_C_DelegateDoorKick__DelegateSignature_Params params {};
		params.bpp__bKickWillSucceed__pf = bpp__bKickWillSucceed__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Weapon.ABP_Weapon_C.AmmoGatheredDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UABP_Weapon_C::AmmoGatheredDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Weapon.ABP_Weapon_C.AmmoGatheredDelegate__DelegateSignature");
		
		UABP_Weapon_C_AmmoGatheredDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Weapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_Weapon.ABP_Weapon_C");
		return ptr;
	}

}


