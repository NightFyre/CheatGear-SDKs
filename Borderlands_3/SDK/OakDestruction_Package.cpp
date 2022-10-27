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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCryoDestructibleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCryoDestructibleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakDestruction.CryoDestructibleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031108A0
	 * 		Name   -> Function OakDestruction.OakDestructibleFXManager.OnDestructibleDestroyed
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOakDestructibleFXManager::OnDestructibleDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakDestruction.OakDestructibleFXManager.OnDestructibleDestroyed");
		
		AOakDestructibleFXManager_OnDestructibleDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013BE5E0
	 * 		Name   -> Function OakDestruction.OakDestructibleFXManager.DestroyAllDestructibles
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void AOakDestructibleFXManager::DestroyAllDestructibles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakDestruction.OakDestructibleFXManager.DestroyAllDestructibles");
		
		AOakDestructibleFXManager_DestroyAllDestructibles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x031106C0
	 * 		Name   -> Function OakDestruction.OakDestructibleFXManager.ClientApplyRadiusDamage
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Protected, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           SyncID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HurtOrigin                                                 (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseStrength                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFullDamage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOakDestructibleFXManager::ClientApplyRadiusDamage(uint32_t SyncID, float DamageAmount, const struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakDestruction.OakDestructibleFXManager.ClientApplyRadiusDamage");
		
		AOakDestructibleFXManager_ClientApplyRadiusDamage_Params params {};
		params.SyncID = SyncID;
		params.DamageAmount = DamageAmount;
		params.HurtOrigin = HurtOrigin;
		params.DamageRadius = DamageRadius;
		params.ImpulseStrength = ImpulseStrength;
		params.bFullDamage = bFullDamage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03110540
	 * 		Name   -> Function OakDestruction.OakDestructibleFXManager.ClientApplyDamage
	 * 		Flags  -> (Net, Native, Event, NetMulticast, Protected, HasDefaults)
	 * Parameters:
	 * 		uint32_t                                           SyncID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpulseDir                                                 (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ImpulseStrength                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOakDestructibleFXManager::ClientApplyDamage(uint32_t SyncID, float DamageAmount, const struct FVector& HitLocation, const struct FVector& ImpulseDir, float ImpulseStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OakDestruction.OakDestructibleFXManager.ClientApplyDamage");
		
		AOakDestructibleFXManager_ClientApplyDamage_Params params {};
		params.SyncID = SyncID;
		params.DamageAmount = DamageAmount;
		params.HitLocation = HitLocation;
		params.ImpulseDir = ImpulseDir;
		params.ImpulseStrength = ImpulseStrength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOakDestructibleFXManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOakDestructibleFXManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OakDestruction.OakDestructibleFXManager");
		return ptr;
	}

}


