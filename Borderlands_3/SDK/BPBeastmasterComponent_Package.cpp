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
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.ValidateCurrentPetAugment
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UOakPlayerCharacterAugmentData_Pet*          PetAugment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPBeastmasterComponent_C::ValidateCurrentPetAugment(class UOakPlayerCharacterAugmentData_Pet* PetAugment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.ValidateCurrentPetAugment");
		
		UBPBeastmasterComponent_C_ValidateCurrentPetAugment_Params params {};
		params.PetAugment = PetAugment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetCooldownRefundPercent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		EPetRespawnCooldownRefundType                      RefundType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBPBeastmasterComponent_C::GetPetCooldownRefundPercent(EPetRespawnCooldownRefundType RefundType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetCooldownRefundPercent");
		
		UBPBeastmasterComponent_C_GetPetCooldownRefundPercent_Params params {};
		params.RefundType = RefundType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetFallbackPetSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FVector UBPBeastmasterComponent_C::GetFallbackPetSpawnLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetFallbackPetSpawnLocation");
		
		UBPBeastmasterComponent_C_GetFallbackPetSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.CheckForSpawnCollisions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCollisionsDetected                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPBeastmasterComponent_C::CheckForSpawnCollisions(const struct FVector& SpawnLocation, bool* bCollisionsDetected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.CheckForSpawnCollisions");
		
		UBPBeastmasterComponent_C_CheckForSpawnCollisions_Params params {};
		params.SpawnLocation = SpawnLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCollisionsDetected != nullptr)
			*bCollisionsDetected = params.bCollisionsDetected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetSpawnClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOakPlayerCharacterAugmentData_Pet*          InAugment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPBeastmasterComponent_C::GetPetSpawnClass(class UOakPlayerCharacterAugmentData_Pet* InAugment, class UClass** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.GetPetSpawnClass");
		
		UBPBeastmasterComponent_C_GetPetSpawnClass_Params params {};
		params.InAugment = InAugment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.SpawnNewPet
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOakPlayerCharacterAugmentData_Pet*          PetAugment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AOakCharacter* UBPBeastmasterComponent_C::SpawnNewPet(class UOakPlayerCharacterAugmentData_Pet* PetAugment, const struct FVector& SpawnLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.SpawnNewPet");
		
		UBPBeastmasterComponent_C_SpawnNewPet_Params params {};
		params.PetAugment = PetAugment;
		params.SpawnLocation = SpawnLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.OnReleasedPet
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForced                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EPetReleaseReason                                  ReleaseReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPBeastmasterComponent_C::OnReleasedPet(bool bForced, EPetReleaseReason ReleaseReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.OnReleasedPet");
		
		UBPBeastmasterComponent_C_OnReleasedPet_Params params {};
		params.bForced = bForced;
		params.ReleaseReason = ReleaseReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPBeastmasterComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.ReceiveBeginPlay");
		
		UBPBeastmasterComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.TryOrderPetAttack
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPBeastmasterComponent_C::TryOrderPetAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.TryOrderPetAttack");
		
		UBPBeastmasterComponent_C_TryOrderPetAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPBeastmasterComponent.BPBeastmasterComponent_C.ExecuteUbergraph_BPBeastmasterComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPBeastmasterComponent_C::ExecuteUbergraph_BPBeastmasterComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPBeastmasterComponent.BPBeastmasterComponent_C.ExecuteUbergraph_BPBeastmasterComponent");
		
		UBPBeastmasterComponent_C_ExecuteUbergraph_BPBeastmasterComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPBeastmasterComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPBeastmasterComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPBeastmasterComponent.BPBeastmasterComponent_C");
		return ptr;
	}

}


