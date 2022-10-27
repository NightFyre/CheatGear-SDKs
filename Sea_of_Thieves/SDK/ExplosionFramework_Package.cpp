/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UCreateActorInstanceOnExplodeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreateActorInstanceOnExplodeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ExplosionFramework.CreateActorInstanceOnExplodeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExplosionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ExplosionFramework.ExplosionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExplosionReceiverInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosionReceiverInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ExplosionFramework.ExplosionReceiverInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExplosiveComponentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosiveComponentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ExplosionFramework.ExplosiveComponentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AF32E0
	 * 		Name   -> Function ExplosionFramework.FuseInterface.GetIsActive
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFuseInterface::GetIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionFramework.FuseInterface.GetIsActive");
		
		UFuseInterface_GetIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFuseInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFuseInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ExplosionFramework.FuseInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusResponseExplodeAfterTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusResponseExplodeAfterTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ExplosionFramework.StatusResponseExplodeAfterTime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03AF3310
	 * 		Name   -> Function ExplosionFramework.TaleQuestFuseFunctionLibrary.TriggerFuse
	 * 		Flags  -> (Final, Native, Static, Public)
	 * Parameters:
	 * 		class AActor*                                      InFuseActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaleQuestFuseFunctionLibrary::STATIC_TriggerFuse(class AActor* InFuseActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosionFramework.TaleQuestFuseFunctionLibrary.TriggerFuse");
		
		UTaleQuestFuseFunctionLibrary_TriggerFuse_Params params {};
		params.InFuseActor = InFuseActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaleQuestFuseFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaleQuestFuseFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ExplosionFramework.TaleQuestFuseFunctionLibrary");
		return ptr;
	}

}


