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
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.SetSimulatePhysics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewSimulate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExplodingObject_C::SetSimulatePhysics(bool bNewSimulate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.SetSimulatePhysics");
		
		ABP_ExplodingObject_C_SetSimulatePhysics_Params params {};
		params.bNewSimulate = bNewSimulate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Damaged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplodingObject_C::Damaged(class UGbxDamageType* DamageType, class UDamageSource* DamageSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Damaged");
		
		ABP_ExplodingObject_C_Damaged_Params params {};
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::VisualState_ExplodedStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStop");
		
		ABP_ExplodingObject_C_VisualState_ExplodedStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::VisualState_ExplodedStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_ExplodedStart");
		
		ABP_ExplodingObject_C_VisualState_ExplodedStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Get_DamageType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		Enum_ExplodingObjectDamage                         DamageType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplodingObject_C::Get_DamageType(Enum_ExplodingObjectDamage* DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Get_DamageType");
		
		ABP_ExplodingObject_C_Get_DamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageType != nullptr)
			*DamageType = params.DamageType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::VisualState_FuseStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStop");
		
		ABP_ExplodingObject_C_VisualState_FuseStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStart
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::VisualState_FuseStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.VisualState_FuseStart");
		
		ABP_ExplodingObject_C_VisualState_FuseStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.OnRep_DamageType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::OnRep_DamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.OnRep_DamageType");
		
		ABP_ExplodingObject_C_OnRep_DamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.ThrowExplodingObject
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ThrowVector                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotatorForSpin                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OptionalAdditiveVector                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplodingObject_C::ThrowExplodingObject(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, const struct FVector& OptionalAdditiveVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.ThrowExplodingObject");
		
		ABP_ExplodingObject_C_ThrowExplodingObject_Params params {};
		params.ThrowVector = ThrowVector;
		params.Force = Force;
		params.RotatorForSpin = RotatorForSpin;
		params.OptionalAdditiveVector = OptionalAdditiveVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_ExplodingObject
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDA_ExplodingObjectPresentation_C*           NewPresentation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    DynamicMI                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplodingObject_C::Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_ExplodingObject");
		
		ABP_ExplodingObject_C_Setup_ExplodingObject_Params params {};
		params.NewPresentation = NewPresentation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicMI != nullptr)
			*DynamicMI = params.DynamicMI;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_RandomizeDamageType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::Setup_RandomizeDamageType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Setup_RandomizeDamageType");
		
		ABP_ExplodingObject_C_Setup_RandomizeDamageType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.UserConstructionScript");
		
		ABP_ExplodingObject_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ResetHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::BPI_ResetHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ResetHealth");
		
		ABP_ExplodingObject_C_BPI_ResetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ExplodingObject_C::BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal");
		
		ABP_ExplodingObject_C_BndEvt__SM_Barrel_K2Node_ComponentBoundEvent_9_ComponentHitSignature__DelegateSignature_IO_Combat_Barrel_Universal_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_Explode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::BPI_Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_Explode");
		
		ABP_ExplodingObject_C_BPI_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ImpulseThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ThrowVector                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RotatorForSpin                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              FuseSpeedScale                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AdditiveVector                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplodingObject_C::BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_ImpulseThrow");
		
		ABP_ExplodingObject_C_BPI_ImpulseThrow_Params params {};
		params.ThrowVector = ThrowVector;
		params.Force = Force;
		params.RotatorForSpin = RotatorForSpin;
		params.FuseSpeedScale = FuseSpeedScale;
		params.AdditiveVector = AdditiveVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetSimulatePhysics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PhysicsOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExplodingObject_C::BPI_SetSimulatePhysics(bool PhysicsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetSimulatePhysics");
		
		ABP_ExplodingObject_C_BPI_SetSimulatePhysics_Params params {};
		params.PhysicsOn = PhysicsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_StartFuse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::BPI_StartFuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_StartFuse");
		
		ABP_ExplodingObject_C_BPI_StartFuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.ReceiveBeginPlay");
		
		ABP_ExplodingObject_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromLoad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_1(bool bFromLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_1");
		
		ABP_ExplodingObject_C___UserState_ExplodingObjectState_1_Params params {};
		params.bFromLoad = bFromLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromLoad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_2(bool bFromLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_2");
		
		ABP_ExplodingObject_C___UserState_ExplodingObjectState_2_Params params {};
		params.bFromLoad = bFromLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromLoad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_3(bool bFromLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_3");
		
		ABP_ExplodingObject_C___UserState_ExplodingObjectState_3_Params params {};
		params.bFromLoad = bFromLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromLoad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExplodingObject_C::__UserState_ExplodingObjectState_4(bool bFromLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.__UserState_ExplodingObjectState_4");
		
		ABP_ExplodingObject_C___UserState_ExplodingObjectState_4_Params params {};
		params.bFromLoad = bFromLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxDamageType*                              DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FReceivedDamageDetails                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void ABP_ExplodingObject_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject");
		
		ABP_ExplodingObject_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_ExplodingObject_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageSource = DamageSource;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.Details = Details;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Damage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::Explode_Damage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Damage");
		
		ABP_ExplodingObject_C_Explode_Damage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Puddle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::Explode_Puddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Puddle");
		
		ABP_ExplodingObject_C_Explode_Puddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Cloud
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::Explode_Cloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Cloud");
		
		ABP_ExplodingObject_C_Explode_Cloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Loot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::Explode_Loot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode_Loot");
		
		ABP_ExplodingObject_C_Explode_Loot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Explode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::Explode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Explode");
		
		ABP_ExplodingObject_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         WakingComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplodingObject_C::BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* WakingComponent, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject");
		
		ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_BP_ExplodingObject_Params params {};
		params.WakingComponent = WakingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         SleepingComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplodingObject_C::BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject");
		
		ABP_ExplodingObject_C_BndEvt__SM_ExplodingObject_K2Node_ComponentBoundEvent_3_ComponentSleepSignature__DelegateSignature_BP_ExplodingObject_Params params {};
		params.SleepingComponent = SleepingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetNavPainterEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExplodingObject_C::BPI_SetNavPainterEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.BPI_SetNavPainterEnabled");
		
		ABP_ExplodingObject_C_BPI_SetNavPainterEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.ExecuteUbergraph_BP_ExplodingObject
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExplodingObject_C::ExecuteUbergraph_BP_ExplodingObject(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.ExecuteUbergraph_BP_ExplodingObject");
		
		ABP_ExplodingObject_C_ExecuteUbergraph_BP_ExplodingObject_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_ExplodingObject.BP_ExplodingObject_C.Exploded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ExplodingObject_C::Exploded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExplodingObject.BP_ExplodingObject_C.Exploded__DelegateSignature");
		
		ABP_ExplodingObject_C_Exploded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ExplodingObject_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ExplodingObject_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplodingObject.BP_ExplodingObject_C");
		return ptr;
	}

}


