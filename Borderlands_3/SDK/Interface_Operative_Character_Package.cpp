/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.CanActivateTrapCard
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Operative_Character_C::CanActivateTrapCard(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.CanActivateTrapCard");
		
		UInterface_Operative_Character_C_CanActivateTrapCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.SetOperativeDeviceVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Operative_Character_C::SetOperativeDeviceVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.SetOperativeDeviceVisible");
		
		UInterface_Operative_Character_C_SetOperativeDeviceVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.GetBarrierActionAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility_Barrier*                   res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::GetBarrierActionAbility(class UOakActionAbility_Barrier** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetBarrierActionAbility");
		
		UInterface_Operative_Character_C_GetBarrierActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeStatusEffectOverrides
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCauseDamageStatusEffectOverrides           Overrides                                                  (Parm, OutParm, NoDestructor)
	 */
	void UInterface_Operative_Character_C::GetOperativeStatusEffectOverrides(struct FCauseDamageStatusEffectOverrides* Overrides)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeStatusEffectOverrides");
		
		UInterface_Operative_Character_C_GetOperativeStatusEffectOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overrides != nullptr)
			*Overrides = params.Overrides;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigiCloneShieldRemainingPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ShieldPercentRemaining                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::GetDigiCloneShieldRemainingPercent(float* ShieldPercentRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigiCloneShieldRemainingPercent");
		
		UInterface_Operative_Character_C_GetDigiCloneShieldRemainingPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShieldPercentRemaining != nullptr)
			*ShieldPercentRemaining = params.ShieldPercentRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeShieldRemainingPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ShieldPercentRemaining                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::GetOperativeShieldRemainingPercent(float* ShieldPercentRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetOperativeShieldRemainingPercent");
		
		UInterface_Operative_Character_C_GetOperativeShieldRemainingPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShieldPercentRemaining != nullptr)
			*ShieldPercentRemaining = params.ShieldPercentRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.GetGRMLNActionAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UOakActionAbility_GRMLN*                     res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::GetGRMLNActionAbility(class UOakActionAbility_GRMLN** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetGRMLNActionAbility");
		
		UInterface_Operative_Character_C_GetGRMLNActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigicloneActionAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UOakActionAbility_Digiclone*                 res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::GetDigicloneActionAbility(class UOakActionAbility_Digiclone** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetDigicloneActionAbility");
		
		UInterface_Operative_Character_C_GetDigicloneActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.SpawnAndThrowOperativeGrenade
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SpawnFromActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SpawnFromSocket                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Grenade                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::SpawnAndThrowOperativeGrenade(class AActor* SpawnFromActor, const class FName& SpawnFromSocket, bool* res, class AActor** Grenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.SpawnAndThrowOperativeGrenade");
		
		UInterface_Operative_Character_C_SpawnAndThrowOperativeGrenade_Params params {};
		params.SpawnFromActor = SpawnFromActor;
		params.SpawnFromSocket = SpawnFromSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
		if (Grenade != nullptr)
			*Grenade = params.Grenade;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.DoOperativeCryoNovaAtLocation
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::DoOperativeCryoNovaAtLocation(const struct FVector& Location, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.DoOperativeCryoNovaAtLocation");
		
		UInterface_Operative_Character_C_DoOperativeCryoNovaAtLocation_Params params {};
		params.Location = Location;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.BlockOperativeActionSkillActivation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldBlock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Operative_Character_C::BlockOperativeActionSkillActivation(bool* ShouldBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.BlockOperativeActionSkillActivation");
		
		UInterface_Operative_Character_C_BlockOperativeActionSkillActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBlock != nullptr)
			*ShouldBlock = params.ShouldBlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.GetDroneSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Operative_Character_C::GetDroneSpawnLocation(struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.GetDroneSpawnLocation");
		
		UInterface_Operative_Character_C_GetDroneSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.HideOperativeDroneSpawnAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInterface_Operative_Character_C::HideOperativeDroneSpawnAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.HideOperativeDroneSpawnAnimation");
		
		UInterface_Operative_Character_C_HideOperativeDroneSpawnAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.PlayerOperativeDroneSpawnAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInterface_Operative_Character_C::PlayerOperativeDroneSpawnAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.PlayerOperativeDroneSpawnAnimation");
		
		UInterface_Operative_Character_C_PlayerOperativeDroneSpawnAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials TP Gun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UInterface_Operative_Character_C::Get_Materials_TP_Gun(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials TP Gun");
		
		UInterface_Operative_Character_C_Get_Materials_TP_Gun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials FP Gun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UInterface_Operative_Character_C::Get_Materials_FP_Gun(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials FP Gun");
		
		UInterface_Operative_Character_C_Get_Materials_FP_Gun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Skeletal Mesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UInterface_Operative_Character_C::Get_Materials_Skeletal_Mesh(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Skeletal Mesh");
		
		UInterface_Operative_Character_C_Get_Materials_Skeletal_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Legs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UInterface_Operative_Character_C::Get_Materials_Legs(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Legs");
		
		UInterface_Operative_Character_C_Get_Materials_Legs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Arms
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UInterface_Operative_Character_C::Get_Materials_Arms(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Arms");
		
		UInterface_Operative_Character_C_Get_Materials_Arms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Head
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UInterface_Operative_Character_C::Get_Materials_Head(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Materials Head");
		
		UInterface_Operative_Character_C_Get_Materials_Head_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Skeletal_Mesh                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::Get_Skeletal_Mesh(class USkeletalMeshComponent** Skeletal_Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh");
		
		UInterface_Operative_Character_C_Get_Skeletal_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skeletal_Mesh != nullptr)
			*Skeletal_Mesh = params.Skeletal_Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Legs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxSkeletalMeshComponent*                   Legs                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::Get_Skeletal_Mesh_Legs(class UGbxSkeletalMeshComponent** Legs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Legs");
		
		UInterface_Operative_Character_C_Get_Skeletal_Mesh_Legs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Legs != nullptr)
			*Legs = params.Legs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Arms
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Arms_Mesh                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::Get_Skeletal_Mesh_Arms(class USkeletalMeshComponent** Arms_Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Arms");
		
		UInterface_Operative_Character_C_Get_Skeletal_Mesh_Arms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Arms_Mesh != nullptr)
			*Arms_Mesh = params.Arms_Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Head
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxSkeletalMeshComponent*                   Head_Mesh                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_Character_C::Get_Skeletal_Mesh_Head(class UGbxSkeletalMeshComponent** Head_Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_Character.Interface_Operative_Character_C.Get Skeletal Mesh Head");
		
		UInterface_Operative_Character_C_Get_Skeletal_Mesh_Head_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Head_Mesh != nullptr)
			*Head_Mesh = params.Head_Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterface_Operative_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface_Operative_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Operative_Character.Interface_Operative_Character_C");
		return ptr;
	}

}


