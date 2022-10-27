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
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.GetSoulSapProjectile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Siren_C::GetSoulSapProjectile(class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetSoulSapProjectile");
		
		UIBPChar_Siren_C_GetSoulSapProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.GetStillnessOfMindControlledMove
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Siren_C::GetStillnessOfMindControlledMove(class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetStillnessOfMindControlledMove");
		
		UIBPChar_Siren_C_GetStillnessOfMindControlledMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.SirenHasAscendantSkill
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Siren_C::SirenHasAscendantSkill(bool* res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.SirenHasAscendantSkill");
		
		UIBPChar_Siren_C_SirenHasAscendantSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.GetSirenGhostArmsComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxSkeletalMeshComponent*                   rd_Person_Mesh                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxSkeletalMeshComponent*                   st_Person_Mesh                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Siren_C::GetSirenGhostArmsComponent(class UGbxSkeletalMeshComponent** rd_Person_Mesh, class UGbxSkeletalMeshComponent** st_Person_Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetSirenGhostArmsComponent");
		
		UIBPChar_Siren_C_GetSirenGhostArmsComponent_Params params {};
		
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
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.SetArmsElement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPhaseTranceElementalType                          Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Siren_C::SetArmsElement(EPhaseTranceElementalType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.SetArmsElement");
		
		UIBPChar_Siren_C_SetArmsElement_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.PlayTattooFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Siren_C::PlayTattooFade(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.PlayTattooFade");
		
		UIBPChar_Siren_C_PlayTattooFade_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.SetArmsMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Siren_C::SetArmsMaterial(class UMaterialInstance* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.SetArmsMaterial");
		
		UIBPChar_Siren_C_SetArmsMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.Play3rdPersonArmFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInstant                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Siren_C::Play3rdPersonArmFade(bool bInstant, bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.Play3rdPersonArmFade");
		
		UIBPChar_Siren_C_Play3rdPersonArmFade_Params params {};
		params.bInstant = bInstant;
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseCastProjectileComponents
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Body                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxSkeletalMeshComponent*                   Head                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      GhostArms                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Siren_C::GetPhaseCastProjectileComponents(class USkeletalMeshComponent** Body, class UGbxSkeletalMeshComponent** Head, class USkeletalMeshComponent** GhostArms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseCastProjectileComponents");
		
		UIBPChar_Siren_C_GetPhaseCastProjectileComponents_Params params {};
		
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
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.GetSirenArmsReference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxSkeletalMeshComponent*                   Skel_Mesh_rd                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxSkeletalMeshComponent*                   Skel_Mesh_st                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Siren_C::GetSirenArmsReference(class UGbxSkeletalMeshComponent** Skel_Mesh_rd, class UGbxSkeletalMeshComponent** Skel_Mesh_st)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetSirenArmsReference");
		
		UIBPChar_Siren_C_GetSirenArmsReference_Params params {};
		
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
	 * 		Name   -> Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseTranceAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakActionAbility_PhaseTrance*               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Siren_C::GetPhaseTranceAbility(class UOakActionAbility_PhaseTrance** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Siren.IBPChar_Siren_C.GetPhaseTranceAbility");
		
		UIBPChar_Siren_C_GetPhaseTranceAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIBPChar_Siren_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIBPChar_Siren_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_Siren.IBPChar_Siren_C");
		return ptr;
	}

}


