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
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSourceSceneComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class USceneComponent*                             res                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPTiesThatBindSphere_C::GetBeamSourceSceneComponent(class USceneComponent** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSourceSceneComponent");
		
		ABPTiesThatBindSphere_C_GetBeamSourceSceneComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamDataForLinkedTarget
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AOakCharacter*                               LinkedTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FOakPhaseWebSphereBeamData                  outBeamData                                                (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPTiesThatBindSphere_C::GetBeamDataForLinkedTarget(class AOakCharacter* LinkedTarget, struct FOakPhaseWebSphereBeamData* outBeamData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamDataForLinkedTarget");
		
		ABPTiesThatBindSphere_C_GetBeamDataForLinkedTarget_Params params {};
		params.LinkedTarget = LinkedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outBeamData != nullptr)
			*outBeamData = params.outBeamData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSystem
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UParticleSystem*                             res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPTiesThatBindSphere_C::GetBeamSystem(class UParticleSystem** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetBeamSystem");
		
		ABPTiesThatBindSphere_C_GetBeamSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetSharedDamageData
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               LinkedTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageSourceClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FOakPhaseWebSphere_SharedDamageData         SharedDamageData                                           (Parm, OutParm, NoDestructor)
	 */
	bool ABPTiesThatBindSphere_C::GetSharedDamageData(class AOakCharacter* LinkedTarget, float Damage, class UClass* DamageSourceClass, struct FOakPhaseWebSphere_SharedDamageData* SharedDamageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetSharedDamageData");
		
		ABPTiesThatBindSphere_C_GetSharedDamageData_Params params {};
		params.LinkedTarget = LinkedTarget;
		params.Damage = Damage;
		params.DamageSourceClass = DamageSourceClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SharedDamageData != nullptr)
			*SharedDamageData = params.SharedDamageData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetMaxTime
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	float ABPTiesThatBindSphere_C::GetMaxTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.GetMaxTime");
		
		ABPTiesThatBindSphere_C_GetMaxTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPTiesThatBindSphere_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.UserConstructionScript");
		
		ABPTiesThatBindSphere_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABPTiesThatBindSphere_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ReceiveBeginPlay");
		
		ABPTiesThatBindSphere_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnWebTargetAdded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AOakCharacter*                               Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPTiesThatBindSphere_C::OnWebTargetAdded(class AOakCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnWebTargetAdded");
		
		ABPTiesThatBindSphere_C_OnWebTargetAdded_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnGraspedTargetDied
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPTiesThatBindSphere_C::OnGraspedTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.OnGraspedTargetDied");
		
		ABPTiesThatBindSphere_C_OnGraspedTargetDied_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ApplySapRefund
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RawAccumulateDamage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPTiesThatBindSphere_C::ApplySapRefund(float RawAccumulateDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ApplySapRefund");
		
		ABPTiesThatBindSphere_C_ApplySapRefund_Params params {};
		params.RawAccumulateDamage = RawAccumulateDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ExecuteUbergraph_BPTiesThatBindSphere
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPTiesThatBindSphere_C::ExecuteUbergraph_BPTiesThatBindSphere(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPTiesThatBindSphere.BPTiesThatBindSphere_C.ExecuteUbergraph_BPTiesThatBindSphere");
		
		ABPTiesThatBindSphere_C_ExecuteUbergraph_BPTiesThatBindSphere_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPTiesThatBindSphere_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPTiesThatBindSphere_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPTiesThatBindSphere.BPTiesThatBindSphere_C");
		return ptr;
	}

}


