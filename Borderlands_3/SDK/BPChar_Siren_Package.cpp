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
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.GetSoulSapProjectile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::GetSoulSapProjectile(class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetSoulSapProjectile");
		
		ABPChar_Siren_C_GetSoulSapProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.GetStillnessOfMindControlledMove
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::GetStillnessOfMindControlledMove(class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetStillnessOfMindControlledMove");
		
		ABPChar_Siren_C_GetStillnessOfMindControlledMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.SirenHasAscendantSkill
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Siren_C::SirenHasAscendantSkill(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.SirenHasAscendantSkill");
		
		ABPChar_Siren_C_SirenHasAscendantSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.GetSirenGhostArmsComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxSkeletalMeshComponent*                   rd_Person_Mesh                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxSkeletalMeshComponent*                   st_Person_Mesh                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** rd_Person_Mesh, class UGbxSkeletalMeshComponent** st_Person_Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetSirenGhostArmsComponent");
		
		ABPChar_Siren_C_GetSirenGhostArmsComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (rd_Person_Mesh != nullptr)
			*rd_Person_Mesh = params.rd_Person_Mesh;
		if (st_Person_Mesh != nullptr)
			*st_Person_Mesh = params.st_Person_Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.GetPhaseCastProjectileComponents
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Body                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxSkeletalMeshComponent*                   Head                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      GhostArms                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetPhaseCastProjectileComponents");
		
		ABPChar_Siren_C_GetPhaseCastProjectileComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Body != nullptr)
			*Body = params.Body;
		if (Head != nullptr)
			*Head = params.Head;
		if (GhostArms != nullptr)
			*GhostArms = params.GhostArms;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.GetSirenArmsReference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxSkeletalMeshComponent*                   Skel_Mesh_rd                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxSkeletalMeshComponent*                   Skel_Mesh_st                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::GetSirenArmsReference(class UGbxSkeletalMeshComponent** Skel_Mesh_rd, class UGbxSkeletalMeshComponent** Skel_Mesh_st)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetSirenArmsReference");
		
		ABPChar_Siren_C_GetSirenArmsReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Skel_Mesh_rd != nullptr)
			*Skel_Mesh_rd = params.Skel_Mesh_rd;
		if (Skel_Mesh_st != nullptr)
			*Skel_Mesh_st = params.Skel_Mesh_st;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.GetPhaseTranceAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility_PhaseTrance*               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetPhaseTranceAbility");
		
		ABPChar_Siren_C_GetPhaseTranceAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.GetHeadMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMesh*                               HeadMesh                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::GetHeadMesh(class USkeletalMesh** HeadMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetHeadMesh");
		
		ABPChar_Siren_C_GetHeadMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeadMesh != nullptr)
			*HeadMesh = params.HeadMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.GetPrimaryActionAbility
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UOakActionAbility* ABPChar_Siren_C::GetPrimaryActionAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.GetPrimaryActionAbility");
		
		ABPChar_Siren_C_GetPrimaryActionAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Siren_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.UserConstructionScript");
		
		ABPChar_Siren_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Siren_C::FadeArms3rd__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__FinishedFunc");
		
		ABPChar_Siren_C_FadeArms3rd__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Siren_C::FadeArms3rd__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.FadeArms3rd__UpdateFunc");
		
		ABPChar_Siren_C_FadeArms3rd__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.TattooFlare__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Siren_C::TattooFlare__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.TattooFlare__FinishedFunc");
		
		ABPChar_Siren_C_TattooFlare__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.TattooFlare__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABPChar_Siren_C::TattooFlare__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.TattooFlare__UpdateFunc");
		
		ABPChar_Siren_C_TattooFlare__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.SetArmsMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::SetArmsMaterial(class UMaterialInstance* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.SetArmsMaterial");
		
		ABPChar_Siren_C_SetArmsMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.Play3rdPersonArmFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInstant                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Siren_C::Play3rdPersonArmFade(bool bInstant, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.Play3rdPersonArmFade");
		
		ABPChar_Siren_C_Play3rdPersonArmFade_Params params {};
		params.bInstant = bInstant;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.PlayTattooFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Siren_C::PlayTattooFade(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.PlayTattooFade");
		
		ABPChar_Siren_C_PlayTattooFade_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.SetArmsElement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPhaseTranceElementalType                          Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::SetArmsElement(EPhaseTranceElementalType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.SetArmsElement");
		
		ABPChar_Siren_C_SetArmsElement_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.HandleInstant3rdPersonArmFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Siren_C::HandleInstant3rdPersonArmFade(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.HandleInstant3rdPersonArmFade");
		
		ABPChar_Siren_C_HandleInstant3rdPersonArmFade_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.Handle3rdPersonArmFadeTransition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Siren_C::Handle3rdPersonArmFadeTransition(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.Handle3rdPersonArmFadeTransition");
		
		ABPChar_Siren_C_Handle3rdPersonArmFadeTransition_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDamageDetails                        Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABPChar_Siren_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren");
		
		ABPChar_Siren_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Siren_Params params {};
		params.DamageInstigator = DamageInstigator;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.DamagedActor = DamagedActor;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPChar_Siren_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.ReceiveBeginPlay");
		
		ABPChar_Siren_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.InterruptArmFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_Siren_C::InterruptArmFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.InterruptArmFade");
		
		ABPChar_Siren_C_InterruptArmFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            Damaged                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCausedDeathDetails                         Details                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPChar_Siren_C::BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren");
		
		ABPChar_Siren_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Siren_Params params {};
		params.Damaged = Damaged;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.PhasegraspEndedAndEnemyKilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPChar_Siren_C::PhasegraspEndedAndEnemyKilled(bool Killed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.PhasegraspEndedAndEnemyKilled");
		
		ABPChar_Siren_C_PhasegraspEndedAndEnemyKilled_Params params {};
		params.Killed = Killed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_Siren.BPChar_Siren_C.ExecuteUbergraph_BPChar_Siren
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_Siren_C::ExecuteUbergraph_BPChar_Siren(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_Siren.BPChar_Siren_C.ExecuteUbergraph_BPChar_Siren");
		
		ABPChar_Siren_C_ExecuteUbergraph_BPChar_Siren_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_Siren_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_Siren_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Siren.BPChar_Siren_C");
		return ptr;
	}

}


