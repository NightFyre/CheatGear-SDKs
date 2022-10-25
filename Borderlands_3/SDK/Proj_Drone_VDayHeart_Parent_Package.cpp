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
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnRep_OwnerDeathType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Parent_C::OnRep_OwnerDeathType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnRep_OwnerDeathType");
		
		AProj_Drone_VDayHeart_Parent_C_OnRep_OwnerDeathType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHealthDepletedHeart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Parent_C::OnHealthDepletedHeart(class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHealthDepletedHeart");
		
		AProj_Drone_VDayHeart_Parent_C_OnHealthDepletedHeart_Params params {};
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.SetHeartVelocity
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Parent_C::SetHeartVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.SetHeartVelocity");
		
		AProj_Drone_VDayHeart_Parent_C_SetHeartVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.HandleStatIncrementDialog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Parent_C::HandleStatIncrementDialog(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.HandleStatIncrementDialog");
		
		AProj_Drone_VDayHeart_Parent_C_HandleStatIncrementDialog_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Parent_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.UserConstructionScript");
		
		AProj_Drone_VDayHeart_Parent_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Parent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ReceiveBeginPlay");
		
		AProj_Drone_VDayHeart_Parent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Parent_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test");
		
		AProj_Drone_VDayHeart_Parent_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Parent_Test_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnDeath_HeartOwner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Parent_C::OnDeath_HeartOwner(class AActor* DamageReceiver, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnDeath_HeartOwner");
		
		AProj_Drone_VDayHeart_Parent_C_OnDeath_HeartOwner_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitWorld
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Drone_VDayHeart_Parent_C::OnHitWorld(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitWorld");
		
		AProj_Drone_VDayHeart_Parent_C_OnHitWorld_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BeginCleanup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Parent_C::BeginCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.BeginCleanup");
		
		AProj_Drone_VDayHeart_Parent_C_BeginCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.Destroyed_HeartOwner
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Parent_C::Destroyed_HeartOwner(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.Destroyed_HeartOwner");
		
		AProj_Drone_VDayHeart_Parent_C_Destroyed_HeartOwner_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OwnerDiedByHostile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Parent_C::OwnerDiedByHostile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OwnerDiedByHostile");
		
		AProj_Drone_VDayHeart_Parent_C_OwnerDiedByHostile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitDamagableObject
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Drone_VDayHeart_Parent_C::OnHitDamagableObject(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.OnHitDamagableObject");
		
		AProj_Drone_VDayHeart_Parent_C_OnHitDamagableObject_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Parent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Parent_C::ExecuteUbergraph_Proj_Drone_VDayHeart_Parent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Parent");
		
		AProj_Drone_VDayHeart_Parent_C_ExecuteUbergraph_Proj_Drone_VDayHeart_Parent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Drone_VDayHeart_Parent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Drone_VDayHeart_Parent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Drone_VDayHeart_Parent.Proj_Drone_VDayHeart_Parent_C");
		return ptr;
	}

}


