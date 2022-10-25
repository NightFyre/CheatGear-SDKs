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
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.CanActivateTrapCard
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Operative_C::CanActivateTrapCard(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.CanActivateTrapCard");
		
		ABPChar_Operative_C_CanActivateTrapCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetBarrierActionAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility_Barrier*                   res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::GetBarrierActionAbility(class UOakActionAbility_Barrier** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetBarrierActionAbility");
		
		ABPChar_Operative_C_GetBarrierActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetOperativeStatusEffectOverrides
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCauseDamageStatusEffectOverrides           Overrides                                                  (Parm, OutParm, NoDestructor)
	 */
	void ABPChar_Operative_C::GetOperativeStatusEffectOverrides(struct FCauseDamageStatusEffectOverrides* Overrides)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetOperativeStatusEffectOverrides");
		
		ABPChar_Operative_C_GetOperativeStatusEffectOverrides_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Overrides != nullptr)
			*Overrides = params.Overrides;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetOperativeShieldRemainingPercent
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ShieldPercentRemaining                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::GetOperativeShieldRemainingPercent(float* ShieldPercentRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetOperativeShieldRemainingPercent");
		
		ABPChar_Operative_C_GetOperativeShieldRemainingPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShieldPercentRemaining != nullptr)
			*ShieldPercentRemaining = params.ShieldPercentRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetDigiCloneShieldRemainingPercent
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ShieldPercentRemaining                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::GetDigiCloneShieldRemainingPercent(float* ShieldPercentRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetDigiCloneShieldRemainingPercent");
		
		ABPChar_Operative_C_GetDigiCloneShieldRemainingPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShieldPercentRemaining != nullptr)
			*ShieldPercentRemaining = params.ShieldPercentRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetGRMLNActionAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UOakActionAbility_GRMLN*                     res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::GetGRMLNActionAbility(class UOakActionAbility_GRMLN** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetGRMLNActionAbility");
		
		ABPChar_Operative_C_GetGRMLNActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetDigicloneActionAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UOakActionAbility_Digiclone*                 res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::GetDigicloneActionAbility(class UOakActionAbility_Digiclone** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetDigicloneActionAbility");
		
		ABPChar_Operative_C_GetDigicloneActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.SpawnAndThrowOperativeGrenade
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      SpawnFromActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SpawnFromSocket                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Grenade                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::SpawnAndThrowOperativeGrenade(class AActor* SpawnFromActor, const class FName& SpawnFromSocket, bool* res, class AActor** Grenade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.SpawnAndThrowOperativeGrenade");
		
		ABPChar_Operative_C_SpawnAndThrowOperativeGrenade_Params params {};
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
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.BlockOperativeActionSkillActivation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldBlock                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Operative_C::BlockOperativeActionSkillActivation(bool* ShouldBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.BlockOperativeActionSkillActivation");
		
		ABPChar_Operative_C_BlockOperativeActionSkillActivation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBlock != nullptr)
			*ShouldBlock = params.ShouldBlock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetDroneSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Operative_C::GetDroneSpawnLocation(struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetDroneSpawnLocation");
		
		ABPChar_Operative_C_GetDroneSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Head
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxSkeletalMeshComponent*                   Head_Mesh                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::Get_Skeletal_Mesh_Head(class UGbxSkeletalMeshComponent** Head_Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Head");
		
		ABPChar_Operative_C_Get_Skeletal_Mesh_Head_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Head_Mesh != nullptr)
			*Head_Mesh = params.Head_Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Arms
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Arms_Mesh                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::Get_Skeletal_Mesh_Arms(class USkeletalMeshComponent** Arms_Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Arms");
		
		ABPChar_Operative_C_Get_Skeletal_Mesh_Arms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Arms_Mesh != nullptr)
			*Arms_Mesh = params.Arms_Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Legs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxSkeletalMeshComponent*                   Legs                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::Get_Skeletal_Mesh_Legs(class UGbxSkeletalMeshComponent** Legs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh Legs");
		
		ABPChar_Operative_C_Get_Skeletal_Mesh_Legs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Legs != nullptr)
			*Legs = params.Legs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Skeletal_Mesh                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::Get_Skeletal_Mesh(class USkeletalMeshComponent** Skeletal_Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Skeletal Mesh");
		
		ABPChar_Operative_C_Get_Skeletal_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skeletal_Mesh != nullptr)
			*Skeletal_Mesh = params.Skeletal_Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Materials Head
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABPChar_Operative_C::Get_Materials_Head(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials Head");
		
		ABPChar_Operative_C_Get_Materials_Head_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Materials Arms
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABPChar_Operative_C::Get_Materials_Arms(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials Arms");
		
		ABPChar_Operative_C_Get_Materials_Arms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Materials Legs
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABPChar_Operative_C::Get_Materials_Legs(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials Legs");
		
		ABPChar_Operative_C_Get_Materials_Legs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Materials Skeletal Mesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABPChar_Operative_C::Get_Materials_Skeletal_Mesh(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials Skeletal Mesh");
		
		ABPChar_Operative_C_Get_Materials_Skeletal_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Materials FP Gun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABPChar_Operative_C::Get_Materials_FP_Gun(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials FP Gun");
		
		ABPChar_Operative_C_Get_Materials_FP_Gun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.Get Materials TP Gun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UMaterialInterface*>                  Materials                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void ABPChar_Operative_C::Get_Materials_TP_Gun(TArray<class UMaterialInterface*>* Materials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.Get Materials TP Gun");
		
		ABPChar_Operative_C_Get_Materials_TP_Gun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Materials != nullptr)
			*Materials = params.Materials;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetHeadMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMesh*                               HeadMesh                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::GetHeadMesh(class USkeletalMesh** HeadMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetHeadMesh");
		
		ABPChar_Operative_C_GetHeadMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeadMesh != nullptr)
			*HeadMesh = params.HeadMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.InnerDoCryoNovaAtLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InDamage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::InnerDoCryoNovaAtLocation(const struct FVector& InLocation, float InDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.InnerDoCryoNovaAtLocation");
		
		ABPChar_Operative_C_InnerDoCryoNovaAtLocation_Params params {};
		params.InLocation = InLocation;
		params.InDamage = InDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetSecondaryActionAbility
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UOakActionAbility* ABPChar_Operative_C::GetSecondaryActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetSecondaryActionAbility");
		
		ABPChar_Operative_C_GetSecondaryActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.GetPrimaryActionAbility
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UOakActionAbility* ABPChar_Operative_C::GetPrimaryActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.GetPrimaryActionAbility");
		
		ABPChar_Operative_C_GetPrimaryActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Operative_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.UserConstructionScript");
		
		ABPChar_Operative_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Operative_C::DigistructSNTRY__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__FinishedFunc");
		
		ABPChar_Operative_C_DigistructSNTRY__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Operative_C::DigistructSNTRY__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.DigistructSNTRY__UpdateFunc");
		
		ABPChar_Operative_C_DigistructSNTRY__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.PlayerOperativeDroneSpawnAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Operative_C::PlayerOperativeDroneSpawnAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.PlayerOperativeDroneSpawnAnimation");
		
		ABPChar_Operative_C_PlayerOperativeDroneSpawnAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.HideOperativeDroneSpawnAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Operative_C::HideOperativeDroneSpawnAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.HideOperativeDroneSpawnAnimation");
		
		ABPChar_Operative_C_HideOperativeDroneSpawnAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.DoOperativeCryoNovaAtLocation
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::DoOperativeCryoNovaAtLocation(const struct FVector& Location, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.DoOperativeCryoNovaAtLocation");
		
		ABPChar_Operative_C_DoOperativeCryoNovaAtLocation_Params params {};
		params.Location = Location;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.SetOperativeDeviceVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Operative_C::SetOperativeDeviceVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.SetOperativeDeviceVisible");
		
		ABPChar_Operative_C_SetOperativeDeviceVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.SpawnCannonEmitterMulticast
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             CannonEmitter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      CannonComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::SpawnCannonEmitterMulticast(class UParticleSystem* CannonEmitter, class USkeletalMeshComponent* CannonComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.SpawnCannonEmitterMulticast");
		
		ABPChar_Operative_C_SpawnCannonEmitterMulticast_Params params {};
		params.CannonEmitter = CannonEmitter;
		params.CannonComponent = CannonComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Operative.BPChar_Operative_C.ExecuteUbergraph_BPChar_Operative
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Operative_C::ExecuteUbergraph_BPChar_Operative(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Operative.BPChar_Operative_C.ExecuteUbergraph_BPChar_Operative");
		
		ABPChar_Operative_C_ExecuteUbergraph_BPChar_Operative_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_Operative_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_Operative_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Operative.BPChar_Operative_C");
		return ptr;
	}

}


